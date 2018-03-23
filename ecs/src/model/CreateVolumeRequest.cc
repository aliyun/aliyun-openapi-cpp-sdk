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

std::string CreateVolumeRequest::getTag4Value()const
{
	return tag4Value_;
}

void CreateVolumeRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

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

std::string CreateVolumeRequest::getTag2Key()const
{
	return tag2Key_;
}

void CreateVolumeRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
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

std::string CreateVolumeRequest::getTag5Key()const
{
	return tag5Key_;
}

void CreateVolumeRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
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

std::string CreateVolumeRequest::getTag3Key()const
{
	return tag3Key_;
}

void CreateVolumeRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
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

std::string CreateVolumeRequest::getTag5Value()const
{
	return tag5Value_;
}

void CreateVolumeRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string CreateVolumeRequest::getTag1Key()const
{
	return tag1Key_;
}

void CreateVolumeRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string CreateVolumeRequest::getTag1Value()const
{
	return tag1Value_;
}

void CreateVolumeRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
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

std::string CreateVolumeRequest::getTag2Value()const
{
	return tag2Value_;
}

void CreateVolumeRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
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

std::string CreateVolumeRequest::getTag4Key()const
{
	return tag4Key_;
}

void CreateVolumeRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string CreateVolumeRequest::getTag3Value()const
{
	return tag3Value_;
}

void CreateVolumeRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

