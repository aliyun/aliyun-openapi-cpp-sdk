#include <iostream>
#include <stdio.h>
#include "gtest/gtest.h"
#include "alibabacloud/core/EndpointProvider.h"

using namespace std;
using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;

TEST(EndpointProvider, basic) {
  ClientConfiguration configuration("cn-hangzhou");

  char* key = getenv("ENV_AccessKeyId");
  char* secret = getenv("ENV_AccessKeySecret");

  bool no_key_provided = false;

  string accessKeyId, accessKeySecret;
  if (key == nullptr) {
    accessKeyId = "no-AccessKeyId";
    no_key_provided = true;
  } else {
    accessKeyId = string(key);
  }
  if (secret == nullptr) {
    accessKeySecret = "no-AccessKeySecret";
    no_key_provided = true;
  } else {
    accessKeySecret = string(secret);
  }
  auto locationClient = std::make_shared<LocationClient>(accessKeyId, accessKeySecret, configuration);

  EndpointProvider ep(locationClient, configuration.regionId(), "Ecs", "ecs");
  EndpointProvider::EndpointOutcome out = ep.getEndpoint();

  if (no_key_provided) {
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
