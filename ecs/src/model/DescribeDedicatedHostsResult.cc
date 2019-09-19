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
		if(!valueDedicatedHostsDedicatedHost["DedicatedHostId"].isNull())
			dedicatedHostsObject.dedicatedHostId = valueDedicatedHostsDedicatedHost["DedicatedHostId"].asString();
		if(!valueDedicatedHostsDedicatedHost["AutoPlacement"].isNull())
			dedicatedHostsObject.autoPlacement = valueDedicatedHostsDedicatedHost["AutoPlacement"].asString();
		if(!valueDedicatedHostsDedicatedHost["RegionId"].isNull())
			dedicatedHostsObject.regionId = valueDedicatedHostsDedicatedHost["RegionId"].asString();
		if(!valueDedicatedHostsDedicatedHost["ZoneId"].isNull())
			dedicatedHostsObject.zoneId = valueDedicatedHostsDedicatedHost["ZoneId"].asString();
		if(!valueDedicatedHostsDedicatedHost["DedicatedHostName"].isNull())
			dedicatedHostsObject.dedicatedHostName = valueDedicatedHostsDedicatedHost["DedicatedHostName"].asString();
		if(!valueDedicatedHostsDedicatedHost["MachineId"].isNull())
			dedicatedHostsObject.machineId = valueDedicatedHostsDedicatedHost["MachineId"].asString();
		if(!valueDedicatedHostsDedicatedHost["Description"].isNull())
			dedicatedHostsObject.description = valueDedicatedHostsDedicatedHost["Description"].asString();
		if(!valueDedicatedHostsDedicatedHost["DedicatedHostType"].isNull())
			dedicatedHostsObject.dedicatedHostType = valueDedicatedHostsDedicatedHost["DedicatedHostType"].asString();
		if(!valueDedicatedHostsDedicatedHost["Sockets"].isNull())
			dedicatedHostsObject.sockets = std::stoi(valueDedicatedHostsDedicatedHost["Sockets"].asString());
		if(!valueDedicatedHostsDedicatedHost["Cores"].isNull())
			dedicatedHostsObject.cores = std::stoi(valueDedicatedHostsDedicatedHost["Cores"].asString());
		if(!valueDedicatedHostsDedicatedHost["PhysicalGpus"].isNull())
			dedicatedHostsObject.physicalGpus = std::stoi(valueDedicatedHostsDedicatedHost["PhysicalGpus"].asString());
		if(!valueDedicatedHostsDedicatedHost["GPUSpec"].isNull())
			dedicatedHostsObject.gPUSpec = valueDedicatedHostsDedicatedHost["GPUSpec"].asString();
		if(!valueDedicatedHostsDedicatedHost["ActionOnMaintenance"].isNull())
			dedicatedHostsObject.actionOnMaintenance = valueDedicatedHostsDedicatedHost["ActionOnMaintenance"].asString();
		if(!valueDedicatedHostsDedicatedHost["Status"].isNull())
			dedicatedHostsObject.status = valueDedicatedHostsDedicatedHost["Status"].asString();
		if(!valueDedicatedHostsDedicatedHost["CreationTime"].isNull())
			dedicatedHostsObject.creationTime = valueDedicatedHostsDedicatedHost["CreationTime"].asString();
		if(!valueDedicatedHostsDedicatedHost["ChargeType"].isNull())
			dedicatedHostsObject.chargeType = valueDedicatedHostsDedicatedHost["ChargeType"].asString();
		if(!valueDedicatedHostsDedicatedHost["SaleCycle"].isNull())
			dedicatedHostsObject.saleCycle = valueDedicatedHostsDedicatedHost["SaleCycle"].asString();
		if(!valueDedicatedHostsDedicatedHost["ExpiredTime"].isNull())
			dedicatedHostsObject.expiredTime = valueDedicatedHostsDedicatedHost["ExpiredTime"].asString();
		if(!valueDedicatedHostsDedicatedHost["AutoReleaseTime"].isNull())
			dedicatedHostsObject.autoReleaseTime = valueDedicatedHostsDedicatedHost["AutoReleaseTime"].asString();
		if(!valueDedicatedHostsDedicatedHost["ResourceGroupId"].isNull())
			dedicatedHostsObject.resourceGroupId = valueDedicatedHostsDedicatedHost["ResourceGroupId"].asString();
		auto allInstancesNode = allDedicatedHostsNode["Instances"]["Instance"];
		for (auto allDedicatedHostsNodeInstancesInstance : allInstancesNode)
		{
			DedicatedHost::Instance instancesObject;
			if(!allDedicatedHostsNodeInstancesInstance["InstanceId"].isNull())
				instancesObject.instanceId = allDedicatedHostsNodeInstancesInstance["InstanceId"].asString();
			if(!allDedicatedHostsNodeInstancesInstance["InstanceType"].isNull())
				instancesObject.instanceType = allDedicatedHostsNodeInstancesInstance["InstanceType"].asString();
			dedicatedHostsObject.instances.push_back(instancesObject);
		}
		auto allOperationLocksNode = allDedicatedHostsNode["OperationLocks"]["OperationLock"];
		for (auto allDedicatedHostsNodeOperationLocksOperationLock : allOperationLocksNode)
		{
			DedicatedHost::OperationLock operationLocksObject;
			if(!allDedicatedHostsNodeOperationLocksOperationLock["LockReason"].isNull())
				operationLocksObject.lockReason = allDedicatedHostsNodeOperationLocksOperationLock["LockReason"].asString();
			dedicatedHostsObject.operationLocks.push_back(operationLocksObject);
		}
		auto allTagsNode = allDedicatedHostsNode["Tags"]["Tag"];
		for (auto allDedicatedHostsNodeTagsTag : allTagsNode)
		{
			DedicatedHost::Tag tagsObject;
			if(!allDedicatedHostsNodeTagsTag["TagKey"].isNull())
				tagsObject.tagKey = allDedicatedHostsNodeTagsTag["TagKey"].asString();
			if(!allDedicatedHostsNodeTagsTag["TagValue"].isNull())
				tagsObject.tagValue = allDedicatedHostsNodeTagsTag["TagValue"].asString();
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

