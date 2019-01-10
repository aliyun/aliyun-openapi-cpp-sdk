#include <iostream>
#include <stdio.h>
#include "gtest/gtest.h"
#include "alibabacloud/core/SimpleCredentialsProvider.h"
#include "alibabacloud/core/RoaServiceClient.h"
#include "alibabacloud/core/HttpMessage.h"

using namespace std;
using namespace AlibabaCloud;

namespace AlibabaCloud {
  class TestRoaClient : public RoaServiceClient {
   public:

    TestRoaClient(const std::string & servicename, const std::shared_ptr<CredentialsProvider> &credentialsProvider,
      const ClientConfiguration &configuration,
      const std::shared_ptr<Signer> &signer = std::make_shared<HmacSha1Signer>()):
    RoaServiceClient(servicename, credentialsProvider, configuration, signer)
    {}

    JsonOutcome makeRequest(const std::string &endpoint, const RoaServiceRequest &msg, HttpRequest::Method method = HttpRequest::Method::Get)const {
      return RoaServiceClient::makeRequest(endpoint, msg, method);
    }

    HttpRequest buildHttpRequest(const std::string & endpoint, const ServiceRequest &msg, HttpRequest::Method method)const {
      return RoaServiceClient::buildHttpRequest(endpoint, msg, method);
    }

  };


  class TestRoaServiceRequest: public ServiceRequest {
   public:
    TestRoaServiceRequest(const std::string &product, const std::string &version):
    ServiceRequest(product, version){}


    void addParameter(const ParameterNameType &name, const ParameterValueType &value) {
      addParameter(name, value);
    }
    ParameterValueType parameter(const ParameterNameType &name)const {
      return parameter(name);
    }
    void removeParameter(const ParameterNameType &name) {
      removeParameter(name);
    }
    void setContent(const char *data, size_t size) {
      setContent(data, size);
    }
    void setParameter(const ParameterNameType &name, const ParameterValueType &value) {
      setParameter(name, value);
    }
    void setParameters(const ParameterCollection &params) {
      setParameters(params);
    }
    void setResourcePath(const std::string &path) {
      setResourcePath(path);
    }
    void setProduct(const std::string &product) {
      setProduct(product);
    }
    void setVersion(const std::string &version) {
      setVersion(version);
    }
};

}











TEST(RoaServiceClient, b0) {
  const ClientConfiguration config;

  std::string key    = "accessKeyId";
  std::string secret = "accessSecret";
  std::string token  = "sessionToken";

  const Credentials credentials(key, secret, token);

  // const CommonClient cc1(credentials, cfg);
  // CommonClient cc2(std::make_shared<SimpleCredentialsProvider>(credentials), cfg);


  TestRoaClient client("ecs", std::make_shared<SimpleCredentialsProvider>(credentials), config);

  const string product = "ECS";
  const string version = "1.0";

  RoaServiceRequest roa_req(product, version);
  // roa_req.setParameter("key1", "value1");
  // roa_req.setQueryParameter("query_k1", "query_v1");
  // string content = "test-content";
  // roa_req.setContent(content.c_str(), content.length());

  client.makeRequest("cn-shanghai", roa_req, HttpRequest::Method::Get);

  RoaServiceRequest req(product, version);

  req.setParameter("a", "b");
  req.setContent("123456789", 9);
  client.buildHttpRequest("cn-shanghai", req, HttpRequest::Method::Get);

}


TEST(RoaServiceClient, basic) {
  const string service = "ECS";
  const std::string regionId = "cn-shanghai";

  const std::string hostname = "hostname";
  const std::string user = "user";
  const std::string password = "password";
  uint16_t port = 12345;
  const NetworkProxy proxy(NetworkProxy::Http, hostname, port, user, password);

  HmacSha1Signer sig;

  const std::string access_key = "accessKeyId";
  const std::string access_secret = "accessKeySecret";
  const std::string session_token = "sessionToken";
  Credentials credentials(access_key, access_secret, session_token);

  ClientConfiguration config(regionId, proxy);

  RoaServiceClient roa(service,
    std::make_shared<SimpleCredentialsProvider>(credentials),
    config);
  TestRoaClient client(service, std::make_shared<SimpleCredentialsProvider>(credentials), config);


  HttpMessage::HeaderCollection headers;
  // client.canonicalizedHeaders(headers);
  // REQUIRE(roa.actionName() == action);
}

// EcsClient::EcsClient(const Credentials &credentials, const ClientConfiguration &configuration) :
//   RpcServiceClient(SERVICE_NAME, std::make_shared<SimpleCredentialsProvider>(credentials), configuration)
// {
//   auto locationClient = std::make_shared<LocationClient>(credentials, configuration);
//   endpointProvider_ = std::make_shared<EndpointProvider>(locationClient, configuration.regionId(), SERVICE_NAME, "ecs");
// }