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

std::string DescribeVolumesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVolumesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
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

int DescribeVolumesRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVolumesRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
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

std::string DescribeVolumesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeVolumesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
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

std::vector<DescribeVolumesRequest::Tag> DescribeVolumesRequest::getTag()const
{
	return tag_;
}

void DescribeVolumesRequest::setTag(const std::vector<Tag>& tag)
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

