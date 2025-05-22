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
	auto allEventItemsNode = value["EventItems"]["EventItemsItem"];
	for (auto valueEventItemsEventItemsItem : allEventItemsNode)
	{
		EventItemsItem eventItemsObject;
		if(!valueEventItemsEventItemsItem["CallerUid"].isNull())
			eventItemsObject.callerUid = std::stol(valueEventItemsEventItemsItem["CallerUid"].asString());
		if(!valueEventItemsEventItemsItem["EventId"].isNull())
			eventItemsObject.eventId = std::stoi(valueEventItemsEventItemsItem["EventId"].asString());
		if(!valueEventItemsEventItemsItem["EventName"].isNull())
			eventItemsObject.eventName = valueEventItemsEventItemsItem["EventName"].asString();
		if(!valueEventItemsEventItemsItem["EventPayload"].isNull())
			eventItemsObject.eventPayload = valueEventItemsEventItemsItem["EventPayload"].asString();
		if(!valueEventItemsEventItemsItem["EventReason"].isNull())
			eventItemsObject.eventReason = valueEventItemsEventItemsItem["EventReason"].asString();
		if(!valueEventItemsEventItemsItem["EventRecordTime"].isNull())
			eventItemsObject.eventRecordTime = valueEventItemsEventItemsItem["EventRecordTime"].asString();
		if(!valueEventItemsEventItemsItem["EventTime"].isNull())
			eventItemsObject.eventTime = valueEventItemsEventItemsItem["EventTime"].asString();
		if(!valueEventItemsEventItemsItem["EventType"].isNull())
			eventItemsObject.eventType = valueEventItemsEventItemsItem["EventType"].asString();
		if(!valueEventItemsEventItemsItem["EventUserType"].isNull())
			eventItemsObject.eventUserType = valueEventItemsEventItemsItem["EventUserType"].asString();
		if(!valueEventItemsEventItemsItem["RegionId"].isNull())
			eventItemsObject.regionId = valueEventItemsEventItemsItem["RegionId"].asString();
		if(!valueEventItemsEventItemsItem["ResourceName"].isNull())
			eventItemsObject.resourceName = valueEventItemsEventItemsItem["ResourceName"].asString();
		if(!valueEventItemsEventItemsItem["ResourceType"].isNull())
			eventItemsObject.resourceType = valueEventItemsEventItemsItem["ResourceType"].asString();
		eventItems_.push_back(eventItemsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalRecordCount"].isNull())
		totalRecordCount_ = std::stoi(value["TotalRecordCount"].asString());

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

