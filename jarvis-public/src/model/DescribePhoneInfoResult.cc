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

#include <alibabacloud/jarvis-public/model/DescribePhoneInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Jarvis_public;
using namespace AlibabaCloud::Jarvis_public::Model;

DescribePhoneInfoResult::DescribePhoneInfoResult() :
	ServiceResult()
{}

DescribePhoneInfoResult::DescribePhoneInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePhoneInfoResult::~DescribePhoneInfoResult()
{}

void DescribePhoneInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Module"].isNull())
		module_ = value["Module"].asString();
	if(!value["phoneNum"].isNull())
		phoneNum_ = std::stol(value["phoneNum"].asString());
	if(!value["riskLevel"].isNull())
		riskLevel_ = std::stol(value["riskLevel"].asString());
	if(!value["detectTime"].isNull())
		detectTime_ = value["detectTime"].asString();

}

long DescribePhoneInfoResult::getPhoneNum()const
{
	return phoneNum_;
}

std::string DescribePhoneInfoResult::getDetectTime()const
{
	return detectTime_;
}

std::string DescribePhoneInfoResult::getModule()const
{
	return module_;
}

long DescribePhoneInfoResult::getRiskLevel()const
{
	return riskLevel_;
}

