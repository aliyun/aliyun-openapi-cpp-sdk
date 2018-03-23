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

#include <alibabacloud/ecs/model/ModifyVolumeAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyVolumeAttributeRequest;

ModifyVolumeAttributeRequest::ModifyVolumeAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyVolumeAttribute")
{}

ModifyVolumeAttributeRequest::~ModifyVolumeAttributeRequest()
{}

long ModifyVolumeAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyVolumeAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyVolumeAttributeRequest::getVolumeName()const
{
	return volumeName_;
}

void ModifyVolumeAttributeRequest::setVolumeName(const std::string& volumeName)
{
	volumeName_ = volumeName;
	setParameter("VolumeName", volumeName);
}

std::string ModifyVolumeAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyVolumeAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyVolumeAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyVolumeAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyVolumeAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyVolumeAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyVolumeAttributeRequest::getVolumeId()const
{
	return volumeId_;
}

void ModifyVolumeAttributeRequest::setVolumeId(const std::string& volumeId)
{
	volumeId_ = volumeId;
	setParameter("VolumeId", volumeId);
}

std::string ModifyVolumeAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyVolumeAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long ModifyVolumeAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyVolumeAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

