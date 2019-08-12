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

#include <alibabacloud/ecs/model/AssociateEipAddressRequest.h>

using AlibabaCloud::Ecs::Model::AssociateEipAddressRequest;

AssociateEipAddressRequest::AssociateEipAddressRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AssociateEipAddress")
{}

AssociateEipAddressRequest::~AssociateEipAddressRequest()
{}

bool AssociateEipAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AssociateEipAddressRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string AssociateEipAddressRequest::getInstanceId()const
{
	return instanceId_;
}

void AssociateEipAddressRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string AssociateEipAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AssociateEipAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AssociateEipAddressRequest::getRegionId()const
{
	return regionId_;
}

void AssociateEipAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AssociateEipAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AssociateEipAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string AssociateEipAddressRequest::getInstanceType()const
{
	return instanceType_;
}

void AssociateEipAddressRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string AssociateEipAddressRequest::getAllocationId()const
{
	return allocationId_;
}

void AssociateEipAddressRequest::setAllocationId(const std::string& allocationId)
{
	allocationId_ = allocationId;
	setCoreParameter("AllocationId", allocationId);
}

bool AssociateEipAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void AssociateEipAddressRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

