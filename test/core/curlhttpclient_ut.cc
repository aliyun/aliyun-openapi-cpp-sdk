#include <iostream>
#include <stdio.h>

#include "utils.h"
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "alibabacloud/core/Url.h"
#include "alibabacloud/core/HttpRequest.h"
#include "alibabacloud/core/HttpClient.h"
#include "../src/CurlHttpClient.h"

using namespace std;
using ::testing::Return;
using ::testing::DoAll;
using ::testing::SetArgReferee;
using ::testing::ReturnPointee;
using ::testing::_;
using ::testing::NiceMock;
using ::testing::DefaultValue;

using namespace AlibabaCloud;

using namespace std;

class mockCurlHttpClient : public CurlHttpClient {
 public:
  MOCK_METHOD1(makeRequest, HttpResponseOutcome (const HttpRequest &request));
};

// httpserver_for_ut port "echo text"
// default port 8021
// default text test/httpserver/index.html

TEST(CurlHttpClient, basic) {
  CurlHttpClient client;
  HttpRequest request;

  utUtils utils;
  char dir[1024];
  utils.get_dir_exec(dir, nullptr);
  char httpserver_ut_with_args[10 * 1024];
  const string testBody = "CurlHttpClient test boday";
  snprintf(httpserver_ut_with_args, 10 * 1024, "%s/httpserver_for_ut  8021 \"%s\"", dir, testBody.c_str());

  FILE* http = popen(httpserver_ut_with_args, "r");
  EXPECT_TRUE(http != nullptr);

  // wait util httpserver started
  char buffer[100];
  usleep(10 * 1000);
  fgets(buffer, 100, http);

  Url url;
  url.setHost("127.0.0.1");
  url.setPort(8021);

  request.setMethod(HttpRequest::Method::Get);
  request.setUrl(url);

  request.setHeader("head1", "value1");
  request.setHeader("head2", "value2");
  HttpClient::HttpResponseOutcome out = client.makeRequest(request);
  EXPECT_TRUE(out.result().body() == testBody);

  request.setMethod(HttpRequest::Method::Put);
  request.setUrl(url);

  HttpClient::HttpResponseOutcome out1 = client.makeRequest(request);
  EXPECT_TRUE(out1.result().body() == testBody);

  request.setMethod(HttpRequest::Method::Post);
  request.setBody("test-body", 9);
  request.setUrl(url);

  HttpClient::HttpResponseOutcome out2 = client.makeRequest(request);
  EXPECT_TRUE(out2.result().body() == testBody);

  pclose(http);
}

TEST(CurlHttpClient, netWorkError) {
  CurlHttpClient client;
  HttpRequest request;
  HttpClient::HttpResponseOutcome out = client.makeRequest(request);
  EXPECT_TRUE(out.error().errorCode() == "NetworkError");
  EXPECT_TRUE(out.error().errorMessage() == "Failed to connect to host or proxy.");
}

TEST(CurlHttpClient, netWorkErrorWithHttpProxy) {
  const std::string hostname = "hostname";
  const std::string user = "user";
  const std::string password = "password";
  uint16_t port = 12345;
  const NetworkProxy proxy(NetworkProxy::Http, hostname, port, user, password);

  CurlHttpClient client;
  client.setProxy(proxy);

  HttpRequest request;
  HttpClient::HttpResponseOutcome out = client.makeRequest(request);
  EXPECT_TRUE(out.error().errorCode() == "NetworkError");
  EXPECT_TRUE(out.error().errorMessage() == "Failed to connect to host or proxy.");
}

TEST(CurlHttpClient, netWorkErrorWithSocks5Proxy) {
  const std::string hostname = "hostname";
  const std::string user = "user";
  const std::string password = "password";
  uint16_t port = 12345;
  const NetworkProxy proxy(NetworkProxy::Socks5, hostname, port, user, password);

  CurlHttpClient client;
  client.setProxy(proxy);

  HttpRequest request;
  HttpClient::HttpResponseOutcome out = client.makeRequest(request);
  EXPECT_TRUE(out.error().errorCode() == "NetworkError");
  EXPECT_TRUE(out.error().errorMessage() == "Failed to connect to host or proxy.");
}

TEST(CurlHttpClient, mock) {
  CurlHttpClient client;
  HttpRequest request;

  string body = "1234567";
  HttpResponse response(request);
  response.setStatusCode(200);
  response.setBody(body.c_str(), body.size());

  NiceMock<mockCurlHttpClient> mclient;

  HttpClient::HttpResponseOutcome res = HttpClient::HttpResponseOutcome(response);
  HttpClient::HttpResponseOutcome out1;

  out1.error().setErrorCode("111");
  out1.error().setErrorMessage("this is a mock test");

  DefaultValue<HttpClient::HttpResponseOutcome>::Set(res);

  HttpRequest req;

  EXPECT_CALL(mclient, makeRequest(_));

  HttpClient::HttpResponseOutcome o = mclient.makeRequest(request);
  EXPECT_TRUE(res.result().body() == body);
}