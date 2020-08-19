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

#include <alibabacloud/smarthosting/model/UpdateManagedHostAttributesRequest.h>

using AlibabaCloud::SmartHosting::Model::UpdateManagedHostAttributesRequest;

UpdateManagedHostAttributesRequest::UpdateManagedHostAttributesRequest() :
	RpcServiceRequest("smarthosting", "2020-08-01", "UpdateManagedHostAttributes")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateManagedHostAttributesRequest::~UpdateManagedHostAttributesRequest()
{}

long UpdateManagedHostAttributesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UpdateManagedHostAttributesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UpdateManagedHostAttributesRequest::getMode()const
{
	return mode_;
}

void UpdateManagedHostAttributesRequest::setMode(const std::string& mode)
{
	mode_ = mode;
	setParameter("Mode", mode);
}

std::string UpdateManagedHostAttributesRequest::getRegionId()const
{
	return regionId_;
}

void UpdateManagedHostAttributesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string UpdateManagedHostAttributesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UpdateManagedHostAttributesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UpdateManagedHostAttributesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UpdateManagedHostAttributesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string UpdateManagedHostAttributesRequest::getManagedHostId()const
{
	return managedHostId_;
}

void UpdateManagedHostAttributesRequest::setManagedHostId(const std::string& managedHostId)
{
	managedHostId_ = managedHostId;
	setParameter("ManagedHostId", managedHostId);
}

long UpdateManagedHostAttributesRequest::getOwnerId()const
{
	return ownerId_;
}

void UpdateManagedHostAttributesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string UpdateManagedHostAttributesRequest::getManagedHostName()const
{
	return managedHostName_;
}

void UpdateManagedHostAttributesRequest::setManagedHostName(const std::string& managedHostName)
{
	managedHostName_ = managedHostName;
	setParameter("ManagedHostName", managedHostName);
}

