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

#include <alibabacloud/eventbridge/model/QueryTracedEventByEventIdResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

QueryTracedEventByEventIdResult::QueryTracedEventByEventIdResult() :
	ServiceResult()
{}

QueryTracedEventByEventIdResult::QueryTracedEventByEventIdResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTracedEventByEventIdResult::~QueryTracedEventByEventIdResult()
{}

void QueryTracedEventByEventIdResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDataNode = value["Data"]["DataItem"];
	for (auto valueDataDataItem : allDataNode)
	{
		DataItem dataObject;
		if(!valueDataDataItem["NextToken"].isNull())
			dataObject.nextToken = valueDataDataItem["NextToken"].asString();
		if(!valueDataDataItem["Total"].isNull())
			dataObject.total = std::stoi(valueDataDataItem["Total"].asString());
		auto allEventsNode = valueDataDataItem["Events"]["EventsItem"];
		for (auto valueDataDataItemEventsEventsItem : allEventsNode)
		{
			DataItem::EventsItem eventsObject;
			if(!valueDataDataItemEventsEventsItem["EventId"].isNull())
				eventsObject.eventId = valueDataDataItemEventsEventsItem["EventId"].asString();
			if(!valueDataDataItemEventsEventsItem["EventBusName"].isNull())
				eventsObject.eventBusName = valueDataDataItemEventsEventsItem["EventBusName"].asString();
			if(!valueDataDataItemEventsEventsItem["EventReceivedTime"].isNull())
				eventsObject.eventReceivedTime = std::stol(valueDataDataItemEventsEventsItem["EventReceivedTime"].asString());
			if(!valueDataDataItemEventsEventsItem["EventSource"].isNull())
				eventsObject.eventSource = valueDataDataItemEventsEventsItem["EventSource"].asString();
			if(!valueDataDataItemEventsEventsItem["EventType"].isNull())
				eventsObject.eventType = valueDataDataItemEventsEventsItem["EventType"].asString();
			dataObject.events.push_back(eventsObject);
		}
		data_.push_back(dataObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryTracedEventByEventIdResult::getMessage()const
{
	return message_;
}

std::vector<QueryTracedEventByEventIdResult::DataItem> QueryTracedEventByEventIdResult::getData()const
{
	return data_;
}

std::string QueryTracedEventByEventIdResult::getCode()const
{
	return code_;
}

bool QueryTracedEventByEventIdResult::getSuccess()const
{
	return success_;
}

