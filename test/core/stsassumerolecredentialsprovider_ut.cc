#include <iostream>
#include <stdio.h>
#include "utils.h"
#include "gtest/gtest.h"
#include "alibabacloud/core/AlibabaCloud.h"
#include "alibabacloud/core/sts/StsClient.h"
#include "alibabacloud/core/StsAssumeRoleCredentialsProvider.h"

using namespace std;
using namespace AlibabaCloud;
using namespace AlibabaCloud::Sts;

namespace {

  utUtils utils;
  const string assumeRole_key = utils.get_env("ENV_AccessKeyId_AssumeRole");
  const string assumeRole_secret = utils.get_env("ENV_AccessKeySecret_AssumeRole");

  TEST(StsAssumeRoleCredentialsProvider, basic) {
    ClientConfiguration configuration("cn-hangzhou");
    StsClient* client = new StsClient(assumeRole_key, assumeRole_secret, configuration);

    const string role_arn = "acs:ram::1940345800212929:role/testassumerole";
    const string role_session_name = "roleSessionName";
    const string policy = "";
    int duration_seconds = 1800;

    StsAssumeRoleCredentialsProvider provider(std::make_shared<StsClient>(*client), role_arn, role_session_name, policy, duration_seconds);
    Credentials credentials = provider.getCredentials();

    const string key = "STS.NKSqz6t6NU6ZS4ZAAXCC12345";
    const string secret = "4fMb9dFQca1eMBavUDSivveSkABT7dQF2puL8HK12345";
    const string token = "CAIS01234567892yfSjIr4jmOsCCmelv4vSxURLrpUENT8xr3Iv+qDz2IHpIenVpCegfs/Uynm5Y6/cZlqZpTJtIfkHfdsp36LJe9A75llh4eSHwv9I+k5SANTW5KXyShb3/AYjQSNfaZY3eCTTtnTNyxr3XbCirW0ffX7SClZ9gaKZ8PGD6F00kYu1bPQx/ssQXGGLMPPK2SH7Qj3HXEVBjt3gX6wo9y9zmk5HEsUaD3AWikLZP9t6gGPX+MZkwZqUYesyuwel7epDG1CNt8BVQ/M909vcepWmb54HFWgQAvk/YY7eFqccJMAJieqEhALNBoeL7kfBoEwccTlMIGn0agAE5DQ7gONV987si37mc1rbnhmg/BIx7h7N5bSQ3cqNVAz2pG5I1q73ifUKEL2z0qyvXFTp2FmILhdqmCCt1r5ll5zjgqhlLlv4aiNuu7UlZQTN3BEM+qlGEtSGEvJHLd/j41ImYX1XQEb3LaO4ithYg/bF3ONuUi4b1IAYpsYLGGg==";

    EXPECT_TRUE(credentials.accessKeyId().size() == key.size());
    EXPECT_TRUE(credentials.accessKeySecret().size() == secret.size());
    EXPECT_TRUE(credentials.sessionToken().size() == token.size());
  }
}
