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

#include <alibabacloud/vpc/model/EnablePhysicalConnectionRequest.h>

using AlibabaCloud::Vpc::Model::EnablePhysicalConnectionRequest;

EnablePhysicalConnectionRequest::EnablePhysicalConnectionRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "EnablePhysicalConnection")
{
	setMethod(HttpRequest::Method::Post);
}

EnablePhysicalConnectionRequest::~EnablePhysicalConnectionRequest()
{}

long EnablePhysicalConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void EnablePhysicalConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string EnablePhysicalConnectionRequest::getClientToken()const
{
	return clientToken_;
}

void EnablePhysicalConnectionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string EnablePhysicalConnectionRequest::getRegionId()const
{
	return regionId_;
}

void EnablePhysicalConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string EnablePhysicalConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void EnablePhysicalConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string EnablePhysicalConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void EnablePhysicalConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long EnablePhysicalConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void EnablePhysicalConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string EnablePhysicalConnectionRequest::getPhysicalConnectionId()const
{
	return physicalConnectionId_;
}

void EnablePhysicalConnectionRequest::setPhysicalConnectionId(const std::string& physicalConnectionId)
{
	physicalConnectionId_ = physicalConnectionId;
	setParameter("PhysicalConnectionId", physicalConnectionId);
}

