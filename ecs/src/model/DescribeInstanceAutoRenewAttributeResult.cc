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

#include <alibabacloud/ecs/model/DescribeInstanceAutoRenewAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

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
		if(!valueInstanceRenewAttributesInstanceRenewAttribute["PeriodUnit"].isNull())
			instanceRenewAttributesObject.periodUnit = valueInstanceRenewAttributesInstanceRenewAttribute["PeriodUnit"].asString();
		if(!valueInstanceRenewAttributesInstanceRenewAttribute["Duration"].isNull())
			instanceRenewAttributesObject.duration = std::stoi(valueInstanceRenewAttributesInstanceRenewAttribute["Duration"].asString());
		if(!valueInstanceRenewAttributesInstanceRenewAttribute["RenewalStatus"].isNull())
			instanceRenewAttributesObject.renewalStatus = valueInstanceRenewAttributesInstanceRenewAttribute["RenewalStatus"].asString();
		if(!valueInstanceRenewAttributesInstanceRenewAttribute["InstanceId"].isNull())
			instanceRenewAttributesObject.instanceId = valueInstanceRenewAttributesInstanceRenewAttribute["InstanceId"].asString();
		if(!valueInstanceRenewAttributesInstanceRenewAttribute["AutoRenewEnabled"].isNull())
			instanceRenewAttributesObject.autoRenewEnabled = valueInstanceRenewAttributesInstanceRenewAttribute["AutoRenewEnabled"].asString() == "true";
		instanceRenewAttributes_.push_back(instanceRenewAttributesObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeInstanceAutoRenewAttributeResult::getTotalCount()const
{
	return totalCount_;
}

std::vector<DescribeInstanceAutoRenewAttributeResult::InstanceRenewAttribute> DescribeInstanceAutoRenewAttributeResult::getInstanceRenewAttributes()const
{
	return instanceRenewAttributes_;
}

int DescribeInstanceAutoRenewAttributeResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstanceAutoRenewAttributeResult::getPageNumber()const
{
	return pageNumber_;
}

