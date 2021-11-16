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

#include <alibabacloud/ddoscoo/model/DescribeDomainAttackEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ddoscoo;
using namespace AlibabaCloud::Ddoscoo::Model;

DescribeDomainAttackEventsResult::DescribeDomainAttackEventsResult() :
	ServiceResult()
{}

DescribeDomainAttackEventsResult::DescribeDomainAttackEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDomainAttackEventsResult::~DescribeDomainAttackEventsResult()
{}

void DescribeDomainAttackEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allEventsNode = value["Events"]["DomainAttackEvent"];
	for (auto valueEventsDomainAttackEvent : allEventsNode)
	{
		DomainAttackEvent eventsObject;
		if(!valueEventsDomainAttackEvent["StartTime"].isNull())
			eventsObject.startTime = std::stol(valueEventsDomainAttackEvent["StartTime"].asString());
		if(!valueEventsDomainAttackEvent["EndTime"].isNull())
			eventsObject.endTime = std::stol(valueEventsDomainAttackEvent["EndTime"].asString());
		if(!valueEventsDomainAttackEvent["Duration"].isNull())
			eventsObject.duration = std::stoi(valueEventsDomainAttackEvent["Duration"].asString());
		if(!valueEventsDomainAttackEvent["Finished"].isNull())
			eventsObject.finished = valueEventsDomainAttackEvent["Finished"].asString() == "true";
		if(!valueEventsDomainAttackEvent["MaxQps"].isNull())
			eventsObject.maxQps = std::stoi(valueEventsDomainAttackEvent["MaxQps"].asString());
		if(!valueEventsDomainAttackEvent["BlockCount"].isNull())
			eventsObject.blockCount = std::stol(valueEventsDomainAttackEvent["BlockCount"].asString());
		events_.push_back(eventsObject);
	}
	if(!value["Total"].isNull())
		total_ = std::stol(value["Total"].asString());

}

std::vector<DescribeDomainAttackEventsResult::DomainAttackEvent> DescribeDomainAttackEventsResult::getEvents()const
{
	return events_;
}

long DescribeDomainAttackEventsResult::getTotal()const
{
	return total_;
}

