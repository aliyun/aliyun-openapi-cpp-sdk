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

#include <alibabacloud/ecs/model/DescribeDisksRequest.h>

using AlibabaCloud::Ecs::Model::DescribeDisksRequest;

DescribeDisksRequest::DescribeDisksRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DescribeDisks")
{}

DescribeDisksRequest::~DescribeDisksRequest()
{}

std::string DescribeDisksRequest::getTag4Value()const
{
	return tag4Value_;
}

void DescribeDisksRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long DescribeDisksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDisksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDisksRequest::getSnapshotId()const
{
	return snapshotId_;
}

void DescribeDisksRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string DescribeDisksRequest::getTag2Key()const
{
	return tag2Key_;
}

void DescribeDisksRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string DescribeDisksRequest::getFilter2Value()const
{
	return filter2Value_;
}

void DescribeDisksRequest::setFilter2Value(const std::string& filter2Value)
{
	filter2Value_ = filter2Value;
	setParameter("Filter2Value", filter2Value);
}

std::string DescribeDisksRequest::getAutoSnapshotPolicyId()const
{
	return autoSnapshotPolicyId_;
}

void DescribeDisksRequest::setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId)
{
	autoSnapshotPolicyId_ = autoSnapshotPolicyId;
	setParameter("AutoSnapshotPolicyId", autoSnapshotPolicyId);
}

std::string DescribeDisksRequest::getTag3Key()const
{
	return tag3Key_;
}

void DescribeDisksRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

int DescribeDisksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDisksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDisksRequest::getDiskName()const
{
	return diskName_;
}

void DescribeDisksRequest::setDiskName(const std::string& diskName)
{
	diskName_ = diskName;
	setParameter("DiskName", diskName);
}

std::string DescribeDisksRequest::getTag1Value()const
{
	return tag1Value_;
}

void DescribeDisksRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

bool DescribeDisksRequest::getDeleteAutoSnapshot()const
{
	return deleteAutoSnapshot_;
}

void DescribeDisksRequest::setDeleteAutoSnapshot(bool deleteAutoSnapshot)
{
	deleteAutoSnapshot_ = deleteAutoSnapshot;
	setParameter("DeleteAutoSnapshot", std::to_string(deleteAutoSnapshot));
}

std::string DescribeDisksRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDisksRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDisksRequest::getDiskChargeType()const
{
	return diskChargeType_;
}

void DescribeDisksRequest::setDiskChargeType(const std::string& diskChargeType)
{
	diskChargeType_ = diskChargeType;
	setParameter("DiskChargeType", diskChargeType);
}

std::string DescribeDisksRequest::getLockReason()const
{
	return lockReason_;
}

void DescribeDisksRequest::setLockReason(const std::string& lockReason)
{
	lockReason_ = lockReason;
	setParameter("LockReason", lockReason);
}

std::string DescribeDisksRequest::getFilter1Key()const
{
	return filter1Key_;
}

void DescribeDisksRequest::setFilter1Key(const std::string& filter1Key)
{
	filter1Key_ = filter1Key;
	setParameter("Filter1Key", filter1Key);
}

std::string DescribeDisksRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDisksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int DescribeDisksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDisksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDisksRequest::getDiskIds()const
{
	return diskIds_;
}

void DescribeDisksRequest::setDiskIds(const std::string& diskIds)
{
	diskIds_ = diskIds;
	setParameter("DiskIds", diskIds);
}

bool DescribeDisksRequest::getDeleteWithInstance()const
{
	return deleteWithInstance_;
}

void DescribeDisksRequest::setDeleteWithInstance(bool deleteWithInstance)
{
	deleteWithInstance_ = deleteWithInstance;
	setParameter("DeleteWithInstance", std::to_string(deleteWithInstance));
}

std::string DescribeDisksRequest::getTag3Value()const
{
	return tag3Value_;
}

void DescribeDisksRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

