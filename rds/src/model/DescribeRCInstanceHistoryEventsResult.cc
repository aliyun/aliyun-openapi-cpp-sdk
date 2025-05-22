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

#include <alibabacloud/rds/model/DescribeRCInstanceHistoryEventsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeRCInstanceHistoryEventsResult::DescribeRCInstanceHistoryEventsResult() :
	ServiceResult()
{}

DescribeRCInstanceHistoryEventsResult::DescribeRCInstanceHistoryEventsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeRCInstanceHistoryEventsResult::~DescribeRCInstanceHistoryEventsResult()
{}

void DescribeRCInstanceHistoryEventsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allInstanceSystemEventSetNode = value["InstanceSystemEventSet"]["instanceSystemEventSetItem"];
	for (auto valueInstanceSystemEventSetinstanceSystemEventSetItem : allInstanceSystemEventSetNode)
	{
		InstanceSystemEventSetItem instanceSystemEventSetObject;
		if(!valueInstanceSystemEventSetinstanceSystemEventSetItem["EventId"].isNull())
			instanceSystemEventSetObject.eventId = valueInstanceSystemEventSetinstanceSystemEventSetItem["EventId"].asString();
		if(!valueInstanceSystemEventSetinstanceSystemEventSetItem["EventPublishTime"].isNull())
			instanceSystemEventSetObject.eventPublishTime = valueInstanceSystemEventSetinstanceSystemEventSetItem["EventPublishTime"].asString();
		if(!valueInstanceSystemEventSetinstanceSystemEventSetItem["EventFinishTime"].isNull())
			instanceSystemEventSetObject.eventFinishTime = valueInstanceSystemEventSetinstanceSystemEventSetItem["EventFinishTime"].asString();
		if(!valueInstanceSystemEventSetinstanceSystemEventSetItem["ResourceType"].isNull())
			instanceSystemEventSetObject.resourceType = valueInstanceSystemEventSetinstanceSystemEventSetItem["ResourceType"].asString();
		if(!valueInstanceSystemEventSetinstanceSystemEventSetItem["ImpactLevel"].isNull())
			instanceSystemEventSetObject.impactLevel = valueInstanceSystemEventSetinstanceSystemEventSetItem["ImpactLevel"].asString();
		if(!valueInstanceSystemEventSetinstanceSystemEventSetItem["NotBefore"].isNull())
			instanceSystemEventSetObject.notBefore = valueInstanceSystemEventSetinstanceSystemEventSetItem["NotBefore"].asString();
		if(!valueInstanceSystemEventSetinstanceSystemEventSetItem["InstanceId"].isNull())
			instanceSystemEventSetObject.instanceId = valueInstanceSystemEventSetinstanceSystemEventSetItem["InstanceId"].asString();
		if(!valueInstanceSystemEventSetinstanceSystemEventSetItem["Reason"].isNull())
			instanceSystemEventSetObject.reason = valueInstanceSystemEventSetinstanceSystemEventSetItem["Reason"].asString();
		if(!valueInstanceSystemEventSetinstanceSystemEventSetItem["ReasonCode"].isNull())
			instanceSystemEventSetObject.reasonCode = valueInstanceSystemEventSetinstanceSystemEventSetItem["ReasonCode"].asString();
		auto eventTypeNode = value["EventType"];
		if(!eventTypeNode["Name"].isNull())
			instanceSystemEventSetObject.eventType.name = eventTypeNode["Name"].asString();
		if(!eventTypeNode["Code"].isNull())
			instanceSystemEventSetObject.eventType.code = eventTypeNode["Code"].asString();
		auto eventCycleStatusNode = value["EventCycleStatus"];
		if(!eventCycleStatusNode["Name"].isNull())
			instanceSystemEventSetObject.eventCycleStatus.name = eventCycleStatusNode["Name"].asString();
		if(!eventCycleStatusNode["Code"].isNull())
			instanceSystemEventSetObject.eventCycleStatus.code = eventCycleStatusNode["Code"].asString();
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
		auto allInactiveDisksNode = extendedAttributeNode["InactiveDisks"]["inactiveDisk"];
		for (auto extendedAttributeNodeInactiveDisksinactiveDisk : allInactiveDisksNode)
		{
			InstanceSystemEventSetItem::ExtendedAttribute::InactiveDisk inactiveDiskObject;
			if(!extendedAttributeNodeInactiveDisksinactiveDisk["CreationTime"].isNull())
				inactiveDiskObject.creationTime = extendedAttributeNodeInactiveDisksinactiveDisk["CreationTime"].asString();
			if(!extendedAttributeNodeInactiveDisksinactiveDisk["DeviceSize"].isNull())
				inactiveDiskObject.deviceSize = extendedAttributeNodeInactiveDisksinactiveDisk["DeviceSize"].asString();
			if(!extendedAttributeNodeInactiveDisksinactiveDisk["DeviceCategory"].isNull())
				inactiveDiskObject.deviceCategory = extendedAttributeNodeInactiveDisksinactiveDisk["DeviceCategory"].asString();
			if(!extendedAttributeNodeInactiveDisksinactiveDisk["DeviceType"].isNull())
				inactiveDiskObject.deviceType = extendedAttributeNodeInactiveDisksinactiveDisk["DeviceType"].asString();
			if(!extendedAttributeNodeInactiveDisksinactiveDisk["ReleaseTime"].isNull())
				inactiveDiskObject.releaseTime = extendedAttributeNodeInactiveDisksinactiveDisk["ReleaseTime"].asString();
			instanceSystemEventSetObject.extendedAttribute.inactiveDisks.push_back(inactiveDiskObject);
		}
			auto allMigrationOptions = extendedAttributeNode["MigrationOptions"]["migrationOption"];
			for (auto value : allMigrationOptions)
				instanceSystemEventSetObject.extendedAttribute.migrationOptions.push_back(value.asString());
		instanceSystemEventSet_.push_back(instanceSystemEventSetObject);
	}
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["NextToken"].isNull())
		nextToken_ = value["NextToken"].asString();

}

int DescribeRCInstanceHistoryEventsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeRCInstanceHistoryEventsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeRCInstanceHistoryEventsResult::getNextToken()const
{
	return nextToken_;
}

int DescribeRCInstanceHistoryEventsResult::getPageNumber()const
{
	return pageNumber_;
}

std::vector<DescribeRCInstanceHistoryEventsResult::InstanceSystemEventSetItem> DescribeRCInstanceHistoryEventsResult::getInstanceSystemEventSet()const
{
	return instanceSystemEventSet_;
}

