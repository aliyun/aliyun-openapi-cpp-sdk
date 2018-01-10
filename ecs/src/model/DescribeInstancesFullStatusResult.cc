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

#include <alibabacloud/ecs/model/DescribeInstancesFullStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeInstancesFullStatusResult::DescribeInstancesFullStatusResult() :
	ServiceResult()
{}

DescribeInstancesFullStatusResult::DescribeInstancesFullStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeInstancesFullStatusResult::~DescribeInstancesFullStatusResult()
{}

void DescribeInstancesFullStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allInstanceFullStatusSet = value["InstanceFullStatusSet"]["InstanceFullStatusType"];
	for (auto value : allInstanceFullStatusSet)
	{
		InstanceFullStatusType instanceFullStatusTypeObject;
		instanceFullStatusTypeObject.instanceId = value["InstanceId"].asString();
		auto allScheduledSystemEventSet = value["ScheduledSystemEventSet"]["ScheduledSystemEventType"];
		for (auto value : allScheduledSystemEventSet)
		{
			InstanceFullStatusType::ScheduledSystemEventType scheduledSystemEventTypeObject;
			scheduledSystemEventTypeObject.eventId = value["EventId"].asString();
			scheduledSystemEventTypeObject.eventPublishTime = value["EventPublishTime"].asString();
			scheduledSystemEventTypeObject.notBefore = value["NotBefore"].asString();
			auto allEventCycleStatus = value["EventCycleStatus"];
			for (auto value : allEventCycleStatus)
			{
				InstanceFullStatusType::ScheduledSystemEventType::EventCycleStatus eventCycleStatusObject;
				eventCycleStatusObject.code = std::stoi(value["Code"].asString());
				eventCycleStatusObject.name = value["Name"].asString();
				scheduledSystemEventTypeObject.eventCycleStatus.push_back(eventCycleStatusObject);
			}
			auto allEventType = value["EventType"];
			for (auto value : allEventType)
			{
				InstanceFullStatusType::ScheduledSystemEventType::EventType eventTypeObject;
				eventTypeObject.code = std::stoi(value["Code"].asString());
				eventTypeObject.name = value["Name"].asString();
				scheduledSystemEventTypeObject.eventType.push_back(eventTypeObject);
			}
			instanceFullStatusTypeObject.scheduledSystemEventSet.push_back(scheduledSystemEventTypeObject);
		}
		auto allStatus = value["Status"];
		for (auto value : allStatus)
		{
			InstanceFullStatusType::Status statusObject;
			statusObject.code = std::stoi(value["Code"].asString());
			statusObject.name = value["Name"].asString();
			instanceFullStatusTypeObject.status.push_back(statusObject);
		}
		auto allHealthStatus = value["HealthStatus"];
		for (auto value : allHealthStatus)
		{
			InstanceFullStatusType::HealthStatus healthStatusObject;
			healthStatusObject.code = std::stoi(value["Code"].asString());
			healthStatusObject.name = value["Name"].asString();
			instanceFullStatusTypeObject.healthStatus.push_back(healthStatusObject);
		}
		instanceFullStatusSet_.push_back(instanceFullStatusTypeObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeInstancesFullStatusResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeInstancesFullStatusResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeInstancesFullStatusResult::getPageSize()const
{
	return pageSize_;
}

void DescribeInstancesFullStatusResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeInstancesFullStatusResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeInstancesFullStatusResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

