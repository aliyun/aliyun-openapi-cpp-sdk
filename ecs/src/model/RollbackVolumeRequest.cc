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

#include <alibabacloud/ecs/model/RollbackVolumeRequest.h>

using AlibabaCloud::Ecs::Model::RollbackVolumeRequest;

RollbackVolumeRequest::RollbackVolumeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "RollbackVolume")
{}

RollbackVolumeRequest::~RollbackVolumeRequest()
{}

long RollbackVolumeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RollbackVolumeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RollbackVolumeRequest::getSnapshotId()const
{
	return snapshotId_;
}

void RollbackVolumeRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string RollbackVolumeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RollbackVolumeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RollbackVolumeRequest::getRegionId()const
{
	return regionId_;
}

void RollbackVolumeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string RollbackVolumeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RollbackVolumeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string RollbackVolumeRequest::getVolumeId()const
{
	return volumeId_;
}

void RollbackVolumeRequest::setVolumeId(const std::string& volumeId)
{
	volumeId_ = volumeId;
	setParameter("VolumeId", volumeId);
}

long RollbackVolumeRequest::getOwnerId()const
{
	return ownerId_;
}

void RollbackVolumeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

