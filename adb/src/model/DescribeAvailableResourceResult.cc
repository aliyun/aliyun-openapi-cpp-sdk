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
		auto allSupportedModeNode = valueAvailableZoneListAvailableZone["SupportedMode"]["SupportedModeItem"];
		for (auto valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItem : allSupportedModeNode)
		{
			AvailableZone::SupportedModeItem supportedModeObject;
			if(!valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItem["Mode"].isNull())
				supportedModeObject.mode = valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItem["Mode"].asString();
			auto allSupportedSerialListNode = valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItem["SupportedSerialList"]["SupportedSerialListItem"];
			for (auto valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItem : allSupportedSerialListNode)
			{
				AvailableZone::SupportedModeItem::SupportedSerialListItem supportedSerialListObject;
				if(!valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItem["Serial"].isNull())
					supportedSerialListObject.serial = valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItem["Serial"].asString();
				auto allSupportedFlexibleResourceNode = valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItem["SupportedFlexibleResource"]["SupportedFlexibleResourceItem"];
				for (auto valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItemSupportedFlexibleResourceSupportedFlexibleResourceItem : allSupportedFlexibleResourceNode)
				{
					AvailableZone::SupportedModeItem::SupportedSerialListItem::SupportedFlexibleResourceItem supportedFlexibleResourceObject;
					if(!valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItemSupportedFlexibleResourceSupportedFlexibleResourceItem["StorageType"].isNull())
						supportedFlexibleResourceObject.storageType = valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItemSupportedFlexibleResourceSupportedFlexibleResourceItem["StorageType"].asString();
					auto supportedElasticIOResourceNode = value["SupportedElasticIOResource"];
					if(!supportedElasticIOResourceNode["Step"].isNull())
						supportedFlexibleResourceObject.supportedElasticIOResource.step = supportedElasticIOResourceNode["Step"].asString();
					if(!supportedElasticIOResourceNode["MinCount"].isNull())
						supportedFlexibleResourceObject.supportedElasticIOResource.minCount = supportedElasticIOResourceNode["MinCount"].asString();
					if(!supportedElasticIOResourceNode["MaxCount"].isNull())
						supportedFlexibleResourceObject.supportedElasticIOResource.maxCount = supportedElasticIOResourceNode["MaxCount"].asString();
					auto allSupportedComputeResource1 = value["SupportedComputeResource"]["SupportedComputeResource"];
					for (auto value : allSupportedComputeResource1)
						supportedFlexibleResourceObject.supportedComputeResource1.push_back(value.asString());
					auto allSupportedStorageResource2 = value["SupportedStorageResource"]["SupportedStorageResource"];
					for (auto value : allSupportedStorageResource2)
						supportedFlexibleResourceObject.supportedStorageResource2.push_back(value.asString());
					supportedSerialListObject.supportedFlexibleResource.push_back(supportedFlexibleResourceObject);
				}
				auto allSupportedInstanceClassListNode = valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItem["SupportedInstanceClassList"]["SupportedInstanceClass"];
				for (auto valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItemSupportedInstanceClassListSupportedInstanceClass : allSupportedInstanceClassListNode)
				{
					AvailableZone::SupportedModeItem::SupportedSerialListItem::SupportedInstanceClass supportedInstanceClassListObject;
					if(!valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItemSupportedInstanceClassListSupportedInstanceClass["InstanceClass"].isNull())
						supportedInstanceClassListObject.instanceClass = valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItemSupportedInstanceClassListSupportedInstanceClass["InstanceClass"].asString();
					if(!valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItemSupportedInstanceClassListSupportedInstanceClass["Tips"].isNull())
						supportedInstanceClassListObject.tips = valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItemSupportedInstanceClassListSupportedInstanceClass["Tips"].asString();
					auto allSupportedNodeCountListNode = valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItemSupportedInstanceClassListSupportedInstanceClass["SupportedNodeCountList"]["SupportedNodeCount"];
					for (auto valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItemSupportedInstanceClassListSupportedInstanceClassSupportedNodeCountListSupportedNodeCount : allSupportedNodeCountListNode)
					{
						AvailableZone::SupportedModeItem::SupportedSerialListItem::SupportedInstanceClass::SupportedNodeCount supportedNodeCountListObject;
						auto nodeCountNode = value["NodeCount"];
						if(!nodeCountNode["Step"].isNull())
							supportedNodeCountListObject.nodeCount.step = nodeCountNode["Step"].asString();
						if(!nodeCountNode["MinCount"].isNull())
							supportedNodeCountListObject.nodeCount.minCount = nodeCountNode["MinCount"].asString();
						if(!nodeCountNode["MaxCount"].isNull())
							supportedNodeCountListObject.nodeCount.maxCount = nodeCountNode["MaxCount"].asString();
						auto allStorageSize = value["StorageSize"]["StorageSize"];
						for (auto value : allStorageSize)
							supportedNodeCountListObject.storageSize.push_back(value.asString());
						supportedInstanceClassListObject.supportedNodeCountList.push_back(supportedNodeCountListObject);
					}
					auto allSupportedExecutorListNode = valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItemSupportedInstanceClassListSupportedInstanceClass["SupportedExecutorList"]["SupportedExecutor"];
					for (auto valueAvailableZoneListAvailableZoneSupportedModeSupportedModeItemSupportedSerialListSupportedSerialListItemSupportedInstanceClassListSupportedInstanceClassSupportedExecutorListSupportedExecutor : allSupportedExecutorListNode)
					{
						AvailableZone::SupportedModeItem::SupportedSerialListItem::SupportedInstanceClass::SupportedExecutor supportedExecutorListObject;
						auto nodeCount3Node = value["NodeCount"];
						if(!nodeCount3Node["Step"].isNull())
							supportedExecutorListObject.nodeCount3.step = nodeCount3Node["Step"].asString();
						if(!nodeCount3Node["MinCount"].isNull())
							supportedExecutorListObject.nodeCount3.minCount = nodeCount3Node["MinCount"].asString();
						if(!nodeCount3Node["MaxCount"].isNull())
							supportedExecutorListObject.nodeCount3.maxCount = nodeCount3Node["MaxCount"].asString();
						supportedInstanceClassListObject.supportedExecutorList.push_back(supportedExecutorListObject);
					}
					supportedSerialListObject.supportedInstanceClassList.push_back(supportedInstanceClassListObject);
				}
				supportedModeObject.supportedSerialList.push_back(supportedSerialListObject);
			}
			availableZoneListObject.supportedMode.push_back(supportedModeObject);
		}
		auto allSupportedComputeResource = value["SupportedComputeResource"]["SupportedComputeResource"];
		for (auto value : allSupportedComputeResource)
			availableZoneListObject.supportedComputeResource.push_back(value.asString());
		auto allSupportedStorageResource = value["SupportedStorageResource"]["SupportedStorageResource"];
		for (auto value : allSupportedStorageResource)
			availableZoneListObject.supportedStorageResource.push_back(value.asString());
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

