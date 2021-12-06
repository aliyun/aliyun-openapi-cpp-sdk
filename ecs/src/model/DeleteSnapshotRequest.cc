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

#include <alibabacloud/ecs/model/DeleteSnapshotRequest.h>

using AlibabaCloud::Ecs::Model::DeleteSnapshotRequest;

DeleteSnapshotRequest::DeleteSnapshotRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteSnapshot") {
  setMethod(HttpRequest::Method::Post);
}

DeleteSnapshotRequest::~DeleteSnapshotRequest() {}

long DeleteSnapshotRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteSnapshotRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteSnapshotRequest::getSnapshotId() const {
  return snapshotId_;
}

void DeleteSnapshotRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string DeleteSnapshotRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteSnapshotRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteSnapshotRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void DeleteSnapshotRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long DeleteSnapshotRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteSnapshotRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool DeleteSnapshotRequest::getForce() const {
  return force_;
}

void DeleteSnapshotRequest::setForce(bool force) {
  force_ = force;
  setParameter(std::string("Force"), force ? "true" : "false");
}

