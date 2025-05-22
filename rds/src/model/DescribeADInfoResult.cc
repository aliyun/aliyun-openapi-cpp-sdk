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

#include <alibabacloud/rds/model/DescribeADInfoResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeADInfoResult::DescribeADInfoResult() :
	ServiceResult()
{}

DescribeADInfoResult::DescribeADInfoResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeADInfoResult::~DescribeADInfoResult()
{}

void DescribeADInfoResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ADDNS"].isNull())
		aDDNS_ = value["ADDNS"].asString();
	if(!value["ADServerIpAddress"].isNull())
		aDServerIpAddress_ = value["ADServerIpAddress"].asString();
	if(!value["ADStatus"].isNull())
		aDStatus_ = value["ADStatus"].asString();
	if(!value["AbnormalReason"].isNull())
		abnormalReason_ = value["AbnormalReason"].asString();
	if(!value["UserName"].isNull())
		userName_ = value["UserName"].asString();

}

std::string DescribeADInfoResult::getAbnormalReason()const
{
	return abnormalReason_;
}

std::string DescribeADInfoResult::getADServerIpAddress()const
{
	return aDServerIpAddress_;
}

std::string DescribeADInfoResult::getADStatus()const
{
	return aDStatus_;
}

std::string DescribeADInfoResult::getUserName()const
{
	return userName_;
}

std::string DescribeADInfoResult::getADDNS()const
{
	return aDDNS_;
}

