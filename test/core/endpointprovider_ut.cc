#include <iostream>
#include <stdio.h>
#include "utils.h"
#include "gtest/gtest.h"
#include "alibabacloud/core/EndpointProvider.h"

using namespace std;
using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;

TEST(EndpointProvider, basic) {
  utUtils utils;
  const string accessKeyId = utils.get_env("ENV_AccessKeyId");
  const string accessKeySecret = utils.get_env("ENV_AccessKeySecret");

  ClientConfiguration configuration("cn-hangzhou");
  auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);

  EndpointProvider ep(locationClient, configuration.regionId(), "Ecs", "ecs");
  EndpointProvider::EndpointOutcome out = ep.getEndpoint();

  if (accessKeyId.empty()) {
    EXPECT_TRUE(out.error().errorCode() == "InvalidAccessKeyId.NotFound");
  } else {
    EXPECT_TRUE(out.result() == "ecs-cn-hangzhou.aliyuncs.com");
  }
}

TEST(EndpointProvider, basic1) {
  ClientConfiguration configuration("cn-hangzhou");
  const string accessKeyId = "no-AccessKeyId";
  const string accessKeySecret = "no-AccessKeySecret";

  auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);

  EndpointProvider ep(locationClient, configuration.regionId(), "Ecs");
  EndpointProvider::EndpointOutcome out = ep.getEndpoint();

  EXPECT_TRUE(out.error().errorCode() == "InvalidRegionId");
}


TEST(EndpointProvider, basic2) {
  ClientConfiguration configuration("xxxcn-hangzhou");
  const string accessKeyId = "no-AccessKeyId";
  const string accessKeySecret = "no-AccessKeySecret";

  auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);

  EndpointProvider ep(locationClient, configuration.regionId(), "Ecs", "ecs");
  EndpointProvider::EndpointOutcome out = ep.getEndpoint();
  EXPECT_TRUE(out.error().errorCode() == "InvalidAccessKeyId.NotFound");
}
