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

#include <alibabacloud/ecs/model/ImportImageRequest.h>

using AlibabaCloud::Ecs::Model::ImportImageRequest;

ImportImageRequest::ImportImageRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ImportImage")
{
	setMethod(HttpRequest::Method::Post);
}

ImportImageRequest::~ImportImageRequest()
{}

std::vector<ImportImageRequest::DiskDeviceMapping> ImportImageRequest::getDiskDeviceMapping()const
{
	return diskDeviceMapping_;
}

void ImportImageRequest::setDiskDeviceMapping(const std::vector<DiskDeviceMapping>& diskDeviceMapping)
{
	diskDeviceMapping_ = diskDeviceMapping;
	for(int dep1 = 0; dep1!= diskDeviceMapping.size(); dep1++) {
		auto diskDeviceMappingObj = diskDeviceMapping.at(dep1);
		std::string diskDeviceMappingObjStr = "DiskDeviceMapping." + std::to_string(dep1);
		setCoreParameter(diskDeviceMappingObjStr + ".OSSBucket", diskDeviceMappingObj.oSSBucket);
		setCoreParameter(diskDeviceMappingObjStr + ".DiskImSize", std::to_string(diskDeviceMappingObj.diskImSize));
		setCoreParameter(diskDeviceMappingObjStr + ".Format", diskDeviceMappingObj.format);
		setCoreParameter(diskDeviceMappingObjStr + ".Device", diskDeviceMappingObj.device);
		setCoreParameter(diskDeviceMappingObjStr + ".OSSObject", diskDeviceMappingObj.oSSObject);
		setCoreParameter(diskDeviceMappingObjStr + ".DiskImageSize", std::to_string(diskDeviceMappingObj.diskImageSize));
	}
}

long ImportImageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ImportImageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ImportImageRequest::getDescription()const
{
	return description_;
}

void ImportImageRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ImportImageRequest::getPlatform()const
{
	return platform_;
}

void ImportImageRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setCoreParameter("Platform", platform);
}

std::string ImportImageRequest::getRegionId()const
{
	return regionId_;
}

void ImportImageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ImportImageRequest::getImageName()const
{
	return imageName_;
}

void ImportImageRequest::setImageName(const std::string& imageName)
{
	imageName_ = imageName;
	setCoreParameter("ImageName", imageName);
}

std::string ImportImageRequest::getArchitecture()const
{
	return architecture_;
}

void ImportImageRequest::setArchitecture(const std::string& architecture)
{
	architecture_ = architecture;
	setCoreParameter("Architecture", architecture);
}

std::string ImportImageRequest::getLicenseType()const
{
	return licenseType_;
}

void ImportImageRequest::setLicenseType(const std::string& licenseType)
{
	licenseType_ = licenseType;
	setCoreParameter("LicenseType", licenseType);
}

std::string ImportImageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ImportImageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ImportImageRequest::getRoleName()const
{
	return roleName_;
}

void ImportImageRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setCoreParameter("RoleName", roleName);
}

std::string ImportImageRequest::getOSType()const
{
	return oSType_;
}

void ImportImageRequest::setOSType(const std::string& oSType)
{
	oSType_ = oSType;
	setCoreParameter("OSType", oSType);
}

long ImportImageRequest::getOwnerId()const
{
	return ownerId_;
}

void ImportImageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

