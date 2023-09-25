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

#include <alibabacloud/dataworks-public/model/GetDIAlarmRuleResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Dataworks_public;
using namespace AlibabaCloud::Dataworks_public::Model;

GetDIAlarmRuleResult::GetDIAlarmRuleResult() :
	ServiceResult()
{}

GetDIAlarmRuleResult::GetDIAlarmRuleResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetDIAlarmRuleResult::~GetDIAlarmRuleResult()
{}

void GetDIAlarmRuleResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dIAlarmRuleNode = value["DIAlarmRule"];
	if(!dIAlarmRuleNode["DIAlarmRuleId"].isNull())
		dIAlarmRule_.dIAlarmRuleId = std::stol(dIAlarmRuleNode["DIAlarmRuleId"].asString());
	if(!dIAlarmRuleNode["DIJobId"].isNull())
		dIAlarmRule_.dIJobId = std::stol(dIAlarmRuleNode["DIJobId"].asString());
	if(!dIAlarmRuleNode["Description"].isNull())
		dIAlarmRule_.description = dIAlarmRuleNode["Description"].asString();
	if(!dIAlarmRuleNode["MetricType"].isNull())
		dIAlarmRule_.metricType = dIAlarmRuleNode["MetricType"].asString();
	if(!dIAlarmRuleNode["Enabled"].isNull())
		dIAlarmRule_.enabled = dIAlarmRuleNode["Enabled"].asString() == "true";
	if(!dIAlarmRuleNode["CreatedUid"].isNull())
		dIAlarmRule_.createdUid = dIAlarmRuleNode["CreatedUid"].asString();
	if(!dIAlarmRuleNode["CreatedTime"].isNull())
		dIAlarmRule_.createdTime = std::stol(dIAlarmRuleNode["CreatedTime"].asString());
	if(!dIAlarmRuleNode["UpdatedUid"].isNull())
		dIAlarmRule_.updatedUid = dIAlarmRuleNode["UpdatedUid"].asString();
	if(!dIAlarmRuleNode["UpdatedTime"].isNull())
		dIAlarmRule_.updatedTime = std::stol(dIAlarmRuleNode["UpdatedTime"].asString());
	auto allTriggerConditionsNode = dIAlarmRuleNode["TriggerConditions"]["TriggerCondition"];
	for (auto dIAlarmRuleNodeTriggerConditionsTriggerCondition : allTriggerConditionsNode)
	{
		DIAlarmRule::TriggerCondition triggerConditionObject;
		if(!dIAlarmRuleNodeTriggerConditionsTriggerCondition["Severity"].isNull())
			triggerConditionObject.severity = dIAlarmRuleNodeTriggerConditionsTriggerCondition["Severity"].asString();
		if(!dIAlarmRuleNodeTriggerConditionsTriggerCondition["Duration"].isNull())
			triggerConditionObject.duration = std::stol(dIAlarmRuleNodeTriggerConditionsTriggerCondition["Duration"].asString());
		if(!dIAlarmRuleNodeTriggerConditionsTriggerCondition["Threshold"].isNull())
			triggerConditionObject.threshold = std::stol(dIAlarmRuleNodeTriggerConditionsTriggerCondition["Threshold"].asString());
		dIAlarmRule_.triggerConditions.push_back(triggerConditionObject);
	}
	auto notificationSettingsNode = dIAlarmRuleNode["NotificationSettings"];
	if(!notificationSettingsNode["InhibitionInterval"].isNull())
		dIAlarmRule_.notificationSettings.inhibitionInterval = std::stoi(notificationSettingsNode["InhibitionInterval"].asString());
	auto allNotificationChannelsNode = notificationSettingsNode["NotificationChannels"]["NotificationChannel"];
	for (auto notificationSettingsNodeNotificationChannelsNotificationChannel : allNotificationChannelsNode)
	{
		DIAlarmRule::NotificationSettings::NotificationChannel notificationChannelObject;
		if(!notificationSettingsNodeNotificationChannelsNotificationChannel["Severity"].isNull())
			notificationChannelObject.severity = notificationSettingsNodeNotificationChannelsNotificationChannel["Severity"].asString();
		auto allChannels = value["Channels"]["Channel"];
		for (auto value : allChannels)
			notificationChannelObject.channels.push_back(value.asString());
		dIAlarmRule_.notificationSettings.notificationChannels.push_back(notificationChannelObject);
	}
	auto allNotificationReceiversNode = notificationSettingsNode["NotificationReceivers"]["NotificationReceiver"];
	for (auto notificationSettingsNodeNotificationReceiversNotificationReceiver : allNotificationReceiversNode)
	{
		DIAlarmRule::NotificationSettings::NotificationReceiver notificationReceiverObject;
		if(!notificationSettingsNodeNotificationReceiversNotificationReceiver["ReceiverType"].isNull())
			notificationReceiverObject.receiverType = notificationSettingsNodeNotificationReceiversNotificationReceiver["ReceiverType"].asString();
		auto allReceiverValues = value["ReceiverValues"]["ReceiverValue"];
		for (auto value : allReceiverValues)
			notificationReceiverObject.receiverValues.push_back(value.asString());
		dIAlarmRule_.notificationSettings.notificationReceivers.push_back(notificationReceiverObject);
	}

}

GetDIAlarmRuleResult::DIAlarmRule GetDIAlarmRuleResult::getDIAlarmRule()const
{
	return dIAlarmRule_;
}

