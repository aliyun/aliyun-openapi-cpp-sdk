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

#include <alibabacloud/r-kvstore/model/ModifyDedicatedUserClusterRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyDedicatedUserClusterRequest;

ModifyDedicatedUserClusterRequest::ModifyDedicatedUserClusterRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyDedicatedUserCluster")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDedicatedUserClusterRequest::~ModifyDedicatedUserClusterRequest()
{}

long ModifyDedicatedUserClusterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDedicatedUserClusterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDedicatedUserClusterRequest::getClusterName()const
{
	return clusterName_;
}

void ModifyDedicatedUserClusterRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string ModifyDedicatedUserClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDedicatedUserClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDedicatedUserClusterRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDedicatedUserClusterRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyDedicatedUserClusterRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDedicatedUserClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyDedicatedUserClusterRequest::getEngine()const
{
	return engine_;
}

void ModifyDedicatedUserClusterRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

int ModifyDedicatedUserClusterRequest::getDiskOverAllocationRatio()const
{
	return diskOverAllocationRatio_;
}

void ModifyDedicatedUserClusterRequest::setDiskOverAllocationRatio(int diskOverAllocationRatio)
{
	diskOverAllocationRatio_ = diskOverAllocationRatio;
	setParameter("DiskOverAllocationRatio", std::to_string(diskOverAllocationRatio));
}

std::string ModifyDedicatedUserClusterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDedicatedUserClusterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDedicatedUserClusterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDedicatedUserClusterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDedicatedUserClusterRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyDedicatedUserClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int ModifyDedicatedUserClusterRequest::getMemoryOverAllocationRatio()const
{
	return memoryOverAllocationRatio_;
}

void ModifyDedicatedUserClusterRequest::setMemoryOverAllocationRatio(int memoryOverAllocationRatio)
{
	memoryOverAllocationRatio_ = memoryOverAllocationRatio;
	setParameter("MemoryOverAllocationRatio", std::to_string(memoryOverAllocationRatio));
}

long ModifyDedicatedUserClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDedicatedUserClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDedicatedUserClusterRequest::getHostReplacePolicy()const
{
	return hostReplacePolicy_;
}

void ModifyDedicatedUserClusterRequest::setHostReplacePolicy(const std::string& hostReplacePolicy)
{
	hostReplacePolicy_ = hostReplacePolicy;
	setParameter("HostReplacePolicy", hostReplacePolicy);
}

std::string ModifyDedicatedUserClusterRequest::getAllocationPolicy()const
{
	return allocationPolicy_;
}

void ModifyDedicatedUserClusterRequest::setAllocationPolicy(const std::string& allocationPolicy)
{
	allocationPolicy_ = allocationPolicy;
	setParameter("AllocationPolicy", allocationPolicy);
}

std::string ModifyDedicatedUserClusterRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyDedicatedUserClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

int ModifyDedicatedUserClusterRequest::getCpuOverAllocationRatio()const
{
	return cpuOverAllocationRatio_;
}

void ModifyDedicatedUserClusterRequest::setCpuOverAllocationRatio(int cpuOverAllocationRatio)
{
	cpuOverAllocationRatio_ = cpuOverAllocationRatio;
	setParameter("CpuOverAllocationRatio", std::to_string(cpuOverAllocationRatio));
}

