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

#include <alibabacloud/aegis/model/DescribeRuleListResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Aegis;
using namespace AlibabaCloud::Aegis::Model;

DescribeRuleListResult::DescribeRuleListResult() :
	ServiceResult()
{}

DescribeRuleListResult::DescribeRuleListResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRuleListResult::~DescribeRuleListResult()
{}

void DescribeRuleListResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["RulesItem"];
	for (auto valueRulesRulesItem : allRulesNode)
	{
		RulesItem rulesObject;
		if(!valueRulesRulesItem["WarnLevel"].isNull())
			rulesObject.warnLevel = valueRulesRulesItem["WarnLevel"].asString();
		if(!valueRulesRulesItem["Modified"].isNull())
			rulesObject.modified = std::stol(valueRulesRulesItem["Modified"].asString());
		if(!valueRulesRulesItem["Create"].isNull())
			rulesObject.create = std::stol(valueRulesRulesItem["Create"].asString());
		if(!valueRulesRulesItem["RuleName"].isNull())
			rulesObject.ruleName = valueRulesRulesItem["RuleName"].asString();
		if(!valueRulesRulesItem["Description"].isNull())
			rulesObject.description = valueRulesRulesItem["Description"].asString();
		if(!valueRulesRulesItem["Id"].isNull())
			rulesObject.id = std::stoi(valueRulesRulesItem["Id"].asString());
		if(!valueRulesRulesItem["DataSourceId"].isNull())
			rulesObject.dataSourceId = std::stoi(valueRulesRulesItem["DataSourceId"].asString());
		if(!valueRulesRulesItem["Expressions"].isNull())
			rulesObject.expressions = valueRulesRulesItem["Expressions"].asString();
		if(!valueRulesRulesItem["Actions"].isNull())
			rulesObject.actions = valueRulesRulesItem["Actions"].asString();
		if(!valueRulesRulesItem["StatisticsRules"].isNull())
			rulesObject.statisticsRules = valueRulesRulesItem["StatisticsRules"].asString();
		if(!valueRulesRulesItem["NeedGroup"].isNull())
			rulesObject.needGroup = valueRulesRulesItem["NeedGroup"].asString() == "true";
		if(!valueRulesRulesItem["StatusCode"].isNull())
			rulesObject.statusCode = valueRulesRulesItem["StatusCode"].asString();
		auto allRuleGroupsNode = allRulesNode["RuleGroups"]["RuleGroup"];
		for (auto allRulesNodeRuleGroupsRuleGroup : allRuleGroupsNode)
		{
			RulesItem::RuleGroup ruleGroupsObject;
			if(!allRulesNodeRuleGroupsRuleGroup["GroupName"].isNull())
				ruleGroupsObject.groupName = allRulesNodeRuleGroupsRuleGroup["GroupName"].asString();
			if(!allRulesNodeRuleGroupsRuleGroup["RuleNum"].isNull())
				ruleGroupsObject.ruleNum = std::stoi(allRulesNodeRuleGroupsRuleGroup["RuleNum"].asString());
			if(!allRulesNodeRuleGroupsRuleGroup["Modified"].isNull())
				ruleGroupsObject.modified = std::stol(allRulesNodeRuleGroupsRuleGroup["Modified"].asString());
			if(!allRulesNodeRuleGroupsRuleGroup["Create"].isNull())
				ruleGroupsObject.create = std::stol(allRulesNodeRuleGroupsRuleGroup["Create"].asString());
			if(!allRulesNodeRuleGroupsRuleGroup["Description"].isNull())
				ruleGroupsObject.description = allRulesNodeRuleGroupsRuleGroup["Description"].asString();
			if(!allRulesNodeRuleGroupsRuleGroup["Id"].isNull())
				ruleGroupsObject.id = std::stoi(allRulesNodeRuleGroupsRuleGroup["Id"].asString());
			if(!allRulesNodeRuleGroupsRuleGroup["AliUid"].isNull())
				ruleGroupsObject.aliUid = std::stoi(allRulesNodeRuleGroupsRuleGroup["AliUid"].asString());
			rulesObject.ruleGroups.push_back(ruleGroupsObject);
		}
		rules_.push_back(rulesObject);
	}
	auto pageInfoNode = value["PageInfo"];
	if(!pageInfoNode["PageSize"].isNull())
		pageInfo_.pageSize = std::stoi(pageInfoNode["PageSize"].asString());
	if(!pageInfoNode["CurrentPage"].isNull())
		pageInfo_.currentPage = std::stoi(pageInfoNode["CurrentPage"].asString());
	if(!pageInfoNode["TotalCount"].isNull())
		pageInfo_.totalCount = std::stoi(pageInfoNode["TotalCount"].asString());
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

DescribeRuleListResult::PageInfo DescribeRuleListResult::getPageInfo()const
{
	return pageInfo_;
}

std::vector<DescribeRuleListResult::RulesItem> DescribeRuleListResult::getRules()const
{
	return rules_;
}

bool DescribeRuleListResult::getSuccess()const
{
	return success_;
}

