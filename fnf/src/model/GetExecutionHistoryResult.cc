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

#include <alibabacloud/fnf/model/GetExecutionHistoryResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Fnf;
using namespace AlibabaCloud::Fnf::Model;

GetExecutionHistoryResult::GetExecutionHistoryResult() :
	ServiceResult()
{}

GetExecutionHistoryResult::GetExecutionHistoryResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetExecutionHistoryResult::~GetExecutionHistoryResult()
{}

void GetExecutionHistoryResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventsNode = value["Events"]["EventsItem"];
	for (auto valueEventsEventsItem : allEventsNode)
	{
		EventsItem eventsObject;
		if(!valueEventsEventsItem["Type"].isNull())
			eventsObject.type = valueEventsEventsItem["Type"].asString();
		if(!valueEventsEventsItem["EventId"].isNull())
			eventsObject.eventId = std::stol(valueEventsEventsItem["EventId"].asString());
		if(!valueEventsEventsItem["Time"].isNull())
			eventsObject.time = valueEventsEventsItem["Time"].asString();
		if(!valueEventsEventsItem["ScheduleEventId"].isNull())
			eventsObject.scheduleEventId = std::stol(valueEventsEventsItem["ScheduleEventId"].asString());
		if(!valueEventsEventsItem["EventDetail"].isNull())
			eventsObject.eventDetail = valueEventsEventsItem["EventDetail"].asString();
		if(!valueEventsEventsItem["StepName"].isNull())
			eventsObject.stepName = valueEventsEventsItem["StepName"].asString();
		events_.push_back(eventsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string GetExecutionHistoryResult::getNextToken()const
{
	return nextToken_;
}

std::vector<GetExecutionHistoryResult::EventsItem> GetExecutionHistoryResult::getEvents()const
{
	return events_;
}

