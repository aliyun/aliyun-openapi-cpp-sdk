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
	auto allDedicatedHosts = value["DedicatedHosts"]["DedicatedHost"];
	for (auto value : allDedicatedHosts)
	{
		DedicatedHost dedicatedHostsObject;
		if(!value["DedicatedHostId"].isNull())
			dedicatedHostsObject.dedicatedHostId = value["DedicatedHostId"].asString();
		if(!value["AutoPlacement"].isNull())
			dedicatedHostsObject.autoPlacement = value["AutoPlacement"].asString();
		if(!value["RegionId"].isNull())
			dedicatedHostsObject.regionId = value["RegionId"].asString();
		if(!value["ZoneId"].isNull())
			dedicatedHostsObject.zoneId = value["ZoneId"].asString();
		if(!value["DedicatedHostName"].isNull())
			dedicatedHostsObject.dedicatedHostName = value["DedicatedHostName"].asString();
		if(!value["MachineId"].isNull())
			dedicatedHostsObject.machineId = value["MachineId"].asString();
		if(!value["Description"].isNull())
			dedicatedHostsObject.description = value["Description"].asString();
		if(!value["DedicatedHostType"].isNull())
			dedicatedHostsObject.dedicatedHostType = value["DedicatedHostType"].asString();
		if(!value["Sockets"].isNull())
			dedicatedHostsObject.sockets = std::stoi(value["Sockets"].asString());
		if(!value["Cores"].isNull())
			dedicatedHostsObject.cores = std::stoi(value["Cores"].asString());
		if(!value["PhysicalGpus"].isNull())
			dedicatedHostsObject.physicalGpus = std::stoi(value["PhysicalGpus"].asString());
		if(!value["GPUSpec"].isNull())
			dedicatedHostsObject.gPUSpec = value["GPUSpec"].asString();
		if(!value["ActionOnMaintenance"].isNull())
			dedicatedHostsObject.actionOnMaintenance = value["ActionOnMaintenance"].asString();
		if(!value["Status"].isNull())
			dedicatedHostsObject.status = value["Status"].asString();
		if(!value["CreationTime"].isNull())
			dedicatedHostsObject.creationTime = value["CreationTime"].asString();
		if(!value["ChargeType"].isNull())
			dedicatedHostsObject.chargeType = value["ChargeType"].asString();
		if(!value["SaleCycle"].isNull())
			dedicatedHostsObject.saleCycle = value["SaleCycle"].asString();
		if(!value["ExpiredTime"].isNull())
			dedicatedHostsObject.expiredTime = value["ExpiredTime"].asString();
		if(!value["AutoReleaseTime"].isNull())
			dedicatedHostsObject.autoReleaseTime = value["AutoReleaseTime"].asString();
		if(!value["ResourceGroupId"].isNull())
			dedicatedHostsObject.resourceGroupId = value["ResourceGroupId"].asString();
		auto allInstances = value["Instances"]["Instance"];
		for (auto value : allInstances)
		{
			DedicatedHost::Instance instancesObject;
			if(!value["InstanceId"].isNull())
				instancesObject.instanceId = value["InstanceId"].asString();
			if(!value["InstanceType"].isNull())
				instancesObject.instanceType = value["InstanceType"].asString();
			dedicatedHostsObject.instances.push_back(instancesObject);
		}
		auto allOperationLocks = value["OperationLocks"]["OperationLock"];
		for (auto value : allOperationLocks)
		{
			DedicatedHost::OperationLock operationLocksObject;
			if(!value["LockReason"].isNull())
				operationLocksObject.lockReason = value["LockReason"].asString();
			dedicatedHostsObject.operationLocks.push_back(operationLocksObject);
		}
		auto allTags = value["Tags"]["Tag"];
		for (auto value : allTags)
		{
			DedicatedHost::Tag tagsObject;
			if(!value["TagKey"].isNull())
				tagsObject.tagKey = value["TagKey"].asString();
			if(!value["TagValue"].isNull())
				tagsObject.tagValue = value["TagValue"].asString();
			dedicatedHostsObject.tags.push_back(tagsObject);
		}
		auto capacityNode = value["Capacity"];
		if(!capacityNode["TotalVcpus"].isNull())
			dedicatedHostsObject.capacity.totalVcpus = std::stoi(capacityNode["TotalVcpus"].asString());
		if(!capacityNode["AvailableVcpus"].isNull())
			dedicatedHostsObject.capacity.availableVcpus = std::stoi(capacityNode["AvailableVcpus"].asString());
		if(!capacityNode["TotalVgpus"].isNull())
			dedicatedHostsObject.capacity.totalVgpus = std::stoi(capacityNode["TotalVgpus"].asString());
		if(!capacityNode["AvailableVgpus"].isNull())
			dedicatedHostsObject.capacity.availableVgpus = std::stoi(capacityNode["AvailableVgpus"].asString());
		if(!capacityNode["TotalMemory"].isNull())
			dedicatedHostsObject.capacity.totalMemory = std::stof(capacityNode["TotalMemory"].asString());
		if(!capacityNode["AvailableMemory"].isNull())
			dedicatedHostsObject.capacity.availableMemory = std::stof(capacityNode["AvailableMemory"].asString());
		if(!capacityNode["TotalLocalStorage"].isNull())
			dedicatedHostsObject.capacity.totalLocalStorage = std::stoi(capacityNode["TotalLocalStorage"].asString());
		if(!capacityNode["AvailableLocalStorage"].isNull())
			dedicatedHostsObject.capacity.availableLocalStorage = std::stoi(capacityNode["AvailableLocalStorage"].asString());
		if(!capacityNode["LocalStorageCategory"].isNull())
			dedicatedHostsObject.capacity.localStorageCategory = capacityNode["LocalStorageCategory"].asString();
		auto networkAttributesNode = value["NetworkAttributes"];
		if(!networkAttributesNode["SlbUdpTimeout"].isNull())
			dedicatedHostsObject.networkAttributes.slbUdpTimeout = std::stoi(networkAttributesNode["SlbUdpTimeout"].asString());
		if(!networkAttributesNode["UdpTimeout"].isNull())
			dedicatedHostsObject.networkAttributes.udpTimeout = std::stoi(networkAttributesNode["UdpTimeout"].asString());
		auto allSupportedInstanceTypeFamilies = value["SupportedInstanceTypeFamilies"]["SupportedInstanceTypeFamily"];
		for (auto value : allSupportedInstanceTypeFamilies)
			dedicatedHostsObject.supportedInstanceTypeFamilies.push_back(value.asString());
		auto allSupportedInstanceTypesList = value["SupportedInstanceTypesList"]["SupportedInstanceTypesList"];
		for (auto value : allSupportedInstanceTypesList)
			dedicatedHostsObject.supportedInstanceTypesList.push_back(value.asString());
		dedicatedHosts_.push_back(dedicatedHostsObject);
	}
	if(!value["TotalCount"].isNull())
		totalCount_ = std::stoi(value["TotalCount"].asString());
	if(!value["PageNumber"].isNull())
		pageNumber_ = std::stoi(value["PageNumber"].asString());
	if(!value["PageSize"].isNull())
		pageSize_ = std::stoi(value["PageSize"].asString());

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

int DescribeDedicatedHostsResult::getPageNumber()const
{
	return pageNumber_;
}

