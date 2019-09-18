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

#include <alibabacloud/sas-api/model/DescribeAccountProfileByKeyWordResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Sas_api;
using namespace AlibabaCloud::Sas_api::Model;

DescribeAccountProfileByKeyWordResult::DescribeAccountProfileByKeyWordResult() :
	ServiceResult()
{}

DescribeAccountProfileByKeyWordResult::DescribeAccountProfileByKeyWordResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAccountProfileByKeyWordResult::~DescribeAccountProfileByKeyWordResult()
{}

void DescribeAccountProfileByKeyWordResult::parse(const std::string &payload)
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

}

std::string DescribeAccountProfileByKeyWordResult::getPhone()const
{
	return phone_;
}

std::string DescribeAccountProfileByKeyWordResult::getIp()const
{
	return ip_;
}

std::string DescribeAccountProfileByKeyWordResult::getIpInfo()const
{
	return ipInfo_;
}

std::string DescribeAccountProfileByKeyWordResult::getPhoneInfo()const
{
	return phoneInfo_;
}

