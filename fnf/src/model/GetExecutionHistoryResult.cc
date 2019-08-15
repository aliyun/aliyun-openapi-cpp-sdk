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
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allEvents = value["Events"]["EventsItem"];
	for (auto value : allEvents)
	{
		EventsItem eventsObject;
		if(!value["StepName"].isNull())
			eventsObject.stepName = value["StepName"].asString();
		if(!value["Type"].isNull())
			eventsObject.type = value["Type"].asString();
		if(!value["EventId"].isNull())
			eventsObject.eventId = std::stol(value["EventId"].asString());
		if(!value["ScheduleEventId"].isNull())
			eventsObject.scheduleEventId = std::stol(value["ScheduleEventId"].asString());
		if(!value["EventDetail"].isNull())
			eventsObject.eventDetail = value["EventDetail"].asString();
		if(!value["Time"].isNull())
			eventsObject.time = value["Time"].asString();
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

