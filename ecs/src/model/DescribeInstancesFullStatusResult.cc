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
		InstanceFullStatusType instanceFullStatusSetObject;
		if(!value["InstanceId"].isNull())
			instanceFullStatusSetObject.instanceId = value["InstanceId"].asString();
		auto allScheduledSystemEventSet = value["ScheduledSystemEventSet"]["ScheduledSystemEventType"];
		for (auto value : allScheduledSystemEventSet)
		{
			InstanceFullStatusType::ScheduledSystemEventType scheduledSystemEventSetObject;
			if(!value["EventId"].isNull())
				scheduledSystemEventSetObject.eventId = value["EventId"].asString();
			if(!value["EventPublishTime"].isNull())
				scheduledSystemEventSetObject.eventPublishTime = value["EventPublishTime"].asString();
			if(!value["NotBefore"].isNull())
				scheduledSystemEventSetObject.notBefore = value["NotBefore"].asString();
			auto allEventCycleStatus = value["EventCycleStatus"];
			for (auto value : allEventCycleStatus)
			{
				InstanceFullStatusType::ScheduledSystemEventType::EventCycleStatus eventCycleStatusObject;
				if(!value["Code"].isNull())
					eventCycleStatusObject.code = std::stoi(value["Code"].asString());
				if(!value["Name"].isNull())
					eventCycleStatusObject.name = value["Name"].asString();
				scheduledSystemEventSetObject.eventCycleStatus.push_back(eventCycleStatusObject);
			}
			auto allEventType = value["EventType"];
			for (auto value : allEventType)
			{
				InstanceFullStatusType::ScheduledSystemEventType::EventType eventTypeObject;
				if(!value["Code"].isNull())
					eventTypeObject.code = std::stoi(value["Code"].asString());
				if(!value["Name"].isNull())
					eventTypeObject.name = value["Name"].asString();
				scheduledSystemEventSetObject.eventType.push_back(eventTypeObject);
			}
			instanceFullStatusSetObject.scheduledSystemEventSet.push_back(scheduledSystemEventSetObject);
		}
		auto allStatus = value["Status"];
		for (auto value : allStatus)
		{
			InstanceFullStatusType::Status statusObject;
			if(!value["Code"].isNull())
				statusObject.code = std::stoi(value["Code"].asString());
			if(!value["Name"].isNull())
				statusObject.name = value["Name"].asString();
			instanceFullStatusSetObject.status.push_back(statusObject);
		}
		auto allHealthStatus = value["HealthStatus"];
		for (auto value : allHealthStatus)
		{
			InstanceFullStatusType::HealthStatus healthStatusObject;
			if(!value["Code"].isNull())
				healthStatusObject.code = std::stoi(value["Code"].asString());
			if(!value["Name"].isNull())
				healthStatusObject.name = value["Name"].asString();
			instanceFullStatusSetObject.healthStatus.push_back(healthStatusObject);
		}
		instanceFullStatusSet_.push_back(instanceFullStatusSetObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeInstancesFullStatusResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstancesFullStatusResult::getPageSize()const
{
	return pageSize_;
}

int DescribeInstancesFullStatusResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeInstancesFullStatusResult::InstanceFullStatusType> DescribeInstancesFullStatusResult::getInstanceFullStatusSet()const
{
	return instanceFullStatusSet_;
}

