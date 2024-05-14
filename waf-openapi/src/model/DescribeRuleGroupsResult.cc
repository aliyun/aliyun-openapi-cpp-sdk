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

#include <alibabacloud/waf-openapi/model/DescribeRuleGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Waf_openapi;
using namespace AlibabaCloud::Waf_openapi::Model;

DescribeRuleGroupsResult::DescribeRuleGroupsResult() :
	ServiceResult()
{}

DescribeRuleGroupsResult::DescribeRuleGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRuleGroupsResult::~DescribeRuleGroupsResult()
{}

void DescribeRuleGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRuleGroupsNode = value["RuleGroups"]["RuleGroupsItem"];
	for (auto valueRuleGroupsRuleGroupsItem : allRuleGroupsNode)
	{
		RuleGroupsItem ruleGroupsObject;
		if(!valueRuleGroupsRuleGroupsItem["Type"].isNull())
			ruleGroupsObject.type = std::stoi(valueRuleGroupsRuleGroupsItem["Type"].asString());
		if(!valueRuleGroupsRuleGroupsItem["RuleCnt"].isNull())
			ruleGroupsObject.ruleCnt = std::stoi(valueRuleGroupsRuleGroupsItem["RuleCnt"].asString());
		if(!valueRuleGroupsRuleGroupsItem["RuleGroupUpdateTime"].isNull())
			ruleGroupsObject.ruleGroupUpdateTime = std::stol(valueRuleGroupsRuleGroupsItem["RuleGroupUpdateTime"].asString());
		if(!valueRuleGroupsRuleGroupsItem["PolicyId"].isNull())
			ruleGroupsObject.policyId = std::stol(valueRuleGroupsRuleGroupsItem["PolicyId"].asString());
		if(!valueRuleGroupsRuleGroupsItem["Name"].isNull())
			ruleGroupsObject.name = valueRuleGroupsRuleGroupsItem["Name"].asString();
		if(!valueRuleGroupsRuleGroupsItem["TemplatePolicyId"].isNull())
			ruleGroupsObject.templatePolicyId = std::stol(valueRuleGroupsRuleGroupsItem["TemplatePolicyId"].asString());
		if(!valueRuleGroupsRuleGroupsItem["RuleGroupTemplateName"].isNull())
			ruleGroupsObject.ruleGroupTemplateName = valueRuleGroupsRuleGroupsItem["RuleGroupTemplateName"].asString();
		if(!valueRuleGroupsRuleGroupsItem["Desc"].isNull())
			ruleGroupsObject.desc = valueRuleGroupsRuleGroupsItem["Desc"].asString();
		if(!valueRuleGroupsRuleGroupsItem["WafVersion"].isNull())
			ruleGroupsObject.wafVersion = std::stol(valueRuleGroupsRuleGroupsItem["WafVersion"].asString());
		auto allDomainList = value["DomainList"]["Domain"];
		for (auto value : allDomainList)
			ruleGroupsObject.domainList.push_back(value.asString());
		ruleGroups_.push_back(ruleGroupsObject);
	}
	if(!value["TaskStatus"].isNull())
		taskStatus_ = std::stoi(value["TaskStatus"].asString());
	if(!value["Total"].isNull())
		total_ = std::stoi(value["Total"].asString());
	if(!value["WafTaskId"].isNull())
		wafTaskId_ = value["WafTaskId"].asString();

}

std::vector<DescribeRuleGroupsResult::RuleGroupsItem> DescribeRuleGroupsResult::getRuleGroups()const
{
	return ruleGroups_;
}

int DescribeRuleGroupsResult::getTotal()const
{
	return total_;
}

int DescribeRuleGroupsResult::getTaskStatus()const
{
	return taskStatus_;
}

std::string DescribeRuleGroupsResult::getWafTaskId()const
{
	return wafTaskId_;
}

