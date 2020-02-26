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

#include <alibabacloud/r-kvstore/model/DeleteDedicatedInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::DeleteDedicatedInstanceRequest;

DeleteDedicatedInstanceRequest::DeleteDedicatedInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DeleteDedicatedInstance")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteDedicatedInstanceRequest::~DeleteDedicatedInstanceRequest()
{}

long DeleteDedicatedInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDedicatedInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteDedicatedInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DeleteDedicatedInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DeleteDedicatedInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DeleteDedicatedInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DeleteDedicatedInstanceRequest::getRegionId()const
{
	return regionId_;
}

void DeleteDedicatedInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteDedicatedInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDedicatedInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteDedicatedInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteDedicatedInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteDedicatedInstanceRequest::getClusterId()const
{
	return clusterId_;
}

void DeleteDedicatedInstanceRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setParameter("ClusterId", clusterId);
}

long DeleteDedicatedInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDedicatedInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteDedicatedInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void DeleteDedicatedInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DeleteDedicatedInstanceRequest::getZoneId()const
{
	return zoneId_;
}

void DeleteDedicatedInstanceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

