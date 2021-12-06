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

#include <alibabacloud/ecs/model/ResetDiskRequest.h>

using AlibabaCloud::Ecs::Model::ResetDiskRequest;

ResetDiskRequest::ResetDiskRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ResetDisk") {
  setMethod(HttpRequest::Method::Post);
}

ResetDiskRequest::~ResetDiskRequest() {}

long ResetDiskRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ResetDiskRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ResetDiskRequest::getSnapshotId() const {
  return snapshotId_;
}

void ResetDiskRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string ResetDiskRequest::getDiskId() const {
  return diskId_;
}

void ResetDiskRequest::setDiskId(const std::string &diskId) {
  diskId_ = diskId;
  setParameter(std::string("DiskId"), diskId);
}

bool ResetDiskRequest::getDryRun() const {
  return dryRun_;
}

void ResetDiskRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ResetDiskRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ResetDiskRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ResetDiskRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ResetDiskRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ResetDiskRequest::getOwnerId() const {
  return ownerId_;
}

void ResetDiskRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

