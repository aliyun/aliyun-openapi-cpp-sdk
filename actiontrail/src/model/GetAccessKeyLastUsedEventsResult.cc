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

#include <alibabacloud/actiontrail/model/GetAccessKeyLastUsedEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Actiontrail;
using namespace AlibabaCloud::Actiontrail::Model;

GetAccessKeyLastUsedEventsResult::GetAccessKeyLastUsedEventsResult() :
	ServiceResult()
{}

GetAccessKeyLastUsedEventsResult::GetAccessKeyLastUsedEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

GetAccessKeyLastUsedEventsResult::~GetAccessKeyLastUsedEventsResult()
{}

void GetAccessKeyLastUsedEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventsNode = value["Events"]["EventsItem"];
	for (auto valueEventsEventsItem : allEventsNode)
	{
		EventsItem eventsObject;
		if(!valueEventsEventsItem["UsedTimestamp"].isNull())
			eventsObject.usedTimestamp = std::stol(valueEventsEventsItem["UsedTimestamp"].asString());
		if(!valueEventsEventsItem["Detail"].isNull())
			eventsObject.detail = valueEventsEventsItem["Detail"].asString();
		if(!valueEventsEventsItem["EventName"].isNull())
			eventsObject.eventName = valueEventsEventsItem["EventName"].asString();
		if(!valueEventsEventsItem["Source"].isNull())
			eventsObject.source = valueEventsEventsItem["Source"].asString();
		events_.push_back(eventsObject);
	}
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

std::string GetAccessKeyLastUsedEventsResult::getNextToken()const
{
	return nextToken_;
}

std::vector<GetAccessKeyLastUsedEventsResult::EventsItem> GetAccessKeyLastUsedEventsResult::getEvents()const
{
	return events_;
}

