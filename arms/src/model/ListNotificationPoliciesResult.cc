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

#include <alibabacloud/arms/model/ListNotificationPoliciesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListNotificationPoliciesResult::ListNotificationPoliciesResult() :
	ServiceResult()
{}

ListNotificationPoliciesResult::ListNotificationPoliciesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListNotificationPoliciesResult::~ListNotificationPoliciesResult()
{}

void ListNotificationPoliciesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto pageBeanNode = value["PageBean"];
	if(!pageBeanNode["Total"].isNull())
		pageBean_.total = std::stol(pageBeanNode["Total"].asString());
	if(!pageBeanNode["Page"].isNull())
		pageBean_.page = std::stol(pageBeanNode["Page"].asString());
	if(!pageBeanNode["Size"].isNull())
		pageBean_.size = std::stol(pageBeanNode["Size"].asString());
	auto allNotificationPoliciesNode = pageBeanNode["NotificationPolicies"]["policies"];
	for (auto pageBeanNodeNotificationPoliciespolicies : allNotificationPoliciesNode)
	{
		PageBean::Policies policiesObject;
		if(!pageBeanNodeNotificationPoliciespolicies["Id"].isNull())
			policiesObject.id = std::stol(pageBeanNodeNotificationPoliciespolicies["Id"].asString());
		if(!pageBeanNodeNotificationPoliciespolicies["Name"].isNull())
			policiesObject.name = pageBeanNodeNotificationPoliciespolicies["Name"].asString();
		if(!pageBeanNodeNotificationPoliciespolicies["SendRecoverMessage"].isNull())
			policiesObject.sendRecoverMessage = pageBeanNodeNotificationPoliciespolicies["SendRecoverMessage"].asString() == "true";
		if(!pageBeanNodeNotificationPoliciespolicies["Repeat"].isNull())
			policiesObject.repeat = pageBeanNodeNotificationPoliciespolicies["Repeat"].asString() == "true";
		if(!pageBeanNodeNotificationPoliciespolicies["RepeatInterval"].isNull())
			policiesObject.repeatInterval = std::stol(pageBeanNodeNotificationPoliciespolicies["RepeatInterval"].asString());
		if(!pageBeanNodeNotificationPoliciespolicies["EscalationPolicyId"].isNull())
			policiesObject.escalationPolicyId = std::stol(pageBeanNodeNotificationPoliciespolicies["EscalationPolicyId"].asString());
		if(!pageBeanNodeNotificationPoliciespolicies["IntegrationId"].isNull())
			policiesObject.integrationId = std::stol(pageBeanNodeNotificationPoliciespolicies["IntegrationId"].asString());
		if(!pageBeanNodeNotificationPoliciespolicies["DirectedMode"].isNull())
			policiesObject.directedMode = pageBeanNodeNotificationPoliciespolicies["DirectedMode"].asString() == "true";
		if(!pageBeanNodeNotificationPoliciespolicies["State"].isNull())
			policiesObject.state = pageBeanNodeNotificationPoliciespolicies["State"].asString();
		auto allMatchingRulesNode = pageBeanNodeNotificationPoliciespolicies["MatchingRules"]["matchingRulesItem"];
		for (auto pageBeanNodeNotificationPoliciespoliciesMatchingRulesmatchingRulesItem : allMatchingRulesNode)
		{
			PageBean::Policies::MatchingRulesItem matchingRulesObject;
			auto allMatchingConditionsNode = pageBeanNodeNotificationPoliciespoliciesMatchingRulesmatchingRulesItem["MatchingConditions"]["matchingConditionsItem"];
			for (auto pageBeanNodeNotificationPoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem : allMatchingConditionsNode)
			{
				PageBean::Policies::MatchingRulesItem::MatchingConditionsItem matchingConditionsObject;
				if(!pageBeanNodeNotificationPoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Key"].isNull())
					matchingConditionsObject.key = pageBeanNodeNotificationPoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Key"].asString();
				if(!pageBeanNodeNotificationPoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Value"].isNull())
					matchingConditionsObject.value = pageBeanNodeNotificationPoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Value"].asString();
				if(!pageBeanNodeNotificationPoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Operator"].isNull())
					matchingConditionsObject._operator = pageBeanNodeNotificationPoliciespoliciesMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Operator"].asString();
				matchingRulesObject.matchingConditions.push_back(matchingConditionsObject);
			}
			policiesObject.matchingRules.push_back(matchingRulesObject);
		}
		auto groupRuleNode = value["GroupRule"];
		if(!groupRuleNode["GroupWait"].isNull())
			policiesObject.groupRule.groupWait = std::stol(groupRuleNode["GroupWait"].asString());
		if(!groupRuleNode["GroupInterval"].isNull())
			policiesObject.groupRule.groupInterval = std::stol(groupRuleNode["GroupInterval"].asString());
			auto allGroupingFields = groupRuleNode["GroupingFields"]["groupingFields"];
			for (auto value : allGroupingFields)
				policiesObject.groupRule.groupingFields.push_back(value.asString());
		auto notifyRuleNode = value["NotifyRule"];
		if(!notifyRuleNode["NotifyStartTime"].isNull())
			policiesObject.notifyRule.notifyStartTime = notifyRuleNode["NotifyStartTime"].asString();
		if(!notifyRuleNode["NotifyEndTime"].isNull())
			policiesObject.notifyRule.notifyEndTime = notifyRuleNode["NotifyEndTime"].asString();
		auto allNotifyObjectsNode = notifyRuleNode["NotifyObjects"]["notifyObjectsItem"];
		for (auto notifyRuleNodeNotifyObjectsnotifyObjectsItem : allNotifyObjectsNode)
		{
			PageBean::Policies::NotifyRule::NotifyObjectsItem notifyObjectsItemObject;
			if(!notifyRuleNodeNotifyObjectsnotifyObjectsItem["NotifyObjectType"].isNull())
				notifyObjectsItemObject.notifyObjectType = notifyRuleNodeNotifyObjectsnotifyObjectsItem["NotifyObjectType"].asString();
			if(!notifyRuleNodeNotifyObjectsnotifyObjectsItem["NotifyObjectId"].isNull())
				notifyObjectsItemObject.notifyObjectId = std::stol(notifyRuleNodeNotifyObjectsnotifyObjectsItem["NotifyObjectId"].asString());
			if(!notifyRuleNodeNotifyObjectsnotifyObjectsItem["NotifyObjectName"].isNull())
				notifyObjectsItemObject.notifyObjectName = notifyRuleNodeNotifyObjectsnotifyObjectsItem["NotifyObjectName"].asString();
			auto allNotifyChannels1 = value["NotifyChannels"]["notifyChannels"];
			for (auto value : allNotifyChannels1)
				notifyObjectsItemObject.notifyChannels1.push_back(value.asString());
			policiesObject.notifyRule.notifyObjects.push_back(notifyObjectsItemObject);
		}
			auto allNotifyChannels = notifyRuleNode["NotifyChannels"]["notifyChannels"];
			for (auto value : allNotifyChannels)
				policiesObject.notifyRule.notifyChannels.push_back(value.asString());
		auto notifyTemplateNode = value["NotifyTemplate"];
		if(!notifyTemplateNode["EmailTitle"].isNull())
			policiesObject.notifyTemplate.emailTitle = notifyTemplateNode["EmailTitle"].asString();
		if(!notifyTemplateNode["EmailContent"].isNull())
			policiesObject.notifyTemplate.emailContent = notifyTemplateNode["EmailContent"].asString();
		if(!notifyTemplateNode["EmailRecoverTitle"].isNull())
			policiesObject.notifyTemplate.emailRecoverTitle = notifyTemplateNode["EmailRecoverTitle"].asString();
		if(!notifyTemplateNode["EmailRecoverContent"].isNull())
			policiesObject.notifyTemplate.emailRecoverContent = notifyTemplateNode["EmailRecoverContent"].asString();
		if(!notifyTemplateNode["SmsContent"].isNull())
			policiesObject.notifyTemplate.smsContent = notifyTemplateNode["SmsContent"].asString();
		if(!notifyTemplateNode["SmsRecoverContent"].isNull())
			policiesObject.notifyTemplate.smsRecoverContent = notifyTemplateNode["SmsRecoverContent"].asString();
		if(!notifyTemplateNode["TtsContent"].isNull())
			policiesObject.notifyTemplate.ttsContent = notifyTemplateNode["TtsContent"].asString();
		if(!notifyTemplateNode["TtsRecoverContent"].isNull())
			policiesObject.notifyTemplate.ttsRecoverContent = notifyTemplateNode["TtsRecoverContent"].asString();
		if(!notifyTemplateNode["RobotContent"].isNull())
			policiesObject.notifyTemplate.robotContent = notifyTemplateNode["RobotContent"].asString();
		pageBean_.notificationPolicies.push_back(policiesObject);
	}

}

ListNotificationPoliciesResult::PageBean ListNotificationPoliciesResult::getPageBean()const
{
	return pageBean_;
}

