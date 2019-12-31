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
		auto allSupportedSerialListNode = allAvailableZoneListNode["SupportedSerialList"]["SupportedSerial"];
		for (auto allAvailableZoneListNodeSupportedSerialListSupportedSerial : allSupportedSerialListNode)
		{
			AvailableZone::SupportedSerial supportedSerialListObject;
			if(!allAvailableZoneListNodeSupportedSerialListSupportedSerial["Serial"].isNull())
				supportedSerialListObject.serial = allAvailableZoneListNodeSupportedSerialListSupportedSerial["Serial"].asString();
			auto allSupportedInstanceClassListNode = allSupportedSerialListNode["SupportedInstanceClassList"]["SupportedInstanceClass"];
			for (auto allSupportedSerialListNodeSupportedInstanceClassListSupportedInstanceClass : allSupportedInstanceClassListNode)
			{
				AvailableZone::SupportedSerial::SupportedInstanceClass supportedInstanceClassListObject;
				if(!allSupportedSerialListNodeSupportedInstanceClassListSupportedInstanceClass["InstanceClass"].isNull())
					supportedInstanceClassListObject.instanceClass = allSupportedSerialListNodeSupportedInstanceClassListSupportedInstanceClass["InstanceClass"].asString();
				if(!allSupportedSerialListNodeSupportedInstanceClassListSupportedInstanceClass["Tips"].isNull())
					supportedInstanceClassListObject.tips = allSupportedSerialListNodeSupportedInstanceClassListSupportedInstanceClass["Tips"].asString();
				auto allSupportedNodeCountListNode = allSupportedInstanceClassListNode["SupportedNodeCountList"]["SupportedNodeCount"];
				for (auto allSupportedInstanceClassListNodeSupportedNodeCountListSupportedNodeCount : allSupportedNodeCountListNode)
				{
					AvailableZone::SupportedSerial::SupportedInstanceClass::SupportedNodeCount supportedNodeCountListObject;
					if(!allSupportedInstanceClassListNodeSupportedNodeCountListSupportedNodeCount["NodeCount"].isNull())
						supportedNodeCountListObject.nodeCount = allSupportedInstanceClassListNodeSupportedNodeCountListSupportedNodeCount["NodeCount"].asString();
					auto allStorageSize = value["StorageSize"]["StorageSize"];
					for (auto value : allStorageSize)
						supportedNodeCountListObject.storageSize.push_back(value.asString());
					supportedInstanceClassListObject.supportedNodeCountList.push_back(supportedNodeCountListObject);
				}
				supportedSerialListObject.supportedInstanceClassList.push_back(supportedInstanceClassListObject);
			}
			availableZoneListObject.supportedSerialList.push_back(supportedSerialListObject);
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

