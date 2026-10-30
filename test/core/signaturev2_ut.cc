#include "gtest/gtest.h"
#include "alibabacloud/core/CommonClient.h"
#include "alibabacloud/core/HmacSha1Signer.h"
#include "alibabacloud/core/HmacSha256Signer.h"
#include "alibabacloud/core/RoaServiceClient.h"
#include "alibabacloud/core/RpcServiceClient.h"
#include "alibabacloud/core/SimpleCredentialsProvider.h"
#include "alibabacloud/core/StsAssumeRoleCredentialsProvider.h"
#include "alibabacloud/core/Utils.h"
#include <algorithm>
#include <cctype>
#include <sstream>

using namespace AlibabaCloud;

namespace {

class SignatureV2RpcClient : public RpcServiceClient {
public:
  using RpcServiceClient::RpcServiceClient;
  using RpcServiceClient::buildHttpRequest;
};

class SignatureV2RoaClient : public RoaServiceClient {
public:
  using RoaServiceClient::RoaServiceClient;
  using RoaServiceClient::buildHttpRequest;
};

class SignatureV2CommonClient : public CommonClient {
public:
  using CommonClient::CommonClient;
  using CommonClient::buildRoaHttpRequest;
  using CommonClient::buildRpcHttpRequest;
};

class SignatureV2StsProvider : public StsAssumeRoleCredentialsProvider {
public:
  using StsAssumeRoleCredentialsProvider::StsAssumeRoleCredentialsProvider;
  using RpcServiceClient::buildHttpRequest;
};

std::map<std::string, std::string> parseParameters(const std::string &query) {
  std::map<std::string, std::string> parameters;
  std::istringstream stream(query);
  std::string part;
  while (std::getline(stream, part, '&')) {
    const auto equal = part.find('=');
    parameters[UrlDecode(part.substr(0, equal))] =
        equal == std::string::npos ? "" : UrlDecode(part.substr(equal + 1));
  }
  return parameters;
}

std::string expectedSignature(const std::string &text, const std::string &secret,
                              bool sha1) {
  return sha1 ? HmacSha1Signer().generate(text, secret)
              : HmacSha256Signer().generate(text, secret);
}

void assertRpcSignature(const HttpRequest &request, const Credentials &credentials,
                        bool sha1) {
  auto parameters = parseParameters(request.url().query());
  const auto signature = parameters["Signature"];
  parameters.erase("Signature");
  EXPECT_EQ(sha1 ? "HMAC-SHA1" : "HMAC-SHA256", parameters["SignatureMethod"]);
  EXPECT_EQ("1.0", parameters["SignatureVersion"]);
  EXPECT_EQ(credentials.sessionToken(), parameters["SecurityToken"]);
  if (request.hasBody()) {
    for (const auto &p : parseParameters(std::string(request.body(), request.bodySize())))
      parameters[p.first] = p.second;
  }
  std::string canonical;
  for (const auto &p : parameters) {
    if (!canonical.empty())
      canonical += "&";
    canonical += UrlEncode(p.first) + "=" + UrlEncode(p.second);
  }
  const auto text = HttpMethodToString(request.method()) + "&" +
                    UrlEncode(request.url().path()) + "&" + UrlEncode(canonical);
  EXPECT_EQ(expectedSignature(text, credentials.accessKeySecret() + "&", sha1),
            signature);
}

void assertRoaSignature(const HttpRequest &request, const Credentials &credentials,
                        bool sha1) {
  EXPECT_EQ(sha1 ? "HMAC-SHA1" : "HMAC-SHA256",
            request.header("x-acs-signature-method"));
  EXPECT_EQ("1.0", request.header("x-acs-signature-version"));
  EXPECT_EQ(credentials.sessionToken(), request.header("x-acs-security-token"));
  std::string text = HttpMethodToString(request.method()) + "\n" +
      request.header("Accept") + "\n" + request.header("Content-MD5") + "\n" +
      request.header("Content-Type") + "\n" + request.header("Date") + "\n";
  std::map<std::string, std::string> headers;
  for (const auto &h : request.headers()) {
    std::string name = h.first;
    std::transform(name.begin(), name.end(), name.begin(),
                   [](unsigned char c) { return std::tolower(c); });
    if (name.compare(0, 6, "x-acs-") == 0)
      headers[name] = h.second;
  }
  for (const auto &h : headers)
    text += h.first + ":" + h.second + "\n";
  text += request.url().path();
  if (request.url().hasQuery())
    text += "?" + request.url().query();
  EXPECT_EQ("acs " + credentials.accessKeyId() + ":" +
                expectedSignature(text, credentials.accessKeySecret(), sha1),
            request.header("Authorization"));
}

TEST(SignatureV2, sha256KnownVectors) {
  const HmacSha256Signer signer;
  EXPECT_EQ(Signer::HmacSha256, signer.type());
  EXPECT_EQ("HMAC-SHA256", signer.name());
  EXPECT_EQ("1.0", signer.version());
  // RFC 4231 test case 1.
  EXPECT_EQ("sDRMYdjbOFNcqK/OrwvxK4gdwgDJgz2nJuk3bC4yz/c=",
            signer.generate("Hi There", std::string(20, '\x0b')));
  EXPECT_EQ("/QgKpBrZWLNf9ci7oAKwXwXZ7P6sB+o+gzsLm6V2mpM=",
            signer.generate("中文 +/~*", "secret+/="));
  EXPECT_TRUE(signer.generate("", "").empty());
}

TEST(SignatureV2, defaultAndConfiguredAlgorithms) {
  for (bool sha1 : {false, true}) {
    for (const std::string &token : {std::string(), std::string("token+/=")}) {
      for (auto method : {HttpRequest::Method::Get, HttpRequest::Method::Post}) {
        ClientConfiguration config("cn-hangzhou");
        if (sha1)
          config.setUseHmacSha1(true);
        const Credentials credentials("test-key", "test-secret", token);
        auto provider = std::make_shared<SimpleCredentialsProvider>(credentials);
        SignatureV2RpcClient rpc("ecs", provider, config);
        RpcServiceRequest rpcRequest("Ecs", "2014-05-26", "DescribeRegions");
        rpcRequest.setBodyParameter("Value", "中文 +/~*");
        assertRpcSignature(rpc.buildHttpRequest("example.test", rpcRequest, method),
                           credentials, sha1);

        SignatureV2RoaClient roa("cs", provider, config);
        RoaServiceRequest roaRequest("CS", "2015-12-15");
        roaRequest.setResourcePath("/regions/cn-hangzhou/clusters");
        const std::string body = "中文 +/~*";
        roaRequest.setContent(body.data(), body.size());
        assertRoaSignature(roa.buildHttpRequest("example.test", roaRequest, method),
                           credentials, sha1);

        CommonRequest commonRequest;
        commonRequest.setVersion("2014-05-26");
        commonRequest.setBodyParameter("Value", "中文 +/~*");
        SignatureV2CommonClient common(credentials, config);
        assertRpcSignature(common.buildRpcHttpRequest("example.test", commonRequest, method),
                           credentials, sha1);
        assertRoaSignature(common.buildRoaHttpRequest("example.test", commonRequest, method),
                           credentials, sha1);
        SignatureV2CommonClient byProvider(provider, config);
        assertRpcSignature(byProvider.buildRpcHttpRequest("example.test", commonRequest, method),
                           credentials, sha1);
        SignatureV2CommonClient byKey("test-key", "test-secret", config);
        assertRpcSignature(byKey.buildRpcHttpRequest("example.test", commonRequest, method),
                           Credentials("test-key", "test-secret"), sha1);
      }
    }
  }
}

TEST(SignatureV2, explicitSignerOverridesConfiguration) {
  const Credentials credentials("test-key", "test-secret");
  auto provider = std::make_shared<SimpleCredentialsProvider>(credentials);
  for (bool sha1 : {false, true}) {
    ClientConfiguration config;
    config.setUseHmacSha1(!sha1);
    std::shared_ptr<Signer> signer = sha1
        ? std::shared_ptr<Signer>(std::make_shared<HmacSha1Signer>())
        : std::make_shared<HmacSha256Signer>();
    SignatureV2RpcClient rpc("ecs", provider, config, signer);
    RpcServiceRequest rpcRequest("Ecs", "2014-05-26", "DescribeRegions");
    assertRpcSignature(rpc.buildHttpRequest("example.test", rpcRequest, HttpRequest::Method::Get),
                       credentials, sha1);
    SignatureV2RoaClient roa("cs", provider, config, signer);
    RoaServiceRequest roaRequest("CS", "2015-12-15");
    assertRoaSignature(roa.buildHttpRequest("example.test", roaRequest, HttpRequest::Method::Get),
                       credentials, sha1);
  }
}

TEST(SignatureV2, assumeRoleUsesConfiguredAlgorithm) {
  const Credentials credentials("source-key", "source-secret");
  for (bool sha1 : {false, true}) {
    ClientConfiguration config;
    config.setUseHmacSha1(sha1);
    SignatureV2StsProvider provider(credentials, config, "acs:ram::123:role/test", "session");
    Sts::Model::AssumeRoleRequest request;
    request.setRoleArn("acs:ram::123:role/test");
    request.setRoleSessionName("session");
    assertRpcSignature(provider.buildHttpRequest("sts.example.test", request, HttpRequest::Method::Post),
                       credentials, sha1);
  }
}

} // namespace
