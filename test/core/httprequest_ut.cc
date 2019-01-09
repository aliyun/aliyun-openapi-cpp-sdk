#include <iostream>
#include <stdio.h>
#include "gtest/gtest.h"
#include "alibabacloud/core/HttpRequest.h"

using namespace std;
using namespace AlibabaCloud;

TEST(HttpRequest, basic) {
  const string src = "abc://username:password@example.com:123/path/data?key=value&key2=value2#fragid1";
  Url url;
  url.setScheme("abc");
  url.setUserName("username");
  url.setPassword("password");
  url.setHost("example.com");
  url.setPath("/path/data");
  url.setPort(123);
  url.setQuery("key=value&key2=value2");
  url.setFragment("fragid1");

  HttpRequest http_request(url, HttpRequest::Method::Post);

  EXPECT_TRUE(http_request.method() == HttpRequest::Method::Post);
  http_request.setMethod(HttpRequest::Method::Get);
  EXPECT_TRUE(http_request.method() == HttpRequest::Method::Get);

  http_request.setUrl(url);
  Url rUrl = http_request.url();
  EXPECT_TRUE(rUrl.toString() == src);
}
