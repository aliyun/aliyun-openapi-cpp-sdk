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

#include <alibabacloud/resourcemanager/model/ListAutoGroupingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

ListAutoGroupingRulesResult::ListAutoGroupingRulesResult() :
	ServiceResult()
{}

ListAutoGroupingRulesResult::ListAutoGroupingRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAutoGroupingRulesResult::~ListAutoGroupingRulesResult()
{}

void ListAutoGroupingRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allRulesNode = value["Rules"]["Rule"];
	for (auto valueRulesRule : allRulesNode)
	{
		Rule rulesObject;
		if(!valueRulesRule["CreateTime"].isNull())
			rulesObject.createTime = valueRulesRule["CreateTime"].asString();
		if(!valueRulesRule["ExcludeRegionIdsScope"].isNull())
			rulesObject.excludeRegionIdsScope = valueRulesRule["ExcludeRegionIdsScope"].asString();
		if(!valueRulesRule["ExcludeResourceGroupIdsScope"].isNull())
			rulesObject.excludeResourceGroupIdsScope = valueRulesRule["ExcludeResourceGroupIdsScope"].asString();
		if(!valueRulesRule["ExcludeResourceIdsScope"].isNull())
			rulesObject.excludeResourceIdsScope = valueRulesRule["ExcludeResourceIdsScope"].asString();
		if(!valueRulesRule["ExcludeResourceTypesScope"].isNull())
			rulesObject.excludeResourceTypesScope = valueRulesRule["ExcludeResourceTypesScope"].asString();
		if(!valueRulesRule["ModifyTime"].isNull())
			rulesObject.modifyTime = valueRulesRule["ModifyTime"].asString();
		if(!valueRulesRule["RegionIdsScope"].isNull())
			rulesObject.regionIdsScope = valueRulesRule["RegionIdsScope"].asString();
		if(!valueRulesRule["ResourceGroupIdsScope"].isNull())
			rulesObject.resourceGroupIdsScope = valueRulesRule["ResourceGroupIdsScope"].asString();
		if(!valueRulesRule["ResourceIdsScope"].isNull())
			rulesObject.resourceIdsScope = valueRulesRule["ResourceIdsScope"].asString();
		if(!valueRulesRule["ResourceTypesScope"].isNull())
			rulesObject.resourceTypesScope = valueRulesRule["ResourceTypesScope"].asString();
		if(!valueRulesRule["RuleDesc"].isNull())
			rulesObject.ruleDesc = valueRulesRule["RuleDesc"].asString();
		if(!valueRulesRule["RuleId"].isNull())
			rulesObject.ruleId = valueRulesRule["RuleId"].asString();
		if(!valueRulesRule["RuleName"].isNull())
			rulesObject.ruleName = valueRulesRule["RuleName"].asString();
		if(!valueRulesRule["RuleType"].isNull())
			rulesObject.ruleType = valueRulesRule["RuleType"].asString();
		auto allRuleContentsNode = valueRulesRule["RuleContents"]["RuleContent"];
		for (auto valueRulesRuleRuleContentsRuleContent : allRuleContentsNode)
		{
			Rule::RuleContent ruleContentsObject;
			if(!valueRulesRuleRuleContentsRuleContent["AutoGroupingScopeCondition"].isNull())
				ruleContentsObject.autoGroupingScopeCondition = valueRulesRuleRuleContentsRuleContent["AutoGroupingScopeCondition"].asString();
			if(!valueRulesRuleRuleContentsRuleContent["RuleContentId"].isNull())
				ruleContentsObject.ruleContentId = valueRulesRuleRuleContentsRuleContent["RuleContentId"].asString();
			if(!valueRulesRuleRuleContentsRuleContent["TargetResourceGroupCondition"].isNull())
				ruleContentsObject.targetResourceGroupCondition = valueRulesRuleRuleContentsRuleContent["TargetResourceGroupCondition"].asString();
			rulesObject.ruleContents.push_back(ruleContentsObject);
		}
		rules_.push_back(rulesObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

std::string ListAutoGroupingRulesResult::getNextToken()const
{
	return nextToken_;
}

int ListAutoGroupingRulesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListAutoGroupingRulesResult::Rule> ListAutoGroupingRulesResult::getRules()const
{
	return rules_;
}

