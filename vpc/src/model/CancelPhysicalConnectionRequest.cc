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

#include <alibabacloud/vpc/model/CancelPhysicalConnectionRequest.h>

using AlibabaCloud::Vpc::Model::CancelPhysicalConnectionRequest;

CancelPhysicalConnectionRequest::CancelPhysicalConnectionRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CancelPhysicalConnection")
{}

CancelPhysicalConnectionRequest::~CancelPhysicalConnectionRequest()
{}

long CancelPhysicalConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CancelPhysicalConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CancelPhysicalConnectionRequest::getRegionId()const
{
	return regionId_;
}

void CancelPhysicalConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CancelPhysicalConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CancelPhysicalConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CancelPhysicalConnectionRequest::getClientToken()const
{
	return clientToken_;
}

void CancelPhysicalConnectionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string CancelPhysicalConnectionRequest::getPhysicalConnectionId()const
{
	return physicalConnectionId_;
}

void CancelPhysicalConnectionRequest::setPhysicalConnectionId(const std::string& physicalConnectionId)
{
	physicalConnectionId_ = physicalConnectionId;
	setCoreParameter("PhysicalConnectionId", std::to_string(physicalConnectionId));
}

std::string CancelPhysicalConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CancelPhysicalConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long CancelPhysicalConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void CancelPhysicalConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

