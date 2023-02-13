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

#include <alibabacloud/ecs/model/DescribeReservedInstanceAutoRenewAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeReservedInstanceAutoRenewAttributeResult::DescribeReservedInstanceAutoRenewAttributeResult() :
	ServiceResult()
{}

DescribeReservedInstanceAutoRenewAttributeResult::DescribeReservedInstanceAutoRenewAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeReservedInstanceAutoRenewAttributeResult::~DescribeReservedInstanceAutoRenewAttributeResult()
{}

void DescribeReservedInstanceAutoRenewAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allReservedInstanceRenewAttributesNode = value["ReservedInstanceRenewAttributes"]["ReservedInstanceRenewAttribute"];
	for (auto valueReservedInstanceRenewAttributesReservedInstanceRenewAttribute : allReservedInstanceRenewAttributesNode)
	{
		ReservedInstanceRenewAttribute reservedInstanceRenewAttributesObject;
		if(!valueReservedInstanceRenewAttributesReservedInstanceRenewAttribute["PeriodUnit"].isNull())
			reservedInstanceRenewAttributesObject.periodUnit = valueReservedInstanceRenewAttributesReservedInstanceRenewAttribute["PeriodUnit"].asString();
		if(!valueReservedInstanceRenewAttributesReservedInstanceRenewAttribute["Duration"].isNull())
			reservedInstanceRenewAttributesObject.duration = std::stoi(valueReservedInstanceRenewAttributesReservedInstanceRenewAttribute["Duration"].asString());
		if(!valueReservedInstanceRenewAttributesReservedInstanceRenewAttribute["ReservedInstanceId"].isNull())
			reservedInstanceRenewAttributesObject.reservedInstanceId = valueReservedInstanceRenewAttributesReservedInstanceRenewAttribute["ReservedInstanceId"].asString();
		if(!valueReservedInstanceRenewAttributesReservedInstanceRenewAttribute["RenewalStatus"].isNull())
			reservedInstanceRenewAttributesObject.renewalStatus = valueReservedInstanceRenewAttributesReservedInstanceRenewAttribute["RenewalStatus"].asString();
		reservedInstanceRenewAttributes_.push_back(reservedInstanceRenewAttributesObject);
	}

}

std::vector<DescribeReservedInstanceAutoRenewAttributeResult::ReservedInstanceRenewAttribute> DescribeReservedInstanceAutoRenewAttributeResult::getReservedInstanceRenewAttributes()const
{
	return reservedInstanceRenewAttributes_;
}

