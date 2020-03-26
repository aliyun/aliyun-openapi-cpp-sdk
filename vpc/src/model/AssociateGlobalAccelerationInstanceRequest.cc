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

#include <alibabacloud/vpc/model/AssociateGlobalAccelerationInstanceRequest.h>

using AlibabaCloud::Vpc::Model::AssociateGlobalAccelerationInstanceRequest;

AssociateGlobalAccelerationInstanceRequest::AssociateGlobalAccelerationInstanceRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AssociateGlobalAccelerationInstance")
{
	setMethod(HttpRequest::Method::Post);
}

AssociateGlobalAccelerationInstanceRequest::~AssociateGlobalAccelerationInstanceRequest()
{}

long AssociateGlobalAccelerationInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssociateGlobalAccelerationInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AssociateGlobalAccelerationInstanceRequest::getGlobalAccelerationInstanceId()const
{
	return globalAccelerationInstanceId_;
}

void AssociateGlobalAccelerationInstanceRequest::setGlobalAccelerationInstanceId(const std::string& globalAccelerationInstanceId)
{
	globalAccelerationInstanceId_ = globalAccelerationInstanceId;
	setParameter("GlobalAccelerationInstanceId", globalAccelerationInstanceId);
}

std::string AssociateGlobalAccelerationInstanceRequest::getRegionId()const
{
	return regionId_;
}

void AssociateGlobalAccelerationInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AssociateGlobalAccelerationInstanceRequest::getBackendServerId()const
{
	return backendServerId_;
}

void AssociateGlobalAccelerationInstanceRequest::setBackendServerId(const std::string& backendServerId)
{
	backendServerId_ = backendServerId;
	setParameter("BackendServerId", backendServerId);
}

std::string AssociateGlobalAccelerationInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssociateGlobalAccelerationInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AssociateGlobalAccelerationInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AssociateGlobalAccelerationInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long AssociateGlobalAccelerationInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void AssociateGlobalAccelerationInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AssociateGlobalAccelerationInstanceRequest::getBackendServerRegionId()const
{
	return backendServerRegionId_;
}

void AssociateGlobalAccelerationInstanceRequest::setBackendServerRegionId(const std::string& backendServerRegionId)
{
	backendServerRegionId_ = backendServerRegionId;
	setParameter("BackendServerRegionId", backendServerRegionId);
}

std::string AssociateGlobalAccelerationInstanceRequest::getBackendServerType()const
{
	return backendServerType_;
}

void AssociateGlobalAccelerationInstanceRequest::setBackendServerType(const std::string& backendServerType)
{
	backendServerType_ = backendServerType;
	setParameter("BackendServerType", backendServerType);
}

