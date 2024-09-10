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

#include <alibabacloud/ecs/model/CreateSnapshotGroupRequest.h>

using AlibabaCloud::Ecs::Model::CreateSnapshotGroupRequest;

CreateSnapshotGroupRequest::CreateSnapshotGroupRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateSnapshotGroup") {
  setMethod(HttpRequest::Method::Post);
}

CreateSnapshotGroupRequest::~CreateSnapshotGroupRequest() {}

long CreateSnapshotGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSnapshotGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSnapshotGroupRequest::getClientToken() const {
  return clientToken_;
}

void CreateSnapshotGroupRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool CreateSnapshotGroupRequest::getInstantAccess() const {
  return instantAccess_;
}

void CreateSnapshotGroupRequest::setInstantAccess(bool instantAccess) {
  instantAccess_ = instantAccess;
  setParameter(std::string("InstantAccess"), instantAccess ? "true" : "false");
}

std::vector<std::string> CreateSnapshotGroupRequest::getExcludeDiskId() const {
  return excludeDiskId_;
}

void CreateSnapshotGroupRequest::setExcludeDiskId(const std::vector<std::string> &excludeDiskId) {
  excludeDiskId_ = excludeDiskId;
}

std::string CreateSnapshotGroupRequest::getDescription() const {
  return description_;
}

void CreateSnapshotGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateSnapshotGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateSnapshotGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

int CreateSnapshotGroupRequest::getInstantAccessRetentionDays() const {
  return instantAccessRetentionDays_;
}

void CreateSnapshotGroupRequest::setInstantAccessRetentionDays(int instantAccessRetentionDays) {
  instantAccessRetentionDays_ = instantAccessRetentionDays;
  setParameter(std::string("InstantAccessRetentionDays"), std::to_string(instantAccessRetentionDays));
}

std::string CreateSnapshotGroupRequest::getRegionId() const {
  return regionId_;
}

void CreateSnapshotGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateSnapshotGroupRequest::getStorageLocationArn() const {
  return storageLocationArn_;
}

void CreateSnapshotGroupRequest::setStorageLocationArn(const std::string &storageLocationArn) {
  storageLocationArn_ = storageLocationArn;
  setParameter(std::string("StorageLocationArn"), storageLocationArn);
}

std::vector<std::string> CreateSnapshotGroupRequest::getDiskId() const {
  return diskId_;
}

void CreateSnapshotGroupRequest::setDiskId(const std::vector<std::string> &diskId) {
  diskId_ = diskId;
}

std::vector<CreateSnapshotGroupRequest::Tag> CreateSnapshotGroupRequest::getTag() const {
  return tag_;
}

void CreateSnapshotGroupRequest::setTag(const std::vector<CreateSnapshotGroupRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::string CreateSnapshotGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSnapshotGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateSnapshotGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateSnapshotGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateSnapshotGroupRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSnapshotGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateSnapshotGroupRequest::getInstanceId() const {
  return instanceId_;
}

void CreateSnapshotGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateSnapshotGroupRequest::getName() const {
  return name_;
}

void CreateSnapshotGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

