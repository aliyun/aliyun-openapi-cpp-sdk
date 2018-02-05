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

#include <alibabacloud/ess/model/DescribeScalingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ess;
using namespace AlibabaCloud::Ess::Model;

DescribeScalingRulesResult::DescribeScalingRulesResult() :
	ServiceResult()
{}

DescribeScalingRulesResult::DescribeScalingRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeScalingRulesResult::~DescribeScalingRulesResult()
{}

void DescribeScalingRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allScalingRules = value["ScalingRules"]["ScalingRule"];
	for (auto value : allScalingRules)
	{
		ScalingRule scalingRulesObject;
		if(!value["ScalingRuleId"].isNull())
			scalingRulesObject.scalingRuleId = value["ScalingRuleId"].asString();
		if(!value["ScalingGroupId"].isNull())
			scalingRulesObject.scalingGroupId = value["ScalingGroupId"].asString();
		if(!value["ScalingRuleName"].isNull())
			scalingRulesObject.scalingRuleName = value["ScalingRuleName"].asString();
		if(!value["Cooldown"].isNull())
			scalingRulesObject.cooldown = std::stoi(value["Cooldown"].asString());
		if(!value["AdjustmentType"].isNull())
			scalingRulesObject.adjustmentType = value["AdjustmentType"].asString();
		if(!value["AdjustmentValue"].isNull())
			scalingRulesObject.adjustmentValue = std::stoi(value["AdjustmentValue"].asString());
		if(!value["MinSize"].isNull())
			scalingRulesObject.minSize = std::stoi(value["MinSize"].asString());
		if(!value["MaxSize"].isNull())
			scalingRulesObject.maxSize = std::stoi(value["MaxSize"].asString());
		if(!value["ScalingRuleAri"].isNull())
			scalingRulesObject.scalingRuleAri = value["ScalingRuleAri"].asString();
		scalingRules_.push_back(scalingRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

std::vector<DescribeScalingRulesResult::ScalingRule> DescribeScalingRulesResult::getScalingRules()const
{
	return scalingRules_;
}

int DescribeScalingRulesResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeScalingRulesResult::getPageSize()const
{
	return pageSize_;
}

int DescribeScalingRulesResult::getPageNumber()const
{
	return pageNumber_;
}

