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

#include <alibabacloud/sas-api/model/DescribeAccountProfileByKeyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas_api;
using namespace AlibabaCloud::Sas_api::Model;

DescribeAccountProfileByKeyResult::DescribeAccountProfileByKeyResult() :
	ServiceResult()
{}

DescribeAccountProfileByKeyResult::DescribeAccountProfileByKeyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountProfileByKeyResult::~DescribeAccountProfileByKeyResult()
{}

void DescribeAccountProfileByKeyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Ip"].isNull())
		ip_ = value["Ip"].asString();
	if(!value["IpInfo"].isNull())
		ipInfo_ = value["IpInfo"].asString();
	if(!value["Phone"].isNull())
		phone_ = value["Phone"].asString();
	if(!value["PhoneInfo"].isNull())
		phoneInfo_ = value["PhoneInfo"].asString();
	if(!value["KeywordCount"].isNull())
		keywordCount_ = std::stoi(value["KeywordCount"].asString());
	if(!value["KeywordLimit"].isNull())
		keywordLimit_ = std::stoi(value["KeywordLimit"].asString());

}

std::string DescribeAccountProfileByKeyResult::getPhone()const
{
	return phone_;
}

std::string DescribeAccountProfileByKeyResult::getIp()const
{
	return ip_;
}

std::string DescribeAccountProfileByKeyResult::getIpInfo()const
{
	return ipInfo_;
}

std::string DescribeAccountProfileByKeyResult::getPhoneInfo()const
{
	return phoneInfo_;
}

int DescribeAccountProfileByKeyResult::getKeywordCount()const
{
	return keywordCount_;
}

int DescribeAccountProfileByKeyResult::getKeywordLimit()const
{
	return keywordLimit_;
}

