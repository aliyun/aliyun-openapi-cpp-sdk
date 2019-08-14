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

long DescribeDisksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeDisksRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeDisksRequest::getSnapshotId()const
{
	return snapshotId_;
}

void DescribeDisksRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setCoreParameter("SnapshotId", snapshotId);
}

std::string DescribeDisksRequest::getFilter2Value()const
{
	return filter2Value_;
}

void DescribeDisksRequest::setFilter2Value(const std::string& filter2Value)
{
	filter2Value_ = filter2Value;
	setCoreParameter("Filter2Value", filter2Value);
}

std::string DescribeDisksRequest::getAutoSnapshotPolicyId()const
{
	return autoSnapshotPolicyId_;
}

void DescribeDisksRequest::setAutoSnapshotPolicyId(const std::string& autoSnapshotPolicyId)
{
	autoSnapshotPolicyId_ = autoSnapshotPolicyId;
	setCoreParameter("AutoSnapshotPolicyId", autoSnapshotPolicyId);
}

int DescribeDisksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDisksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDisksRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DescribeDisksRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string DescribeDisksRequest::getDiskName()const
{
	return diskName_;
}

void DescribeDisksRequest::setDiskName(const std::string& diskName)
{
	diskName_ = diskName;
	setCoreParameter("DiskName", diskName);
}

bool DescribeDisksRequest::getDeleteAutoSnapshot()const
{
	return deleteAutoSnapshot_;
}

void DescribeDisksRequest::setDeleteAutoSnapshot(bool deleteAutoSnapshot)
{
	deleteAutoSnapshot_ = deleteAutoSnapshot;
	setCoreParameter("DeleteAutoSnapshot", deleteAutoSnapshot ? "true" : "false");
}

std::string DescribeDisksRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDisksRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDisksRequest::getDiskChargeType()const
{
	return diskChargeType_;
}

void DescribeDisksRequest::setDiskChargeType(const std::string& diskChargeType)
{
	diskChargeType_ = diskChargeType;
	setCoreParameter("DiskChargeType", diskChargeType);
}

std::string DescribeDisksRequest::getLockReason()const
{
	return lockReason_;
}

void DescribeDisksRequest::setLockReason(const std::string& lockReason)
{
	lockReason_ = lockReason;
	setCoreParameter("LockReason", lockReason);
}

std::string DescribeDisksRequest::getFilter1Key()const
{
	return filter1Key_;
}

void DescribeDisksRequest::setFilter1Key(const std::string& filter1Key)
{
	filter1Key_ = filter1Key;
	setCoreParameter("Filter1Key", filter1Key);
}

std::string DescribeDisksRequest::getRegionId()const
{
	return regionId_;
}

void DescribeDisksRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeDisksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDisksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDisksRequest::getDiskIds()const
{
	return diskIds_;
}

void DescribeDisksRequest::setDiskIds(const std::string& diskIds)
{
	diskIds_ = diskIds;
	setCoreParameter("DiskIds", diskIds);
}

std::vector<DescribeDisksRequest::Tag> DescribeDisksRequest::getTag()const
{
	return tag_;
}

void DescribeDisksRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", obj.value);
		setCoreParameter(str + ".Key", obj.key);
	}
}

bool DescribeDisksRequest::getDeleteWithInstance()const
{
	return deleteWithInstance_;
}

void DescribeDisksRequest::setDeleteWithInstance(bool deleteWithInstance)
{
	deleteWithInstance_ = deleteWithInstance;
	setCoreParameter("DeleteWithInstance", deleteWithInstance ? "true" : "false");
}

bool DescribeDisksRequest::getEnableAutoSnapshot()const
{
	return enableAutoSnapshot_;
}

void DescribeDisksRequest::setEnableAutoSnapshot(bool enableAutoSnapshot)
{
	enableAutoSnapshot_ = enableAutoSnapshot;
	setCoreParameter("EnableAutoSnapshot", enableAutoSnapshot ? "true" : "false");
}

bool DescribeDisksRequest::getDryRun()const
{
	return dryRun_;
}

void DescribeDisksRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setCoreParameter("DryRun", dryRun ? "true" : "false");
}

std::string DescribeDisksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeDisksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeDisksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeDisksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeDisksRequest::getFilter1Value()const
{
	return filter1Value_;
}

void DescribeDisksRequest::setFilter1Value(const std::string& filter1Value)
{
	filter1Value_ = filter1Value;
	setCoreParameter("Filter1Value", filter1Value);
}

bool DescribeDisksRequest::getPortable()const
{
	return portable_;
}

void DescribeDisksRequest::setPortable(bool portable)
{
	portable_ = portable;
	setCoreParameter("Portable", portable ? "true" : "false");
}

bool DescribeDisksRequest::getEnableAutomatedSnapshotPolicy()const
{
	return enableAutomatedSnapshotPolicy_;
}

void DescribeDisksRequest::setEnableAutomatedSnapshotPolicy(bool enableAutomatedSnapshotPolicy)
{
	enableAutomatedSnapshotPolicy_ = enableAutomatedSnapshotPolicy;
	setCoreParameter("EnableAutomatedSnapshotPolicy", enableAutomatedSnapshotPolicy ? "true" : "false");
}

std::string DescribeDisksRequest::getFilter2Key()const
{
	return filter2Key_;
}

void DescribeDisksRequest::setFilter2Key(const std::string& filter2Key)
{
	filter2Key_ = filter2Key;
	setCoreParameter("Filter2Key", filter2Key);
}

long DescribeDisksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDisksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDisksRequest::getDiskType()const
{
	return diskType_;
}

void DescribeDisksRequest::setDiskType(const std::string& diskType)
{
	diskType_ = diskType;
	setCoreParameter("DiskType", diskType);
}

std::vector<std::string> DescribeDisksRequest::getAdditionalAttributes()const
{
	return additionalAttributes_;
}

void DescribeDisksRequest::setAdditionalAttributes(const std::vector<std::string>& additionalAttributes)
{
	additionalAttributes_ = additionalAttributes;
	for(int i = 0; i!= additionalAttributes.size(); i++)
		setCoreParameter("AdditionalAttributes."+ std::to_string(i), additionalAttributes.at(i));
}

bool DescribeDisksRequest::getEnableShared()const
{
	return enableShared_;
}

void DescribeDisksRequest::setEnableShared(bool enableShared)
{
	enableShared_ = enableShared;
	setCoreParameter("EnableShared", enableShared ? "true" : "false");
}

std::string DescribeDisksRequest::getInstanceId()const
{
	return instanceId_;
}

void DescribeDisksRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

bool DescribeDisksRequest::getEncrypted()const
{
	return encrypted_;
}

void DescribeDisksRequest::setEncrypted(bool encrypted)
{
	encrypted_ = encrypted;
	setCoreParameter("Encrypted", encrypted ? "true" : "false");
}

std::string DescribeDisksRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeDisksRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string DescribeDisksRequest::getCategory()const
{
	return category_;
}

void DescribeDisksRequest::setCategory(const std::string& category)
{
	category_ = category;
	setCoreParameter("Category", category);
}

std::string DescribeDisksRequest::getKMSKeyId()const
{
	return kMSKeyId_;
}

void DescribeDisksRequest::setKMSKeyId(const std::string& kMSKeyId)
{
	kMSKeyId_ = kMSKeyId;
	setCoreParameter("KMSKeyId", kMSKeyId);
}

std::string DescribeDisksRequest::getStatus()const
{
	return status_;
}

void DescribeDisksRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

