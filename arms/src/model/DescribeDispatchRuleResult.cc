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

#include <alibabacloud/arms/model/DescribeDispatchRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

DescribeDispatchRuleResult::DescribeDispatchRuleResult() :
	ServiceResult()
{}

DescribeDispatchRuleResult::DescribeDispatchRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDispatchRuleResult::~DescribeDispatchRuleResult()
{}

void DescribeDispatchRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dispatchRuleNode = value["DispatchRule"];
	if(!dispatchRuleNode["Name"].isNull())
		dispatchRule_.name = dispatchRuleNode["Name"].asString();
	if(!dispatchRuleNode["IsRecover"].isNull())
		dispatchRule_.isRecover = dispatchRuleNode["IsRecover"].asString() == "true";
	if(!dispatchRuleNode["DispatchType"].isNull())
		dispatchRule_.dispatchType = dispatchRuleNode["DispatchType"].asString();
	if(!dispatchRuleNode["State"].isNull())
		dispatchRule_.state = dispatchRuleNode["State"].asString();
	if(!dispatchRuleNode["RuleId"].isNull())
		dispatchRule_.ruleId = std::stol(dispatchRuleNode["RuleId"].asString());
	auto allGroupRulesNode = dispatchRuleNode["GroupRules"]["GroupRule"];
	for (auto dispatchRuleNodeGroupRulesGroupRule : allGroupRulesNode)
	{
		DispatchRule::GroupRule groupRuleObject;
		if(!dispatchRuleNodeGroupRulesGroupRule["RepeatInterval"].isNull())
			groupRuleObject.repeatInterval = std::stol(dispatchRuleNodeGroupRulesGroupRule["RepeatInterval"].asString());
		if(!dispatchRuleNodeGroupRulesGroupRule["GroupId"].isNull())
			groupRuleObject.groupId = std::stol(dispatchRuleNodeGroupRulesGroupRule["GroupId"].asString());
		if(!dispatchRuleNodeGroupRulesGroupRule["GroupWaitTime"].isNull())
			groupRuleObject.groupWaitTime = std::stol(dispatchRuleNodeGroupRulesGroupRule["GroupWaitTime"].asString());
		if(!dispatchRuleNodeGroupRulesGroupRule["GroupInterval"].isNull())
			groupRuleObject.groupInterval = std::stol(dispatchRuleNodeGroupRulesGroupRule["GroupInterval"].asString());
		auto allGroupingFields = value["GroupingFields"]["GroupingField"];
		for (auto value : allGroupingFields)
			groupRuleObject.groupingFields.push_back(value.asString());
		dispatchRule_.groupRules.push_back(groupRuleObject);
	}
	auto allNotifyRulesNode = dispatchRuleNode["NotifyRules"]["NotifyRule"];
	for (auto dispatchRuleNodeNotifyRulesNotifyRule : allNotifyRulesNode)
	{
		DispatchRule::NotifyRule notifyRuleObject;
		auto allNotifyObjectsNode = dispatchRuleNodeNotifyRulesNotifyRule["NotifyObjects"]["NotifyObject"];
		for (auto dispatchRuleNodeNotifyRulesNotifyRuleNotifyObjectsNotifyObject : allNotifyObjectsNode)
		{
			DispatchRule::NotifyRule::NotifyObject notifyObjectsObject;
			if(!dispatchRuleNodeNotifyRulesNotifyRuleNotifyObjectsNotifyObject["NotifyObjectId"].isNull())
				notifyObjectsObject.notifyObjectId = dispatchRuleNodeNotifyRulesNotifyRuleNotifyObjectsNotifyObject["NotifyObjectId"].asString();
			if(!dispatchRuleNodeNotifyRulesNotifyRuleNotifyObjectsNotifyObject["NotifyType"].isNull())
				notifyObjectsObject.notifyType = dispatchRuleNodeNotifyRulesNotifyRuleNotifyObjectsNotifyObject["NotifyType"].asString();
			if(!dispatchRuleNodeNotifyRulesNotifyRuleNotifyObjectsNotifyObject["Name"].isNull())
				notifyObjectsObject.name = dispatchRuleNodeNotifyRulesNotifyRuleNotifyObjectsNotifyObject["Name"].asString();
			notifyRuleObject.notifyObjects.push_back(notifyObjectsObject);
		}
		auto allNotifyChannels = value["NotifyChannels"]["NotifyChannel"];
		for (auto value : allNotifyChannels)
			notifyRuleObject.notifyChannels.push_back(value.asString());
		dispatchRule_.notifyRules.push_back(notifyRuleObject);
	}
	auto labelMatchExpressionGridNode = dispatchRuleNode["LabelMatchExpressionGrid"];
	auto allLabelMatchExpressionGroupsNode = labelMatchExpressionGridNode["LabelMatchExpressionGroups"]["LabelMatchExpressionGroup"];
	for (auto labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroup : allLabelMatchExpressionGroupsNode)
	{
		DispatchRule::LabelMatchExpressionGrid::LabelMatchExpressionGroup labelMatchExpressionGroupObject;
		auto allLabelMatchExpressionsNode = labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroup["LabelMatchExpressions"]["LabelMatchExpression"];
		for (auto labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression : allLabelMatchExpressionsNode)
		{
			DispatchRule::LabelMatchExpressionGrid::LabelMatchExpressionGroup::LabelMatchExpression labelMatchExpressionsObject;
			if(!labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression["Key"].isNull())
				labelMatchExpressionsObject.key = labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression["Key"].asString();
			if(!labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression["Value"].isNull())
				labelMatchExpressionsObject.value = labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression["Value"].asString();
			if(!labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression["Operator"].isNull())
				labelMatchExpressionsObject._operator = labelMatchExpressionGridNodeLabelMatchExpressionGroupsLabelMatchExpressionGroupLabelMatchExpressionsLabelMatchExpression["Operator"].asString();
			labelMatchExpressionGroupObject.labelMatchExpressions.push_back(labelMatchExpressionsObject);
		}
		dispatchRule_.labelMatchExpressionGrid.labelMatchExpressionGroups.push_back(labelMatchExpressionGroupObject);
	}

}

DescribeDispatchRuleResult::DispatchRule DescribeDispatchRuleResult::getDispatchRule()const
{
	return dispatchRule_;
}

