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

#include <alibabacloud/arms/model/ListAlertEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListAlertEventsResult::ListAlertEventsResult() :
	ServiceResult()
{}

ListAlertEventsResult::ListAlertEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlertEventsResult::~ListAlertEventsResult()
{}

void ListAlertEventsResult::parse(const std::string &payload)
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
	auto allEventsNode = pageBeanNode["Events"]["eventsItem"];
	for (auto pageBeanNodeEventseventsItem : allEventsNode)
	{
		PageBean::EventsItem eventsItemObject;
		if(!pageBeanNodeEventseventsItem["AlertName"].isNull())
			eventsItemObject.alertName = pageBeanNodeEventseventsItem["AlertName"].asString();
		if(!pageBeanNodeEventseventsItem["Severity"].isNull())
			eventsItemObject.severity = pageBeanNodeEventseventsItem["Severity"].asString();
		if(!pageBeanNodeEventseventsItem["Status"].isNull())
			eventsItemObject.status = pageBeanNodeEventseventsItem["Status"].asString();
		if(!pageBeanNodeEventseventsItem["StartTime"].isNull())
			eventsItemObject.startTime = pageBeanNodeEventseventsItem["StartTime"].asString();
		if(!pageBeanNodeEventseventsItem["EndTime"].isNull())
			eventsItemObject.endTime = pageBeanNodeEventseventsItem["EndTime"].asString();
		if(!pageBeanNodeEventseventsItem["ReceiveTime"].isNull())
			eventsItemObject.receiveTime = pageBeanNodeEventseventsItem["ReceiveTime"].asString();
		if(!pageBeanNodeEventseventsItem["IntegrationName"].isNull())
			eventsItemObject.integrationName = pageBeanNodeEventseventsItem["IntegrationName"].asString();
		if(!pageBeanNodeEventseventsItem["IntegrationType"].isNull())
			eventsItemObject.integrationType = pageBeanNodeEventseventsItem["IntegrationType"].asString();
		if(!pageBeanNodeEventseventsItem["GeneratorURL"].isNull())
			eventsItemObject.generatorURL = pageBeanNodeEventseventsItem["GeneratorURL"].asString();
		if(!pageBeanNodeEventseventsItem["Description"].isNull())
			eventsItemObject.description = pageBeanNodeEventseventsItem["Description"].asString();
		if(!pageBeanNodeEventseventsItem["Annotations"].isNull())
			eventsItemObject.annotations = pageBeanNodeEventseventsItem["Annotations"].asString();
		if(!pageBeanNodeEventseventsItem["Labels"].isNull())
			eventsItemObject.labels = pageBeanNodeEventseventsItem["Labels"].asString();
		if(!pageBeanNodeEventseventsItem["HandlerName"].isNull())
			eventsItemObject.handlerName = pageBeanNodeEventseventsItem["HandlerName"].asString();
		if(!pageBeanNodeEventseventsItem["TriggerCount"].isNull())
			eventsItemObject.triggerCount = std::stol(pageBeanNodeEventseventsItem["TriggerCount"].asString());
		auto allAlarmsNode = pageBeanNodeEventseventsItem["Alarms"]["alarmsItem"];
		for (auto pageBeanNodeEventseventsItemAlarmsalarmsItem : allAlarmsNode)
		{
			PageBean::EventsItem::AlarmsItem alarmsObject;
			if(!pageBeanNodeEventseventsItemAlarmsalarmsItem["AlarmId"].isNull())
				alarmsObject.alarmId = std::stol(pageBeanNodeEventseventsItemAlarmsalarmsItem["AlarmId"].asString());
			if(!pageBeanNodeEventseventsItemAlarmsalarmsItem["AlarmName"].isNull())
				alarmsObject.alarmName = pageBeanNodeEventseventsItemAlarmsalarmsItem["AlarmName"].asString();
			if(!pageBeanNodeEventseventsItemAlarmsalarmsItem["State"].isNull())
				alarmsObject.state = std::stoi(pageBeanNodeEventseventsItemAlarmsalarmsItem["State"].asString());
			if(!pageBeanNodeEventseventsItemAlarmsalarmsItem["CreateTime"].isNull())
				alarmsObject.createTime = pageBeanNodeEventseventsItemAlarmsalarmsItem["CreateTime"].asString();
			eventsItemObject.alarms.push_back(alarmsObject);
		}
		auto allNotificationPoliciesNode = pageBeanNodeEventseventsItem["NotificationPolicies"]["NotificationPolicy"];
		for (auto pageBeanNodeEventseventsItemNotificationPoliciesNotificationPolicy : allNotificationPoliciesNode)
		{
			PageBean::EventsItem::NotificationPolicy notificationPoliciesObject;
			if(!pageBeanNodeEventseventsItemNotificationPoliciesNotificationPolicy["Id"].isNull())
				notificationPoliciesObject.id = std::stol(pageBeanNodeEventseventsItemNotificationPoliciesNotificationPolicy["Id"].asString());
			if(!pageBeanNodeEventseventsItemNotificationPoliciesNotificationPolicy["Name"].isNull())
				notificationPoliciesObject.name = pageBeanNodeEventseventsItemNotificationPoliciesNotificationPolicy["Name"].asString();
			eventsItemObject.notificationPolicies.push_back(notificationPoliciesObject);
		}
		pageBean_.events.push_back(eventsItemObject);
	}

}

ListAlertEventsResult::PageBean ListAlertEventsResult::getPageBean()const
{
	return pageBean_;
}

