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

CreateImageRequest::CreateImageRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateImage") {
  setMethod(HttpRequest::Method::Post);
}

CreateImageRequest::~CreateImageRequest() {}

std::vector<CreateImageRequest::DiskDeviceMapping> CreateImageRequest::getDiskDeviceMapping() const {
  return diskDeviceMapping_;
}

void CreateImageRequest::setDiskDeviceMapping(const std::vector<CreateImageRequest::DiskDeviceMapping> &diskDeviceMapping) {
  diskDeviceMapping_ = diskDeviceMapping;
  for(int dep1 = 0; dep1 != diskDeviceMapping.size(); dep1++) {
  auto diskDeviceMappingObj = diskDeviceMapping.at(dep1);
  std::string diskDeviceMappingObjStr = std::string("DiskDeviceMapping") + "." + std::to_string(dep1 + 1);
    setParameter(diskDeviceMappingObjStr + ".SnapshotId", diskDeviceMappingObj.snapshotId);
    setParameter(diskDeviceMappingObjStr + ".Size", std::to_string(diskDeviceMappingObj.size));
    setParameter(diskDeviceMappingObjStr + ".DiskType", diskDeviceMappingObj.diskType);
    setParameter(diskDeviceMappingObjStr + ".Device", diskDeviceMappingObj.device);
  }
}

long CreateImageRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateImageRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateImageRequest::getSnapshotId() const {
  return snapshotId_;
}

void CreateImageRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string CreateImageRequest::getClientToken() const {
  return clientToken_;
}

void CreateImageRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateImageRequest::SystemTag> CreateImageRequest::getSystemTag() const {
  return systemTag_;
}

void CreateImageRequest::setSystemTag(const std::vector<CreateImageRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
  }
}

std::string CreateImageRequest::getDescription() const {
  return description_;
}

void CreateImageRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateImageRequest::getPlatform() const {
  return platform_;
}

void CreateImageRequest::setPlatform(const std::string &platform) {
  platform_ = platform;
  setParameter(std::string("Platform"), platform);
}

std::string CreateImageRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateImageRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

CreateImageRequest::Features CreateImageRequest::getFeatures() const {
  return features_;
}

void CreateImageRequest::setFeatures(const CreateImageRequest::Features &features) {
  features_ = features;
  setParameter(std::string("Features") + ".ImdsSupport", features.imdsSupport);
}

std::string CreateImageRequest::getBootMode() const {
  return bootMode_;
}

void CreateImageRequest::setBootMode(const std::string &bootMode) {
  bootMode_ = bootMode;
  setParameter(std::string("BootMode"), bootMode);
}

std::string CreateImageRequest::getRegionId() const {
  return regionId_;
}

void CreateImageRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateImageRequest::getImageName() const {
  return imageName_;
}

void CreateImageRequest::setImageName(const std::string &imageName) {
  imageName_ = imageName;
  setParameter(std::string("ImageName"), imageName);
}

std::string CreateImageRequest::getStorageLocationArn() const {
  return storageLocationArn_;
}

void CreateImageRequest::setStorageLocationArn(const std::string &storageLocationArn) {
  storageLocationArn_ = storageLocationArn;
  setParameter(std::string("StorageLocationArn"), storageLocationArn);
}

std::vector<CreateImageRequest::Tag> CreateImageRequest::getTag() const {
  return tag_;
}

void CreateImageRequest::setTag(const std::vector<CreateImageRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateImageRequest::getArchitecture() const {
  return architecture_;
}

void CreateImageRequest::setArchitecture(const std::string &architecture) {
  architecture_ = architecture;
  setParameter(std::string("Architecture"), architecture);
}

std::string CreateImageRequest::getDetectionStrategy() const {
  return detectionStrategy_;
}

void CreateImageRequest::setDetectionStrategy(const std::string &detectionStrategy) {
  detectionStrategy_ = detectionStrategy;
  setParameter(std::string("DetectionStrategy"), detectionStrategy);
}

std::string CreateImageRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateImageRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateImageRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateImageRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateImageRequest::getOwnerId() const {
  return ownerId_;
}

void CreateImageRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateImageRequest::getInstanceId() const {
  return instanceId_;
}

void CreateImageRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateImageRequest::getImageFamily() const {
  return imageFamily_;
}

void CreateImageRequest::setImageFamily(const std::string &imageFamily) {
  imageFamily_ = imageFamily;
  setParameter(std::string("ImageFamily"), imageFamily);
}

std::string CreateImageRequest::getImageVersion() const {
  return imageVersion_;
}

void CreateImageRequest::setImageVersion(const std::string &imageVersion) {
  imageVersion_ = imageVersion;
  setParameter(std::string("ImageVersion"), imageVersion);
}

