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

#include <alibabacloud/arms/model/CreateOrUpdateNotificationPolicyResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

CreateOrUpdateNotificationPolicyResult::CreateOrUpdateNotificationPolicyResult() :
	ServiceResult()
{}

CreateOrUpdateNotificationPolicyResult::CreateOrUpdateNotificationPolicyResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

CreateOrUpdateNotificationPolicyResult::~CreateOrUpdateNotificationPolicyResult()
{}

void CreateOrUpdateNotificationPolicyResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto notificationPolicyNode = value["NotificationPolicy"];
	if(!notificationPolicyNode["Id"].isNull())
		notificationPolicy_.id = std::stol(notificationPolicyNode["Id"].asString());
	if(!notificationPolicyNode["Name"].isNull())
		notificationPolicy_.name = notificationPolicyNode["Name"].asString();
	if(!notificationPolicyNode["SendRecoverMessage"].isNull())
		notificationPolicy_.sendRecoverMessage = notificationPolicyNode["SendRecoverMessage"].asString() == "true";
	if(!notificationPolicyNode["EscalationPolicyId"].isNull())
		notificationPolicy_.escalationPolicyId = std::stol(notificationPolicyNode["EscalationPolicyId"].asString());
	if(!notificationPolicyNode["Repeat"].isNull())
		notificationPolicy_.repeat = notificationPolicyNode["Repeat"].asString() == "true";
	if(!notificationPolicyNode["RepeatInterval"].isNull())
		notificationPolicy_.repeatInterval = std::stol(notificationPolicyNode["RepeatInterval"].asString());
	if(!notificationPolicyNode["IntegrationId"].isNull())
		notificationPolicy_.integrationId = std::stol(notificationPolicyNode["IntegrationId"].asString());
	if(!notificationPolicyNode["DirectedMode"].isNull())
		notificationPolicy_.directedMode = notificationPolicyNode["DirectedMode"].asString() == "true";
	if(!notificationPolicyNode["State"].isNull())
		notificationPolicy_.state = notificationPolicyNode["State"].asString();
	auto allMatchingRulesNode = notificationPolicyNode["MatchingRules"]["matchingRulesItem"];
	for (auto notificationPolicyNodeMatchingRulesmatchingRulesItem : allMatchingRulesNode)
	{
		NotificationPolicy::MatchingRulesItem matchingRulesItemObject;
		auto allMatchingConditionsNode = notificationPolicyNodeMatchingRulesmatchingRulesItem["MatchingConditions"]["matchingConditionsItem"];
		for (auto notificationPolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem : allMatchingConditionsNode)
		{
			NotificationPolicy::MatchingRulesItem::MatchingConditionsItem matchingConditionsObject;
			if(!notificationPolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Key"].isNull())
				matchingConditionsObject.key = notificationPolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Key"].asString();
			if(!notificationPolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Value"].isNull())
				matchingConditionsObject.value = notificationPolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Value"].asString();
			if(!notificationPolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Operator"].isNull())
				matchingConditionsObject._operator = notificationPolicyNodeMatchingRulesmatchingRulesItemMatchingConditionsmatchingConditionsItem["Operator"].asString();
			matchingRulesItemObject.matchingConditions.push_back(matchingConditionsObject);
		}
		notificationPolicy_.matchingRules.push_back(matchingRulesItemObject);
	}
	auto groupRuleNode = notificationPolicyNode["GroupRule"];
	if(!groupRuleNode["GroupWait"].isNull())
		notificationPolicy_.groupRule.groupWait = std::stol(groupRuleNode["GroupWait"].asString());
	if(!groupRuleNode["GroupInterval"].isNull())
		notificationPolicy_.groupRule.groupInterval = std::stol(groupRuleNode["GroupInterval"].asString());
		auto allGroupingFields = groupRuleNode["GroupingFields"]["groupingFields"];
		for (auto value : allGroupingFields)
			notificationPolicy_.groupRule.groupingFields.push_back(value.asString());
	auto notifyRuleNode = notificationPolicyNode["NotifyRule"];
	if(!notifyRuleNode["NotifyStartTime"].isNull())
		notificationPolicy_.notifyRule.notifyStartTime = notifyRuleNode["NotifyStartTime"].asString();
	if(!notifyRuleNode["NotifyEndTime"].isNull())
		notificationPolicy_.notifyRule.notifyEndTime = notifyRuleNode["NotifyEndTime"].asString();
	auto allNotifyObjectsNode = notifyRuleNode["NotifyObjects"]["notifyObjectsItem"];
	for (auto notifyRuleNodeNotifyObjectsnotifyObjectsItem : allNotifyObjectsNode)
	{
		NotificationPolicy::NotifyRule::NotifyObjectsItem notifyObjectsItemObject;
		if(!notifyRuleNodeNotifyObjectsnotifyObjectsItem["NotifyObjectType"].isNull())
			notifyObjectsItemObject.notifyObjectType = notifyRuleNodeNotifyObjectsnotifyObjectsItem["NotifyObjectType"].asString();
		if(!notifyRuleNodeNotifyObjectsnotifyObjectsItem["NotifyObjectId"].isNull())
			notifyObjectsItemObject.notifyObjectId = std::stol(notifyRuleNodeNotifyObjectsnotifyObjectsItem["NotifyObjectId"].asString());
		if(!notifyRuleNodeNotifyObjectsnotifyObjectsItem["NotifyObjectName"].isNull())
			notifyObjectsItemObject.notifyObjectName = notifyRuleNodeNotifyObjectsnotifyObjectsItem["NotifyObjectName"].asString();
		auto allNotifyChannels1 = value["NotifyChannels"]["notifyChannels"];
		for (auto value : allNotifyChannels1)
			notifyObjectsItemObject.notifyChannels1.push_back(value.asString());
		notificationPolicy_.notifyRule.notifyObjects.push_back(notifyObjectsItemObject);
	}
		auto allNotifyChannels = notifyRuleNode["NotifyChannels"]["notifyChannels"];
		for (auto value : allNotifyChannels)
			notificationPolicy_.notifyRule.notifyChannels.push_back(value.asString());
	auto notifyTemplateNode = notificationPolicyNode["NotifyTemplate"];
	if(!notifyTemplateNode["EmailTitle"].isNull())
		notificationPolicy_.notifyTemplate.emailTitle = notifyTemplateNode["EmailTitle"].asString();
	if(!notifyTemplateNode["EmailContent"].isNull())
		notificationPolicy_.notifyTemplate.emailContent = notifyTemplateNode["EmailContent"].asString();
	if(!notifyTemplateNode["EmailRecoverTitle"].isNull())
		notificationPolicy_.notifyTemplate.emailRecoverTitle = notifyTemplateNode["EmailRecoverTitle"].asString();
	if(!notifyTemplateNode["EmailRecoverContent"].isNull())
		notificationPolicy_.notifyTemplate.emailRecoverContent = notifyTemplateNode["EmailRecoverContent"].asString();
	if(!notifyTemplateNode["SmsContent"].isNull())
		notificationPolicy_.notifyTemplate.smsContent = notifyTemplateNode["SmsContent"].asString();
	if(!notifyTemplateNode["SmsRecoverContent"].isNull())
		notificationPolicy_.notifyTemplate.smsRecoverContent = notifyTemplateNode["SmsRecoverContent"].asString();
	if(!notifyTemplateNode["TtsContent"].isNull())
		notificationPolicy_.notifyTemplate.ttsContent = notifyTemplateNode["TtsContent"].asString();
	if(!notifyTemplateNode["TtsRecoverContent"].isNull())
		notificationPolicy_.notifyTemplate.ttsRecoverContent = notifyTemplateNode["TtsRecoverContent"].asString();
	if(!notifyTemplateNode["RobotContent"].isNull())
		notificationPolicy_.notifyTemplate.robotContent = notifyTemplateNode["RobotContent"].asString();

}

CreateOrUpdateNotificationPolicyResult::NotificationPolicy CreateOrUpdateNotificationPolicyResult::getNotificationPolicy()const
{
	return notificationPolicy_;
}

