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

#include <alibabacloud/ecd/model/DescribeSuspEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecd;
using namespace AlibabaCloud::Ecd::Model;

DescribeSuspEventsResult::DescribeSuspEventsResult() :
	ServiceResult()
{}

DescribeSuspEventsResult::DescribeSuspEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeSuspEventsResult::~DescribeSuspEventsResult()
{}

void DescribeSuspEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allSuspEventsNode = value["SuspEvents"]["SuspEvent"];
	for (auto valueSuspEventsSuspEvent : allSuspEventsNode)
	{
		SuspEvent suspEventsObject;
		if(!valueSuspEventsSuspEvent["DataSource"].isNull())
			suspEventsObject.dataSource = valueSuspEventsSuspEvent["DataSource"].asString();
		if(!valueSuspEventsSuspEvent["EventSubType"].isNull())
			suspEventsObject.eventSubType = valueSuspEventsSuspEvent["EventSubType"].asString();
		if(!valueSuspEventsSuspEvent["DesktopName"].isNull())
			suspEventsObject.desktopName = valueSuspEventsSuspEvent["DesktopName"].asString();
		if(!valueSuspEventsSuspEvent["DesktopId"].isNull())
			suspEventsObject.desktopId = valueSuspEventsSuspEvent["DesktopId"].asString();
		if(!valueSuspEventsSuspEvent["OccurrenceTime"].isNull())
			suspEventsObject.occurrenceTime = valueSuspEventsSuspEvent["OccurrenceTime"].asString();
		if(!valueSuspEventsSuspEvent["AlarmEventTypeDisplay"].isNull())
			suspEventsObject.alarmEventTypeDisplay = valueSuspEventsSuspEvent["AlarmEventTypeDisplay"].asString();
		if(!valueSuspEventsSuspEvent["AlarmUniqueInfo"].isNull())
			suspEventsObject.alarmUniqueInfo = valueSuspEventsSuspEvent["AlarmUniqueInfo"].asString();
		if(!valueSuspEventsSuspEvent["Desc"].isNull())
			suspEventsObject.desc = valueSuspEventsSuspEvent["Desc"].asString();
		if(!valueSuspEventsSuspEvent["AlarmEventNameDisplay"].isNull())
			suspEventsObject.alarmEventNameDisplay = valueSuspEventsSuspEvent["AlarmEventNameDisplay"].asString();
		if(!valueSuspEventsSuspEvent["CanCancelFault"].isNull())
			suspEventsObject.canCancelFault = valueSuspEventsSuspEvent["CanCancelFault"].asString() == "true";
		if(!valueSuspEventsSuspEvent["LastTime"].isNull())
			suspEventsObject.lastTime = valueSuspEventsSuspEvent["LastTime"].asString();
		if(!valueSuspEventsSuspEvent["OperateMsg"].isNull())
			suspEventsObject.operateMsg = valueSuspEventsSuspEvent["OperateMsg"].asString();
		if(!valueSuspEventsSuspEvent["CanBeDealOnLine"].isNull())
			suspEventsObject.canBeDealOnLine = valueSuspEventsSuspEvent["CanBeDealOnLine"].asString();
		if(!valueSuspEventsSuspEvent["AlarmEventType"].isNull())
			suspEventsObject.alarmEventType = valueSuspEventsSuspEvent["AlarmEventType"].asString();
		if(!valueSuspEventsSuspEvent["EventStatus"].isNull())
			suspEventsObject.eventStatus = std::stoi(valueSuspEventsSuspEvent["EventStatus"].asString());
		if(!valueSuspEventsSuspEvent["OperateErrorCode"].isNull())
			suspEventsObject.operateErrorCode = valueSuspEventsSuspEvent["OperateErrorCode"].asString();
		if(!valueSuspEventsSuspEvent["AlarmEventName"].isNull())
			suspEventsObject.alarmEventName = valueSuspEventsSuspEvent["AlarmEventName"].asString();
		if(!valueSuspEventsSuspEvent["Name"].isNull())
			suspEventsObject.name = valueSuspEventsSuspEvent["Name"].asString();
		if(!valueSuspEventsSuspEvent["UniqueInfo"].isNull())
			suspEventsObject.uniqueInfo = valueSuspEventsSuspEvent["UniqueInfo"].asString();
		if(!valueSuspEventsSuspEvent["Level"].isNull())
			suspEventsObject.level = valueSuspEventsSuspEvent["Level"].asString();
		if(!valueSuspEventsSuspEvent["Id"].isNull())
			suspEventsObject.id = std::stol(valueSuspEventsSuspEvent["Id"].asString());
		if(!valueSuspEventsSuspEvent["DesktopGroupId"].isNull())
			suspEventsObject.desktopGroupId = valueSuspEventsSuspEvent["DesktopGroupId"].asString();
		auto allDetailsNode = valueSuspEventsSuspEvent["Details"]["Detail"];
		for (auto valueSuspEventsSuspEventDetailsDetail : allDetailsNode)
		{
			SuspEvent::Detail detailsObject;
			if(!valueSuspEventsSuspEventDetailsDetail["Type"].isNull())
				detailsObject.type = valueSuspEventsSuspEventDetailsDetail["Type"].asString();
			if(!valueSuspEventsSuspEventDetailsDetail["Value"].isNull())
				detailsObject.value = valueSuspEventsSuspEventDetailsDetail["Value"].asString();
			if(!valueSuspEventsSuspEventDetailsDetail["NameDisplay"].isNull())
				detailsObject.nameDisplay = valueSuspEventsSuspEventDetailsDetail["NameDisplay"].asString();
			if(!valueSuspEventsSuspEventDetailsDetail["Name"].isNull())
				detailsObject.name = valueSuspEventsSuspEventDetailsDetail["Name"].asString();
			if(!valueSuspEventsSuspEventDetailsDetail["ValueDisplay"].isNull())
				detailsObject.valueDisplay = valueSuspEventsSuspEventDetailsDetail["ValueDisplay"].asString();
			suspEventsObject.details.push_back(detailsObject);
		}
		suspEvents_.push_back(suspEventsObject);
	}
	if(!value["CurrentPage"].isNull())
		currentPage_ = std::stoi(value["CurrentPage"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = value["PageSize"].asString();
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeSuspEventsResult::getTotalCount()const
{
	return totalCount_;
}

std::string DescribeSuspEventsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeSuspEventsResult::getCurrentPage()const
{
	return currentPage_;
}

std::vector<DescribeSuspEventsResult::SuspEvent> DescribeSuspEventsResult::getSuspEvents()const
{
	return suspEvents_;
}

