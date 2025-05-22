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

#include <alibabacloud/rds/model/DescribeDedicatedHostsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDedicatedHostsResult::DescribeDedicatedHostsResult() :
	ServiceResult()
{}

DescribeDedicatedHostsResult::DescribeDedicatedHostsResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDedicatedHostsResult::~DescribeDedicatedHostsResult()
{}

void DescribeDedicatedHostsResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	auto allDedicatedHostsNode = value["DedicatedHosts"]["DedicatedHostsItem"];
	for (auto valueDedicatedHostsDedicatedHostsItem : allDedicatedHostsNode)
	{
		DedicatedHostsItem dedicatedHostsObject;
		if(!valueDedicatedHostsDedicatedHostsItem["AccountName"].isNull())
			dedicatedHostsObject.accountName = valueDedicatedHostsDedicatedHostsItem["AccountName"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["AllocationStatus"].isNull())
			dedicatedHostsObject.allocationStatus = valueDedicatedHostsDedicatedHostsItem["AllocationStatus"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["BastionInstanceId"].isNull())
			dedicatedHostsObject.bastionInstanceId = valueDedicatedHostsDedicatedHostsItem["BastionInstanceId"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["CPUAllocationRatio"].isNull())
			dedicatedHostsObject.cPUAllocationRatio = valueDedicatedHostsDedicatedHostsItem["CPUAllocationRatio"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["CpuUsed"].isNull())
			dedicatedHostsObject.cpuUsed = valueDedicatedHostsDedicatedHostsItem["CpuUsed"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["CreatedTime"].isNull())
			dedicatedHostsObject.createdTime = valueDedicatedHostsDedicatedHostsItem["CreatedTime"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["DedicatedHostGroupId"].isNull())
			dedicatedHostsObject.dedicatedHostGroupId = valueDedicatedHostsDedicatedHostsItem["DedicatedHostGroupId"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["DedicatedHostId"].isNull())
			dedicatedHostsObject.dedicatedHostId = valueDedicatedHostsDedicatedHostsItem["DedicatedHostId"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["DiskAllocationRatio"].isNull())
			dedicatedHostsObject.diskAllocationRatio = valueDedicatedHostsDedicatedHostsItem["DiskAllocationRatio"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["EndTime"].isNull())
			dedicatedHostsObject.endTime = valueDedicatedHostsDedicatedHostsItem["EndTime"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["Engine"].isNull())
			dedicatedHostsObject.engine = valueDedicatedHostsDedicatedHostsItem["Engine"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["HostCPU"].isNull())
			dedicatedHostsObject.hostCPU = valueDedicatedHostsDedicatedHostsItem["HostCPU"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["HostClass"].isNull())
			dedicatedHostsObject.hostClass = valueDedicatedHostsDedicatedHostsItem["HostClass"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["HostMem"].isNull())
			dedicatedHostsObject.hostMem = valueDedicatedHostsDedicatedHostsItem["HostMem"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["HostName"].isNull())
			dedicatedHostsObject.hostName = valueDedicatedHostsDedicatedHostsItem["HostName"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["HostStatus"].isNull())
			dedicatedHostsObject.hostStatus = valueDedicatedHostsDedicatedHostsItem["HostStatus"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["HostStorage"].isNull())
			dedicatedHostsObject.hostStorage = valueDedicatedHostsDedicatedHostsItem["HostStorage"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["HostType"].isNull())
			dedicatedHostsObject.hostType = valueDedicatedHostsDedicatedHostsItem["HostType"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["IPAddress"].isNull())
			dedicatedHostsObject.iPAddress = valueDedicatedHostsDedicatedHostsItem["IPAddress"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["ImageCategory"].isNull())
			dedicatedHostsObject.imageCategory = valueDedicatedHostsDedicatedHostsItem["ImageCategory"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["InstanceNumber"].isNull())
			dedicatedHostsObject.instanceNumber = valueDedicatedHostsDedicatedHostsItem["InstanceNumber"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["MemAllocationRatio"].isNull())
			dedicatedHostsObject.memAllocationRatio = valueDedicatedHostsDedicatedHostsItem["MemAllocationRatio"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["MemoryUsed"].isNull())
			dedicatedHostsObject.memoryUsed = valueDedicatedHostsDedicatedHostsItem["MemoryUsed"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["OpenPermission"].isNull())
			dedicatedHostsObject.openPermission = valueDedicatedHostsDedicatedHostsItem["OpenPermission"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["StorageUsed"].isNull())
			dedicatedHostsObject.storageUsed = valueDedicatedHostsDedicatedHostsItem["StorageUsed"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["VPCId"].isNull())
			dedicatedHostsObject.vPCId = valueDedicatedHostsDedicatedHostsItem["VPCId"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["VSwitchId"].isNull())
			dedicatedHostsObject.vSwitchId = valueDedicatedHostsDedicatedHostsItem["VSwitchId"].asString();
		if(!valueDedicatedHostsDedicatedHostsItem["ZoneId"].isNull())
			dedicatedHostsObject.zoneId = valueDedicatedHostsDedicatedHostsItem["ZoneId"].asString();
		dedicatedHosts_.push_back(dedicatedHostsObject);
	}
	if(!value["DedicatedHostGroupId"].isNull())
		dedicatedHostGroupId_ = value["DedicatedHostGroupId"].asString();

}

std::vector<DescribeDedicatedHostsResult::DedicatedHostsItem> DescribeDedicatedHostsResult::getDedicatedHosts()const
{
	return dedicatedHosts_;
}

std::string DescribeDedicatedHostsResult::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

