#include <iostream>
#include <stdio.h>
#include "utils.h"
#include "gtest/gtest.h"
#include "alibabacloud/core/AlibabaCloud.h"
#include "alibabacloud/core/SimpleCredentialsProvider.h"
#include "alibabacloud/core/sts/StsClient.h"

using namespace std;
using namespace AlibabaCloud;
using namespace AlibabaCloud::Sts;

namespace {
  utUtils utils;

  const string key = utils.get_env("ENV_AccessKeyId");
  const string secret = utils.get_env("ENV_AccessKeySecret");

  const string assumeRole_key = utils.get_env("ENV_AccessKeyId_AssumeRole");
  const string assumeRole_secret = utils.get_env("ENV_AccessKeySecret_AssumeRole");

  const string invalid_key = "invalid-accesskeyid";
  const string invalid_secret = "invalid-accesskeysecret";

  TEST(StsClient, getCallerIdentity_ak) {
    ClientConfiguration configuration("cn-hangzhou");
    Model::GetCallerIdentityRequest req;
    StsClient client(key, secret, configuration);
    StsClient::GetCallerIdentityOutcome out = client.getCallerIdentity(req);
    EXPECT_TRUE(out.error().errorCode() == "");
    EXPECT_TRUE(out.result().accountId() == "1940345800212929");
    EXPECT_TRUE(out.result().userId() == "1940345800212929");
    EXPECT_TRUE(out.result().arn() == "acs:ram::1940345800212929:root");
  }

  TEST(StsClient, getCallerIdentity_credentials) {
    ClientConfiguration configuration("cn-hangzhou");
    Model::GetCallerIdentityRequest req;

    Credentials credentials(key, secret);
    StsClient client(credentials, configuration);
    StsClient::GetCallerIdentityOutcome out = client.getCallerIdentity(req);
    EXPECT_TRUE(out.error().errorCode() == "");
    EXPECT_TRUE(out.result().accountId() == "1940345800212929");
    EXPECT_TRUE(out.result().userId() == "1940345800212929");
    EXPECT_TRUE(out.result().arn() == "acs:ram::1940345800212929:root");
  }

  TEST(StsClient, getCallerIdentity_credentials_ptr) {
    ClientConfiguration configuration("cn-hangzhou");
    Model::GetCallerIdentityRequest req;

    Credentials credentials(key, secret);
    StsClient client(std::make_shared<SimpleCredentialsProvider>(credentials), configuration);
    StsClient::GetCallerIdentityOutcome out = client.getCallerIdentity(req);
    EXPECT_TRUE(out.error().errorCode() == "");
    EXPECT_TRUE(out.result().accountId() == "1940345800212929");
    EXPECT_TRUE(out.result().userId() == "1940345800212929");
    EXPECT_TRUE(out.result().arn() == "acs:ram::1940345800212929:root");
  }

  TEST(StsClient, getCallerIdentity_ak_error) {
    ClientConfiguration configuration("cn-hangzhou");
    Model::GetCallerIdentityRequest req;
    StsClient client(invalid_key, invalid_secret, configuration);
    StsClient::GetCallerIdentityOutcome out = client.getCallerIdentity(req);
    EXPECT_TRUE(out.error().errorCode() == "InvalidAccessKeyId.NotFound");
  }


  TEST(StsClient, getCallerIdentity_callable) {
    InitializeSdk();
    ClientConfiguration configuration("cn-hangzhou");
    Model::GetCallerIdentityRequest req;
    StsClient client(key, secret, configuration);
    StsClient::GetCallerIdentityOutcomeCallable cb = client.getCallerIdentityCallable(req);
    StsClient::GetCallerIdentityOutcome out = cb.get();
    EXPECT_TRUE(out.error().errorCode() == "");
    EXPECT_TRUE(out.result().accountId() == "1940345800212929");
    EXPECT_TRUE(out.result().userId() == "1940345800212929");
    EXPECT_TRUE(out.result().arn() == "acs:ram::1940345800212929:root");
    ShutdownSdk();
  }

  void cb(const StsClient *client,
          const Model::GetCallerIdentityRequest &req,
          const StsClient::GetCallerIdentityOutcome& out,
          const std::shared_ptr<const AsyncCallerContext>& contex) {

    EXPECT_TRUE(out.error().errorCode() == "");
    EXPECT_TRUE(out.result().accountId() == "1940345800212929");
    EXPECT_TRUE(out.result().userId() == "1940345800212929");
    EXPECT_TRUE(out.result().arn() == "acs:ram::1940345800212929:root");
  }

