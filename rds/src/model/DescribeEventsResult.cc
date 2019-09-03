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

#include <alibabacloud/rds/model/DescribeEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

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
	auto allEventItems = value["EventItems"]["EventItemsItem"];
	for (auto value : allEventItems)
	{
		EventItemsItem eventItemsObject;
		if(!value["EventId"].isNull())
			eventItemsObject.eventId = std::stoi(value["EventId"].asString());
		if(!value["EventType"].isNull())
			eventItemsObject.eventType = value["EventType"].asString();
		if(!value["EventName"].isNull())
			eventItemsObject.eventName = value["EventName"].asString();
		if(!value["EventTime"].isNull())
			eventItemsObject.eventTime = value["EventTime"].asString();
		if(!value["ResourceType"].isNull())
			eventItemsObject.resourceType = value["ResourceType"].asString();
		if(!value["ResourceName"].isNull())
			eventItemsObject.resourceName = value["ResourceName"].asString();
		if(!value["RegionId"].isNull())
			eventItemsObject.regionId = value["RegionId"].asString();
		if(!value["EventUserType"].isNull())
			eventItemsObject.eventUserType = value["EventUserType"].asString();
		if(!value["EventReason"].isNull())
			eventItemsObject.eventReason = value["EventReason"].asString();
		if(!value["EventPayload"].isNull())
			eventItemsObject.eventPayload = value["EventPayload"].asString();
		if(!value["EventRecordTime"].isNull())
			eventItemsObject.eventRecordTime = value["EventRecordTime"].asString();
		eventItems_.push_back(eventItemsObject);
	}
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());

}

int DescribeEventsResult::getTotalRecordCount()const
{
	return totalRecordCount_;
}

std::vector<DescribeEventsResult::EventItemsItem> DescribeEventsResult::getEventItems()const
{
	return eventItems_;
}

int DescribeEventsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeEventsResult::getPageNumber()const
{
	return pageNumber_;
}

