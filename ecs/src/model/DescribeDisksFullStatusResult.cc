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
	auto allDiskFullStatusSetNode = value["DiskFullStatusSet"]["DiskFullStatusType"];
	for (auto valueDiskFullStatusSetDiskFullStatusType : allDiskFullStatusSetNode)
	{
		DiskFullStatusType diskFullStatusSetObject;
		if(!valueDiskFullStatusSetDiskFullStatusType["DiskId"].isNull())
			diskFullStatusSetObject.diskId = valueDiskFullStatusSetDiskFullStatusType["DiskId"].asString();
		if(!valueDiskFullStatusSetDiskFullStatusType["InstanceId"].isNull())
			diskFullStatusSetObject.instanceId = valueDiskFullStatusSetDiskFullStatusType["InstanceId"].asString();
		if(!valueDiskFullStatusSetDiskFullStatusType["Device"].isNull())
			diskFullStatusSetObject.device = valueDiskFullStatusSetDiskFullStatusType["Device"].asString();
		auto allDiskEventSetNode = allDiskFullStatusSetNode["DiskEventSet"]["DiskEventType"];
		for (auto allDiskFullStatusSetNodeDiskEventSetDiskEventType : allDiskEventSetNode)
		{
			DiskFullStatusType::DiskEventType diskEventSetObject;
			if(!allDiskFullStatusSetNodeDiskEventSetDiskEventType["EventId"].isNull())
				diskEventSetObject.eventId = allDiskFullStatusSetNodeDiskEventSetDiskEventType["EventId"].asString();
			if(!allDiskFullStatusSetNodeDiskEventSetDiskEventType["EventTime"].isNull())
				diskEventSetObject.eventTime = allDiskFullStatusSetNodeDiskEventSetDiskEventType["EventTime"].asString();
			if(!allDiskFullStatusSetNodeDiskEventSetDiskEventType["EventEndTime"].isNull())
				diskEventSetObject.eventEndTime = allDiskFullStatusSetNodeDiskEventSetDiskEventType["EventEndTime"].asString();
			auto eventTypeNode = value["EventType"];
			if(!eventTypeNode["Code"].isNull())
				diskEventSetObject.eventType.code = std::stoi(eventTypeNode["Code"].asString());
			if(!eventTypeNode["Name"].isNull())
				diskEventSetObject.eventType.name = eventTypeNode["Name"].asString();
			diskFullStatusSetObject.diskEventSet.push_back(diskEventSetObject);
		}
		auto statusNode = value["Status"];
		if(!statusNode["Code"].isNull())
			diskFullStatusSetObject.status.code = std::stoi(statusNode["Code"].asString());
		if(!statusNode["Name"].isNull())
			diskFullStatusSetObject.status.name = statusNode["Name"].asString();
		auto healthStatusNode = value["HealthStatus"];
		if(!healthStatusNode["Code"].isNull())
			diskFullStatusSetObject.healthStatus.code = std::stoi(healthStatusNode["Code"].asString());
		if(!healthStatusNode["Name"].isNull())
			diskFullStatusSetObject.healthStatus.name = healthStatusNode["Name"].asString();
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

