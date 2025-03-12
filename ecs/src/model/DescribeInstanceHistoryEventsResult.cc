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
	auto allInstanceSystemEventSetNode = value["InstanceSystemEventSet"]["InstanceSystemEventType"];
	for (auto valueInstanceSystemEventSetInstanceSystemEventType : allInstanceSystemEventSetNode)
	{
		InstanceSystemEventType instanceSystemEventSetObject;
		if(!valueInstanceSystemEventSetInstanceSystemEventType["EventId"].isNull())
			instanceSystemEventSetObject.eventId = valueInstanceSystemEventSetInstanceSystemEventType["EventId"].asString();
		if(!valueInstanceSystemEventSetInstanceSystemEventType["EventPublishTime"].isNull())
			instanceSystemEventSetObject.eventPublishTime = valueInstanceSystemEventSetInstanceSystemEventType["EventPublishTime"].asString();
		if(!valueInstanceSystemEventSetInstanceSystemEventType["EventFinishTime"].isNull())
			instanceSystemEventSetObject.eventFinishTime = valueInstanceSystemEventSetInstanceSystemEventType["EventFinishTime"].asString();
		if(!valueInstanceSystemEventSetInstanceSystemEventType["ResourceType"].isNull())
			instanceSystemEventSetObject.resourceType = valueInstanceSystemEventSetInstanceSystemEventType["ResourceType"].asString();
		if(!valueInstanceSystemEventSetInstanceSystemEventType["ImpactLevel"].isNull())
			instanceSystemEventSetObject.impactLevel = valueInstanceSystemEventSetInstanceSystemEventType["ImpactLevel"].asString();
		if(!valueInstanceSystemEventSetInstanceSystemEventType["NotBefore"].isNull())
			instanceSystemEventSetObject.notBefore = valueInstanceSystemEventSetInstanceSystemEventType["NotBefore"].asString();
		if(!valueInstanceSystemEventSetInstanceSystemEventType["InstanceId"].isNull())
			instanceSystemEventSetObject.instanceId = valueInstanceSystemEventSetInstanceSystemEventType["InstanceId"].asString();
		if(!valueInstanceSystemEventSetInstanceSystemEventType["Reason"].isNull())
			instanceSystemEventSetObject.reason = valueInstanceSystemEventSetInstanceSystemEventType["Reason"].asString();
		if(!valueInstanceSystemEventSetInstanceSystemEventType["ReasonCode"].isNull())
			instanceSystemEventSetObject.reasonCode = valueInstanceSystemEventSetInstanceSystemEventType["ReasonCode"].asString();
		auto eventTypeNode = value["EventType"];
		if(!eventTypeNode["Name"].isNull())
			instanceSystemEventSetObject.eventType.name = eventTypeNode["Name"].asString();
		if(!eventTypeNode["Code"].isNull())
			instanceSystemEventSetObject.eventType.code = std::stoi(eventTypeNode["Code"].asString());
		auto eventCycleStatusNode = value["EventCycleStatus"];
		if(!eventCycleStatusNode["Name"].isNull())
			instanceSystemEventSetObject.eventCycleStatus.name = eventCycleStatusNode["Name"].asString();
		if(!eventCycleStatusNode["Code"].isNull())
			instanceSystemEventSetObject.eventCycleStatus.code = std::stoi(eventCycleStatusNode["Code"].asString());
		auto extendedAttributeNode = value["ExtendedAttribute"];
		if(!extendedAttributeNode["Device"].isNull())
			instanceSystemEventSetObject.extendedAttribute.device = extendedAttributeNode["Device"].asString();
		if(!extendedAttributeNode["DiskId"].isNull())
			instanceSystemEventSetObject.extendedAttribute.diskId = extendedAttributeNode["DiskId"].asString();
		if(!extendedAttributeNode["HostType"].isNull())
			instanceSystemEventSetObject.extendedAttribute.hostType = extendedAttributeNode["HostType"].asString();
		if(!extendedAttributeNode["HostId"].isNull())
			instanceSystemEventSetObject.extendedAttribute.hostId = extendedAttributeNode["HostId"].asString();
		if(!extendedAttributeNode["OnlineRepairPolicy"].isNull())
			instanceSystemEventSetObject.extendedAttribute.onlineRepairPolicy = extendedAttributeNode["OnlineRepairPolicy"].asString();
		if(!extendedAttributeNode["Rack"].isNull())
			instanceSystemEventSetObject.extendedAttribute.rack = extendedAttributeNode["Rack"].asString();
		if(!extendedAttributeNode["PunishType"].isNull())
			instanceSystemEventSetObject.extendedAttribute.punishType = extendedAttributeNode["PunishType"].asString();
		if(!extendedAttributeNode["PunishDomain"].isNull())
			instanceSystemEventSetObject.extendedAttribute.punishDomain = extendedAttributeNode["PunishDomain"].asString();
		if(!extendedAttributeNode["PunishUrl"].isNull())
			instanceSystemEventSetObject.extendedAttribute.punishUrl = extendedAttributeNode["PunishUrl"].asString();
		if(!extendedAttributeNode["Code"].isNull())
			instanceSystemEventSetObject.extendedAttribute.code = extendedAttributeNode["Code"].asString();
		if(!extendedAttributeNode["CanAccept"].isNull())
			instanceSystemEventSetObject.extendedAttribute.canAccept = extendedAttributeNode["CanAccept"].asString();
		if(!extendedAttributeNode["ResponseResult"].isNull())
			instanceSystemEventSetObject.extendedAttribute.responseResult = extendedAttributeNode["ResponseResult"].asString();
		auto allInactiveDisksNode = extendedAttributeNode["InactiveDisks"]["InactiveDisk"];
		for (auto extendedAttributeNodeInactiveDisksInactiveDisk : allInactiveDisksNode)
		{
			InstanceSystemEventType::ExtendedAttribute::InactiveDisk inactiveDiskObject;
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
			instanceSystemEventSetObject.extendedAttribute.inactiveDisks.push_back(inactiveDiskObject);
		}
			auto allMigrationOptions = extendedAttributeNode["MigrationOptions"]["MigrationOption"];
			for (auto value : allMigrationOptions)
				instanceSystemEventSetObject.extendedAttribute.migrationOptions.push_back(value.asString());
		instanceSystemEventSet_.push_back(instanceSystemEventSetObject);
	}
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int DescribeInstanceHistoryEventsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeInstanceHistoryEventsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeInstanceHistoryEventsResult::getNextToken()const
{
	return nextToken_;
}

int DescribeInstanceHistoryEventsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeInstanceHistoryEventsResult::InstanceSystemEventType> DescribeInstanceHistoryEventsResult::getInstanceSystemEventSet()const
{
	return instanceSystemEventSet_;
}

