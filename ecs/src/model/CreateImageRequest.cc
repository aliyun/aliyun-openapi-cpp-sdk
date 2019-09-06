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

using AlibabaCloud::Ecs::Model::CreateImageRequest;

CreateImageRequest::CreateImageRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateImage")
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
		setCoreParameter(str + ".SnapshotId", obj.snapshotId);
		setCoreParameter(str + ".Size", std::to_string(obj.size));
		setCoreParameter(str + ".DiskType", obj.diskType);
		setCoreParameter(str + ".Device", obj.device);
	}
}

long CreateImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateImageRequest::getSnapshotId()const
{
	return snapshotId_;
}

void CreateImageRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setCoreParameter("SnapshotId", snapshotId);
}

std::string CreateImageRequest::getClientToken()const
{
	return clientToken_;
}

void CreateImageRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateImageRequest::getDescription()const
{
	return description_;
}

void CreateImageRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string CreateImageRequest::getPlatform()const
{
	return platform_;
}

void CreateImageRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setCoreParameter("Platform", platform);
}

std::string CreateImageRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateImageRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateImageRequest::getRegionId()const
{
	return regionId_;
}

void CreateImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateImageRequest::getImageName()const
{
	return imageName_;
}

void CreateImageRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setCoreParameter("ImageName", imageName);
}

std::vector<CreateImageRequest::Tag> CreateImageRequest::getTag()const
{
	return tag_;
}

void CreateImageRequest::setTag(const std::vector<Tag>& tag)
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

std::string CreateImageRequest::getArchitecture()const
{
	return architecture_;
}

void CreateImageRequest::setArchitecture(const std::string& architecture)
{
	architecture_ = architecture;
	setCoreParameter("Architecture", architecture);
}

std::string CreateImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateImageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateImageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateImageRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateImageRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateImageRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string CreateImageRequest::getImageVersion()const
{
	return imageVersion_;
}

void CreateImageRequest::setImageVersion(const std::string& imageVersion)
{
	imageVersion_ = imageVersion;
	setCoreParameter("ImageVersion", imageVersion);
}

