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

CreateDiskRequest::CreateDiskRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateDisk") {
  setMethod(HttpRequest::Method::Post);
}

CreateDiskRequest::~CreateDiskRequest() {}

long CreateDiskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDiskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDiskRequest::getEncryptAlgorithm() const {
  return encryptAlgorithm_;
}

void CreateDiskRequest::setEncryptAlgorithm(const std::string &encryptAlgorithm) {
  encryptAlgorithm_ = encryptAlgorithm;
  setParameter(std::string("EncryptAlgorithm"), encryptAlgorithm);
}

std::string CreateDiskRequest::getDiskName() const {
  return diskName_;
}

void CreateDiskRequest::setDiskName(const std::string &diskName) {
  diskName_ = diskName;
  setParameter(std::string("DiskName"), diskName);
}

std::string CreateDiskRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateDiskRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int CreateDiskRequest::getStorageSetPartitionNumber() const {
  return storageSetPartitionNumber_;
}

void CreateDiskRequest::setStorageSetPartitionNumber(int storageSetPartitionNumber) {
  storageSetPartitionNumber_ = storageSetPartitionNumber;
  setParameter(std::string("StorageSetPartitionNumber"), std::to_string(storageSetPartitionNumber));
}

std::vector<CreateDiskRequest::Tag> CreateDiskRequest::getTag() const {
  return tag_;
}

void CreateDiskRequest::setTag(const std::vector<CreateDiskRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

long CreateDiskRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDiskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long CreateDiskRequest::getProvisionedIops() const {
  return provisionedIops_;
}

void CreateDiskRequest::setProvisionedIops(long provisionedIops) {
  provisionedIops_ = provisionedIops;
  setParameter(std::string("ProvisionedIops"), std::to_string(provisionedIops));
}

std::string CreateDiskRequest::getInstanceId() const {
  return instanceId_;
}

void CreateDiskRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int CreateDiskRequest::getSize() const {
  return size_;
}

void CreateDiskRequest::setSize(int size) {
  size_ = size;
  setParameter(std::string("Size"), std::to_string(size));
}

std::string CreateDiskRequest::getZoneId() const {
  return zoneId_;
}

void CreateDiskRequest::setZoneId(const std::string &zoneId) {
  zoneId_ = zoneId;
  setParameter(std::string("ZoneId"), zoneId);
}

std::string CreateDiskRequest::getStorageClusterId() const {
  return storageClusterId_;
}

void CreateDiskRequest::setStorageClusterId(const std::string &storageClusterId) {
  storageClusterId_ = storageClusterId;
  setParameter(std::string("StorageClusterId"), storageClusterId);
}

std::string CreateDiskRequest::getSnapshotId() const {
  return snapshotId_;
}

void CreateDiskRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string CreateDiskRequest::getClientToken() const {
  return clientToken_;
}

void CreateDiskRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateDiskRequest::SystemTag> CreateDiskRequest::getSystemTag() const {
  return systemTag_;
}

void CreateDiskRequest::setSystemTag(const std::vector<CreateDiskRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
  }
}

std::string CreateDiskRequest::getDescription() const {
  return description_;
}

void CreateDiskRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateDiskRequest::getRegionId() const {
  return regionId_;
}

void CreateDiskRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateDiskRequest::getDiskCategory() const {
  return diskCategory_;
}

void CreateDiskRequest::setDiskCategory(const std::string &diskCategory) {
  diskCategory_ = diskCategory;
  setParameter(std::string("DiskCategory"), diskCategory);
}

std::string CreateDiskRequest::getMultiAttach() const {
  return multiAttach_;
}

void CreateDiskRequest::setMultiAttach(const std::string &multiAttach) {
  multiAttach_ = multiAttach;
  setParameter(std::string("MultiAttach"), multiAttach);
}

std::string CreateDiskRequest::getAdvancedFeatures() const {
  return advancedFeatures_;
}

void CreateDiskRequest::setAdvancedFeatures(const std::string &advancedFeatures) {
  advancedFeatures_ = advancedFeatures;
  setParameter(std::string("AdvancedFeatures"), advancedFeatures);
}

std::vector<CreateDiskRequest::Arn> CreateDiskRequest::getArn() const {
  return arn_;
}

void CreateDiskRequest::setArn(const std::vector<CreateDiskRequest::Arn> &arn) {
  arn_ = arn;
  for(int dep1 = 0; dep1 != arn.size(); dep1++) {
  auto arnObj = arn.at(dep1);
  std::string arnObjStr = std::string("Arn") + "." + std::to_string(dep1 + 1);
    setParameter(arnObjStr + ".Rolearn", arnObj.rolearn);
    setParameter(arnObjStr + ".RoleType", arnObj.roleType);
    setParameter(arnObjStr + ".AssumeRoleFor", std::to_string(arnObj.assumeRoleFor));
  }
}

std::string CreateDiskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDiskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDiskRequest::getPerformanceLevel() const {
  return performanceLevel_;
}

void CreateDiskRequest::setPerformanceLevel(const std::string &performanceLevel) {
  performanceLevel_ = performanceLevel;
  setParameter(std::string("PerformanceLevel"), performanceLevel);
}

std::string CreateDiskRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDiskRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

bool CreateDiskRequest::getBurstingEnabled() const {
  return burstingEnabled_;
}

void CreateDiskRequest::setBurstingEnabled(bool burstingEnabled) {
  burstingEnabled_ = burstingEnabled;
  setParameter(std::string("BurstingEnabled"), burstingEnabled ? "true" : "false");
}

std::string CreateDiskRequest::getStorageSetId() const {
  return storageSetId_;
}

void CreateDiskRequest::setStorageSetId(const std::string &storageSetId) {
  storageSetId_ = storageSetId;
  setParameter(std::string("StorageSetId"), storageSetId);
}

bool CreateDiskRequest::getEncrypted() const {
  return encrypted_;
}

void CreateDiskRequest::setEncrypted(bool encrypted) {
  encrypted_ = encrypted;
  setParameter(std::string("Encrypted"), encrypted ? "true" : "false");
}

std::string CreateDiskRequest::getKMSKeyId() const {
  return kMSKeyId_;
}

void CreateDiskRequest::setKMSKeyId(const std::string &kMSKeyId) {
  kMSKeyId_ = kMSKeyId;
  setParameter(std::string("KMSKeyId"), kMSKeyId);
}

