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

#include <alibabacloud/ecs/model/ResetDisksRequest.h>

using AlibabaCloud::Ecs::Model::ResetDisksRequest;

ResetDisksRequest::ResetDisksRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ResetDisks") {
  setMethod(HttpRequest::Method::Post);
}

ResetDisksRequest::~ResetDisksRequest() {}

long ResetDisksRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ResetDisksRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ResetDisksRequest::getRegionId() const {
  return regionId_;
}

void ResetDisksRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool ResetDisksRequest::getDryRun() const {
  return dryRun_;
}

void ResetDisksRequest::setDryRun(bool dryRun) {
  dryRun_ = dryRun;
  setParameter(std::string("DryRun"), dryRun ? "true" : "false");
}

std::string ResetDisksRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ResetDisksRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ResetDisksRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ResetDisksRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ResetDisksRequest::getOwnerId() const {
  return ownerId_;
}

void ResetDisksRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::vector<ResetDisksRequest::Disk> ResetDisksRequest::getDisk() const {
  return disk_;
}

void ResetDisksRequest::setDisk(const std::vector<ResetDisksRequest::Disk> &disk) {
  disk_ = disk;
  for(int dep1 = 0; dep1 != disk.size(); dep1++) {
  auto diskObj = disk.at(dep1);
  std::string diskObjStr = std::string("Disk") + "." + std::to_string(dep1 + 1);
    setParameter(diskObjStr + ".SnapshotId", diskObj.snapshotId);
    setParameter(diskObjStr + ".DiskId", diskObj.diskId);
  }
}

