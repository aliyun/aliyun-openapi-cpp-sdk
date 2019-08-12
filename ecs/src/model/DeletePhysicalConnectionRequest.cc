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

#include <alibabacloud/ecs/model/DeletePhysicalConnectionRequest.h>

using AlibabaCloud::Ecs::Model::DeletePhysicalConnectionRequest;

DeletePhysicalConnectionRequest::DeletePhysicalConnectionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeletePhysicalConnection")
{}

DeletePhysicalConnectionRequest::~DeletePhysicalConnectionRequest()
{}

long DeletePhysicalConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeletePhysicalConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeletePhysicalConnectionRequest::getRegionId()const
{
	return regionId_;
}

void DeletePhysicalConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeletePhysicalConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeletePhysicalConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeletePhysicalConnectionRequest::getClientToken()const
{
	return clientToken_;
}

void DeletePhysicalConnectionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeletePhysicalConnectionRequest::getPhysicalConnectionId()const
{
	return physicalConnectionId_;
}

void DeletePhysicalConnectionRequest::setPhysicalConnectionId(const std::string& physicalConnectionId)
{
	physicalConnectionId_ = physicalConnectionId;
	setCoreParameter("PhysicalConnectionId", physicalConnectionId);
}

std::string DeletePhysicalConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeletePhysicalConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeletePhysicalConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void DeletePhysicalConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

