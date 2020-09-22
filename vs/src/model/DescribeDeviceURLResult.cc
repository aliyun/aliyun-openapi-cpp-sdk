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

#include <alibabacloud/vs/model/DescribeDeviceURLResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vs;
using namespace AlibabaCloud::Vs::Model;

DescribeDeviceURLResult::DescribeDeviceURLResult() :
	ServiceResult()
{}

DescribeDeviceURLResult::DescribeDeviceURLResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDeviceURLResult::~DescribeDeviceURLResult()
{}

void DescribeDeviceURLResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Url"].isNull())
		url_ = value["Url"].asString();
	if(!value["ExpireTime"].isNull())
		expireTime_ = std::stol(value["ExpireTime"].asString());

}

long DescribeDeviceURLResult::getExpireTime()const
{
	return expireTime_;
}

std::string DescribeDeviceURLResult::getUrl()const
{
	return url_;
}

