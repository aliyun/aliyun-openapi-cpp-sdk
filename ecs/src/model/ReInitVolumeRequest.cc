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

#include <alibabacloud/ecs/model/ReInitVolumeRequest.h>

using AlibabaCloud::Ecs::Model::ReInitVolumeRequest;

ReInitVolumeRequest::ReInitVolumeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ReInitVolume")
{}

ReInitVolumeRequest::~ReInitVolumeRequest()
{}

long ReInitVolumeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReInitVolumeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReInitVolumeRequest::getPassword()const
{
	return password_;
}

void ReInitVolumeRequest::setPassword(const std::string& password)
{
	password_ = password;
	setParameter("Password", password);
}

std::string ReInitVolumeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReInitVolumeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReInitVolumeRequest::getRegionId()const
{
	return regionId_;
}

void ReInitVolumeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ReInitVolumeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReInitVolumeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ReInitVolumeRequest::getVolumeId()const
{
	return volumeId_;
}

void ReInitVolumeRequest::setVolumeId(const std::string& volumeId)
{
	volumeId_ = volumeId;
	setParameter("VolumeId", volumeId);
}

long ReInitVolumeRequest::getOwnerId()const
{
	return ownerId_;
}

void ReInitVolumeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

