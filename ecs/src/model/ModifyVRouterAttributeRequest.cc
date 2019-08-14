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

#include <alibabacloud/ecs/model/ModifyVRouterAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyVRouterAttributeRequest;

ModifyVRouterAttributeRequest::ModifyVRouterAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyVRouterAttribute")
{}

ModifyVRouterAttributeRequest::~ModifyVRouterAttributeRequest()
{}

std::string ModifyVRouterAttributeRequest::getVRouterName()const
{
	return vRouterName_;
}

void ModifyVRouterAttributeRequest::setVRouterName(const std::string& vRouterName)
{
	vRouterName_ = vRouterName;
	setCoreParameter("VRouterName", vRouterName);
}

long ModifyVRouterAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyVRouterAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyVRouterAttributeRequest::getVRouterId()const
{
	return vRouterId_;
}

void ModifyVRouterAttributeRequest::setVRouterId(const std::string& vRouterId)
{
	vRouterId_ = vRouterId;
	setCoreParameter("VRouterId", vRouterId);
}

std::string ModifyVRouterAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyVRouterAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyVRouterAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyVRouterAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyVRouterAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyVRouterAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyVRouterAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyVRouterAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long ModifyVRouterAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyVRouterAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

