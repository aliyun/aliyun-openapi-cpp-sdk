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

#include <alibabacloud/ecs/model/DeleteAutoSnapshotPolicyRequest.h>

using AlibabaCloud::Ecs::Model::DeleteAutoSnapshotPolicyRequest;

DeleteAutoSnapshotPolicyRequest::DeleteAutoSnapshotPolicyRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "DeleteAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

DeleteAutoSnapshotPolicyRequest::~DeleteAutoSnapshotPolicyRequest() {}

long DeleteAutoSnapshotPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteAutoSnapshotPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteAutoSnapshotPolicyRequest::getAutoSnapshotPolicyId() const {
  return autoSnapshotPolicyId_;
}

void DeleteAutoSnapshotPolicyRequest::setAutoSnapshotPolicyId(const std::string &autoSnapshotPolicyId) {
  autoSnapshotPolicyId_ = autoSnapshotPolicyId;
  setParameter(std::string("autoSnapshotPolicyId"), autoSnapshotPolicyId);
}

std::string DeleteAutoSnapshotPolicyRequest::getRegionId() const {
  return regionId_;
}

void DeleteAutoSnapshotPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("regionId"), regionId);
}

std::string DeleteAutoSnapshotPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteAutoSnapshotPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DeleteAutoSnapshotPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteAutoSnapshotPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

