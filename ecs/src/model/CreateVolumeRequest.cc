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

#include <alibabacloud/ecs/model/CreateVolumeRequest.h>

using AlibabaCloud::Ecs::Model::CreateVolumeRequest;

CreateVolumeRequest::CreateVolumeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateVolume")
{}

CreateVolumeRequest::~CreateVolumeRequest()
{}

long CreateVolumeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateVolumeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateVolumeRequest::getSnapshotId()const
{
	return snapshotId_;
}

void CreateVolumeRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string CreateVolumeRequest::getVolumeName()const
{
	return volumeName_;
}

void CreateVolumeRequest::setVolumeName(const std::string& volumeName)
{
	volumeName_ = volumeName;
	setParameter("VolumeName", volumeName);
}

bool CreateVolumeRequest::getVolumeEncrypted()const
{
	return volumeEncrypted_;
}

void CreateVolumeRequest::setVolumeEncrypted(bool volumeEncrypted)
{
	volumeEncrypted_ = volumeEncrypted;
	setParameter("VolumeEncrypted", std::to_string(volumeEncrypted));
}

std::string CreateVolumeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateVolumeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateVolumeRequest::getClientToken()const
{
	return clientToken_;
}

void CreateVolumeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateVolumeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateVolumeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateVolumeRequest::getDescription()const
{
	return description_;
}

void CreateVolumeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

long CreateVolumeRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateVolumeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateVolumeRequest::getVolumeCategory()const
{
	return volumeCategory_;
}

void CreateVolumeRequest::setVolumeCategory(const std::string& volumeCategory)
{
	volumeCategory_ = volumeCategory;
	setParameter("VolumeCategory", volumeCategory);
}

int CreateVolumeRequest::getSize()const
{
	return size_;
}

void CreateVolumeRequest::setSize(int size)
{
	size_ = size;
	setParameter("Size", std::to_string(size));
}

std::string CreateVolumeRequest::getRegionId()const
{
	return regionId_;
}

void CreateVolumeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateVolumeRequest::getZoneId()const
{
	return zoneId_;
}

void CreateVolumeRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::vector<CreateVolumeRequest::Tag> CreateVolumeRequest::getTag()const
{
	return tag_;
}

void CreateVolumeRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setParameter(str + ".Value", obj.value);
		setParameter(str + ".Key", obj.key);
	}
}

