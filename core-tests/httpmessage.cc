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
#include <alibabacloud/core/HttpRequest.h>

using namespace AlibabaCloud;

TEST_CASE("testHttpMessage")
{
	const std::string data = "Thu, 19 Oct 2017 04:38:27 GMT";
	HttpRequest r;
	r.setHeader("accept", "application/xml");
	r.setHeader("Accept", "application/json");
	r.setHeader("Date", data);

	REQUIRE(r.headers().size() == 2);
	REQUIRE(r.header("accept") == "application/json");
	REQUIRE(r.header(HttpMessage::KnownHeader::Date) == data);
}