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

#include <alibabacloud/vpc/model/UnassociateEipAddressRequest.h>

using AlibabaCloud::Vpc::Model::UnassociateEipAddressRequest;

UnassociateEipAddressRequest::UnassociateEipAddressRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "UnassociateEipAddress")
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
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnassociateEipAddressRequest::getAllocationId()const
{
	return allocationId_;
}

void UnassociateEipAddressRequest::setAllocationId(const std::string& allocationId)
{
	allocationId_ = allocationId;
	setCoreParameter("AllocationId", allocationId);
}

std::string UnassociateEipAddressRequest::getRegionId()const
{
	return regionId_;
}

void UnassociateEipAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string UnassociateEipAddressRequest::getInstanceType()const
{
	return instanceType_;
}

void UnassociateEipAddressRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string UnassociateEipAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnassociateEipAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnassociateEipAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnassociateEipAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long UnassociateEipAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void UnassociateEipAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UnassociateEipAddressRequest::getPrivateIpAddress()const
{
	return privateIpAddress_;
}

void UnassociateEipAddressRequest::setPrivateIpAddress(const std::string& privateIpAddress)
{
	privateIpAddress_ = privateIpAddress;
	setCoreParameter("PrivateIpAddress", privateIpAddress);
}

std::string UnassociateEipAddressRequest::getInstanceId()const
{
	return instanceId_;
}

void UnassociateEipAddressRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

bool UnassociateEipAddressRequest::getForce()const
{
	return force_;
}

void UnassociateEipAddressRequest::setForce(bool force)
{
	force_ = force;
	setCoreParameter("Force", force ? "true" : "false");
}

