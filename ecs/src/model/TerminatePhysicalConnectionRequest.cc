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

#include <alibabacloud/ecs/model/TerminatePhysicalConnectionRequest.h>

using AlibabaCloud::Ecs::Model::TerminatePhysicalConnectionRequest;

TerminatePhysicalConnectionRequest::TerminatePhysicalConnectionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "TerminatePhysicalConnection")
{}

TerminatePhysicalConnectionRequest::~TerminatePhysicalConnectionRequest()
{}

bool TerminatePhysicalConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void TerminatePhysicalConnectionRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string TerminatePhysicalConnectionRequest::getRegionId()const
{
	return regionId_;
}

void TerminatePhysicalConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string TerminatePhysicalConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void TerminatePhysicalConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string TerminatePhysicalConnectionRequest::getClientToken()const
{
	return clientToken_;
}

void TerminatePhysicalConnectionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string TerminatePhysicalConnectionRequest::getPhysicalConnectionId()const
{
	return physicalConnectionId_;
}

void TerminatePhysicalConnectionRequest::setPhysicalConnectionId(const std::string& physicalConnectionId)
{
	physicalConnectionId_ = physicalConnectionId;
	setCoreParameter("PhysicalConnectionId", physicalConnectionId);
}

std::string TerminatePhysicalConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void TerminatePhysicalConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string TerminatePhysicalConnectionRequest::getUserCidr()const
{
	return userCidr_;
}

void TerminatePhysicalConnectionRequest::setUserCidr(const std::string& userCidr)
{
	userCidr_ = userCidr;
	setCoreParameter("UserCidr", userCidr);
}

bool TerminatePhysicalConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void TerminatePhysicalConnectionRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

