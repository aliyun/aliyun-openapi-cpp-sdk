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

#include <alibabacloud/ddoscoo/model/DescribeDDoSEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDDoSEventsResult::DescribeDDoSEventsResult() :
	ServiceResult()
{}

DescribeDDoSEventsResult::DescribeDDoSEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDDoSEventsResult::~DescribeDDoSEventsResult()
{}

void DescribeDDoSEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventsNode = value["Events"]["Event"];
	for (auto valueEventsEvent : allEventsNode)
	{
		Event eventsObject;
		if(!valueEventsEvent["StartTime"].isNull())
			eventsObject.startTime = std::stol(valueEventsEvent["StartTime"].asString());
		if(!valueEventsEvent["EndTime"].isNull())
			eventsObject.endTime = std::stol(valueEventsEvent["EndTime"].asString());
		if(!valueEventsEvent["Interval"].isNull())
			eventsObject.interval = std::stoi(valueEventsEvent["Interval"].asString());
		if(!valueEventsEvent["Status"].isNull())
			eventsObject.status = valueEventsEvent["Status"].asString();
		events_.push_back(eventsObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::vector<DescribeDDoSEventsResult::Event> DescribeDDoSEventsResult::getEvents()const
{
	return events_;
}

long DescribeDDoSEventsResult::getTotal()const
{
	return total_;
}

