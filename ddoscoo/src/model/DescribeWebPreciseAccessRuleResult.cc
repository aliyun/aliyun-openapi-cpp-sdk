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

#include <alibabacloud/ddoscoo/model/DescribeWebPreciseAccessRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeWebPreciseAccessRuleResult::DescribeWebPreciseAccessRuleResult() :
	ServiceResult()
{}

DescribeWebPreciseAccessRuleResult::DescribeWebPreciseAccessRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeWebPreciseAccessRuleResult::~DescribeWebPreciseAccessRuleResult()
{}

void DescribeWebPreciseAccessRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allPreciseAccessConfigListNode = value["PreciseAccessConfigList"]["PreciseAccessConfig"];
	for (auto valuePreciseAccessConfigListPreciseAccessConfig : allPreciseAccessConfigListNode)
	{
		PreciseAccessConfig preciseAccessConfigListObject;
		if(!valuePreciseAccessConfigListPreciseAccessConfig["Domain"].isNull())
			preciseAccessConfigListObject.domain = valuePreciseAccessConfigListPreciseAccessConfig["Domain"].asString();
		auto allRuleListNode = valuePreciseAccessConfigListPreciseAccessConfig["RuleList"]["Rule"];
		for (auto valuePreciseAccessConfigListPreciseAccessConfigRuleListRule : allRuleListNode)
		{
			PreciseAccessConfig::Rule ruleListObject;
			if(!valuePreciseAccessConfigListPreciseAccessConfigRuleListRule["Action"].isNull())
				ruleListObject.action = valuePreciseAccessConfigListPreciseAccessConfigRuleListRule["Action"].asString();
			if(!valuePreciseAccessConfigListPreciseAccessConfigRuleListRule["Owner"].isNull())
				ruleListObject.owner = valuePreciseAccessConfigListPreciseAccessConfigRuleListRule["Owner"].asString();
			if(!valuePreciseAccessConfigListPreciseAccessConfigRuleListRule["Expires"].isNull())
				ruleListObject.expires = std::stol(valuePreciseAccessConfigListPreciseAccessConfigRuleListRule["Expires"].asString());
			if(!valuePreciseAccessConfigListPreciseAccessConfigRuleListRule["Name"].isNull())
				ruleListObject.name = valuePreciseAccessConfigListPreciseAccessConfigRuleListRule["Name"].asString();
			auto allConditionListNode = valuePreciseAccessConfigListPreciseAccessConfigRuleListRule["ConditionList"]["Condition"];
			for (auto valuePreciseAccessConfigListPreciseAccessConfigRuleListRuleConditionListCondition : allConditionListNode)
			{
				PreciseAccessConfig::Rule::Condition conditionListObject;
				if(!valuePreciseAccessConfigListPreciseAccessConfigRuleListRuleConditionListCondition["MatchMethod"].isNull())
					conditionListObject.matchMethod = valuePreciseAccessConfigListPreciseAccessConfigRuleListRuleConditionListCondition["MatchMethod"].asString();
				if(!valuePreciseAccessConfigListPreciseAccessConfigRuleListRuleConditionListCondition["Field"].isNull())
					conditionListObject.field = valuePreciseAccessConfigListPreciseAccessConfigRuleListRuleConditionListCondition["Field"].asString();
				if(!valuePreciseAccessConfigListPreciseAccessConfigRuleListRuleConditionListCondition["Content"].isNull())
					conditionListObject.content = valuePreciseAccessConfigListPreciseAccessConfigRuleListRuleConditionListCondition["Content"].asString();
				if(!valuePreciseAccessConfigListPreciseAccessConfigRuleListRuleConditionListCondition["HeaderName"].isNull())
					conditionListObject.headerName = valuePreciseAccessConfigListPreciseAccessConfigRuleListRuleConditionListCondition["HeaderName"].asString();
				auto allContentList = value["ContentList"]["ContentList"];
				for (auto value : allContentList)
					conditionListObject.contentList.push_back(value.asString());
				ruleListObject.conditionList.push_back(conditionListObject);
			}
			preciseAccessConfigListObject.ruleList.push_back(ruleListObject);
		}
		preciseAccessConfigList_.push_back(preciseAccessConfigListObject);
	}

}

std::vector<DescribeWebPreciseAccessRuleResult::PreciseAccessConfig> DescribeWebPreciseAccessRuleResult::getPreciseAccessConfigList()const
{
	return preciseAccessConfigList_;
}

