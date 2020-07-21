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

#include <alibabacloud/adb/model/DescribeAvailableResourceResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Adb;
using namespace AlibabaCloud::Adb::Model;

DescribeAvailableResourceResult::DescribeAvailableResourceResult() :
	ServiceResult()
{}

DescribeAvailableResourceResult::DescribeAvailableResourceResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeAvailableResourceResult::~DescribeAvailableResourceResult()
{}

void DescribeAvailableResourceResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allAvailableZoneListNode = value["AvailableZoneList"]["AvailableZone"];
	for (auto valueAvailableZoneListAvailableZone : allAvailableZoneListNode)
	{
		AvailableZone availableZoneListObject;
		if(!valueAvailableZoneListAvailableZone["ZoneId"].isNull())
			availableZoneListObject.zoneId = valueAvailableZoneListAvailableZone["ZoneId"].asString();
		auto allSupportedModeNode = allAvailableZoneListNode["SupportedMode"]["SupportedModeItem"];
		for (auto allAvailableZoneListNodeSupportedModeSupportedModeItem : allSupportedModeNode)
		{
			AvailableZone::SupportedModeItem supportedModeObject;
			if(!allAvailableZoneListNodeSupportedModeSupportedModeItem["Mode"].isNull())
				supportedModeObject.mode = allAvailableZoneListNodeSupportedModeSupportedModeItem["Mode"].asString();
			auto allSupportedSerialListNode = allSupportedModeNode["SupportedSerialList"]["SupportedSerialListItem"];
			for (auto allSupportedModeNodeSupportedSerialListSupportedSerialListItem : allSupportedSerialListNode)
			{
				AvailableZone::SupportedModeItem::SupportedSerialListItem supportedSerialListObject;
				if(!allSupportedModeNodeSupportedSerialListSupportedSerialListItem["Serial"].isNull())
					supportedSerialListObject.serial = allSupportedModeNodeSupportedSerialListSupportedSerialListItem["Serial"].asString();
				auto allSupportedFlexibleResourceNode = allSupportedSerialListNode["SupportedFlexibleResource"]["SupportedFlexibleResourceItem"];
				for (auto allSupportedSerialListNodeSupportedFlexibleResourceSupportedFlexibleResourceItem : allSupportedFlexibleResourceNode)
				{
					AvailableZone::SupportedModeItem::SupportedSerialListItem::SupportedFlexibleResourceItem supportedFlexibleResourceObject;
					if(!allSupportedSerialListNodeSupportedFlexibleResourceSupportedFlexibleResourceItem["StorageType"].isNull())
						supportedFlexibleResourceObject.storageType = allSupportedSerialListNodeSupportedFlexibleResourceSupportedFlexibleResourceItem["StorageType"].asString();
					auto allSupportedStorageResource = value["SupportedStorageResource"]["SupportedStorageResource"];
					for (auto value : allSupportedStorageResource)
						supportedFlexibleResourceObject.supportedStorageResource.push_back(value.asString());
					auto allSupportedComputeResource = value["SupportedComputeResource"]["SupportedComputeResource"];
					for (auto value : allSupportedComputeResource)
						supportedFlexibleResourceObject.supportedComputeResource.push_back(value.asString());
					supportedSerialListObject.supportedFlexibleResource.push_back(supportedFlexibleResourceObject);
				}
				auto allSupportedInstanceClassListNode = allSupportedSerialListNode["SupportedInstanceClassList"]["SupportedInstanceClass"];
				for (auto allSupportedSerialListNodeSupportedInstanceClassListSupportedInstanceClass : allSupportedInstanceClassListNode)
				{
					AvailableZone::SupportedModeItem::SupportedSerialListItem::SupportedInstanceClass supportedInstanceClassListObject;
					if(!allSupportedSerialListNodeSupportedInstanceClassListSupportedInstanceClass["InstanceClass"].isNull())
						supportedInstanceClassListObject.instanceClass = allSupportedSerialListNodeSupportedInstanceClassListSupportedInstanceClass["InstanceClass"].asString();
					if(!allSupportedSerialListNodeSupportedInstanceClassListSupportedInstanceClass["Tips"].isNull())
						supportedInstanceClassListObject.tips = allSupportedSerialListNodeSupportedInstanceClassListSupportedInstanceClass["Tips"].asString();
					auto allSupportedNodeCountListNode = allSupportedInstanceClassListNode["SupportedNodeCountList"]["SupportedNodeCount"];
					for (auto allSupportedInstanceClassListNodeSupportedNodeCountListSupportedNodeCount : allSupportedNodeCountListNode)
					{
						AvailableZone::SupportedModeItem::SupportedSerialListItem::SupportedInstanceClass::SupportedNodeCount supportedNodeCountListObject;
						auto nodeCountNode = value["NodeCount"];
						if(!nodeCountNode["MinCount"].isNull())
							supportedNodeCountListObject.nodeCount.minCount = nodeCountNode["MinCount"].asString();
						if(!nodeCountNode["MaxCount"].isNull())
							supportedNodeCountListObject.nodeCount.maxCount = nodeCountNode["MaxCount"].asString();
						if(!nodeCountNode["Step"].isNull())
							supportedNodeCountListObject.nodeCount.step = nodeCountNode["Step"].asString();
						auto allStorageSize = value["StorageSize"]["StorageSize"];
						for (auto value : allStorageSize)
							supportedNodeCountListObject.storageSize.push_back(value.asString());
						supportedInstanceClassListObject.supportedNodeCountList.push_back(supportedNodeCountListObject);
					}
					auto allSupportedExecutorListNode = allSupportedInstanceClassListNode["SupportedExecutorList"]["SupportedExecutor"];
					for (auto allSupportedInstanceClassListNodeSupportedExecutorListSupportedExecutor : allSupportedExecutorListNode)
					{
						AvailableZone::SupportedModeItem::SupportedSerialListItem::SupportedInstanceClass::SupportedExecutor supportedExecutorListObject;
						auto nodeCount1Node = value["NodeCount"];
						if(!nodeCount1Node["MinCount"].isNull())
							supportedExecutorListObject.nodeCount1.minCount = nodeCount1Node["MinCount"].asString();
						if(!nodeCount1Node["MaxCount"].isNull())
							supportedExecutorListObject.nodeCount1.maxCount = nodeCount1Node["MaxCount"].asString();
						if(!nodeCount1Node["Step"].isNull())
							supportedExecutorListObject.nodeCount1.step = nodeCount1Node["Step"].asString();
						supportedInstanceClassListObject.supportedExecutorList.push_back(supportedExecutorListObject);
					}
					supportedSerialListObject.supportedInstanceClassList.push_back(supportedInstanceClassListObject);
				}
				supportedModeObject.supportedSerialList.push_back(supportedSerialListObject);
			}
			availableZoneListObject.supportedMode.push_back(supportedModeObject);
		}
		availableZoneList_.push_back(availableZoneListObject);
	}
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();

}

std::string DescribeAvailableResourceResult::getRegionId()const
{
	return regionId_;
}

std::vector<DescribeAvailableResourceResult::AvailableZone> DescribeAvailableResourceResult::getAvailableZoneList()const
{
	return availableZoneList_;
}

