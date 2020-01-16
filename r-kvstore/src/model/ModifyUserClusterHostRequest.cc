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

#include <alibabacloud/r-kvstore/model/ModifyUserClusterHostRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyUserClusterHostRequest;

ModifyUserClusterHostRequest::ModifyUserClusterHostRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyUserClusterHost")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyUserClusterHostRequest::~ModifyUserClusterHostRequest()
{}

long ModifyUserClusterHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyUserClusterHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyUserClusterHostRequest::getHostId()const
{
	return hostId_;
}

void ModifyUserClusterHostRequest::setHostId(const std::string& hostId)
{
	hostId_ = hostId;
	setCoreParameter("HostId", hostId);
}

std::string ModifyUserClusterHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyUserClusterHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyUserClusterHostRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyUserClusterHostRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyUserClusterHostRequest::getRegionId()const
{
	return regionId_;
}

void ModifyUserClusterHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int ModifyUserClusterHostRequest::getAllocationStatus()const
{
	return allocationStatus_;
}

void ModifyUserClusterHostRequest::setAllocationStatus(int allocationStatus)
{
	allocationStatus_ = allocationStatus;
	setCoreParameter("AllocationStatus", std::to_string(allocationStatus));
}

std::string ModifyUserClusterHostRequest::getEngine()const
{
	return engine_;
}

void ModifyUserClusterHostRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

std::string ModifyUserClusterHostRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyUserClusterHostRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyUserClusterHostRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyUserClusterHostRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyUserClusterHostRequest::getClusterId()const
{
	return clusterId_;
}

void ModifyUserClusterHostRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

long ModifyUserClusterHostRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyUserClusterHostRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyUserClusterHostRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyUserClusterHostRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

