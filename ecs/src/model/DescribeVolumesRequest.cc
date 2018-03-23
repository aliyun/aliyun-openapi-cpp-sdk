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

#include <alibabacloud/ecs/model/DescribeVolumesRequest.h>

using AlibabaCloud::Ecs::Model::DescribeVolumesRequest;

DescribeVolumesRequest::DescribeVolumesRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeVolumes")
{}

DescribeVolumesRequest::~DescribeVolumesRequest()
{}

std::string DescribeVolumesRequest::getTag4Value()const
{
	return tag4Value_;
}

void DescribeVolumesRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long DescribeVolumesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVolumesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeVolumesRequest::getSnapshotId()const
{
	return snapshotId_;
}

void DescribeVolumesRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string DescribeVolumesRequest::getTag2Key()const
{
	return tag2Key_;
}

void DescribeVolumesRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string DescribeVolumesRequest::getAutoSnapshotPolicyId()const
{
	return autoSnapshotPolicyId_;
}

void DescribeVolumesRequest::setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId)
{
	autoSnapshotPolicyId_ = autoSnapshotPolicyId;
	setParameter("AutoSnapshotPolicyId", autoSnapshotPolicyId);
}

std::string DescribeVolumesRequest::getTag3Key()const
{
	return tag3Key_;
}

void DescribeVolumesRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

int DescribeVolumesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVolumesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVolumesRequest::getTag1Value()const
{
	return tag1Value_;
}

void DescribeVolumesRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string DescribeVolumesRequest::getLockReason()const
{
	return lockReason_;
}

void DescribeVolumesRequest::setLockReason(const std::string& lockReason)
{
	lockReason_ = lockReason;
	setParameter("LockReason", lockReason);
}

std::string DescribeVolumesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVolumesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeVolumesRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVolumesRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVolumesRequest::getTag3Value()const
{
	return tag3Value_;
}

void DescribeVolumesRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

std::string DescribeVolumesRequest::getTag5Key()const
{
	return tag5Key_;
}

void DescribeVolumesRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string DescribeVolumesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVolumesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVolumesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVolumesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

bool DescribeVolumesRequest::getEnableAutomatedSnapshotPolicy()const
{
	return enableAutomatedSnapshotPolicy_;
}

void DescribeVolumesRequest::setEnableAutomatedSnapshotPolicy(bool enableAutomatedSnapshotPolicy)
{
	enableAutomatedSnapshotPolicy_ = enableAutomatedSnapshotPolicy;
	setParameter("EnableAutomatedSnapshotPolicy", std::to_string(enableAutomatedSnapshotPolicy));
}

long DescribeVolumesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVolumesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeVolumesRequest::getTag5Value()const
{
	return tag5Value_;
}

void DescribeVolumesRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string DescribeVolumesRequest::getTag1Key()const
{
	return tag1Key_;
}

void DescribeVolumesRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string DescribeVolumesRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeVolumesRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string DescribeVolumesRequest::getTag2Value()const
{
	return tag2Value_;
}

void DescribeVolumesRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string DescribeVolumesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeVolumesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribeVolumesRequest::getTag4Key()const
{
	return tag4Key_;
}

void DescribeVolumesRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string DescribeVolumesRequest::getVolumeIds()const
{
	return volumeIds_;
}

void DescribeVolumesRequest::setVolumeIds(const std::string& volumeIds)
{
	volumeIds_ = volumeIds;
	setParameter("VolumeIds", volumeIds);
}

std::string DescribeVolumesRequest::getCategory()const
{
	return category_;
}

void DescribeVolumesRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string DescribeVolumesRequest::getStatus()const
{
	return status_;
}

void DescribeVolumesRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

