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

#include <alibabacloud/ecs/model/DescribeEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeEventsResult::DescribeEventsResult() :
	ServiceResult()
{}

DescribeEventsResult::DescribeEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeEventsResult::~DescribeEventsResult()
{}

void DescribeEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allEvents = value["Events"]["Event"];
	for (auto value : allEvents)
	{
		Event eventsObject;
		if(!value["ResourceId"].isNull())
			eventsObject.resourceId = value["ResourceId"].asString();
		if(!value["EventType"].isNull())
			eventsObject.eventType = value["EventType"].asString();
		if(!value["EventCategory"].isNull())
			eventsObject.eventCategory = value["EventCategory"].asString();
		if(!value["Status"].isNull())
			eventsObject.status = value["Status"].asString();
		if(!value["SupportModify"].isNull())
			eventsObject.supportModify = value["SupportModify"].asString();
		if(!value["PlanTime"].isNull())
			eventsObject.planTime = value["PlanTime"].asString();
		if(!value["ExpireTime"].isNull())
			eventsObject.expireTime = value["ExpireTime"].asString();
		if(!value["EventId"].isNull())
			eventsObject.eventId = value["EventId"].asString();
		events_.push_back(eventsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int DescribeEventsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeEventsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<DescribeEventsResult::Event> DescribeEventsResult::getEvents()const
{
	return events_;
}

int DescribeEventsResult::getPageNumber()const
{
	return pageNumber_;
}

