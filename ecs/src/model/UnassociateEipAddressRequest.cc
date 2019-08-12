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

#include <alibabacloud/ecs/model/UnassociateEipAddressRequest.h>

using AlibabaCloud::Ecs::Model::UnassociateEipAddressRequest;

UnassociateEipAddressRequest::UnassociateEipAddressRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "UnassociateEipAddress")
{}

UnassociateEipAddressRequest::~UnassociateEipAddressRequest()
{}

long UnassociateEipAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnassociateEipAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string UnassociateEipAddressRequest::getInstanceId()const
{
	return instanceId_;
}

void UnassociateEipAddressRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string UnassociateEipAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnassociateEipAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string UnassociateEipAddressRequest::getRegionId()const
{
	return regionId_;
}

void UnassociateEipAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string UnassociateEipAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnassociateEipAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string UnassociateEipAddressRequest::getInstanceType()const
{
	return instanceType_;
}

void UnassociateEipAddressRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", std::to_string(instanceType));
}

std::string UnassociateEipAddressRequest::getAllocationId()const
{
	return allocationId_;
}

void UnassociateEipAddressRequest::setAllocationId(const std::string& allocationId)
{
	allocationId_ = allocationId;
	setCoreParameter("AllocationId", std::to_string(allocationId));
}

long UnassociateEipAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void UnassociateEipAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

