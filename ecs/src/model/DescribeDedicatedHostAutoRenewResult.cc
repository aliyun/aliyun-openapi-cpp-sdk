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

#include <alibabacloud/ecs/model/DescribeDedicatedHostAutoRenewResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDedicatedHostAutoRenewResult::DescribeDedicatedHostAutoRenewResult() :
	ServiceResult()
{}

DescribeDedicatedHostAutoRenewResult::DescribeDedicatedHostAutoRenewResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDedicatedHostAutoRenewResult::~DescribeDedicatedHostAutoRenewResult()
{}

void DescribeDedicatedHostAutoRenewResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDedicatedHostRenewAttributesNode = value["DedicatedHostRenewAttributes"]["DedicatedHostRenewAttribute"];
	for (auto valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute : allDedicatedHostRenewAttributesNode)
	{
		DedicatedHostRenewAttribute dedicatedHostRenewAttributesObject;
		if(!valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute["PeriodUnit"].isNull())
			dedicatedHostRenewAttributesObject.periodUnit = valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute["PeriodUnit"].asString();
		if(!valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute["Duration"].isNull())
			dedicatedHostRenewAttributesObject.duration = std::stoi(valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute["Duration"].asString());
		if(!valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute["DedicatedHostId"].isNull())
			dedicatedHostRenewAttributesObject.dedicatedHostId = valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute["DedicatedHostId"].asString();
		if(!valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute["RenewalStatus"].isNull())
			dedicatedHostRenewAttributesObject.renewalStatus = valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute["RenewalStatus"].asString();
		if(!valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute["AutoRenewEnabled"].isNull())
			dedicatedHostRenewAttributesObject.autoRenewEnabled = valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute["AutoRenewEnabled"].asString() == "true";
		if(!valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute["AutoRenewWithEcs"].isNull())
			dedicatedHostRenewAttributesObject.autoRenewWithEcs = valueDedicatedHostRenewAttributesDedicatedHostRenewAttribute["AutoRenewWithEcs"].asString();
		dedicatedHostRenewAttributes_.push_back(dedicatedHostRenewAttributesObject);
	}

}

std::vector<DescribeDedicatedHostAutoRenewResult::DedicatedHostRenewAttribute> DescribeDedicatedHostAutoRenewResult::getDedicatedHostRenewAttributes()const
{
	return dedicatedHostRenewAttributes_;
}

