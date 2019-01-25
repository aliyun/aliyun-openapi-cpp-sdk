#include <iostream>
#include "../utils.h"
#include "gtest/gtest.h"
#include "alibabacloud/core/AlibabaCloud.h"
#include "alibabacloud/ecs/EcsClient.h"

using namespace std;
using namespace AlibabaCloud;
using namespace AlibabaCloud::Ecs;

namespace {
  TEST(ecs, describeInstances) {
    utUtils utils;
    string key = utils.get_env("ENV_AccessKeyId");
    string secret = utils.get_env("ENV_AccessKeySecret");

    InitializeSdk();
    ClientConfiguration configuration("cn-hangzhou");
    EcsClient client(key, secret, configuration);
    Model::DescribeInstancesRequest request;
    request.setPageSize(10);
    auto outcome = client.describeInstances(request);
    EXPECT_TRUE(outcome.isSuccess());
    EXPECT_TRUE(outcome.error().errorCode().empty());
    EXPECT_TRUE(outcome.result().getTotalCount() == 16);
    ShutdownSdk();
  }
}
