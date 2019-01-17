#include <iostream>
#include <stdio.h>
#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "alibabacloud/core/EndpointProvider.h"

using namespace std;
using namespace AlibabaCloud;
using namespace AlibabaCloud::Location;

using ::testing::_;
using ::testing::DefaultValue;


class mockEndpointProvider: public EndpointProvider {
 public:
  mockEndpointProvider(
      const Credentials &credentials,
      const ClientConfiguration &configuration,
      const std::string &regionId,
      const std::string &product,
      const std::string &serviceCode = std::string(),
      int durationSeconds = 3600
    ):
  EndpointProvider(credentials, configuration, regionId, product, serviceCode, durationSeconds) {}

  MOCK_CONST_METHOD1(describeEndpoints, LocationClient::DescribeEndpointsOutcome(const Model::DescribeEndpointsRequest &request));
};

TEST(EndpointProvider, service_code_empty) {
  const Credentials sub_user_credentials("key", "secret");
  ClientConfiguration config; // default is cn-hangzhou
  // config.setEndpoint("test-endpoint"); // endpoint should be empty

  // invalid product
  mockEndpointProvider provider1(sub_user_credentials, config, config.regionId(), "non-exist-product", "");
  EndpointProvider::EndpointOutcome out1 = provider1.getEndpoint();
  EXPECT_TRUE(out1.error().errorCode() == "InvalidRegionId");

  // ecs has no global_endpoint
  mockEndpointProvider provider2(sub_user_credentials, config, config.regionId(), "ecs", "");
  EndpointProvider::EndpointOutcome out2 = provider2.getEndpoint();
  EXPECT_TRUE(out2.error().errorCode() == "InvalidRegionId");

  // aegis has global_endpoint
  mockEndpointProvider provider3(sub_user_credentials, config, config.regionId(), "aegis", "");
  EndpointProvider::EndpointOutcome out3 = provider3.getEndpoint();
  EXPECT_TRUE(out3.error().errorCode().empty());
  EXPECT_TRUE(out3.result() == "aegis.cn-hangzhou.aliyuncs.com");

  // arms has regional_endpoint, get from region
  mockEndpointProvider provider4(sub_user_credentials, config, config.regionId(), "arms", "");
  EndpointProvider::EndpointOutcome out4 = provider4.getEndpoint();
  EXPECT_TRUE(out4.error().errorCode().empty());
  EXPECT_TRUE(out4.result() == "arms.cn-hangzhou.aliyuncs.com");
}

TEST(EndpointProvider, mock_remote) {
  const Credentials sub_user_credentials("key", "secret");
  ClientConfiguration config; // default is cn-hangzhou
  // config.setEndpoint("test-endpoint");

  mockEndpointProvider provider(sub_user_credentials, config, config.regionId(), "ecs", "ecs");

  Model::DescribeEndpointsRequest request;

  const string payload = "{\"RequestId\":\"test-request-id\",\"Success\":true,\"Endpoints\":{\"Endpoint\":[{\"Endpoint\":\"test-ep\",\"Id\":\"test-id\",\"Namespace\":\"test-namespace\",\"SerivceCode\":\"test-service-code\",\"Type\":\"test-type\",\"Protocols\":{\"Protocols\":[\"a\",\"b\"]}}]}}";
  Location::Model::DescribeEndpointsResult res(payload);
  LocationClient::DescribeEndpointsOutcome xout(res);

  DefaultValue<LocationClient::DescribeEndpointsOutcome>::Set(xout);
  EXPECT_CALL(provider, describeEndpoints(_));
  EndpointProvider::EndpointOutcome out = provider.getEndpoint();

  EXPECT_TRUE(out.error().errorCode().empty());
  EXPECT_TRUE(out.result() == "test-ep");
}

TEST(EndpointProvider, mock_remote_error) {
  const Credentials sub_user_credentials("key", "secret");
  ClientConfiguration config; // default is cn-hangzhou
  // config.setEndpoint("test-endpoint");

  mockEndpointProvider provider(sub_user_credentials, config, config.regionId(), "ecs", "ecs");
  LocationClient::DescribeEndpointsOutcome xout(Error("any-error-code", "any-error-message"));

  DefaultValue<LocationClient::DescribeEndpointsOutcome>::Set(xout);
  EXPECT_CALL(provider, describeEndpoints(_));
  EndpointProvider::EndpointOutcome out = provider.getEndpoint();

  EXPECT_TRUE(out.error().errorCode() == "any-error-code");
}
