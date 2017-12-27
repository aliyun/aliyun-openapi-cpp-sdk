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
#include <alibabacloud/core/HmacSha1Signer.h>

using namespace AlibabaCloud;

TEST_CASE("testHmacSha1Signer")
{
	HmacSha1Signer sig;
	std::string sign = sig.generate("GET&%2F&AccessKeyId%3Dtestid%26Action%3DDescribeRegions"
		"%26Format%3DXML%26RegionId%3Dregion1%26SignatureMethod%3DHMAC-SHA1"
		"%26SignatureNonce%3DNwDAxvLU6tFE0DVb%26SignatureVersion%3D1.0"
		"%26TimeStamp%3D2012-12-26T10%253A33%253A56Z%26Version%3D2013-01-10",
		"testsecret&");
	REQUIRE("axE3FUHgDyfm9/+Iep0HpZXrRwE=" == sign);
}