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

#include <alibabacloud/ecs/model/ReleaseEipAddressRequest.h>

using AlibabaCloud::Ecs::Model::ReleaseEipAddressRequest;

ReleaseEipAddressRequest::ReleaseEipAddressRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ReleaseEipAddress")
{}

ReleaseEipAddressRequest::~ReleaseEipAddressRequest()
{}

long ReleaseEipAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReleaseEipAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ReleaseEipAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReleaseEipAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReleaseEipAddressRequest::getRegionId()const
{
	return regionId_;
}

void ReleaseEipAddressRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ReleaseEipAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReleaseEipAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ReleaseEipAddressRequest::getAllocationId()const
{
	return allocationId_;
}

void ReleaseEipAddressRequest::setAllocationId(const std::string& allocationId)
{
	allocationId_ = allocationId;
	setCoreParameter("AllocationId", allocationId);
}

long ReleaseEipAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void ReleaseEipAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

