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

#include <alibabacloud/ecs/model/CreateSnapshotRequest.h>

using AlibabaCloud::Ecs::Model::CreateSnapshotRequest;

CreateSnapshotRequest::CreateSnapshotRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateSnapshot") {
  setMethod(HttpRequest::Method::Post);
}

CreateSnapshotRequest::~CreateSnapshotRequest() {}

long CreateSnapshotRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSnapshotRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSnapshotRequest::getClientToken() const {
  return clientToken_;
}

void CreateSnapshotRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreateSnapshotRequest::getInstantAccess() const {
  return instantAccess_;
}

void CreateSnapshotRequest::setInstantAccess(bool instantAccess) {
  instantAccess_ = instantAccess;
  setParameter(std::string("InstantAccess"), instantAccess ? "true" : "false");
}

std::vector<CreateSnapshotRequest::SystemTag> CreateSnapshotRequest::getSystemTag() const {
  return systemTag_;
}

void CreateSnapshotRequest::setSystemTag(const std::vector<CreateSnapshotRequest::SystemTag> &systemTag) {
  systemTag_ = systemTag;
  for(int dep1 = 0; dep1 != systemTag.size(); dep1++) {
  auto systemTagObj = systemTag.at(dep1);
  std::string systemTagObjStr = std::string("SystemTag") + "." + std::to_string(dep1 + 1);
    setParameter(systemTagObjStr + ".Scope", systemTagObj.scope);
    setParameter(systemTagObjStr + ".Value", systemTagObj.value);
    setParameter(systemTagObjStr + ".Key", systemTagObj.key);
  }
}

std::string CreateSnapshotRequest::getDescription() const {
  return description_;
}

void CreateSnapshotRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSnapshotRequest::getSnapshotName() const {
  return snapshotName_;
}

void CreateSnapshotRequest::setSnapshotName(const std::string &snapshotName) {
  snapshotName_ = snapshotName;
  setParameter(std::string("SnapshotName"), snapshotName);
}

std::string CreateSnapshotRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateSnapshotRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int CreateSnapshotRequest::getInstantAccessRetentionDays() const {
  return instantAccessRetentionDays_;
}

void CreateSnapshotRequest::setInstantAccessRetentionDays(int instantAccessRetentionDays) {
  instantAccessRetentionDays_ = instantAccessRetentionDays;
  setParameter(std::string("InstantAccessRetentionDays"), std::to_string(instantAccessRetentionDays));
}

std::string CreateSnapshotRequest::getStorageLocationArn() const {
  return storageLocationArn_;
}

void CreateSnapshotRequest::setStorageLocationArn(const std::string &storageLocationArn) {
  storageLocationArn_ = storageLocationArn;
  setParameter(std::string("StorageLocationArn"), storageLocationArn);
}

std::string CreateSnapshotRequest::getDiskId() const {
  return diskId_;
}

void CreateSnapshotRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

std::vector<CreateSnapshotRequest::Tag> CreateSnapshotRequest::getTag() const {
  return tag_;
}

void CreateSnapshotRequest::setTag(const std::vector<CreateSnapshotRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

std::string CreateSnapshotRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSnapshotRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateSnapshotRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateSnapshotRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateSnapshotRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSnapshotRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

int CreateSnapshotRequest::getRetentionDays() const {
  return retentionDays_;
}

void CreateSnapshotRequest::setRetentionDays(int retentionDays) {
  retentionDays_ = retentionDays;
  setParameter(std::string("RetentionDays"), std::to_string(retentionDays));
}

std::string CreateSnapshotRequest::getCategory() const {
  return category_;
}

void CreateSnapshotRequest::setCategory(const std::string &category) {
  category_ = category;
  setParameter(std::string("Category"), category);
}

