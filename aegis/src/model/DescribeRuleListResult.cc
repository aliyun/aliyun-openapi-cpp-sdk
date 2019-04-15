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
	auto allRules = value["Rules"]["RulesItem"];
	for (auto value : allRules)
	{
		RulesItem rulesObject;
		if(!value["WarnLevel"].isNull())
			rulesObject.warnLevel = value["WarnLevel"].asString();
		if(!value["Modified"].isNull())
			rulesObject.modified = std::stol(value["Modified"].asString());
		if(!value["Create"].isNull())
			rulesObject.create = std::stol(value["Create"].asString());
		if(!value["RuleName"].isNull())
			rulesObject.ruleName = value["RuleName"].asString();
		if(!value["Description"].isNull())
			rulesObject.description = value["Description"].asString();
		if(!value["Id"].isNull())
			rulesObject.id = std::stoi(value["Id"].asString());
		if(!value["DataSourceId"].isNull())
			rulesObject.dataSourceId = std::stoi(value["DataSourceId"].asString());
		if(!value["Expressions"].isNull())
			rulesObject.expressions = value["Expressions"].asString();
		if(!value["Actions"].isNull())
			rulesObject.actions = value["Actions"].asString();
		if(!value["StatisticsRules"].isNull())
			rulesObject.statisticsRules = value["StatisticsRules"].asString();
		if(!value["NeedGroup"].isNull())
			rulesObject.needGroup = value["NeedGroup"].asString() == "true";
		if(!value["StatusCode"].isNull())
			rulesObject.statusCode = value["StatusCode"].asString();
		auto allRuleGroups = value["RuleGroups"]["RuleGroup"];
		for (auto value : allRuleGroups)
		{
			RulesItem::RuleGroup ruleGroupsObject;
			if(!value["GroupName"].isNull())
				ruleGroupsObject.groupName = value["GroupName"].asString();
			if(!value["RuleNum"].isNull())
				ruleGroupsObject.ruleNum = std::stoi(value["RuleNum"].asString());
			if(!value["Modified"].isNull())
				ruleGroupsObject.modified = std::stol(value["Modified"].asString());
			if(!value["Create"].isNull())
				ruleGroupsObject.create = std::stol(value["Create"].asString());
			if(!value["Description"].isNull())
				ruleGroupsObject.description = value["Description"].asString();
			if(!value["Id"].isNull())
				ruleGroupsObject.id = std::stoi(value["Id"].asString());
			if(!value["AliUid"].isNull())
				ruleGroupsObject.aliUid = std::stoi(value["AliUid"].asString());
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

