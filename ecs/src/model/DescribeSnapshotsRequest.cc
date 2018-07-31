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

#include <alibabacloud/ecs/model/DescribeSnapshotsRequest.h>

using AlibabaCloud::Ecs::Model::DescribeSnapshotsRequest;

DescribeSnapshotsRequest::DescribeSnapshotsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeSnapshots")
{}

DescribeSnapshotsRequest::~DescribeSnapshotsRequest()
{}

std::string DescribeSnapshotsRequest::getTag4Value()const
{
	return tag4Value_;
}

void DescribeSnapshotsRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long DescribeSnapshotsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeSnapshotsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeSnapshotsRequest::getTag2Key()const
{
	return tag2Key_;
}

void DescribeSnapshotsRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string DescribeSnapshotsRequest::getFilter2Value()const
{
	return filter2Value_;
}

void DescribeSnapshotsRequest::setFilter2Value(const std::string& filter2Value)
{
	filter2Value_ = filter2Value;
	setParameter("Filter2Value", filter2Value);
}

std::string DescribeSnapshotsRequest::getSnapshotIds()const
{
	return snapshotIds_;
}

void DescribeSnapshotsRequest::setSnapshotIds(const std::string& snapshotIds)
{
	snapshotIds_ = snapshotIds;
	setParameter("SnapshotIds", snapshotIds);
}

std::string DescribeSnapshotsRequest::getUsage()const
{
	return usage_;
}

void DescribeSnapshotsRequest::setUsage(const std::string& usage)
{
	usage_ = usage;
	setParameter("Usage", usage);
}

std::string DescribeSnapshotsRequest::getSnapshotLinkId()const
{
	return snapshotLinkId_;
}

void DescribeSnapshotsRequest::setSnapshotLinkId(const std::string& snapshotLinkId)
{
	snapshotLinkId_ = snapshotLinkId;
	setParameter("SnapshotLinkId", snapshotLinkId);
}

std::string DescribeSnapshotsRequest::getSnapshotName()const
{
	return snapshotName_;
}

void DescribeSnapshotsRequest::setSnapshotName(const std::string& snapshotName)
{
	snapshotName_ = snapshotName;
	setParameter("SnapshotName", snapshotName);
}

std::string DescribeSnapshotsRequest::getTag3Key()const
{
	return tag3Key_;
}

void DescribeSnapshotsRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

int DescribeSnapshotsRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeSnapshotsRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeSnapshotsRequest::getTag1Value()const
{
	return tag1Value_;
}

void DescribeSnapshotsRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string DescribeSnapshotsRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeSnapshotsRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeSnapshotsRequest::getFilter1Key()const
{
	return filter1Key_;
}

void DescribeSnapshotsRequest::setFilter1Key(const std::string& filter1Key)
{
	filter1Key_ = filter1Key;
	setParameter("Filter1Key", filter1Key);
}

std::string DescribeSnapshotsRequest::getRegionId()const
{
	return regionId_;
}

void DescribeSnapshotsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeSnapshotsRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeSnapshotsRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeSnapshotsRequest::getDiskId()const
{
	return diskId_;
}

void DescribeSnapshotsRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

std::string DescribeSnapshotsRequest::getTag3Value()const
{
	return tag3Value_;
}

void DescribeSnapshotsRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

bool DescribeSnapshotsRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeSnapshotsRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", std::to_string(dryRun));
}

std::string DescribeSnapshotsRequest::getTag5Key()const
{
	return tag5Key_;
}

void DescribeSnapshotsRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string DescribeSnapshotsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeSnapshotsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeSnapshotsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeSnapshotsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeSnapshotsRequest::getSourceDiskType()const
{
	return sourceDiskType_;
}

void DescribeSnapshotsRequest::setSourceDiskType(const std::string& sourceDiskType)
{
	sourceDiskType_ = sourceDiskType;
	setParameter("SourceDiskType", sourceDiskType);
}

std::string DescribeSnapshotsRequest::getFilter1Value()const
{
	return filter1Value_;
}

void DescribeSnapshotsRequest::setFilter1Value(const std::string& filter1Value)
{
	filter1Value_ = filter1Value;
	setParameter("Filter1Value", filter1Value);
}

std::string DescribeSnapshotsRequest::getFilter2Key()const
{
	return filter2Key_;
}

void DescribeSnapshotsRequest::setFilter2Key(const std::string& filter2Key)
{
	filter2Key_ = filter2Key;
	setParameter("Filter2Key", filter2Key);
}

long DescribeSnapshotsRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeSnapshotsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeSnapshotsRequest::getTag5Value()const
{
	return tag5Value_;
}

void DescribeSnapshotsRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string DescribeSnapshotsRequest::getTag1Key()const
{
	return tag1Key_;
}

void DescribeSnapshotsRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string DescribeSnapshotsRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeSnapshotsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

bool DescribeSnapshotsRequest::getEncrypted()const
{
	return encrypted_;
}

void DescribeSnapshotsRequest::setEncrypted(bool encrypted)
{
	encrypted_ = encrypted;
	setParameter("Encrypted", std::to_string(encrypted));
}

std::string DescribeSnapshotsRequest::getSnapshotType()const
{
	return snapshotType_;
}

void DescribeSnapshotsRequest::setSnapshotType(const std::string& snapshotType)
{
	snapshotType_ = snapshotType;
	setParameter("SnapshotType", snapshotType);
}

std::string DescribeSnapshotsRequest::getTag2Value()const
{
	return tag2Value_;
}

void DescribeSnapshotsRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string DescribeSnapshotsRequest::getTag4Key()const
{
	return tag4Key_;
}

void DescribeSnapshotsRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string DescribeSnapshotsRequest::getStatus()const
{
	return status_;
}

void DescribeSnapshotsRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

