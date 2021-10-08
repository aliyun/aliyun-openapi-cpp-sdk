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

#include <alibabacloud/ecs/model/CancelAutoSnapshotPolicyRequest.h>

using AlibabaCloud::Ecs::Model::CancelAutoSnapshotPolicyRequest;

CancelAutoSnapshotPolicyRequest::CancelAutoSnapshotPolicyRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CancelAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CancelAutoSnapshotPolicyRequest::~CancelAutoSnapshotPolicyRequest() {}

long CancelAutoSnapshotPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CancelAutoSnapshotPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CancelAutoSnapshotPolicyRequest::getRegionId() const {
  return regionId_;
}

void CancelAutoSnapshotPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("regionId"), regionId);
}

std::string CancelAutoSnapshotPolicyRequest::getDiskIds() const {
  return diskIds_;
}

void CancelAutoSnapshotPolicyRequest::setDiskIds(const std::string &diskIds) {
  diskIds_ = diskIds;
  setParameter(std::string("diskIds"), diskIds);
}

std::string CancelAutoSnapshotPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CancelAutoSnapshotPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CancelAutoSnapshotPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void CancelAutoSnapshotPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

