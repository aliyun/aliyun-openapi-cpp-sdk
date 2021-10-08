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
	auto allInstanceFullStatusSetNode = value["InstanceFullStatusSet"]["InstanceFullStatusType"];
	for (auto valueInstanceFullStatusSetInstanceFullStatusType : allInstanceFullStatusSetNode)
	{
		InstanceFullStatusType instanceFullStatusSetObject;
		if(!valueInstanceFullStatusSetInstanceFullStatusType["InstanceId"].isNull())
			instanceFullStatusSetObject.instanceId = valueInstanceFullStatusSetInstanceFullStatusType["InstanceId"].asString();
		auto allScheduledSystemEventSetNode = valueInstanceFullStatusSetInstanceFullStatusType["ScheduledSystemEventSet"]["ScheduledSystemEventType"];
		for (auto valueInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSetScheduledSystemEventType : allScheduledSystemEventSetNode)
		{
			InstanceFullStatusType::ScheduledSystemEventType scheduledSystemEventSetObject;
			if(!valueInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSetScheduledSystemEventType["EventPublishTime"].isNull())
				scheduledSystemEventSetObject.eventPublishTime = valueInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSetScheduledSystemEventType["EventPublishTime"].asString();
			if(!valueInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSetScheduledSystemEventType["EventId"].isNull())
				scheduledSystemEventSetObject.eventId = valueInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSetScheduledSystemEventType["EventId"].asString();
			if(!valueInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSetScheduledSystemEventType["NotBefore"].isNull())
				scheduledSystemEventSetObject.notBefore = valueInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSetScheduledSystemEventType["NotBefore"].asString();
			if(!valueInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSetScheduledSystemEventType["ImpactLevel"].isNull())
				scheduledSystemEventSetObject.impactLevel = valueInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSetScheduledSystemEventType["ImpactLevel"].asString();
			if(!valueInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSetScheduledSystemEventType["Reason"].isNull())
				scheduledSystemEventSetObject.reason = valueInstanceFullStatusSetInstanceFullStatusTypeScheduledSystemEventSetScheduledSystemEventType["Reason"].asString();
			auto eventCycleStatusNode = value["EventCycleStatus"];
			if(!eventCycleStatusNode["Name"].isNull())
				scheduledSystemEventSetObject.eventCycleStatus.name = eventCycleStatusNode["Name"].asString();
			if(!eventCycleStatusNode["Code"].isNull())
				scheduledSystemEventSetObject.eventCycleStatus.code = std::stoi(eventCycleStatusNode["Code"].asString());
			auto eventTypeNode = value["EventType"];
			if(!eventTypeNode["Name"].isNull())
				scheduledSystemEventSetObject.eventType.name = eventTypeNode["Name"].asString();
			if(!eventTypeNode["Code"].isNull())
				scheduledSystemEventSetObject.eventType.code = std::stoi(eventTypeNode["Code"].asString());
			auto extendedAttributeNode = value["ExtendedAttribute"];
			if(!extendedAttributeNode["Device"].isNull())
				scheduledSystemEventSetObject.extendedAttribute.device = extendedAttributeNode["Device"].asString();
			if(!extendedAttributeNode["DiskId"].isNull())
				scheduledSystemEventSetObject.extendedAttribute.diskId = extendedAttributeNode["DiskId"].asString();
			auto allInactiveDisksNode = extendedAttributeNode["InactiveDisks"]["InactiveDisk"];
			for (auto extendedAttributeNodeInactiveDisksInactiveDisk : allInactiveDisksNode)
			{
				InstanceFullStatusType::ScheduledSystemEventType::ExtendedAttribute::InactiveDisk inactiveDiskObject;
				if(!extendedAttributeNodeInactiveDisksInactiveDisk["CreationTime"].isNull())
					inactiveDiskObject.creationTime = extendedAttributeNodeInactiveDisksInactiveDisk["CreationTime"].asString();
				if(!extendedAttributeNodeInactiveDisksInactiveDisk["DeviceSize"].isNull())
					inactiveDiskObject.deviceSize = extendedAttributeNodeInactiveDisksInactiveDisk["DeviceSize"].asString();
				if(!extendedAttributeNodeInactiveDisksInactiveDisk["DeviceCategory"].isNull())
					inactiveDiskObject.deviceCategory = extendedAttributeNodeInactiveDisksInactiveDisk["DeviceCategory"].asString();
				if(!extendedAttributeNodeInactiveDisksInactiveDisk["DeviceType"].isNull())
					inactiveDiskObject.deviceType = extendedAttributeNodeInactiveDisksInactiveDisk["DeviceType"].asString();
				if(!extendedAttributeNodeInactiveDisksInactiveDisk["ReleaseTime"].isNull())
					inactiveDiskObject.releaseTime = extendedAttributeNodeInactiveDisksInactiveDisk["ReleaseTime"].asString();
				scheduledSystemEventSetObject.extendedAttribute.inactiveDisks.push_back(inactiveDiskObject);
			}
			instanceFullStatusSetObject.scheduledSystemEventSet.push_back(scheduledSystemEventSetObject);
		}
		auto statusNode = value["Status"];
		if(!statusNode["Name"].isNull())
			instanceFullStatusSetObject.status.name = statusNode["Name"].asString();
		if(!statusNode["Code"].isNull())
			instanceFullStatusSetObject.status.code = std::stoi(statusNode["Code"].asString());
		auto healthStatusNode = value["HealthStatus"];
		if(!healthStatusNode["Name"].isNull())
			instanceFullStatusSetObject.healthStatus.name = healthStatusNode["Name"].asString();
		if(!healthStatusNode["Code"].isNull())
			instanceFullStatusSetObject.healthStatus.code = std::stoi(healthStatusNode["Code"].asString());
		instanceFullStatusSet_.push_back(instanceFullStatusSetObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());

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

