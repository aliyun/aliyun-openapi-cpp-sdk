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

#include <alibabacloud/r-kvstore/model/DeleteUserClusterHostRequest.h>

using AlibabaCloud::R_kvstore::Model::DeleteUserClusterHostRequest;

DeleteUserClusterHostRequest::DeleteUserClusterHostRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DeleteUserClusterHost")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteUserClusterHostRequest::~DeleteUserClusterHostRequest()
{}

long DeleteUserClusterHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteUserClusterHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteUserClusterHostRequest::getHostId()const
{
	return hostId_;
}

void DeleteUserClusterHostRequest::setHostId(const std::string& hostId)
{
	hostId_ = hostId;
	setParameter("HostId", hostId);
}

std::string DeleteUserClusterHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteUserClusterHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteUserClusterHostRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteUserClusterHostRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteUserClusterHostRequest::getRegionId()const
{
	return regionId_;
}

void DeleteUserClusterHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteUserClusterHostRequest::getEngine()const
{
	return engine_;
}

void DeleteUserClusterHostRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string DeleteUserClusterHostRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteUserClusterHostRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteUserClusterHostRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteUserClusterHostRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteUserClusterHostRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteUserClusterHostRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

long DeleteUserClusterHostRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteUserClusterHostRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteUserClusterHostRequest::getZoneId()const
{
	return zoneId_;
}

void DeleteUserClusterHostRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

