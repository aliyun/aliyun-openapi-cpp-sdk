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

#include <alibabacloud/sas/model/DescribeImageScanAuthorizationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas;
using namespace AlibabaCloud::Sas::Model;

DescribeImageScanAuthorizationResult::DescribeImageScanAuthorizationResult() :
	ServiceResult()
{}

DescribeImageScanAuthorizationResult::DescribeImageScanAuthorizationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeImageScanAuthorizationResult::~DescribeImageScanAuthorizationResult()
{}

void DescribeImageScanAuthorizationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto authStatusNode = value["AuthStatus"];
	if(!authStatusNode["Status"].isNull())
		authStatus_.status = authStatusNode["Status"].asString() == "true";

}

DescribeImageScanAuthorizationResult::AuthStatus DescribeImageScanAuthorizationResult::getAuthStatus()const
{
	return authStatus_;
}

