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

#include <alibabacloud/dataworks-public/model/ListDIAlarmRulesResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

ListDIAlarmRulesResult::ListDIAlarmRulesResult() :
	ServiceResult()
{}

ListDIAlarmRulesResult::ListDIAlarmRulesResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListDIAlarmRulesResult::~ListDIAlarmRulesResult()
{}

void ListDIAlarmRulesResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dIAlarmRulePagingNode = value["DIAlarmRulePaging"];
	if(!dIAlarmRulePagingNode["TotalCount"].isNull())
		dIAlarmRulePaging_.totalCount = std::stol(dIAlarmRulePagingNode["TotalCount"].asString());
	if(!dIAlarmRulePagingNode["PageNumber"].isNull())
		dIAlarmRulePaging_.pageNumber = std::stol(dIAlarmRulePagingNode["PageNumber"].asString());
	if(!dIAlarmRulePagingNode["PageSize"].isNull())
		dIAlarmRulePaging_.pageSize = std::stol(dIAlarmRulePagingNode["PageSize"].asString());
	auto allDIJobAlarmRulesNode = dIAlarmRulePagingNode["DIJobAlarmRules"]["DIJobAlarmRule"];
	for (auto dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRule : allDIJobAlarmRulesNode)
	{
		DIAlarmRulePaging::DIJobAlarmRule dIJobAlarmRuleObject;
		if(!dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRule["DIAlarmRuleId"].isNull())
			dIJobAlarmRuleObject.dIAlarmRuleId = std::stol(dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRule["DIAlarmRuleId"].asString());
		if(!dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRule["DIJobId"].isNull())
			dIJobAlarmRuleObject.dIJobId = std::stol(dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRule["DIJobId"].asString());
		if(!dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRule["Description"].isNull())
			dIJobAlarmRuleObject.description = dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRule["Description"].asString();
		if(!dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRule["MetricType"].isNull())
			dIJobAlarmRuleObject.metricType = dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRule["MetricType"].asString();
		if(!dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRule["Enabled"].isNull())
			dIJobAlarmRuleObject.enabled = dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRule["Enabled"].asString() == "true";
		auto allTriggerConditionsNode = dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRule["TriggerConditions"]["TriggerCondition"];
		for (auto dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRuleTriggerConditionsTriggerCondition : allTriggerConditionsNode)
		{
			DIAlarmRulePaging::DIJobAlarmRule::TriggerCondition triggerConditionsObject;
			if(!dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRuleTriggerConditionsTriggerCondition["Severity"].isNull())
				triggerConditionsObject.severity = dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRuleTriggerConditionsTriggerCondition["Severity"].asString();
			if(!dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRuleTriggerConditionsTriggerCondition["Duration"].isNull())
				triggerConditionsObject.duration = std::stol(dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRuleTriggerConditionsTriggerCondition["Duration"].asString());
			if(!dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRuleTriggerConditionsTriggerCondition["Threshold"].isNull())
				triggerConditionsObject.threshold = std::stol(dIAlarmRulePagingNodeDIJobAlarmRulesDIJobAlarmRuleTriggerConditionsTriggerCondition["Threshold"].asString());
			dIJobAlarmRuleObject.triggerConditions.push_back(triggerConditionsObject);
		}
		auto notificationSettingsNode = value["NotificationSettings"];
		if(!notificationSettingsNode["InhibitionInterval"].isNull())
			dIJobAlarmRuleObject.notificationSettings.inhibitionInterval = std::stoi(notificationSettingsNode["InhibitionInterval"].asString());
		auto allNotificationChannelsNode = notificationSettingsNode["NotificationChannels"]["NotificationChannel"];
		for (auto notificationSettingsNodeNotificationChannelsNotificationChannel : allNotificationChannelsNode)
		{
			DIAlarmRulePaging::DIJobAlarmRule::NotificationSettings::NotificationChannel notificationChannelObject;
			if(!notificationSettingsNodeNotificationChannelsNotificationChannel["Severity"].isNull())
				notificationChannelObject.severity = notificationSettingsNodeNotificationChannelsNotificationChannel["Severity"].asString();
			auto allChannels = value["Channels"]["Channel"];
			for (auto value : allChannels)
				notificationChannelObject.channels.push_back(value.asString());
			dIJobAlarmRuleObject.notificationSettings.notificationChannels.push_back(notificationChannelObject);
		}
		auto allNotificationReceiversNode = notificationSettingsNode["NotificationReceivers"]["NotificationReceiver"];
		for (auto notificationSettingsNodeNotificationReceiversNotificationReceiver : allNotificationReceiversNode)
		{
			DIAlarmRulePaging::DIJobAlarmRule::NotificationSettings::NotificationReceiver notificationReceiverObject;
			if(!notificationSettingsNodeNotificationReceiversNotificationReceiver["ReceiverType"].isNull())
				notificationReceiverObject.receiverType = notificationSettingsNodeNotificationReceiversNotificationReceiver["ReceiverType"].asString();
			auto allReceiverValues = value["ReceiverValues"]["ReceiverValue"];
			for (auto value : allReceiverValues)
				notificationReceiverObject.receiverValues.push_back(value.asString());
			dIJobAlarmRuleObject.notificationSettings.notificationReceivers.push_back(notificationReceiverObject);
		}
		dIAlarmRulePaging_.dIJobAlarmRules.push_back(dIJobAlarmRuleObject);
	}

}

ListDIAlarmRulesResult::DIAlarmRulePaging ListDIAlarmRulesResult::getDIAlarmRulePaging()const
{
	return dIAlarmRulePaging_;
}

