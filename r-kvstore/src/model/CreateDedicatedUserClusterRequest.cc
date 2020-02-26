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

#include <alibabacloud/r-kvstore/model/CreateDedicatedUserClusterRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateDedicatedUserClusterRequest;

CreateDedicatedUserClusterRequest::CreateDedicatedUserClusterRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateDedicatedUserCluster")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDedicatedUserClusterRequest::~CreateDedicatedUserClusterRequest()
{}

long CreateDedicatedUserClusterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDedicatedUserClusterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDedicatedUserClusterRequest::getClusterName()const
{
	return clusterName_;
}

void CreateDedicatedUserClusterRequest::setClusterName(const std::string& clusterName)
{
	clusterName_ = clusterName;
	setParameter("ClusterName", clusterName);
}

std::string CreateDedicatedUserClusterRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateDedicatedUserClusterRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateDedicatedUserClusterRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateDedicatedUserClusterRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateDedicatedUserClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateDedicatedUserClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int CreateDedicatedUserClusterRequest::getDiskOverAllocationRatio()const
{
	return diskOverAllocationRatio_;
}

void CreateDedicatedUserClusterRequest::setDiskOverAllocationRatio(int diskOverAllocationRatio)
{
	diskOverAllocationRatio_ = diskOverAllocationRatio;
	setParameter("DiskOverAllocationRatio", std::to_string(diskOverAllocationRatio));
}

std::string CreateDedicatedUserClusterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDedicatedUserClusterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDedicatedUserClusterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDedicatedUserClusterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateDedicatedUserClusterRequest::getClusterId()const
{
	return clusterId_;
}

void CreateDedicatedUserClusterRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

int CreateDedicatedUserClusterRequest::getMemoryOverAllocationRatio()const
{
	return memoryOverAllocationRatio_;
}

void CreateDedicatedUserClusterRequest::setMemoryOverAllocationRatio(int memoryOverAllocationRatio)
{
	memoryOverAllocationRatio_ = memoryOverAllocationRatio;
	setParameter("MemoryOverAllocationRatio", std::to_string(memoryOverAllocationRatio));
}

long CreateDedicatedUserClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDedicatedUserClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDedicatedUserClusterRequest::getHostReplacePolicy()const
{
	return hostReplacePolicy_;
}

void CreateDedicatedUserClusterRequest::setHostReplacePolicy(const std::string& hostReplacePolicy)
{
	hostReplacePolicy_ = hostReplacePolicy;
	setParameter("HostReplacePolicy", hostReplacePolicy);
}

std::string CreateDedicatedUserClusterRequest::getAllocationPolicy()const
{
	return allocationPolicy_;
}

void CreateDedicatedUserClusterRequest::setAllocationPolicy(const std::string& allocationPolicy)
{
	allocationPolicy_ = allocationPolicy;
	setParameter("AllocationPolicy", allocationPolicy);
}

std::string CreateDedicatedUserClusterRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDedicatedUserClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

int CreateDedicatedUserClusterRequest::getCpuOverAllocationRatio()const
{
	return cpuOverAllocationRatio_;
}

void CreateDedicatedUserClusterRequest::setCpuOverAllocationRatio(int cpuOverAllocationRatio)
{
	cpuOverAllocationRatio_ = cpuOverAllocationRatio;
	setParameter("CpuOverAllocationRatio", std::to_string(cpuOverAllocationRatio));
}

