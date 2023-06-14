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

#include <alibabacloud/ga/model/ListForwardingRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ga;
using namespace AlibabaCloud::Ga::Model;

ListForwardingRulesResult::ListForwardingRulesResult() :
	ServiceResult()
{}

ListForwardingRulesResult::ListForwardingRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListForwardingRulesResult::~ListForwardingRulesResult()
{}

void ListForwardingRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allForwardingRulesNode = value["ForwardingRules"]["ForwardingRulesItem"];
	for (auto valueForwardingRulesForwardingRulesItem : allForwardingRulesNode)
	{
		ForwardingRulesItem forwardingRulesObject;
		if(!valueForwardingRulesForwardingRulesItem["Priority"].isNull())
			forwardingRulesObject.priority = std::stoi(valueForwardingRulesForwardingRulesItem["Priority"].asString());
		if(!valueForwardingRulesForwardingRulesItem["ForwardingRuleId"].isNull())
			forwardingRulesObject.forwardingRuleId = valueForwardingRulesForwardingRulesItem["ForwardingRuleId"].asString();
		if(!valueForwardingRulesForwardingRulesItem["ForwardingRuleName"].isNull())
			forwardingRulesObject.forwardingRuleName = valueForwardingRulesForwardingRulesItem["ForwardingRuleName"].asString();
		if(!valueForwardingRulesForwardingRulesItem["ForwardingRuleDirection"].isNull())
			forwardingRulesObject.forwardingRuleDirection = valueForwardingRulesForwardingRulesItem["ForwardingRuleDirection"].asString();
		if(!valueForwardingRulesForwardingRulesItem["ForwardingRuleStatus"].isNull())
			forwardingRulesObject.forwardingRuleStatus = valueForwardingRulesForwardingRulesItem["ForwardingRuleStatus"].asString();
		if(!valueForwardingRulesForwardingRulesItem["ListenerId"].isNull())
			forwardingRulesObject.listenerId = valueForwardingRulesForwardingRulesItem["ListenerId"].asString();
		auto allRuleConditionsNode = valueForwardingRulesForwardingRulesItem["RuleConditions"]["RuleConditionsItem"];
		for (auto valueForwardingRulesForwardingRulesItemRuleConditionsRuleConditionsItem : allRuleConditionsNode)
		{
			ForwardingRulesItem::RuleConditionsItem ruleConditionsObject;
			if(!valueForwardingRulesForwardingRulesItemRuleConditionsRuleConditionsItem["RuleConditionType"].isNull())
				ruleConditionsObject.ruleConditionType = valueForwardingRulesForwardingRulesItemRuleConditionsRuleConditionsItem["RuleConditionType"].asString();
			if(!valueForwardingRulesForwardingRulesItemRuleConditionsRuleConditionsItem["RuleConditionValue"].isNull())
				ruleConditionsObject.ruleConditionValue = valueForwardingRulesForwardingRulesItemRuleConditionsRuleConditionsItem["RuleConditionValue"].asString();
			auto pathConfigNode = value["PathConfig"];
				auto allValues = pathConfigNode["Values"]["Values"];
				for (auto value : allValues)
					ruleConditionsObject.pathConfig.values.push_back(value.asString());
			auto hostConfigNode = value["HostConfig"];
				auto allValues1 = hostConfigNode["Values"]["Values"];
				for (auto value : allValues1)
					ruleConditionsObject.hostConfig.values1.push_back(value.asString());
			forwardingRulesObject.ruleConditions.push_back(ruleConditionsObject);
		}
		auto allRuleActionsNode = valueForwardingRulesForwardingRulesItem["RuleActions"]["RuleActionsItem"];
		for (auto valueForwardingRulesForwardingRulesItemRuleActionsRuleActionsItem : allRuleActionsNode)
		{
			ForwardingRulesItem::RuleActionsItem ruleActionsObject;
			if(!valueForwardingRulesForwardingRulesItemRuleActionsRuleActionsItem["Order"].isNull())
				ruleActionsObject.order = std::stoi(valueForwardingRulesForwardingRulesItemRuleActionsRuleActionsItem["Order"].asString());
			if(!valueForwardingRulesForwardingRulesItemRuleActionsRuleActionsItem["RuleActionType"].isNull())
				ruleActionsObject.ruleActionType = valueForwardingRulesForwardingRulesItemRuleActionsRuleActionsItem["RuleActionType"].asString();
			if(!valueForwardingRulesForwardingRulesItemRuleActionsRuleActionsItem["RuleActionValue"].isNull())
				ruleActionsObject.ruleActionValue = valueForwardingRulesForwardingRulesItemRuleActionsRuleActionsItem["RuleActionValue"].asString();
			auto forwardGroupConfigNode = value["ForwardGroupConfig"];
			auto allServerGroupTuplesNode = forwardGroupConfigNode["ServerGroupTuples"]["ServerGroupTuplesItem"];
			for (auto forwardGroupConfigNodeServerGroupTuplesServerGroupTuplesItem : allServerGroupTuplesNode)
			{
				ForwardingRulesItem::RuleActionsItem::ForwardGroupConfig::ServerGroupTuplesItem serverGroupTuplesItemObject;
				if(!forwardGroupConfigNodeServerGroupTuplesServerGroupTuplesItem["EndpointGroupId"].isNull())
					serverGroupTuplesItemObject.endpointGroupId = forwardGroupConfigNodeServerGroupTuplesServerGroupTuplesItem["EndpointGroupId"].asString();
				ruleActionsObject.forwardGroupConfig.serverGroupTuples.push_back(serverGroupTuplesItemObject);
			}
			forwardingRulesObject.ruleActions.push_back(ruleActionsObject);
		}
		forwardingRules_.push_back(forwardingRulesObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();
	if(!value["MaxResults"].isNull())
		maxResults_ = std::stoi(value["MaxResults"].asString());

}

int ListForwardingRulesResult::getTotalCount()const
{
	return totalCount_;
}

std::string ListForwardingRulesResult::getNextToken()const
{
	return nextToken_;
}

int ListForwardingRulesResult::getMaxResults()const
{
	return maxResults_;
}

std::vector<ListForwardingRulesResult::ForwardingRulesItem> ListForwardingRulesResult::getForwardingRules()const
{
	return forwardingRules_;
}

