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

#include <alibabacloud/ecs/model/DescribeDedicatedHostsResult.h>
#include <json/json.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

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
	auto allDedicatedHostsNode = value["DedicatedHosts"]["DedicatedHost"];
	for (auto valueDedicatedHostsDedicatedHost : allDedicatedHostsNode)
	{
		DedicatedHost dedicatedHostsObject;
		if(!valueDedicatedHostsDedicatedHost["CreationTime"].isNull())
			dedicatedHostsObject.creationTime = valueDedicatedHostsDedicatedHost["CreationTime"].asString();
		if(!valueDedicatedHostsDedicatedHost["SchedulerOptions.ManagedPrivateSpaceId"].isNull())
			dedicatedHostsObject.schedulerOptionsManagedPrivateSpaceId = valueDedicatedHostsDedicatedHost["SchedulerOptions.ManagedPrivateSpaceId"].asString();
		if(!valueDedicatedHostsDedicatedHost["Status"].isNull())
			dedicatedHostsObject.status = valueDedicatedHostsDedicatedHost["Status"].asString();
		if(!valueDedicatedHostsDedicatedHost["Cores"].isNull())
			dedicatedHostsObject.cores = std::stoi(valueDedicatedHostsDedicatedHost["Cores"].asString());
		if(!valueDedicatedHostsDedicatedHost["AutoPlacement"].isNull())
			dedicatedHostsObject.autoPlacement = valueDedicatedHostsDedicatedHost["AutoPlacement"].asString();
		if(!valueDedicatedHostsDedicatedHost["GPUSpec"].isNull())
			dedicatedHostsObject.gPUSpec = valueDedicatedHostsDedicatedHost["GPUSpec"].asString();
		if(!valueDedicatedHostsDedicatedHost["AutoReleaseTime"].isNull())
			dedicatedHostsObject.autoReleaseTime = valueDedicatedHostsDedicatedHost["AutoReleaseTime"].asString();
		if(!valueDedicatedHostsDedicatedHost["ChargeType"].isNull())
			dedicatedHostsObject.chargeType = valueDedicatedHostsDedicatedHost["ChargeType"].asString();
		if(!valueDedicatedHostsDedicatedHost["CpuOverCommitRatio"].isNull())
			dedicatedHostsObject.cpuOverCommitRatio = std::stof(valueDedicatedHostsDedicatedHost["CpuOverCommitRatio"].asString());
		if(!valueDedicatedHostsDedicatedHost["ActionOnMaintenance"].isNull())
			dedicatedHostsObject.actionOnMaintenance = valueDedicatedHostsDedicatedHost["ActionOnMaintenance"].asString();
		if(!valueDedicatedHostsDedicatedHost["SaleCycle"].isNull())
			dedicatedHostsObject.saleCycle = valueDedicatedHostsDedicatedHost["SaleCycle"].asString();
		if(!valueDedicatedHostsDedicatedHost["PhysicalGpus"].isNull())
			dedicatedHostsObject.physicalGpus = std::stoi(valueDedicatedHostsDedicatedHost["PhysicalGpus"].asString());
		if(!valueDedicatedHostsDedicatedHost["RegionId"].isNull())
			dedicatedHostsObject.regionId = valueDedicatedHostsDedicatedHost["RegionId"].asString();
		if(!valueDedicatedHostsDedicatedHost["DedicatedHostName"].isNull())
			dedicatedHostsObject.dedicatedHostName = valueDedicatedHostsDedicatedHost["DedicatedHostName"].asString();
		if(!valueDedicatedHostsDedicatedHost["Description"].isNull())
			dedicatedHostsObject.description = valueDedicatedHostsDedicatedHost["Description"].asString();
		if(!valueDedicatedHostsDedicatedHost["DedicatedHostClusterId"].isNull())
			dedicatedHostsObject.dedicatedHostClusterId = valueDedicatedHostsDedicatedHost["DedicatedHostClusterId"].asString();
		if(!valueDedicatedHostsDedicatedHost["ExpiredTime"].isNull())
			dedicatedHostsObject.expiredTime = valueDedicatedHostsDedicatedHost["ExpiredTime"].asString();
		if(!valueDedicatedHostsDedicatedHost["DedicatedHostType"].isNull())
			dedicatedHostsObject.dedicatedHostType = valueDedicatedHostsDedicatedHost["DedicatedHostType"].asString();
		if(!valueDedicatedHostsDedicatedHost["ResourceGroupId"].isNull())
			dedicatedHostsObject.resourceGroupId = valueDedicatedHostsDedicatedHost["ResourceGroupId"].asString();
		if(!valueDedicatedHostsDedicatedHost["ZoneId"].isNull())
			dedicatedHostsObject.zoneId = valueDedicatedHostsDedicatedHost["ZoneId"].asString();
		if(!valueDedicatedHostsDedicatedHost["DedicatedHostId"].isNull())
			dedicatedHostsObject.dedicatedHostId = valueDedicatedHostsDedicatedHost["DedicatedHostId"].asString();
		if(!valueDedicatedHostsDedicatedHost["Sockets"].isNull())
			dedicatedHostsObject.sockets = std::stoi(valueDedicatedHostsDedicatedHost["Sockets"].asString());
		if(!valueDedicatedHostsDedicatedHost["MachineId"].isNull())
			dedicatedHostsObject.machineId = valueDedicatedHostsDedicatedHost["MachineId"].asString();
		if(!valueDedicatedHostsDedicatedHost["DedicatedHostOwnerId"].isNull())
			dedicatedHostsObject.dedicatedHostOwnerId = std::stol(valueDedicatedHostsDedicatedHost["DedicatedHostOwnerId"].asString());
		auto allInstancesNode = valueDedicatedHostsDedicatedHost["Instances"]["Instance"];
		for (auto valueDedicatedHostsDedicatedHostInstancesInstance : allInstancesNode)
		{
			DedicatedHost::Instance instancesObject;
			if(!valueDedicatedHostsDedicatedHostInstancesInstance["InstanceType"].isNull())
				instancesObject.instanceType = valueDedicatedHostsDedicatedHostInstancesInstance["InstanceType"].asString();
			if(!valueDedicatedHostsDedicatedHostInstancesInstance["InstanceId"].isNull())
				instancesObject.instanceId = valueDedicatedHostsDedicatedHostInstancesInstance["InstanceId"].asString();
			if(!valueDedicatedHostsDedicatedHostInstancesInstance["SocketId"].isNull())
				instancesObject.socketId = valueDedicatedHostsDedicatedHostInstancesInstance["SocketId"].asString();
			if(!valueDedicatedHostsDedicatedHostInstancesInstance["InstanceOwnerId"].isNull())
				instancesObject.instanceOwnerId = std::stol(valueDedicatedHostsDedicatedHostInstancesInstance["InstanceOwnerId"].asString());
			dedicatedHostsObject.instances.push_back(instancesObject);
		}
		auto allOperationLocksNode = valueDedicatedHostsDedicatedHost["OperationLocks"]["OperationLock"];
		for (auto valueDedicatedHostsDedicatedHostOperationLocksOperationLock : allOperationLocksNode)
		{
			DedicatedHost::OperationLock operationLocksObject;
			if(!valueDedicatedHostsDedicatedHostOperationLocksOperationLock["LockReason"].isNull())
				operationLocksObject.lockReason = valueDedicatedHostsDedicatedHostOperationLocksOperationLock["LockReason"].asString();
			dedicatedHostsObject.operationLocks.push_back(operationLocksObject);
		}
		auto allTagsNode = valueDedicatedHostsDedicatedHost["Tags"]["Tag"];
		for (auto valueDedicatedHostsDedicatedHostTagsTag : allTagsNode)
		{
			DedicatedHost::Tag tagsObject;
			if(!valueDedicatedHostsDedicatedHostTagsTag["TagValue"].isNull())
				tagsObject.tagValue = valueDedicatedHostsDedicatedHostTagsTag["TagValue"].asString();
			if(!valueDedicatedHostsDedicatedHostTagsTag["TagKey"].isNull())
				tagsObject.tagKey = valueDedicatedHostsDedicatedHostTagsTag["TagKey"].asString();
			dedicatedHostsObject.tags.push_back(tagsObject);
		}
		auto capacityNode = value["Capacity"];
		if(!capacityNode["AvailableMemory"].isNull())
			dedicatedHostsObject.capacity.availableMemory = std::stof(capacityNode["AvailableMemory"].asString());
		if(!capacityNode["LocalStorageCategory"].isNull())
			dedicatedHostsObject.capacity.localStorageCategory = capacityNode["LocalStorageCategory"].asString();
		if(!capacityNode["TotalMemory"].isNull())
			dedicatedHostsObject.capacity.totalMemory = std::stof(capacityNode["TotalMemory"].asString());
		if(!capacityNode["TotalLocalStorage"].isNull())
			dedicatedHostsObject.capacity.totalLocalStorage = std::stoi(capacityNode["TotalLocalStorage"].asString());
		if(!capacityNode["TotalVcpus"].isNull())
			dedicatedHostsObject.capacity.totalVcpus = std::stoi(capacityNode["TotalVcpus"].asString());
		if(!capacityNode["TotalVgpus"].isNull())
			dedicatedHostsObject.capacity.totalVgpus = std::stoi(capacityNode["TotalVgpus"].asString());
		if(!capacityNode["AvailableLocalStorage"].isNull())
			dedicatedHostsObject.capacity.availableLocalStorage = std::stoi(capacityNode["AvailableLocalStorage"].asString());
		if(!capacityNode["AvailableVcpus"].isNull())
			dedicatedHostsObject.capacity.availableVcpus = std::stoi(capacityNode["AvailableVcpus"].asString());
		if(!capacityNode["AvailableVgpus"].isNull())
			dedicatedHostsObject.capacity.availableVgpus = std::stoi(capacityNode["AvailableVgpus"].asString());
		auto allSocketCapacitiesNode = capacityNode["SocketCapacities"]["SocketCapacity"];
		for (auto capacityNodeSocketCapacitiesSocketCapacity : allSocketCapacitiesNode)
		{
			DedicatedHost::Capacity::SocketCapacity socketCapacityObject;
			if(!capacityNodeSocketCapacitiesSocketCapacity["SocketId"].isNull())
				socketCapacityObject.socketId = std::stoi(capacityNodeSocketCapacitiesSocketCapacity["SocketId"].asString());
			if(!capacityNodeSocketCapacitiesSocketCapacity["AvailableMemory"].isNull())
				socketCapacityObject.availableMemory = std::stof(capacityNodeSocketCapacitiesSocketCapacity["AvailableMemory"].asString());
			if(!capacityNodeSocketCapacitiesSocketCapacity["TotalMemory"].isNull())
				socketCapacityObject.totalMemory = std::stof(capacityNodeSocketCapacitiesSocketCapacity["TotalMemory"].asString());
			if(!capacityNodeSocketCapacitiesSocketCapacity["AvailableVcpu"].isNull())
				socketCapacityObject.availableVcpu = std::stoi(capacityNodeSocketCapacitiesSocketCapacity["AvailableVcpu"].asString());
			if(!capacityNodeSocketCapacitiesSocketCapacity["TotalVcpu"].isNull())
				socketCapacityObject.totalVcpu = std::stoi(capacityNodeSocketCapacitiesSocketCapacity["TotalVcpu"].asString());
			dedicatedHostsObject.capacity.socketCapacities.push_back(socketCapacityObject);
		}
		auto networkAttributesNode = value["NetworkAttributes"];
		if(!networkAttributesNode["UdpTimeout"].isNull())
			dedicatedHostsObject.networkAttributes.udpTimeout = std::stoi(networkAttributesNode["UdpTimeout"].asString());
		if(!networkAttributesNode["SlbUdpTimeout"].isNull())
			dedicatedHostsObject.networkAttributes.slbUdpTimeout = std::stoi(networkAttributesNode["SlbUdpTimeout"].asString());
		auto hostDetailInfoNode = value["HostDetailInfo"];
		if(!hostDetailInfoNode["SerialNumber"].isNull())
			dedicatedHostsObject.hostDetailInfo.serialNumber = hostDetailInfoNode["SerialNumber"].asString();
		auto allSupportedInstanceTypeFamilies = value["SupportedInstanceTypeFamilies"]["SupportedInstanceTypeFamily"];
		for (auto value : allSupportedInstanceTypeFamilies)
			dedicatedHostsObject.supportedInstanceTypeFamilies.push_back(value.asString());
		auto allSupportedCustomInstanceTypeFamilies = value["SupportedCustomInstanceTypeFamilies"]["SupportedCustomInstanceTypeFamily"];
		for (auto value : allSupportedCustomInstanceTypeFamilies)
			dedicatedHostsObject.supportedCustomInstanceTypeFamilies.push_back(value.asString());
		auto allSupportedInstanceTypesList = value["SupportedInstanceTypesList"]["SupportedInstanceTypesList"];
		for (auto value : allSupportedInstanceTypesList)
			dedicatedHostsObject.supportedInstanceTypesList.push_back(value.asString());
		dedicatedHosts_.push_back(dedicatedHostsObject);
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

std::vector<DescribeDedicatedHostsResult::DedicatedHost> DescribeDedicatedHostsResult::getDedicatedHosts()const
{
	return dedicatedHosts_;
}

int DescribeDedicatedHostsResult::getTotalCount()const
{
	return totalCount_;
}

int DescribeDedicatedHostsResult::getPageSize()const
{
	return pageSize_;
}

std::string DescribeDedicatedHostsResult::getNextToken()const
{
	return nextToken_;
}

int DescribeDedicatedHostsResult::getPageNumber()const
{
	return pageNumber_;
}