bool DescribeDisksRequest::getEnableAutoSnapshot()const
{
	return enableAutoSnapshot_;
}

void DescribeDisksRequest::setEnableAutoSnapshot(bool enableAutoSnapshot)
{
	enableAutoSnapshot_ = enableAutoSnapshot;
	setParameter("EnableAutoSnapshot", std::to_string(enableAutoSnapshot));
}

bool DescribeDisksRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeDisksRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", std::to_string(dryRun));
}

std::string DescribeDisksRequest::getTag5Key()const
{
	return tag5Key_;
}

void DescribeDisksRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string DescribeDisksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDisksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDisksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDisksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDisksRequest::getFilter1Value()const
{
	return filter1Value_;
}

void DescribeDisksRequest::setFilter1Value(const std::string& filter1Value)
{
	filter1Value_ = filter1Value;
	setParameter("Filter1Value", filter1Value);
}

bool DescribeDisksRequest::getPortable()const
{
	return portable_;
}

void DescribeDisksRequest::setPortable(bool portable)
{
	portable_ = portable;
	setParameter("Portable", std::to_string(portable));
}

bool DescribeDisksRequest::getEnableAutomatedSnapshotPolicy()const
{
	return enableAutomatedSnapshotPolicy_;
}

void DescribeDisksRequest::setEnableAutomatedSnapshotPolicy(bool enableAutomatedSnapshotPolicy)
{
	enableAutomatedSnapshotPolicy_ = enableAutomatedSnapshotPolicy;
	setParameter("EnableAutomatedSnapshotPolicy", std::to_string(enableAutomatedSnapshotPolicy));
}

std::string DescribeDisksRequest::getFilter2Key()const
{
	return filter2Key_;
}

void DescribeDisksRequest::setFilter2Key(const std::string& filter2Key)
{
	filter2Key_ = filter2Key;
	setParameter("Filter2Key", filter2Key);
}

long DescribeDisksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDisksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDisksRequest::getDiskType()const
{
	return diskType_;
}

void DescribeDisksRequest::setDiskType(const std::string& diskType)
{
	diskType_ = diskType;
	setParameter("DiskType", diskType);
}

std::string DescribeDisksRequest::getTag5Value()const
{
	return tag5Value_;
}

void DescribeDisksRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string DescribeDisksRequest::getTag1Key()const
{
	return tag1Key_;
}

void DescribeDisksRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::vector<std::string> DescribeDisksRequest::getAdditionalAttributes()const
{
	return additionalAttributes_;
}

void DescribeDisksRequest::setAdditionalAttributes(const std::vector<std::string>& additionalAttributes)
{
	additionalAttributes_ = additionalAttributes;
	for(int i = 0; i!= additionalAttributes.size(); i++)
		setParameter("AdditionalAttributes."+ std::to_string(i), additionalAttributes.at(i));
}

bool DescribeDisksRequest::getEnableShared()const
{
	return enableShared_;
}

void DescribeDisksRequest::setEnableShared(bool enableShared)
{
	enableShared_ = enableShared;
	setParameter("EnableShared", std::to_string(enableShared));
}

std::string DescribeDisksRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeDisksRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

bool DescribeDisksRequest::getEncrypted()const
{
	return encrypted_;
}

void DescribeDisksRequest::setEncrypted(bool encrypted)
{
	encrypted_ = encrypted;
	setParameter("Encrypted", std::to_string(encrypted));
}

std::string DescribeDisksRequest::getTag2Value()const
{
	return tag2Value_;
}

void DescribeDisksRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string DescribeDisksRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeDisksRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribeDisksRequest::getTag4Key()const
{
	return tag4Key_;
}

void DescribeDisksRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string DescribeDisksRequest::getCategory()const
{
	return category_;
}

void DescribeDisksRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string DescribeDisksRequest::getStatus()const
{
	return status_;
}

void DescribeDisksRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

