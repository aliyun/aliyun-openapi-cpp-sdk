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

#include <alibabacloud/rds/model/CreateDedicatedHostGroupRequest.h>

using AlibabaCloud::Rds::Model::CreateDedicatedHostGroupRequest;

CreateDedicatedHostGroupRequest::CreateDedicatedHostGroupRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateDedicatedHostGroup")
{}

CreateDedicatedHostGroupRequest::~CreateDedicatedHostGroupRequest()
{}

long CreateDedicatedHostGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDedicatedHostGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int CreateDedicatedHostGroupRequest::getCpuAllocationRatio()const
{
	return cpuAllocationRatio_;
}

void CreateDedicatedHostGroupRequest::setCpuAllocationRatio(int cpuAllocationRatio)
{
	cpuAllocationRatio_ = cpuAllocationRatio;
	setCoreParameter("CpuAllocationRatio", std::to_string(cpuAllocationRatio));
}

std::string CreateDedicatedHostGroupRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDedicatedHostGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateDedicatedHostGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDedicatedHostGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateDedicatedHostGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateDedicatedHostGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateDedicatedHostGroupRequest::getEngine()const
{
	return engine_;
}

void CreateDedicatedHostGroupRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

std::string CreateDedicatedHostGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDedicatedHostGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

int CreateDedicatedHostGroupRequest::getDiskAllocationRatio()const
{
	return diskAllocationRatio_;
}

void CreateDedicatedHostGroupRequest::setDiskAllocationRatio(int diskAllocationRatio)
{
	diskAllocationRatio_ = diskAllocationRatio;
	setCoreParameter("DiskAllocationRatio", std::to_string(diskAllocationRatio));
}

int CreateDedicatedHostGroupRequest::getMemAllocationRatio()const
{
	return memAllocationRatio_;
}

void CreateDedicatedHostGroupRequest::setMemAllocationRatio(int memAllocationRatio)
{
	memAllocationRatio_ = memAllocationRatio;
	setCoreParameter("MemAllocationRatio", std::to_string(memAllocationRatio));
}

long CreateDedicatedHostGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDedicatedHostGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDedicatedHostGroupRequest::getHostReplacePolicy()const
{
	return hostReplacePolicy_;
}

void CreateDedicatedHostGroupRequest::setHostReplacePolicy(const std::string& hostReplacePolicy)
{
	hostReplacePolicy_ = hostReplacePolicy;
	setCoreParameter("HostReplacePolicy", hostReplacePolicy);
}

std::string CreateDedicatedHostGroupRequest::getAllocationPolicy()const
{
	return allocationPolicy_;
}

void CreateDedicatedHostGroupRequest::setAllocationPolicy(const std::string& allocationPolicy)
{
	allocationPolicy_ = allocationPolicy;
	setCoreParameter("AllocationPolicy", allocationPolicy);
}

std::string CreateDedicatedHostGroupRequest::getVPCId()const
{
	return vPCId_;
}

void CreateDedicatedHostGroupRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", vPCId);
}

