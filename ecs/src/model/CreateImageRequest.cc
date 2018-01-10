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

#include <alibabacloud/ecs/model/CreateImageRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CreateImageRequest::CreateImageRequest() :
	EcsRequest("CreateImage")
{}

CreateImageRequest::~CreateImageRequest()
{}

std::vector<CreateImageRequest::DiskDeviceMapping> CreateImageRequest::getDiskDeviceMapping()const
{
	return diskDeviceMapping_;
}

void CreateImageRequest::setDiskDeviceMapping(const std::vector<DiskDeviceMapping>& diskDeviceMapping)
{
	diskDeviceMapping_ = diskDeviceMapping;
	int i = 0;
	for(int i = 0; i!= diskDeviceMapping.size(); i++)	{
		auto obj = diskDeviceMapping.at(i);
		std::string str ="DiskDeviceMapping."+ std::to_string(i);
		setParameter(str + ".Size", std::to_string(obj.size));
		setParameter(str + ".SnapshotId", obj.snapshotId);
		setParameter(str + ".Device", obj.device);
		setParameter(str + ".DiskType", obj.diskType);
	}
}

std::string CreateImageRequest::getTag4Value()const
{
	return tag4Value_;
}

void CreateImageRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long CreateImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateImageRequest::getSnapshotId()const
{
	return snapshotId_;
}

void CreateImageRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string CreateImageRequest::getTag2Key()const
{
	return tag2Key_;
}

void CreateImageRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string CreateImageRequest::getClientToken()const
{
	return clientToken_;
}

void CreateImageRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateImageRequest::getDescription()const
{
	return description_;
}

void CreateImageRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateImageRequest::getTag3Key()const
{
	return tag3Key_;
}

void CreateImageRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

std::string CreateImageRequest::getPlatform()const
{
	return platform_;
}

void CreateImageRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setParameter("Platform", platform);
}

std::string CreateImageRequest::getTag1Value()const
{
	return tag1Value_;
}

void CreateImageRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string CreateImageRequest::getRegionId()const
{
	return regionId_;
}

void CreateImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateImageRequest::getImageName()const
{
	return imageName_;
}

void CreateImageRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setParameter("ImageName", imageName);
}

std::string CreateImageRequest::getTag3Value()const
{
	return tag3Value_;
}

void CreateImageRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

std::string CreateImageRequest::getArchitecture()const
{
	return architecture_;
}

void CreateImageRequest::setArchitecture(const std::string& architecture)
{
	architecture_ = architecture;
	setParameter("Architecture", architecture);
}

std::string CreateImageRequest::getTag5Key()const
{
	return tag5Key_;
}

void CreateImageRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string CreateImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateImageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateImageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateImageRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateImageRequest::getTag5Value()const
{
	return tag5Value_;
}

void CreateImageRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string CreateImageRequest::getTag1Key()const
{
	return tag1Key_;
}

void CreateImageRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string CreateImageRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateImageRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateImageRequest::getTag2Value()const
{
	return tag2Value_;
}

void CreateImageRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string CreateImageRequest::getImageVersion()const
{
	return imageVersion_;
}

void CreateImageRequest::setImageVersion(const std::string& imageVersion)
{
	imageVersion_ = imageVersion;
	setParameter("ImageVersion", imageVersion);
}

std::string CreateImageRequest::getTag4Key()const
{
	return tag4Key_;
}

void CreateImageRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

