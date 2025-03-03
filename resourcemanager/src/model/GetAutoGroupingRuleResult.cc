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

#include <alibabacloud/resourcemanager/model/GetAutoGroupingRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ResourceManager;
using namespace AlibabaCloud::ResourceManager::Model;

GetAutoGroupingRuleResult::GetAutoGroupingRuleResult() :
	ServiceResult()
{}

GetAutoGroupingRuleResult::GetAutoGroupingRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAutoGroupingRuleResult::~GetAutoGroupingRuleResult()
{}

void GetAutoGroupingRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto ruleNode = value["Rule"];
	if(!ruleNode["CreateTime"].isNull())
		rule_.createTime = ruleNode["CreateTime"].asString();
	if(!ruleNode["ExcludeRegionIdsScope"].isNull())
		rule_.excludeRegionIdsScope = ruleNode["ExcludeRegionIdsScope"].asString();
	if(!ruleNode["ExcludeResourceGroupIdsScope"].isNull())
		rule_.excludeResourceGroupIdsScope = ruleNode["ExcludeResourceGroupIdsScope"].asString();
	if(!ruleNode["ExcludeResourceIdsScope"].isNull())
		rule_.excludeResourceIdsScope = ruleNode["ExcludeResourceIdsScope"].asString();
	if(!ruleNode["ExcludeResourceTypesScope"].isNull())
		rule_.excludeResourceTypesScope = ruleNode["ExcludeResourceTypesScope"].asString();
	if(!ruleNode["ModifyTime"].isNull())
		rule_.modifyTime = ruleNode["ModifyTime"].asString();
	if(!ruleNode["RegionIdsScope"].isNull())
		rule_.regionIdsScope = ruleNode["RegionIdsScope"].asString();
	if(!ruleNode["ResourceGroupIdsScope"].isNull())
		rule_.resourceGroupIdsScope = ruleNode["ResourceGroupIdsScope"].asString();
	if(!ruleNode["ResourceIdsScope"].isNull())
		rule_.resourceIdsScope = ruleNode["ResourceIdsScope"].asString();
	if(!ruleNode["ResourceTypesScope"].isNull())
		rule_.resourceTypesScope = ruleNode["ResourceTypesScope"].asString();
	if(!ruleNode["RuleDesc"].isNull())
		rule_.ruleDesc = ruleNode["RuleDesc"].asString();
	if(!ruleNode["RuleId"].isNull())
		rule_.ruleId = ruleNode["RuleId"].asString();
	if(!ruleNode["RuleName"].isNull())
		rule_.ruleName = ruleNode["RuleName"].asString();
	if(!ruleNode["RuleType"].isNull())
		rule_.ruleType = ruleNode["RuleType"].asString();
	auto allRuleContentsNode = ruleNode["RuleContents"]["RuleContent"];
	for (auto ruleNodeRuleContentsRuleContent : allRuleContentsNode)
	{
		Rule::RuleContent ruleContentObject;
		if(!ruleNodeRuleContentsRuleContent["AutoGroupingScopeCondition"].isNull())
			ruleContentObject.autoGroupingScopeCondition = ruleNodeRuleContentsRuleContent["AutoGroupingScopeCondition"].asString();
		if(!ruleNodeRuleContentsRuleContent["RuleContentId"].isNull())
			ruleContentObject.ruleContentId = ruleNodeRuleContentsRuleContent["RuleContentId"].asString();
		if(!ruleNodeRuleContentsRuleContent["TargetResourceGroupCondition"].isNull())
			ruleContentObject.targetResourceGroupCondition = ruleNodeRuleContentsRuleContent["TargetResourceGroupCondition"].asString();
		rule_.ruleContents.push_back(ruleContentObject);
	}

}

GetAutoGroupingRuleResult::Rule GetAutoGroupingRuleResult::getRule()const
{
	return rule_;
}

