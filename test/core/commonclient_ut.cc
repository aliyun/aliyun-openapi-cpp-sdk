
#include <iostream>
#include <stdio.h>
#include "gtest/gtest.h"
#include "../../core/src/Utils.h"
#include "alibabacloud/core/Config.h"
#include "alibabacloud/core/AlibabaCloud.h"
#include "alibabacloud/core/CommonClient.h"
#include "alibabacloud/core/CommonResponse.h"
#include "alibabacloud/core/CommonRequest.h"
#include "alibabacloud/core/SimpleCredentialsProvider.h"


using namespace std;
using namespace AlibabaCloud;

namespace AlibabaCloud {
  class TestCommonClient : public CommonClient {
    public:
      TestCommonClient(const Credentials &credentials, const ClientConfiguration &configuration):
        CommonClient(credentials, configuration)
      {}
      using CommonClient::buildHttpRequest;
      using CommonClient::buildRoaHttpRequest;
      using CommonClient::buildRpcHttpRequest;
      using CommonClient::makeRequest;
      using CommonClient::asyncExecute;
  };
}

static int nbr = 0;
static void task() {
   nbr |= 0x01;
}


TEST(CommonClient, basic) {

  InitializeSdk();
  const ClientConfiguration cfg;

  std::string key    = "accessKeyId";
  std::string secret = "accessSecret";
  std::string token  = "sessionToken";

  const Credentials credentials(key, secret, token);

  const CommonClient cc1(credentials, cfg);
  CommonClient cc2(std::make_shared<SimpleCredentialsProvider>(credentials), cfg);
  CommonClient cc3(key, secret, cfg);

  CommonRequest cr;
  cr.setContent("test-content", 12);

  CommonClient::CommonResponseOutcome out1 = cc1.commonResponse(cr);
  EXPECT_TRUE(out1.error().errorCode() == "NetworkError");
  EXPECT_TRUE(out1.result().payload() == "");

  CommonClient::CommonResponseOutcome out2 = cc2.commonResponse(cr);
  EXPECT_TRUE(out2.error().errorCode() == "NetworkError");
  EXPECT_TRUE(out2.result().payload() == "");

  CommonClient::CommonResponseOutcome out3 = cc3.commonResponse(cr);
  EXPECT_TRUE(out3.error().errorCode() == "NetworkError");
  EXPECT_TRUE(out3.result().payload() == "");

/*
https://cn-hangzhou/?
   AccessKeyId=accessKeyId
  &Format=JSON
  &RegionId=cn-hangzhou
  &SecurityToken=sessionToken
  &Signature=tWGagYMK93km44TOY%2FY60snVYWE%3D
  &SignatureMethod=HMAC-SHA1
  &SignatureNonce=ef27311a-5151-40a0-974f-2b808a8a683e
  &SignatureVersion=1.0
  &Timestamp=2019-01-02T08%3A56%3A26Z
  &Version=
*/

  TestCommonClient* client = new TestCommonClient(credentials, cfg);
  HttpRequest r = client->buildHttpRequest("cn-hangzhou", cr, HttpRequest::Method::Post);
  EXPECT_TRUE(r.method() == HttpRequest::Method::Post);
  EXPECT_TRUE(r.url().scheme() == "https");
  EXPECT_TRUE(r.url().userName() == "");
  EXPECT_TRUE(r.url().password() == "");
  EXPECT_TRUE(r.url().host() == "cn-hangzhou");
  EXPECT_TRUE(r.url().port() == -1);
  EXPECT_TRUE(r.url().fragment() == "");

  EXPECT_TRUE(r.url().query().find("AccessKeyId=") != string::npos);
  EXPECT_TRUE(r.url().query().find("Format=") != string::npos);
  EXPECT_TRUE(r.url().query().find("RegionId=") != string::npos);
  EXPECT_TRUE(r.url().query().find("SecurityToken=") != string::npos);
  EXPECT_TRUE(r.url().query().find("Signature=") != string::npos);
  EXPECT_TRUE(r.url().query().find("SignatureMethod=") != string::npos);
  EXPECT_TRUE(r.url().query().find("SignatureNonce=") != string::npos);
  EXPECT_TRUE(r.url().query().find("SignatureVersion=") != string::npos);
  EXPECT_TRUE(r.url().query().find("Timestamp=") != string::npos);
  EXPECT_TRUE(r.url().query().find("Version=") != string::npos);

  cr.setQueryParameter("query_k1", "query_v1");
  cr.setHeaderParameter("header_k1", "header_v1");

  HttpRequest rr = client->buildRoaHttpRequest("cn-shanghai", cr, HttpRequest::Method::Get);
  EXPECT_TRUE(rr.method() == HttpRequest::Method::Get);
  EXPECT_TRUE(rr.header("Accept") == "application/json");
  EXPECT_TRUE(rr.url().toString() == "https://cn-shanghai/?header_k1=header_v1");
  EXPECT_TRUE(rr.header("Host") == "cn-shanghai");
  // Wed, 09 Jan 2019 06:32:41 GMT
  string date = "Wed, 09 Jan 2019 06:32:41 GMT";
  EXPECT_TRUE(rr.header("Date").length() == date.length());
  string signature_nonce = "fb62c51d-f735-4ec7-870d-c6ce03368214";
  EXPECT_TRUE(rr.header("x-acs-signature-nonce").length() == signature_nonce.length());

  EXPECT_TRUE(rr.header("x-acs-signature-method") == "HMAC-SHA1");
  EXPECT_TRUE(rr.header("x-acs-signature-version") == "1.0");
  EXPECT_TRUE(rr.header("x-acs-version") == "");
  EXPECT_TRUE(rr.header("x-sdk-client") == string("CPP/").append(ALIBABACLOUD_VERSION_STR));
  EXPECT_TRUE(rr.header("x-acs-region-id") == "cn-hangzhou");
  // acs accessKeyId:JZD81jGWLp1F3ZIkaLp1yuEZmKc=
  EXPECT_TRUE(rr.header("Authorization").find("acs accessKeyId:") != string::npos);
  EXPECT_TRUE(rr.header("unknown-header") == "");
  HttpRequest rrr = client->buildRpcHttpRequest("cn-hangzhou", cr, HttpRequest::Method::Post);
  EXPECT_TRUE(client->serviceName() == "Common");

  std::function<void()> func(task);
  Runnable* rf = new Runnable(func);
  EXPECT_TRUE(nbr == 0);
  client->asyncExecute(rf);
  usleep(10000);
  EXPECT_TRUE(nbr == 1);
  ShutdownSdk();
}
