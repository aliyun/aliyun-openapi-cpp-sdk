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

#include <alibabacloud/vpc/model/ModifyExpressCloudConnectionAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyExpressCloudConnectionAttributeRequest;

ModifyExpressCloudConnectionAttributeRequest::ModifyExpressCloudConnectionAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyExpressCloudConnectionAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyExpressCloudConnectionAttributeRequest::~ModifyExpressCloudConnectionAttributeRequest()
{}

long ModifyExpressCloudConnectionAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyExpressCloudConnectionAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyExpressCloudConnectionAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyExpressCloudConnectionAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyExpressCloudConnectionAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyExpressCloudConnectionAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyExpressCloudConnectionAttributeRequest::getEccId()const
{
	return eccId_;
}

void ModifyExpressCloudConnectionAttributeRequest::setEccId(const std::string& eccId)
{
	eccId_ = eccId;
	setCoreParameter("EccId", eccId);
}

std::string ModifyExpressCloudConnectionAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyExpressCloudConnectionAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyExpressCloudConnectionAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyExpressCloudConnectionAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyExpressCloudConnectionAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyExpressCloudConnectionAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyExpressCloudConnectionAttributeRequest::getName()const
{
	return name_;
}

void ModifyExpressCloudConnectionAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

