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

#include <alibabacloud/ecs/model/CancelPhysicalConnectionRequest.h>

using AlibabaCloud::Ecs::Model::CancelPhysicalConnectionRequest;

CancelPhysicalConnectionRequest::CancelPhysicalConnectionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CancelPhysicalConnection")
{
	setMethod(HttpRequest::Method::Post);
}

CancelPhysicalConnectionRequest::~CancelPhysicalConnectionRequest()
{}

long CancelPhysicalConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CancelPhysicalConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CancelPhysicalConnectionRequest::getClientToken()const
{
	return clientToken_;
}

void CancelPhysicalConnectionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CancelPhysicalConnectionRequest::getRegionId()const
{
	return regionId_;
}

void CancelPhysicalConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CancelPhysicalConnectionRequest::getUserCidr()const
{
	return userCidr_;
}

void CancelPhysicalConnectionRequest::setUserCidr(const std::string& userCidr)
{
	userCidr_ = userCidr;
	setCoreParameter("UserCidr", userCidr);
}

std::string CancelPhysicalConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CancelPhysicalConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CancelPhysicalConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CancelPhysicalConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CancelPhysicalConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void CancelPhysicalConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CancelPhysicalConnectionRequest::getPhysicalConnectionId()const
{
	return physicalConnectionId_;
}

void CancelPhysicalConnectionRequest::setPhysicalConnectionId(const std::string& physicalConnectionId)
{
	physicalConnectionId_ = physicalConnectionId;
	setCoreParameter("PhysicalConnectionId", physicalConnectionId);
}

