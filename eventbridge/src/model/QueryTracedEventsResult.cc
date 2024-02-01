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

#include <alibabacloud/eventbridge/model/QueryTracedEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Eventbridge;
using namespace AlibabaCloud::Eventbridge::Model;

QueryTracedEventsResult::QueryTracedEventsResult() :
	ServiceResult()
{}

QueryTracedEventsResult::QueryTracedEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

QueryTracedEventsResult::~QueryTracedEventsResult()
{}

void QueryTracedEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto dataNode = value["Data"];
	if(!dataNode["NextToken"].isNull())
		data_.nextToken = dataNode["NextToken"].asString();
	if(!dataNode["Total"].isNull())
		data_.total = std::stoi(dataNode["Total"].asString());
	auto allEventsNode = dataNode["Events"]["EventsItem"];
	for (auto dataNodeEventsEventsItem : allEventsNode)
	{
		Data::EventsItem eventsItemObject;
		if(!dataNodeEventsEventsItem["EventId"].isNull())
			eventsItemObject.eventId = dataNodeEventsEventsItem["EventId"].asString();
		if(!dataNodeEventsEventsItem["EventBusName"].isNull())
			eventsItemObject.eventBusName = dataNodeEventsEventsItem["EventBusName"].asString();
		if(!dataNodeEventsEventsItem["EventReceivedTime"].isNull())
			eventsItemObject.eventReceivedTime = std::stol(dataNodeEventsEventsItem["EventReceivedTime"].asString());
		if(!dataNodeEventsEventsItem["EventSource"].isNull())
			eventsItemObject.eventSource = dataNodeEventsEventsItem["EventSource"].asString();
		if(!dataNodeEventsEventsItem["EventType"].isNull())
			eventsItemObject.eventType = dataNodeEventsEventsItem["EventType"].asString();
		data_.events.push_back(eventsItemObject);
	}
	if(!value["Message"].isNull())
		message_ = value["Message"].asString();
	if(!value["Code"].isNull())
		code_ = value["Code"].asString();
	if(!value["Success"].isNull())
		success_ = value["Success"].asString() == "true";

}

std::string QueryTracedEventsResult::getMessage()const
{
	return message_;
}

QueryTracedEventsResult::Data QueryTracedEventsResult::getData()const
{
	return data_;
}

std::string QueryTracedEventsResult::getCode()const
{
	return code_;
}

bool QueryTracedEventsResult::getSuccess()const
{
	return success_;
}

