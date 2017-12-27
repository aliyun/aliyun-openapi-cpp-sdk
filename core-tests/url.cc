/*
* Copyright 2009-2017 Alibaba Cloud All rights reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <catch.hpp>
#include <alibabacloud/core/Url.h>

using namespace AlibabaCloud;

TEST_CASE("testUrl")
{
	const std::string src = "abc://username:password@example.com:123/path/data?key=value&key2=value2#fragid1";
	Url url;
	url.setScheme("abc");
	url.setUserName("username");
	url.setPassword("password");
	url.setHost("example.com");
	url.setPath("/path/data");
	url.setPort(123);
	url.setQuery("key=value&key2=value2");
	url.setFragment("fragid1");
	REQUIRE(url.toString() == src);
	
	url.clear();
	url.fromString(src);
	REQUIRE(url.scheme() == "abc");
	REQUIRE(url.userName() == "username");
	REQUIRE(url.password() == "password");
	REQUIRE(url.host() == "example.com");
	REQUIRE(url.path() == "/path/data");
	REQUIRE(url.port() == 123);
	REQUIRE(url.query() == "key=value&key2=value2");
	REQUIRE(url.fragment() == "fragid1");

	Url newurl = url;
	REQUIRE(newurl == url);
}

TEST_CASE("testUrl2")
{
	const std::string src = "http://oss.example.com";
	Url url(src);
	REQUIRE(url.scheme() == "http");
	REQUIRE(url.userName() == "");
	REQUIRE(url.password() == "");
	REQUIRE(url.host() == "oss.example.com");
	REQUIRE(url.path() == "/");
	REQUIRE(url.port() == -1);
	REQUIRE(url.query() == "");
	REQUIRE(url.fragment() == "");
}