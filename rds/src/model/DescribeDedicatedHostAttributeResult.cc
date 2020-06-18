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

#include <alibabacloud/rds/model/DescribeDedicatedHostAttributeResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

DescribeDedicatedHostAttributeResult::DescribeDedicatedHostAttributeResult() :
	ServiceResult()
{}

DescribeDedicatedHostAttributeResult::DescribeDedicatedHostAttributeResult(const std::string &payload) :
	ServiceResult()
{
	parse(payload);
}

DescribeDedicatedHostAttributeResult::~DescribeDedicatedHostAttributeResult()
{}

void DescribeDedicatedHostAttributeResult::parse(const std::string &payload)
{
	Json::Reader reader;
	Json::Value value;
	reader.parse(payload, value);
	setRequestId(value["RequestId"].asString());
	if(!value["DedicatedHostGroupId"].isNull())
		dedicatedHostGroupId_ = value["DedicatedHostGroupId"].asString();
	if(!value["DedicatedHostId"].isNull())
		dedicatedHostId_ = value["DedicatedHostId"].asString();
	if(!value["RegionId"].isNull())
		regionId_ = value["RegionId"].asString();
	if(!value["ZoneId"].isNull())
		zoneId_ = value["ZoneId"].asString();
	if(!value["VPCId"].isNull())
		vPCId_ = value["VPCId"].asString();
	if(!value["VSwitchId"].isNull())
		vSwitchId_ = value["VSwitchId"].asString();
	if(!value["IPAddress"].isNull())
		iPAddress_ = value["IPAddress"].asString();
	if(!value["HostName"].isNull())
		hostName_ = value["HostName"].asString();
	if(!value["HostStatus"].isNull())
		hostStatus_ = value["HostStatus"].asString();
	if(!value["HostClass"].isNull())
		hostClass_ = value["HostClass"].asString();
	if(!value["HostCPU"].isNull())
		hostCPU_ = std::stoi(value["HostCPU"].asString());
	if(!value["HostMem"].isNull())
		hostMem_ = std::stoi(value["HostMem"].asString());
	if(!value["HostStorage"].isNull())
		hostStorage_ = std::stoi(value["HostStorage"].asString());
	if(!value["CPUAllocationRatio"].isNull())
		cPUAllocationRatio_ = value["CPUAllocationRatio"].asString();
	if(!value["MemAllocationRatio"].isNull())
		memAllocationRatio_ = value["MemAllocationRatio"].asString();
	if(!value["DiskAllocationRatio"].isNull())
		diskAllocationRatio_ = value["DiskAllocationRatio"].asString();
	if(!value["InstanceNumber"].isNull())
		instanceNumber_ = std::stoi(value["InstanceNumber"].asString());
	if(!value["InstanceNumberMaster"].isNull())
		instanceNumberMaster_ = std::stoi(value["InstanceNumberMaster"].asString());
	if(!value["InstanceNumberSlave"].isNull())
		instanceNumberSlave_ = std::stoi(value["InstanceNumberSlave"].asString());
	if(!value["InstanceNumberROMaster"].isNull())
		instanceNumberROMaster_ = std::stoi(value["InstanceNumberROMaster"].asString());
	if(!value["InstanceNumberROSlave"].isNull())
		instanceNumberROSlave_ = std::stoi(value["InstanceNumberROSlave"].asString());
	if(!value["CreatedTime"].isNull())
		createdTime_ = value["CreatedTime"].asString();
	if(!value["ExpiredTime"].isNull())
		expiredTime_ = value["ExpiredTime"].asString();
	if(!value["AutoRenew"].isNull())
		autoRenew_ = value["AutoRenew"].asString();
	if(!value["AllocationStatus"].isNull())
		allocationStatus_ = value["AllocationStatus"].asString();
	if(!value["CpuUsed"].isNull())
		cpuUsed_ = value["CpuUsed"].asString();
	if(!value["MemoryUsed"].isNull())
		memoryUsed_ = value["MemoryUsed"].asString();
	if(!value["StorageUsed"].isNull())
		storageUsed_ = value["StorageUsed"].asString();
	if(!value["HostType"].isNull())
		hostType_ = value["HostType"].asString();
	if(!value["AccountName"].isNull())
		accountName_ = value["AccountName"].asString();
	if(!value["OpenPermission"].isNull())
		openPermission_ = value["OpenPermission"].asString();
	if(!value["ImageCategory"].isNull())
		imageCategory_ = value["ImageCategory"].asString();

}

