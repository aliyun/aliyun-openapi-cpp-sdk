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

#include <alibabacloud/ecs/model/ModifyHaVipAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyHaVipAttributeRequest;

ModifyHaVipAttributeRequest::ModifyHaVipAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyHaVipAttribute")
{}

ModifyHaVipAttributeRequest::~ModifyHaVipAttributeRequest()
{}

std::string ModifyHaVipAttributeRequest::getHaVipId()const
{
	return haVipId_;
}

void ModifyHaVipAttributeRequest::setHaVipId(const std::string& haVipId)
{
	haVipId_ = haVipId;
	setCoreParameter("HaVipId", haVipId);
}

bool ModifyHaVipAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyHaVipAttributeRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string ModifyHaVipAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyHaVipAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyHaVipAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyHaVipAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyHaVipAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyHaVipAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyHaVipAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyHaVipAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyHaVipAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyHaVipAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

bool ModifyHaVipAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyHaVipAttributeRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

