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

#include <alibabacloud/ecs/model/DescribeDisksFullStatusResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

DescribeDisksFullStatusResult::DescribeDisksFullStatusResult() :
	ServiceResult()
{}

DescribeDisksFullStatusResult::DescribeDisksFullStatusResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDisksFullStatusResult::~DescribeDisksFullStatusResult()
{}

void DescribeDisksFullStatusResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);

	setRequestId(value["RequestId"].asString());
	auto allDiskFullStatusSet = value["DiskFullStatusSet"]["DiskFullStatusType"];
	for (auto value : allDiskFullStatusSet)
	{
		DiskFullStatusType diskFullStatusTypeObject;
		diskFullStatusTypeObject.diskId = value["DiskId"].asString();
		auto allDiskEventSet = value["DiskEventSet"]["DiskEventType"];
		for (auto value : allDiskEventSet)
		{
			DiskFullStatusType::DiskEventType diskEventTypeObject;
			diskEventTypeObject.eventId = value["EventId"].asString();
			diskEventTypeObject.eventTime = value["EventTime"].asString();
			auto allEventType = value["EventType"];
			for (auto value : allEventType)
			{
				DiskFullStatusType::DiskEventType::EventType eventTypeObject;
				eventTypeObject.code = std::stoi(value["Code"].asString());
				eventTypeObject.name = value["Name"].asString();
				diskEventTypeObject.eventType.push_back(eventTypeObject);
			}
			diskFullStatusTypeObject.diskEventSet.push_back(diskEventTypeObject);
		}
		auto allStatus = value["Status"];
		for (auto value : allStatus)
		{
			DiskFullStatusType::Status statusObject;
			statusObject.code = std::stoi(value["Code"].asString());
			statusObject.name = value["Name"].asString();
			diskFullStatusTypeObject.status.push_back(statusObject);
		}
		auto allHealthStatus = value["HealthStatus"];
		for (auto value : allHealthStatus)
		{
			DiskFullStatusType::HealthStatus healthStatusObject;
			healthStatusObject.code = std::stoi(value["Code"].asString());
			healthStatusObject.name = value["Name"].asString();
			diskFullStatusTypeObject.healthStatus.push_back(healthStatusObject);
		}
		diskFullStatusSet_.push_back(diskFullStatusTypeObject);
	}
	totalCount_ = std::stoi(value["TotalCount"].asString());
	pageNumber_ = std::stoi(value["PageNumber"].asString());
	pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeDisksFullStatusResult::getTotalCount()const
{
	return totalCount_;
}

void DescribeDisksFullStatusResult::setTotalCount(int totalCount)
{
	totalCount_ = totalCount;
}

int DescribeDisksFullStatusResult::getPageSize()const
{
	return pageSize_;
}

void DescribeDisksFullStatusResult::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
}

int DescribeDisksFullStatusResult::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDisksFullStatusResult::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
}

