#include <iostream>
#include "../utils.h"
#include "gtest/gtest.h"
#include "alibabacloud/core/AlibabaCloud.h"
#include "alibabacloud/cs/CSClient.h"
#include "alibabacloud/cs/model/CreateTemplateRequest.h"
// #include "alibabacloud/core/CommonClient.h"
// #include "alibabacloud/core/CommonRequest.h"
#include "alibabacloud/core/sts/StsClient.h"
#include "alibabacloud/core/StsAssumeRoleCredentialsProvider.h"


using namespace std;
using namespace AlibabaCloud;
using namespace AlibabaCloud::CS;

namespace {
  TEST(cs, describeTemplatesError) {
    utUtils utils;
    string key = utils.get_env("ENV_AccessKeyId");
    string secret = utils.get_env("ENV_AccessKeySecret");

    InitializeSdk();
    ClientConfiguration configuration("cn-hangzhou");
    CSClient client(key, secret, configuration);
    Model::DescribeTemplatesRequest request;
    auto outcome = client.describeTemplates(request);
    EXPECT_TRUE(outcome.error().errorCode() == "InvalidAction.NotFound");
    EXPECT_TRUE(outcome.error().errorMessage() == "Specified api is not found, please check your url and method.");
    ShutdownSdk();
  }


  TEST(cs, describeTemplatesClientTimeout) {
    utUtils utils;
    string key = utils.get_env("ENV_AccessKeyId");
    string secret = utils.get_env("ENV_AccessKeySecret");

    InitializeSdk();
    ClientConfiguration configuration("cn-hangzhou");
    configuration.setConnectTimeout(1);
    configuration.setReadTimeout(123);

    CSClient client(key, secret, configuration);
    Model::DescribeTemplatesRequest request;
    auto outcome = client.describeTemplates(request);
    EXPECT_TRUE(outcome.error().errorCode() == "OperationTimeoutError");
    EXPECT_TRUE(outcome.error().errorMessage().find("Timeout (connectTimeout: 1ms, readTimeout: 123ms) when connect or read") == 0);
    ShutdownSdk();
  }

  TEST(cs, describeTemplatesRequstTimeout) {
    utUtils utils;
    string key = utils.get_env("ENV_AccessKeyId");
    string secret = utils.get_env("ENV_AccessKeySecret");

    InitializeSdk();
    ClientConfiguration configuration("cn-hangzhou");
    CSClient client(key, secret, configuration);
    Model::DescribeTemplatesRequest request;
    request.setConnectTimeout(11);
    request.setReadTimeout(213);
    auto outcome = client.describeTemplates(request);
    EXPECT_TRUE(outcome.error().errorCode() == "OperationTimeoutError");
    EXPECT_TRUE(outcome.error().errorMessage().find("Timeout (connectTimeout: 11ms, readTimeout: 213ms) when connect or read") == 0);
    ShutdownSdk();
  }

  TEST(cs, describeTemplatesClientRequstTimeout) {
    utUtils utils;
    string key = utils.get_env("ENV_AccessKeyId");
    string secret = utils.get_env("ENV_AccessKeySecret");

    InitializeSdk();
    ClientConfiguration configuration("cn-hangzhou");
    configuration.setConnectTimeout(1);
    configuration.setReadTimeout(123);

    CSClient client(key, secret, configuration);
    Model::DescribeTemplatesRequest request;
    request.setConnectTimeout(11);
    request.setReadTimeout(213);
    auto outcome = client.describeTemplates(request);
    EXPECT_TRUE(outcome.error().errorCode() == "OperationTimeoutError");
    EXPECT_TRUE(outcome.error().errorMessage().find("Timeout (connectTimeout: 11ms, readTimeout: 213ms) when connect or read") == 0);
    ShutdownSdk();
  }
}
