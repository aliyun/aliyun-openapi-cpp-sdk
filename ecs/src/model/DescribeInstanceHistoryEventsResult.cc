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

#include <alibabacloud/ecs/model/DescribeInstanceHistoryEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstanceHistoryEventsResult::DescribeInstanceHistoryEventsResult() :
	ServiceResult()
{}

DescribeInstanceHistoryEventsResult::DescribeInstanceHistoryEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstanceHistoryEventsResult::~DescribeInstanceHistoryEventsResult()
{}

void DescribeInstanceHistoryEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allInstanceSystemEventSet = value["InstanceSystemEventSet"]["InstanceSystemEventType"];
	for (auto value : allInstanceSystemEventSet)
	{
		InstanceSystemEventType instanceSystemEventSetObject;
		if(!value["InstanceId"].isNull())
			instanceSystemEventSetObject.instanceId = value["InstanceId"].asString();
		if(!value["EventId"].isNull())
			instanceSystemEventSetObject.eventId = value["EventId"].asString();
		if(!value["EventPublishTime"].isNull())
			instanceSystemEventSetObject.eventPublishTime = value["EventPublishTime"].asString();
		if(!value["NotBefore"].isNull())
			instanceSystemEventSetObject.notBefore = value["NotBefore"].asString();
		if(!value["EventFinishTime"].isNull())
			instanceSystemEventSetObject.eventFinishTime = value["EventFinishTime"].asString();
		auto eventTypeNode = value["EventType"];
		if(!eventTypeNode["Code"].isNull())
			instanceSystemEventSetObject.eventType.code = std::stoi(eventTypeNode["Code"].asString());
		if(!eventTypeNode["Name"].isNull())
			instanceSystemEventSetObject.eventType.name = eventTypeNode["Name"].asString();
		auto eventCycleStatusNode = value["EventCycleStatus"];
		if(!eventCycleStatusNode["Code"].isNull())
			instanceSystemEventSetObject.eventCycleStatus.code = std::stoi(eventCycleStatusNode["Code"].asString());
		if(!eventCycleStatusNode["Name"].isNull())
			instanceSystemEventSetObject.eventCycleStatus.name = eventCycleStatusNode["Name"].asString();
		instanceSystemEventSet_.push_back(instanceSystemEventSetObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeInstanceHistoryEventsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstanceHistoryEventsResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstanceHistoryEventsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeInstanceHistoryEventsResult::InstanceSystemEventType> DescribeInstanceHistoryEventsResult::getInstanceSystemEventSet()const
{
	return instanceSystemEventSet_;
}