std::string DescribeDedicatedHostAttributeResult::getCPUAllocationRatio()const
{
	return cPUAllocationRatio_;
}

std::string DescribeDedicatedHostAttributeResult::getDiskAllocationRatio()const
{
	return diskAllocationRatio_;
}

std::string DescribeDedicatedHostAttributeResult::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

int DescribeDedicatedHostAttributeResult::getInstanceNumber()const
{
	return instanceNumber_;
}

std::string DescribeDedicatedHostAttributeResult::getCreatedTime()const
{
	return createdTime_;
}

std::string DescribeDedicatedHostAttributeResult::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

std::string DescribeDedicatedHostAttributeResult::getAutoRenew()const
{
	return autoRenew_;
}

std::string DescribeDedicatedHostAttributeResult::getImageCategory()const
{
	return imageCategory_;
}

int DescribeDedicatedHostAttributeResult::getHostStorage()const
{
	return hostStorage_;
}

int DescribeDedicatedHostAttributeResult::getInstanceNumberSlave()const
{
	return instanceNumberSlave_;
}

std::string DescribeDedicatedHostAttributeResult::getOpenPermission()const
{
	return openPermission_;
}

std::string DescribeDedicatedHostAttributeResult::getHostType()const
{
	return hostType_;
}

std::string DescribeDedicatedHostAttributeResult::getExpiredTime()const
{
	return expiredTime_;
}

int DescribeDedicatedHostAttributeResult::getHostMem()const
{
	return hostMem_;
}

std::string DescribeDedicatedHostAttributeResult::getHostStatus()const
{
	return hostStatus_;
}

std::string DescribeDedicatedHostAttributeResult::getMemoryUsed()const
{
	return memoryUsed_;
}

std::string DescribeDedicatedHostAttributeResult::getCpuUsed()const
{
	return cpuUsed_;
}

std::string DescribeDedicatedHostAttributeResult::getHostName()const
{
	return hostName_;
}

int DescribeDedicatedHostAttributeResult::getInstanceNumberROSlave()const
{
	return instanceNumberROSlave_;
}

std::string DescribeDedicatedHostAttributeResult::getAllocationStatus()const
{
	return allocationStatus_;
}

std::string DescribeDedicatedHostAttributeResult::getZoneId()const
{
	return zoneId_;
}

std::string DescribeDedicatedHostAttributeResult::getMemAllocationRatio()const
{
	return memAllocationRatio_;
}

std::string DescribeDedicatedHostAttributeResult::getVPCId()const
{
	return vPCId_;
}

int DescribeDedicatedHostAttributeResult::getInstanceNumberROMaster()const
{
	return instanceNumberROMaster_;
}

std::string DescribeDedicatedHostAttributeResult::getVSwitchId()const
{
	return vSwitchId_;
}

int DescribeDedicatedHostAttributeResult::getInstanceNumberMaster()const
{
	return instanceNumberMaster_;
}

std::string DescribeDedicatedHostAttributeResult::getStorageUsed()const
{
	return storageUsed_;
}

std::string DescribeDedicatedHostAttributeResult::getHostClass()const
{
	return hostClass_;
}

int DescribeDedicatedHostAttributeResult::getHostCPU()const
{
	return hostCPU_;
}

std::string DescribeDedicatedHostAttributeResult::getRegionId()const
{
	return regionId_;
}

std::string DescribeDedicatedHostAttributeResult::getIPAddress()const
{
	return iPAddress_;
}

std::string DescribeDedicatedHostAttributeResult::getAccountName()const
{
	return accountName_;
}

