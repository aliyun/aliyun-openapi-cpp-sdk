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

#include <alibabacloud/ecs/model/ModifyImageSharePermissionRequest.h>

using AlibabaCloud::Ecs::Model::ModifyImageSharePermissionRequest;

ModifyImageSharePermissionRequest::ModifyImageSharePermissionRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyImageSharePermission")
{}

ModifyImageSharePermissionRequest::~ModifyImageSharePermissionRequest()
{}

std::string ModifyImageSharePermissionRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyImageSharePermissionRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

long ModifyImageSharePermissionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyImageSharePermissionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyImageSharePermissionRequest::getImageId()const
{
	return imageId_;
}

void ModifyImageSharePermissionRequest::setImageId(const std::string& imageId)
{
	imageId_ = imageId;
	setCoreParameter("ImageId", imageId);
}

std::vector<std::string> ModifyImageSharePermissionRequest::getAddAccount()const
{
	return addAccount_;
}

void ModifyImageSharePermissionRequest::setAddAccount(const std::vector<std::string>& addAccount)
{
	addAccount_ = addAccount;
	for(int i = 0; i!= addAccount.size(); i++)
		setCoreParameter("AddAccount."+ std::to_string(i), addAccount.at(i));
}

std::string ModifyImageSharePermissionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyImageSharePermissionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyImageSharePermissionRequest::getRegionId()const
{
	return regionId_;
}

void ModifyImageSharePermissionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::vector<std::string> ModifyImageSharePermissionRequest::getRemoveAccount()const
{
	return removeAccount_;
}

void ModifyImageSharePermissionRequest::setRemoveAccount(const std::vector<std::string>& removeAccount)
{
	removeAccount_ = removeAccount;
	for(int i = 0; i!= removeAccount.size(); i++)
		setCoreParameter("RemoveAccount."+ std::to_string(i), removeAccount.at(i));
}

std::string ModifyImageSharePermissionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyImageSharePermissionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyImageSharePermissionRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyImageSharePermissionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

