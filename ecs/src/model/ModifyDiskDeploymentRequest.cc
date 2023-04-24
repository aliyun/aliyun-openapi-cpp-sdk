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

#include <alibabacloud/ecs/model/ModifyDiskDeploymentRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDiskDeploymentRequest;

ModifyDiskDeploymentRequest::ModifyDiskDeploymentRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyDiskDeployment") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDiskDeploymentRequest::~ModifyDiskDeploymentRequest() {}

long ModifyDiskDeploymentRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyDiskDeploymentRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyDiskDeploymentRequest::getDiskCategory() const {
  return diskCategory_;
}

void ModifyDiskDeploymentRequest::setDiskCategory(const std::string &diskCategory) {
  diskCategory_ = diskCategory;
  setParameter(std::string("DiskCategory"), diskCategory);
}

std::string ModifyDiskDeploymentRequest::getDiskId() const {
  return diskId_;
}

void ModifyDiskDeploymentRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

bool ModifyDiskDeploymentRequest::getDryRun() const {
  return dryRun_;
}

void ModifyDiskDeploymentRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ModifyDiskDeploymentRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyDiskDeploymentRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyDiskDeploymentRequest::getPerformanceLevel() const {
  return performanceLevel_;
}

void ModifyDiskDeploymentRequest::setPerformanceLevel(const std::string &performanceLevel) {
  performanceLevel_ = performanceLevel;
  setParameter(std::string("PerformanceLevel"), performanceLevel);
}

std::string ModifyDiskDeploymentRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyDiskDeploymentRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyDiskDeploymentRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyDiskDeploymentRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyDiskDeploymentRequest::getStorageClusterId() const {
  return storageClusterId_;
}

void ModifyDiskDeploymentRequest::setStorageClusterId(const std::string &storageClusterId) {
  storageClusterId_ = storageClusterId;
  setParameter(std::string("StorageClusterId"), storageClusterId);
}

