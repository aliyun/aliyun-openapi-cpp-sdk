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

#include <alibabacloud/companyreg/model/DescribePartnerConfigResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Companyreg;
using namespace AlibabaCloud::Companyreg::Model;

DescribePartnerConfigResult::DescribePartnerConfigResult() :
	ServiceResult()
{}

DescribePartnerConfigResult::DescribePartnerConfigResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribePartnerConfigResult::~DescribePartnerConfigResult()
{}

void DescribePartnerConfigResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["Contact"].isNull())
		contact_ = value["Contact"].asString();
	if(!value["PartnerCode"].isNull())
		partnerCode_ = value["PartnerCode"].asString();
	if(!value["PartnerName"].isNull())
		partnerName_ = value["PartnerName"].asString();

}

std::string DescribePartnerConfigResult::getPartnerName()const
{
	return partnerName_;
}

std::string DescribePartnerConfigResult::getPartnerCode()const
{
	return partnerCode_;
}

std::string DescribePartnerConfigResult::getContact()const
{
	return contact_;
}

