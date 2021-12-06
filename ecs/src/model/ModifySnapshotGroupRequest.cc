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

#include <alibabacloud/ecs/model/ModifySnapshotGroupRequest.h>

using AlibabaCloud::Ecs::Model::ModifySnapshotGroupRequest;

ModifySnapshotGroupRequest::ModifySnapshotGroupRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifySnapshotGroup") {
  setMethod(HttpRequest::Method::Post);
}

ModifySnapshotGroupRequest::~ModifySnapshotGroupRequest() {}

long ModifySnapshotGroupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySnapshotGroupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySnapshotGroupRequest::getDescription() const {
  return description_;
}

void ModifySnapshotGroupRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifySnapshotGroupRequest::getRegionId() const {
  return regionId_;
}

void ModifySnapshotGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifySnapshotGroupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySnapshotGroupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySnapshotGroupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySnapshotGroupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifySnapshotGroupRequest::getSnapshotGroupId() const {
  return snapshotGroupId_;
}

void ModifySnapshotGroupRequest::setSnapshotGroupId(const std::string &snapshotGroupId) {
  snapshotGroupId_ = snapshotGroupId;
  setParameter(std::string("SnapshotGroupId"), snapshotGroupId);
}

long ModifySnapshotGroupRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySnapshotGroupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySnapshotGroupRequest::getName() const {
  return name_;
}

void ModifySnapshotGroupRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

