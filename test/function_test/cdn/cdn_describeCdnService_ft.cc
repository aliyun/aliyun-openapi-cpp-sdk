#include <iostream>
#include "../utils.h"
#include "gtest/gtest.h"
#include "alibabacloud/core/AlibabaCloud.h"
#include "alibabacloud/cdn/CdnClient.h"

using namespace std;
using namespace AlibabaCloud;
using namespace AlibabaCloud::Cdn;

namespace
{
TEST(cdn, describeCdnService)
{
  utUtils utils;
  string key = utils.get_env("ENV_AccessKeyId");
  string secret = utils.get_env("ENV_AccessKeySecret");
  string uid = utils.get_env("ENV_TEST_UID");
  InitializeSdk();
  ClientConfiguration configuration("cn-hangzhou");
  CdnClient client(key, secret, configuration);
  Model::DescribeCdnServiceRequest request;
  CdnClient::DescribeCdnServiceOutcome outcome = client.describeCdnService(request);
  printf("\n-----\n%s\n-----\n", outcome.error().errorMessage());

  EXPECT_TRUE(outcome.isSuccess());
  EXPECT_TRUE(outcome.error().errorCode().empty());
  EXPECT_EQ(outcome.result().getChangingChargeType(), "PayByTraffic");
  EXPECT_EQ(outcome.result().getInstanceId(), uid);
  EXPECT_EQ(outcome.result().getOpeningTime(), "2019-01-02T09:16:34Z");
  EXPECT_EQ(outcome.result().getChangingAffectTime(), "2019-01-02T09:16:33Z");
  ShutdownSdk();
}
} // namespace
