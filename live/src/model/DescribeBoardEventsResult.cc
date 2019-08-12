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

#include <alibabacloud/live/model/DescribeBoardEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Live;
using namespace AlibabaCloud::Live::Model;

DescribeBoardEventsResult::DescribeBoardEventsResult() :
	ServiceResult()
{}

DescribeBoardEventsResult::DescribeBoardEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeBoardEventsResult::~DescribeBoardEventsResult()
{}

void DescribeBoardEventsResult::parse(const std::string &payload)
{
	Json::CharReaderBuilder builder;
	Json::CharReader *reader = builder.newCharReader();
	Json::Value *val;
	Json::Value value;
	JSONCPP_STRING *errs;
	reader->parse(payload.data(), payload.data() + payload.size(), val, errs);
	value = *val;
	setRequestId(value["RequestId"].asString());
	auto allEvents = value["Events"]["Event"];
	for (auto value : allEvents)
	{
		Event eventsObject;
		if(!value["EventId"].isNull())
			eventsObject.eventId = std::stol(value["EventId"].asString());
		if(!value["EventType"].isNull())
			eventsObject.eventType = std::stoi(value["EventType"].asString());
		if(!value["UserId"].isNull())
			eventsObject.userId = std::stoi(value["UserId"].asString());
		if(!value["Data"].isNull())
			eventsObject.data = value["Data"].asString();
		if(!value["Timestamp"].isNull())
			eventsObject.timestamp = std::stol(value["Timestamp"].asString());
		events_.push_back(eventsObject);
	}

}

std::vector<DescribeBoardEventsResult::Event> DescribeBoardEventsResult::getEvents()const
{
	return events_;
}

