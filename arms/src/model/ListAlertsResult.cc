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

#include <alibabacloud/arms/model/ListAlertsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ARMS;
using namespace AlibabaCloud::ARMS::Model;

ListAlertsResult::ListAlertsResult() :
	ServiceResult()
{}

ListAlertsResult::ListAlertsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListAlertsResult::~ListAlertsResult()
{}

void ListAlertsResult::parse(const std::string &payload)
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
	auto allListAlertsNode = pageBeanNode["ListAlerts"]["listAlertsItem"];
	for (auto pageBeanNodeListAlertslistAlertsItem : allListAlertsNode)
	{
		PageBean::ListAlertsItem listAlertsItemObject;
		if(!pageBeanNodeListAlertslistAlertsItem["AlertName"].isNull())
			listAlertsItemObject.alertName = pageBeanNodeListAlertslistAlertsItem["AlertName"].asString();
		if(!pageBeanNodeListAlertslistAlertsItem["Severity"].isNull())
			listAlertsItemObject.severity = pageBeanNodeListAlertslistAlertsItem["Severity"].asString();
		if(!pageBeanNodeListAlertslistAlertsItem["State"].isNull())
			listAlertsItemObject.state = std::stol(pageBeanNodeListAlertslistAlertsItem["State"].asString());
		if(!pageBeanNodeListAlertslistAlertsItem["DispatchRuleId"].isNull())
			listAlertsItemObject.dispatchRuleId = std::stof(pageBeanNodeListAlertslistAlertsItem["DispatchRuleId"].asString());
		if(!pageBeanNodeListAlertslistAlertsItem["DispatchRuleName"].isNull())
			listAlertsItemObject.dispatchRuleName = pageBeanNodeListAlertslistAlertsItem["DispatchRuleName"].asString();
		if(!pageBeanNodeListAlertslistAlertsItem["CreateTime"].isNull())
			listAlertsItemObject.createTime = pageBeanNodeListAlertslistAlertsItem["CreateTime"].asString();
		if(!pageBeanNodeListAlertslistAlertsItem["AlertId"].isNull())
			listAlertsItemObject.alertId = std::stol(pageBeanNodeListAlertslistAlertsItem["AlertId"].asString());
		if(!pageBeanNodeListAlertslistAlertsItem["Solution"].isNull())
			listAlertsItemObject.solution = pageBeanNodeListAlertslistAlertsItem["Solution"].asString();
		if(!pageBeanNodeListAlertslistAlertsItem["Owner"].isNull())
			listAlertsItemObject.owner = pageBeanNodeListAlertslistAlertsItem["Owner"].asString();
		if(!pageBeanNodeListAlertslistAlertsItem["Handler"].isNull())
			listAlertsItemObject.handler = pageBeanNodeListAlertslistAlertsItem["Handler"].asString();
		if(!pageBeanNodeListAlertslistAlertsItem["AcknowledgeTime"].isNull())
			listAlertsItemObject.acknowledgeTime = std::stol(pageBeanNodeListAlertslistAlertsItem["AcknowledgeTime"].asString());
		if(!pageBeanNodeListAlertslistAlertsItem["RecoverTime"].isNull())
			listAlertsItemObject.recoverTime = std::stol(pageBeanNodeListAlertslistAlertsItem["RecoverTime"].asString());
		if(!pageBeanNodeListAlertslistAlertsItem["NotifyRobots"].isNull())
			listAlertsItemObject.notifyRobots = pageBeanNodeListAlertslistAlertsItem["NotifyRobots"].asString();
		if(!pageBeanNodeListAlertslistAlertsItem["Describe"].isNull())
			listAlertsItemObject.describe = pageBeanNodeListAlertslistAlertsItem["Describe"].asString();
		auto allActivitiesNode = pageBeanNodeListAlertslistAlertsItem["Activities"]["activitiesItem"];
		for (auto pageBeanNodeListAlertslistAlertsItemActivitiesactivitiesItem : allActivitiesNode)
		{
			PageBean::ListAlertsItem::ActivitiesItem activitiesObject;
			if(!pageBeanNodeListAlertslistAlertsItemActivitiesactivitiesItem["Time"].isNull())
				activitiesObject.time = pageBeanNodeListAlertslistAlertsItemActivitiesactivitiesItem["Time"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemActivitiesactivitiesItem["Type"].isNull())
				activitiesObject.type = std::stol(pageBeanNodeListAlertslistAlertsItemActivitiesactivitiesItem["Type"].asString());
			if(!pageBeanNodeListAlertslistAlertsItemActivitiesactivitiesItem["HandlerName"].isNull())
				activitiesObject.handlerName = pageBeanNodeListAlertslistAlertsItemActivitiesactivitiesItem["HandlerName"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemActivitiesactivitiesItem["Description"].isNull())
				activitiesObject.description = pageBeanNodeListAlertslistAlertsItemActivitiesactivitiesItem["Description"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemActivitiesactivitiesItem["Content"].isNull())
				activitiesObject.content = pageBeanNodeListAlertslistAlertsItemActivitiesactivitiesItem["Content"].asString();
			listAlertsItemObject.activities.push_back(activitiesObject);
		}
		auto allAlertEventsNode = pageBeanNodeListAlertslistAlertsItem["AlertEvents"]["alertEventsItem"];
		for (auto pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem : allAlertEventsNode)
		{
			PageBean::ListAlertsItem::AlertEventsItem alertEventsObject;
			if(!pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["AlertName"].isNull())
				alertEventsObject.alertName = pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["AlertName"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["Severity"].isNull())
				alertEventsObject.severity = pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["Severity"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["State"].isNull())
				alertEventsObject.state = pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["State"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["StartTime"].isNull())
				alertEventsObject.startTime = pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["StartTime"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["EndTime"].isNull())
				alertEventsObject.endTime = pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["EndTime"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["ReceiveTime"].isNull())
				alertEventsObject.receiveTime = pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["ReceiveTime"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["IntegrationName"].isNull())
				alertEventsObject.integrationName = pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["IntegrationName"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["IntegrationType"].isNull())
				alertEventsObject.integrationType = pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["IntegrationType"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["GeneratorURL"].isNull())
				alertEventsObject.generatorURL = pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["GeneratorURL"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["Description"].isNull())
				alertEventsObject.description = pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["Description"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["Annotations"].isNull())
				alertEventsObject.annotations = pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["Annotations"].asString();
			if(!pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["Labels"].isNull())
				alertEventsObject.labels = pageBeanNodeListAlertslistAlertsItemAlertEventsalertEventsItem["Labels"].asString();
			listAlertsItemObject.alertEvents.push_back(alertEventsObject);
		}
		pageBean_.listAlerts.push_back(listAlertsItemObject);
	}

}

ListAlertsResult::PageBean ListAlertsResult::getPageBean()const
{
	return pageBean_;
}

