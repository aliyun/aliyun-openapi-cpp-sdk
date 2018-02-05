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
		DiskFullStatusType diskFullStatusSetObject;
		if(!value["DiskId"].isNull())
			diskFullStatusSetObject.diskId = value["DiskId"].asString();
		auto allDiskEventSet = value["DiskEventSet"]["DiskEventType"];
		for (auto value : allDiskEventSet)
		{
			DiskFullStatusType::DiskEventType diskEventSetObject;
			if(!value["EventId"].isNull())
				diskEventSetObject.eventId = value["EventId"].asString();
			if(!value["EventTime"].isNull())
				diskEventSetObject.eventTime = value["EventTime"].asString();
			auto allEventType = value["EventType"];
			for (auto value : allEventType)
			{
				DiskFullStatusType::DiskEventType::EventType eventTypeObject;
				if(!value["Code"].isNull())
					eventTypeObject.code = std::stoi(value["Code"].asString());
				if(!value["Name"].isNull())
					eventTypeObject.name = value["Name"].asString();
				diskEventSetObject.eventType.push_back(eventTypeObject);
			}
			diskFullStatusSetObject.diskEventSet.push_back(diskEventSetObject);
		}
		auto allStatus = value["Status"];
		for (auto value : allStatus)
		{
			DiskFullStatusType::Status statusObject;
			if(!value["Code"].isNull())
				statusObject.code = std::stoi(value["Code"].asString());
			if(!value["Name"].isNull())
				statusObject.name = value["Name"].asString();
			diskFullStatusSetObject.status.push_back(statusObject);
		}
		auto allHealthStatus = value["HealthStatus"];
		for (auto value : allHealthStatus)
		{
			DiskFullStatusType::HealthStatus healthStatusObject;
			if(!value["Code"].isNull())
				healthStatusObject.code = std::stoi(value["Code"].asString());
			if(!value["Name"].isNull())
				healthStatusObject.name = value["Name"].asString();
			diskFullStatusSetObject.healthStatus.push_back(healthStatusObject);
		}
		diskFullStatusSet_.push_back(diskFullStatusSetObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

}

int DescribeDisksFullStatusResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDisksFullStatusResult::getPageSize()const
{
	return pageSize_;
}

int DescribeDisksFullStatusResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeDisksFullStatusResult::DiskFullStatusType> DescribeDisksFullStatusResult::getDiskFullStatusSet()const
{
	return diskFullStatusSet_;
}

