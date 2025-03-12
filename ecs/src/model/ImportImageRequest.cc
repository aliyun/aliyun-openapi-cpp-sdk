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

ImportImageRequest::ImportImageRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ImportImage") {
  setMethod(HttpRequest::Method::Post);
}

ImportImageRequest::~ImportImageRequest() {}

std::vector<ImportImageRequest::DiskDeviceMapping> ImportImageRequest::getDiskDeviceMapping() const {
  return diskDeviceMapping_;
}

void ImportImageRequest::setDiskDeviceMapping(const std::vector<ImportImageRequest::DiskDeviceMapping> &diskDeviceMapping) {
  diskDeviceMapping_ = diskDeviceMapping;
  for(int dep1 = 0; dep1 != diskDeviceMapping.size(); dep1++) {
  auto diskDeviceMappingObj = diskDeviceMapping.at(dep1);
  std::string diskDeviceMappingObjStr = std::string("DiskDeviceMapping") + "." + std::to_string(dep1 + 1);
    setParameter(diskDeviceMappingObjStr + ".OSSBucket", diskDeviceMappingObj.oSSBucket);
    setParameter(diskDeviceMappingObjStr + ".DiskImSize", std::to_string(diskDeviceMappingObj.diskImSize));
    setParameter(diskDeviceMappingObjStr + ".Format", diskDeviceMappingObj.format);
    setParameter(diskDeviceMappingObjStr + ".Device", diskDeviceMappingObj.device);
    setParameter(diskDeviceMappingObjStr + ".OSSObject", diskDeviceMappingObj.oSSObject);
    setParameter(diskDeviceMappingObjStr + ".DiskImageSize", std::to_string(diskDeviceMappingObj.diskImageSize));
  }
}

long ImportImageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ImportImageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ImportImageRequest::getClientToken() const {
  return clientToken_;
}

void ImportImageRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ImportImageRequest::getDescription() const {
  return description_;
}

void ImportImageRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ImportImageRequest::getPlatform() const {
  return platform_;
}

void ImportImageRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string ImportImageRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ImportImageRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

ImportImageRequest::Features ImportImageRequest::getFeatures() const {
  return features_;
}

void ImportImageRequest::setFeatures(const ImportImageRequest::Features &features) {
  features_ = features;
  setParameter(std::string("Features") + ".NvmeSupport", features.nvmeSupport);
  setParameter(std::string("Features") + ".ImdsSupport", features.imdsSupport);
}

std::string ImportImageRequest::getBootMode() const {
  return bootMode_;
}

void ImportImageRequest::setBootMode(const std::string &bootMode) {
  bootMode_ = bootMode;
  setParameter(std::string("BootMode"), bootMode);
}

std::string ImportImageRequest::getRegionId() const {
  return regionId_;
}

void ImportImageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ImportImageRequest::getImageName() const {
  return imageName_;
}

void ImportImageRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

std::string ImportImageRequest::getStorageLocationArn() const {
  return storageLocationArn_;
}

void ImportImageRequest::setStorageLocationArn(const std::string &storageLocationArn) {
  storageLocationArn_ = storageLocationArn;
  setParameter(std::string("StorageLocationArn"), storageLocationArn);
}

std::vector<ImportImageRequest::Tag> ImportImageRequest::getTag() const {
  return tag_;
}

void ImportImageRequest::setTag(const std::vector<ImportImageRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string ImportImageRequest::getArchitecture() const {
  return architecture_;
}

void ImportImageRequest::setArchitecture(const std::string &architecture) {
  architecture_ = architecture;
  setParameter(std::string("Architecture"), architecture);
}

std::string ImportImageRequest::getLicenseType() const {
  return licenseType_;
}

void ImportImageRequest::setLicenseType(const std::string &licenseType) {
  licenseType_ = licenseType;
  setParameter(std::string("LicenseType"), licenseType);
}

std::string ImportImageRequest::getDetectionStrategy() const {
  return detectionStrategy_;
}

void ImportImageRequest::setDetectionStrategy(const std::string &detectionStrategy) {
  detectionStrategy_ = detectionStrategy;
  setParameter(std::string("DetectionStrategy"), detectionStrategy);
}

bool ImportImageRequest::getDryRun() const {
  return dryRun_;
}

void ImportImageRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ImportImageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ImportImageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ImportImageRequest::getRoleName() const {
  return roleName_;
}

void ImportImageRequest::setRoleName(const std::string &roleName) {
  roleName_ = roleName;
  setParameter(std::string("RoleName"), roleName);
}

std::string ImportImageRequest::getOSType() const {
  return oSType_;
}

void ImportImageRequest::setOSType(const std::string &oSType) {
  oSType_ = oSType;
  setParameter(std::string("OSType"), oSType);
}

long ImportImageRequest::getOwnerId() const {
  return ownerId_;
}

void ImportImageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

