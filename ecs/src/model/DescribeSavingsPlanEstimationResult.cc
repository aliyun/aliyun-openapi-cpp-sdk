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

#include <alibabacloud/ecs/model/DescribeSavingsPlanEstimationResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeSavingsPlanEstimationResult::DescribeSavingsPlanEstimationResult() :
	ServiceResult()
{}

DescribeSavingsPlanEstimationResult::DescribeSavingsPlanEstimationResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSavingsPlanEstimationResult::~DescribeSavingsPlanEstimationResult()
{}

void DescribeSavingsPlanEstimationResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["ResourceId"].isNull())
		resourceId_ = value["ResourceId"].asString();
	if(!value["InstanceTypeFamily"].isNull())
		instanceTypeFamily_ = value["InstanceTypeFamily"].asString();
	if(!value["CommittedAmount"].isNull())
		committedAmount_ = value["CommittedAmount"].asString();
	if(!value["Currency"].isNull())
		currency_ = value["Currency"].asString();
	if(!value["OfferingType"].isNull())
		offeringType_ = value["OfferingType"].asString();
	if(!value["PeriodUnit"].isNull())
		periodUnit_ = value["PeriodUnit"].asString();
	if(!value["Period"].isNull())
		period_ = std::stoi(value["Period"].asString());
	if(!value["PlanType"].isNull())
		planType_ = value["PlanType"].asString();
	if(!value["InstanceTypeFamilyGroup"].isNull())
		instanceTypeFamilyGroup_ = value["InstanceTypeFamilyGroup"].asString();

}

std::string DescribeSavingsPlanEstimationResult::getOfferingType()const
{
	return offeringType_;
}

std::string DescribeSavingsPlanEstimationResult::getCommittedAmount()const
{
	return committedAmount_;
}

std::string DescribeSavingsPlanEstimationResult::getResourceId()const
{
	return resourceId_;
}

std::string DescribeSavingsPlanEstimationResult::getInstanceTypeFamily()const
{
	return instanceTypeFamily_;
}

std::string DescribeSavingsPlanEstimationResult::getCurrency()const
{
	return currency_;
}

std::string DescribeSavingsPlanEstimationResult::getPlanType()const
{
	return planType_;
}

int DescribeSavingsPlanEstimationResult::getPeriod()const
{
	return period_;
}

std::string DescribeSavingsPlanEstimationResult::getInstanceTypeFamilyGroup()const
{
	return instanceTypeFamilyGroup_;
}

std::string DescribeSavingsPlanEstimationResult::getPeriodUnit()const
{
	return periodUnit_;
}

