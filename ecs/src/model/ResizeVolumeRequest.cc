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

#include <alibabacloud/ecs/model/ResizeVolumeRequest.h>

using AlibabaCloud::Ecs::Model::ResizeVolumeRequest;

ResizeVolumeRequest::ResizeVolumeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ResizeVolume")
{}

ResizeVolumeRequest::~ResizeVolumeRequest()
{}

long ResizeVolumeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ResizeVolumeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ResizeVolumeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ResizeVolumeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ResizeVolumeRequest::getRegionId()const
{
	return regionId_;
}

void ResizeVolumeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ResizeVolumeRequest::getClientToken()const
{
	return clientToken_;
}

void ResizeVolumeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ResizeVolumeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ResizeVolumeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ResizeVolumeRequest::getVolumeId()const
{
	return volumeId_;
}

void ResizeVolumeRequest::setVolumeId(const std::string& volumeId)
{
	volumeId_ = volumeId;
	setParameter("VolumeId", volumeId);
}

int ResizeVolumeRequest::getNewSize()const
{
	return newSize_;
}

void ResizeVolumeRequest::setNewSize(int newSize)
{
	newSize_ = newSize;
	setParameter("NewSize", std::to_string(newSize));
}

long ResizeVolumeRequest::getOwnerId()const
{
	return ownerId_;
}

void ResizeVolumeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

