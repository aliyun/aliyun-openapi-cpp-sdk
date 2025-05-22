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

#include <alibabacloud/rds/model/DescribeDedicatedHostGroupsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDedicatedHostGroupsResult::DescribeDedicatedHostGroupsResult() :
	ServiceResult()
{}

DescribeDedicatedHostGroupsResult::DescribeDedicatedHostGroupsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDedicatedHostGroupsResult::~DescribeDedicatedHostGroupsResult()
{}

void DescribeDedicatedHostGroupsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDedicatedHostGroupsNode = value["DedicatedHostGroups"]["DedicatedHostGroupsItem"];
	for (auto valueDedicatedHostGroupsDedicatedHostGroupsItem : allDedicatedHostGroupsNode)
	{
		DedicatedHostGroupsItem dedicatedHostGroupsObject;
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["AllocationPolicy"].isNull())
			dedicatedHostGroupsObject.allocationPolicy = valueDedicatedHostGroupsDedicatedHostGroupsItem["AllocationPolicy"].asString();
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["BastionInstanceId"].isNull())
			dedicatedHostGroupsObject.bastionInstanceId = valueDedicatedHostGroupsDedicatedHostGroupsItem["BastionInstanceId"].asString();
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["CpuAllocateRation"].isNull())
			dedicatedHostGroupsObject.cpuAllocateRation = std::stof(valueDedicatedHostGroupsDedicatedHostGroupsItem["CpuAllocateRation"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["CpuAllocatedAmount"].isNull())
			dedicatedHostGroupsObject.cpuAllocatedAmount = std::stof(valueDedicatedHostGroupsDedicatedHostGroupsItem["CpuAllocatedAmount"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["CpuAllocationRatio"].isNull())
			dedicatedHostGroupsObject.cpuAllocationRatio = std::stoi(valueDedicatedHostGroupsDedicatedHostGroupsItem["CpuAllocationRatio"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["CreateTime"].isNull())
			dedicatedHostGroupsObject.createTime = valueDedicatedHostGroupsDedicatedHostGroupsItem["CreateTime"].asString();
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["DedicatedHostCountGroupByHostType"].isNull())
			dedicatedHostGroupsObject.dedicatedHostCountGroupByHostType = valueDedicatedHostGroupsDedicatedHostGroupsItem["DedicatedHostCountGroupByHostType"].asString();
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["DedicatedHostGroupDesc"].isNull())
			dedicatedHostGroupsObject.dedicatedHostGroupDesc = valueDedicatedHostGroupsDedicatedHostGroupsItem["DedicatedHostGroupDesc"].asString();
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["DedicatedHostGroupId"].isNull())
			dedicatedHostGroupsObject.dedicatedHostGroupId = valueDedicatedHostGroupsDedicatedHostGroupsItem["DedicatedHostGroupId"].asString();
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["DiskAllocateRation"].isNull())
			dedicatedHostGroupsObject.diskAllocateRation = std::stof(valueDedicatedHostGroupsDedicatedHostGroupsItem["DiskAllocateRation"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["DiskAllocatedAmount"].isNull())
			dedicatedHostGroupsObject.diskAllocatedAmount = std::stof(valueDedicatedHostGroupsDedicatedHostGroupsItem["DiskAllocatedAmount"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["DiskAllocationRatio"].isNull())
			dedicatedHostGroupsObject.diskAllocationRatio = std::stoi(valueDedicatedHostGroupsDedicatedHostGroupsItem["DiskAllocationRatio"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["DiskUsedAmount"].isNull())
			dedicatedHostGroupsObject.diskUsedAmount = std::stof(valueDedicatedHostGroupsDedicatedHostGroupsItem["DiskUsedAmount"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["DiskUtility"].isNull())
			dedicatedHostGroupsObject.diskUtility = std::stof(valueDedicatedHostGroupsDedicatedHostGroupsItem["DiskUtility"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["Engine"].isNull())
			dedicatedHostGroupsObject.engine = valueDedicatedHostGroupsDedicatedHostGroupsItem["Engine"].asString();
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["HostNumber"].isNull())
			dedicatedHostGroupsObject.hostNumber = std::stoi(valueDedicatedHostGroupsDedicatedHostGroupsItem["HostNumber"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["HostReplacePolicy"].isNull())
			dedicatedHostGroupsObject.hostReplacePolicy = valueDedicatedHostGroupsDedicatedHostGroupsItem["HostReplacePolicy"].asString();
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["InstanceNumber"].isNull())
			dedicatedHostGroupsObject.instanceNumber = std::stoi(valueDedicatedHostGroupsDedicatedHostGroupsItem["InstanceNumber"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["MemAllocateRation"].isNull())
			dedicatedHostGroupsObject.memAllocateRation = std::stof(valueDedicatedHostGroupsDedicatedHostGroupsItem["MemAllocateRation"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["MemAllocatedAmount"].isNull())
			dedicatedHostGroupsObject.memAllocatedAmount = std::stof(valueDedicatedHostGroupsDedicatedHostGroupsItem["MemAllocatedAmount"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["MemAllocationRatio"].isNull())
			dedicatedHostGroupsObject.memAllocationRatio = std::stoi(valueDedicatedHostGroupsDedicatedHostGroupsItem["MemAllocationRatio"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["MemUsedAmount"].isNull())
			dedicatedHostGroupsObject.memUsedAmount = std::stof(valueDedicatedHostGroupsDedicatedHostGroupsItem["MemUsedAmount"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["MemUtility"].isNull())
			dedicatedHostGroupsObject.memUtility = std::stof(valueDedicatedHostGroupsDedicatedHostGroupsItem["MemUtility"].asString());
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["OpenPermission"].isNull())
			dedicatedHostGroupsObject.openPermission = valueDedicatedHostGroupsDedicatedHostGroupsItem["OpenPermission"].asString();
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["Text"].isNull())
			dedicatedHostGroupsObject.text = valueDedicatedHostGroupsDedicatedHostGroupsItem["Text"].asString();
		if(!valueDedicatedHostGroupsDedicatedHostGroupsItem["VPCId"].isNull())
			dedicatedHostGroupsObject.vPCId = valueDedicatedHostGroupsDedicatedHostGroupsItem["VPCId"].asString();
		auto allZoneIDList = value["ZoneIDList"]["ZoneIDList"];
		for (auto value : allZoneIDList)
			dedicatedHostGroupsObject.zoneIDList.push_back(value.asString());
		dedicatedHostGroups_.push_back(dedicatedHostGroupsObject);
	}

}

std::vector<DescribeDedicatedHostGroupsResult::DedicatedHostGroupsItem> DescribeDedicatedHostGroupsResult::getDedicatedHostGroups()const
{
	return dedicatedHostGroups_;
}