  TEST(StsClient, getCallerIdentity_async) {
    InitializeSdk();
    ClientConfiguration configuration("cn-hangzhou");
    Model::GetCallerIdentityRequest req;
    StsClient client(key, secret, configuration);
    const AsyncCallerContext context;

    StsClient::GetCallerIdentityAsyncHandler handler(cb);
    client.getCallerIdentityAsync(req, handler, std::make_shared<const AsyncCallerContext>(context));
    ShutdownSdk();
  }

  TEST(StsClient, assumeRole) {
    ClientConfiguration configuration("cn-hangzhou");
    Model::AssumeRoleRequest req;
    req.setRoleArn("acs:ram::1940345800212929:role/testassumerole");
    req.setRoleSessionName("test_session");
    req.setDurationSeconds(1800);
    req.setPolicy("");

    const string tkey = "STS.NK7QLuu39fXX1eRgtjDbj1234";
    const string tsecret = "5GuRjxezVrfnwLZBa8wXs9wjLGGGLkN5oj7A4dgq1234";
    const string texpiration = "2019-01-15T16:31:10Z";
    const string ttoken = "CAIS+0123456789yfSjIr4iCGvbBmOwY0ZqzM0Pjg3Q/SO1GqImfkjz2IHpIenVpCegfs/Uynm5Y6/cZlqVvRoRZclfJdtBx6ZIPJ4EhmWeE6aKP9rUhpMCPOwr6UmzWvqL7Z+H+U6muGJOEYEzFkSle2KbzcS7YMXWuLZyOj+wMDL1VJH7aCwBLH9BLPABvhdYHPH/KT5aXPwXtn3DbATgD2GM+qxsmuPjnmZHBukKG1gSgm7VEnemrfMj4NfsLFYxkTtK40NZxcqf8yyNK43BIjvws0PIYoGef54zMXgMPs0jXaPCy7tB0MAZifbU/FrRDqPXsPBa3YzssRu8agAEoLOcVfFVwaNKv0bKAHk385VmFBbtss1S35y7BIaK6zzXahKjEQhtgHBBgff0jhxdyqB5TdiJ5uBL/s+DEYelmzjPxhDQ9A6+GV/05i0gAZOHMVBjwXX2iTG/tBUqS6tL0GqBsSgS4o0tbtSp2PWJqUk2dHFtxTSXqc4kM7yreJA==";

    StsClient client(assumeRole_key, assumeRole_secret, configuration);
    StsClient::AssumeRoleOutcome out = client.assumeRole(req);
    EXPECT_TRUE(out.error().errorCode().empty());
    EXPECT_TRUE(out.result().assumedRoleUser().arn == "acs:ram::1940345800212929:role/testassumerole/test_session");
    EXPECT_TRUE(out.result().assumedRoleUser().assumedRoleId == "324641801595268593:test_session");
    EXPECT_TRUE(out.result().credentials().accessKeyId.size() == tkey.size());
    EXPECT_TRUE(out.result().credentials().accessKeySecret.size() == tsecret.size());
    EXPECT_TRUE(out.result().credentials().expiration.size() == texpiration.size());
    EXPECT_TRUE(out.result().credentials().securityToken.size() == ttoken.size());
  }

  TEST(StsClient, assumeRole_callable) {
    InitializeSdk();
    ClientConfiguration configuration("cn-hangzhou");
    Model::AssumeRoleRequest req;
    req.setRoleArn("acs:ram::1940345800212929:role/testrole");
    req.setRoleSessionName("test_session");
    req.setDurationSeconds(1000);
    req.setPolicy("");

    StsClient client(key, secret, configuration);
    StsClient::AssumeRoleOutcomeCallable cb = client.assumeRoleCallable(req);
    StsClient::AssumeRoleOutcome out = cb.get();
    EXPECT_TRUE(out.error().errorCode() == "NoPermission");
    ShutdownSdk();
  }

  void assumerole_cb(const StsClient *client,
          const Model::AssumeRoleRequest &req,
          const StsClient::AssumeRoleOutcome& out,
          const std::shared_ptr<const AsyncCallerContext>& contex) {

    EXPECT_TRUE(out.error().errorCode() == "NoPermission");
  }

  TEST(StsClient, assumeRole_async) {
    InitializeSdk();
    ClientConfiguration configuration("cn-hangzhou");
    Model::AssumeRoleRequest req;
    req.setRoleArn("acs:ram::1940345800212929:root");
    req.setRoleSessionName("test_session");
    req.setDurationSeconds(1000);
    StsClient client(key, secret, configuration);
    const AsyncCallerContext context;
    StsClient::AssumeRoleAsyncHandler handler(assumerole_cb);
    client.assumeRoleAsync(req, handler, std::make_shared<const AsyncCallerContext>(context));
    ShutdownSdk();
  }
}
