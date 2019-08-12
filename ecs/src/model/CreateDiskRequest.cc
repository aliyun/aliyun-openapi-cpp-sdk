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

#include <alibabacloud/ecs/model/CreateDiskRequest.h>

using AlibabaCloud::Ecs::Model::CreateDiskRequest;

CreateDiskRequest::CreateDiskRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateDisk")
{}

CreateDiskRequest::~CreateDiskRequest()
{}

long CreateDiskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDiskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateDiskRequest::getSnapshotId()const
{
	return snapshotId_;
}

void CreateDiskRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setCoreParameter("SnapshotId", std::to_string(snapshotId));
}

std::string CreateDiskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDiskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateDiskRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDiskRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string CreateDiskRequest::getPerformanceLevel()const
{
	return performanceLevel_;
}

void CreateDiskRequest::setPerformanceLevel(const std::string& performanceLevel)
{
	performanceLevel_ = performanceLevel;
	setCoreParameter("PerformanceLevel", std::to_string(performanceLevel));
}

std::string CreateDiskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDiskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CreateDiskRequest::getDescription()const
{
	return description_;
}

void CreateDiskRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long CreateDiskRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDiskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateDiskRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CreateDiskRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

std::string CreateDiskRequest::getDiskName()const
{
	return diskName_;
}

void CreateDiskRequest::setDiskName(const std::string& diskName)
{
	diskName_ = diskName;
	setCoreParameter("DiskName", std::to_string(diskName));
}

std::string CreateDiskRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateDiskRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string CreateDiskRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateDiskRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string CreateDiskRequest::getStorageSetId()const
{
	return storageSetId_;
}

void CreateDiskRequest::setStorageSetId(const std::string& storageSetId)
{
	storageSetId_ = storageSetId;
	setCoreParameter("StorageSetId", std::to_string(storageSetId));
}

int CreateDiskRequest::getSize()const
{
	return size_;
}

void CreateDiskRequest::setSize(int size)
{
	size_ = size;
	setCoreParameter("Size", size);
}

bool CreateDiskRequest::getEncrypted()const
{
	return encrypted_;
}

void CreateDiskRequest::setEncrypted(bool encrypted)
{
	encrypted_ = encrypted;
	setCoreParameter("Encrypted", encrypted ? "true" : "false");
}

std::string CreateDiskRequest::getRegionId()const
{
	return regionId_;
}

void CreateDiskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateDiskRequest::getDiskCategory()const
{
	return diskCategory_;
}

void CreateDiskRequest::setDiskCategory(const std::string& diskCategory)
{
	diskCategory_ = diskCategory;
	setCoreParameter("DiskCategory", std::to_string(diskCategory));
}

std::string CreateDiskRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDiskRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

int CreateDiskRequest::getStorageSetPartitionNumber()const
{
	return storageSetPartitionNumber_;
}

void CreateDiskRequest::setStorageSetPartitionNumber(int storageSetPartitionNumber)
{
	storageSetPartitionNumber_ = storageSetPartitionNumber;
	setCoreParameter("StorageSetPartitionNumber", storageSetPartitionNumber);
}

std::vector<CreateDiskRequest::Tag> CreateDiskRequest::getTag()const
{
	return tag_;
}

void CreateDiskRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setCoreParameter(str + ".Value", std::to_string(obj.value));
		setCoreParameter(str + ".Key", std::to_string(obj.key));
	}
}

std::vector<CreateDiskRequest::Arn> CreateDiskRequest::getArn()const
{
	return arn_;
}

void CreateDiskRequest::setArn(const std::vector<Arn>& arn)
{
	arn_ = arn;
	int i = 0;
	for(int i = 0; i!= arn.size(); i++)	{
		auto obj = arn.at(i);
		std::string str ="Arn."+ std::to_string(i);
		setCoreParameter(str + ".Rolearn", std::to_string(obj.rolearn));
		setCoreParameter(str + ".RoleType", std::to_string(obj.roleType));
		setCoreParameter(str + ".AssumeRoleFor", obj.assumeRoleFor);
	}
}

std::string CreateDiskRequest::getKMSKeyId()const
{
	return kMSKeyId_;
}

void CreateDiskRequest::setKMSKeyId(const std::string& kMSKeyId)
{
	kMSKeyId_ = kMSKeyId;
	setCoreParameter("KMSKeyId", std::to_string(kMSKeyId));
}

std::string CreateDiskRequest::getAdvancedFeatures()const
{
	return advancedFeatures_;
}

void CreateDiskRequest::setAdvancedFeatures(const std::string& advancedFeatures)
{
	advancedFeatures_ = advancedFeatures;
	setCoreParameter("AdvancedFeatures", std::to_string(advancedFeatures));
}

