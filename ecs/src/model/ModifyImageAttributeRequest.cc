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

#include <alibabacloud/ecs/model/ModifyImageAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyImageAttributeRequest;

ModifyImageAttributeRequest::ModifyImageAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyImageAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyImageAttributeRequest::~ModifyImageAttributeRequest()
{}

long ModifyImageAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyImageAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyImageAttributeRequest::getImageId()const
{
	return imageId_;
}

void ModifyImageAttributeRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::string ModifyImageAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyImageAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyImageAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyImageAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyImageAttributeRequest::getImageName()const
{
	return imageName_;
}

void ModifyImageAttributeRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setCoreParameter("ImageName", imageName);
}

std::string ModifyImageAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyImageAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyImageAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyImageAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyImageAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyImageAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

