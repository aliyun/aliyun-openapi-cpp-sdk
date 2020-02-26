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

#include <alibabacloud/r-kvstore/model/ReplaceUserClusterHostRequest.h>

using AlibabaCloud::R_kvstore::Model::ReplaceUserClusterHostRequest;

ReplaceUserClusterHostRequest::ReplaceUserClusterHostRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ReplaceUserClusterHost")
{
	setMethod(HttpRequest::Method::Post);
}

ReplaceUserClusterHostRequest::~ReplaceUserClusterHostRequest()
{}

long ReplaceUserClusterHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReplaceUserClusterHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReplaceUserClusterHostRequest::getHostId()const
{
	return hostId_;
}

void ReplaceUserClusterHostRequest::setHostId(const std::string& hostId)
{
	hostId_ = hostId;
	setParameter("HostId", hostId);
}

std::string ReplaceUserClusterHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReplaceUserClusterHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ReplaceUserClusterHostRequest::getSecurityToken()const
{
	return securityToken_;
}

void ReplaceUserClusterHostRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ReplaceUserClusterHostRequest::getRegionId()const
{
	return regionId_;
}

void ReplaceUserClusterHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ReplaceUserClusterHostRequest::getEngine()const
{
	return engine_;
}

void ReplaceUserClusterHostRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string ReplaceUserClusterHostRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReplaceUserClusterHostRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReplaceUserClusterHostRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReplaceUserClusterHostRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ReplaceUserClusterHostRequest::getClusterId()const
{
	return clusterId_;
}

void ReplaceUserClusterHostRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

long ReplaceUserClusterHostRequest::getOwnerId()const
{
	return ownerId_;
}

void ReplaceUserClusterHostRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ReplaceUserClusterHostRequest::getZoneId()const
{
	return zoneId_;
}

void ReplaceUserClusterHostRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

