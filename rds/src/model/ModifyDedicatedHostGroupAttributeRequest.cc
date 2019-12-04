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

#include <alibabacloud/rds/model/ModifyDedicatedHostGroupAttributeRequest.h>

using AlibabaCloud::Rds::Model::ModifyDedicatedHostGroupAttributeRequest;

ModifyDedicatedHostGroupAttributeRequest::ModifyDedicatedHostGroupAttributeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDedicatedHostGroupAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDedicatedHostGroupAttributeRequest::~ModifyDedicatedHostGroupAttributeRequest()
{}

long ModifyDedicatedHostGroupAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDedicatedHostGroupAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifyDedicatedHostGroupAttributeRequest::getCpuAllocationRatio()const
{
	return cpuAllocationRatio_;
}

void ModifyDedicatedHostGroupAttributeRequest::setCpuAllocationRatio(int cpuAllocationRatio)
{
	cpuAllocationRatio_ = cpuAllocationRatio;
	setCoreParameter("CpuAllocationRatio", std::to_string(cpuAllocationRatio));
}

std::string ModifyDedicatedHostGroupAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDedicatedHostGroupAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDedicatedHostGroupAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDedicatedHostGroupAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyDedicatedHostGroupAttributeRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void ModifyDedicatedHostGroupAttributeRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setCoreParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

std::string ModifyDedicatedHostGroupAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDedicatedHostGroupAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int ModifyDedicatedHostGroupAttributeRequest::getDiskAllocationRatio()const
{
	return diskAllocationRatio_;
}

void ModifyDedicatedHostGroupAttributeRequest::setDiskAllocationRatio(int diskAllocationRatio)
{
	diskAllocationRatio_ = diskAllocationRatio;
	setCoreParameter("DiskAllocationRatio", std::to_string(diskAllocationRatio));
}

int ModifyDedicatedHostGroupAttributeRequest::getMemAllocationRatio()const
{
	return memAllocationRatio_;
}

void ModifyDedicatedHostGroupAttributeRequest::setMemAllocationRatio(int memAllocationRatio)
{
	memAllocationRatio_ = memAllocationRatio;
	setCoreParameter("MemAllocationRatio", std::to_string(memAllocationRatio));
}

long ModifyDedicatedHostGroupAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDedicatedHostGroupAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDedicatedHostGroupAttributeRequest::getHostReplacePolicy()const
{
	return hostReplacePolicy_;
}

void ModifyDedicatedHostGroupAttributeRequest::setHostReplacePolicy(const std::string& hostReplacePolicy)
{
	hostReplacePolicy_ = hostReplacePolicy;
	setCoreParameter("HostReplacePolicy", hostReplacePolicy);
}

std::string ModifyDedicatedHostGroupAttributeRequest::getDedicatedHostGroupDesc()const
{
	return dedicatedHostGroupDesc_;
}

void ModifyDedicatedHostGroupAttributeRequest::setDedicatedHostGroupDesc(const std::string& dedicatedHostGroupDesc)
{
	dedicatedHostGroupDesc_ = dedicatedHostGroupDesc;
	setCoreParameter("DedicatedHostGroupDesc", dedicatedHostGroupDesc);
}

std::string ModifyDedicatedHostGroupAttributeRequest::getAllocationPolicy()const
{
	return allocationPolicy_;
}

void ModifyDedicatedHostGroupAttributeRequest::setAllocationPolicy(const std::string& allocationPolicy)
{
	allocationPolicy_ = allocationPolicy;
	setCoreParameter("AllocationPolicy", allocationPolicy);
}

