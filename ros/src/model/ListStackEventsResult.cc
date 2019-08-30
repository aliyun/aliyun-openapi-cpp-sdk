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

#include <alibabacloud/ros/model/ListStackEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::ROS;
using namespace AlibabaCloud::ROS::Model;

ListStackEventsResult::ListStackEventsResult() :
	ServiceResult()
{}

ListStackEventsResult::ListStackEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

ListStackEventsResult::~ListStackEventsResult()
{}

void ListStackEventsResult::parse(const std::string &payload)
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
		if(!value["CreateTime"].isNull())
			eventsObject.createTime = value["CreateTime"].asString();
		if(!value["EventId"].isNull())
			eventsObject.eventId = value["EventId"].asString();
		if(!value["LogicalResourceId"].isNull())
			eventsObject.logicalResourceId = value["LogicalResourceId"].asString();
		if(!value["PhysicalResourceId"].isNull())
			eventsObject.physicalResourceId = value["PhysicalResourceId"].asString();
		if(!value["ResourceType"].isNull())
			eventsObject.resourceType = value["ResourceType"].asString();
		if(!value["StackId"].isNull())
			eventsObject.stackId = value["StackId"].asString();
		if(!value["StackName"].isNull())
			eventsObject.stackName = value["StackName"].asString();
		if(!value["Status"].isNull())
			eventsObject.status = value["Status"].asString();
		if(!value["StatusReason"].isNull())
			eventsObject.statusReason = value["StatusReason"].asString();
		events_.push_back(eventsObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

}

int ListStackEventsResult::getTotalCount()const
{
	return totalCount_;
}

int ListStackEventsResult::getPageSize()const
{
	return pageSize_;
}

std::vector<ListStackEventsResult::Event> ListStackEventsResult::getEvents()const
{
	return events_;
}

int ListStackEventsResult::getPageNumber()const
{
	return pageNumber_;
}

