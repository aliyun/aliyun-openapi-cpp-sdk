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

#include <alibabacloud/vpc/model/DescribeInstanceAutoRenewAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Vpc;
using namespace AlibabaCloud::Vpc::Model;

DescribeInstanceAutoRenewAttributeResult::DescribeInstanceAutoRenewAttributeResult() :
	ServiceResult()
{}

DescribeInstanceAutoRenewAttributeResult::DescribeInstanceAutoRenewAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceAutoRenewAttributeResult::~DescribeInstanceAutoRenewAttributeResult()
{}

void DescribeInstanceAutoRenewAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceRenewAttributesNode = value["InstanceRenewAttributes"]["InstanceRenewAttribute"];
	for (auto valueInstanceRenewAttributesInstanceRenewAttribute : allInstanceRenewAttributesNode)
	{
		InstanceRenewAttribute instanceRenewAttributesObject;
		if(!valueInstanceRenewAttributesInstanceRenewAttribute["InstanceId"].isNull())
			instanceRenewAttributesObject.instanceId = valueInstanceRenewAttributesInstanceRenewAttribute["InstanceId"].asString();
		if(!valueInstanceRenewAttributesInstanceRenewAttribute["RenewalStatus"].isNull())
			instanceRenewAttributesObject.renewalStatus = valueInstanceRenewAttributesInstanceRenewAttribute["RenewalStatus"].asString();
		if(!valueInstanceRenewAttributesInstanceRenewAttribute["Duration"].isNull())
			instanceRenewAttributesObject.duration = std::stoi(valueInstanceRenewAttributesInstanceRenewAttribute["Duration"].asString());
		if(!valueInstanceRenewAttributesInstanceRenewAttribute["PricingCycle"].isNull())
			instanceRenewAttributesObject.pricingCycle = valueInstanceRenewAttributesInstanceRenewAttribute["PricingCycle"].asString();
		instanceRenewAttributes_.push_back(instanceRenewAttributesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = value["TotalCount"].asString();
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["PageNumber"].isNull())
		pageNumber_ = value["PageNumber"].asString();

}

std::string DescribeInstanceAutoRenewAttributeResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeInstanceAutoRenewAttributeResult::InstanceRenewAttribute> DescribeInstanceAutoRenewAttributeResult::getInstanceRenewAttributes()const
{
	return instanceRenewAttributes_;
}

std::string DescribeInstanceAutoRenewAttributeResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeInstanceAutoRenewAttributeResult::getPageNumber()const
{
	return pageNumber_;
}

