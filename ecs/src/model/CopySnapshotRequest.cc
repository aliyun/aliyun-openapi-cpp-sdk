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

#include <alibabacloud/ecs/model/CopySnapshotRequest.h>

using AlibabaCloud::Ecs::Model::CopySnapshotRequest;

CopySnapshotRequest::CopySnapshotRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CopySnapshot") {
  setMethod(HttpRequest::Method::Post);
}

CopySnapshotRequest::~CopySnapshotRequest() {}

long CopySnapshotRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CopySnapshotRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CopySnapshotRequest::getSnapshotId() const {
  return snapshotId_;
}

void CopySnapshotRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string CopySnapshotRequest::getClientToken() const {
  return clientToken_;
}

void CopySnapshotRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CopySnapshotRequest::getDestinationRegionId() const {
  return destinationRegionId_;
}

void CopySnapshotRequest::setDestinationRegionId(const std::string &destinationRegionId) {
  destinationRegionId_ = destinationRegionId;
  setParameter(std::string("DestinationRegionId"), destinationRegionId);
}

std::string CopySnapshotRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CopySnapshotRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CopySnapshotRequest::getRegionId() const {
  return regionId_;
}

void CopySnapshotRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CopySnapshotRequest::Tag> CopySnapshotRequest::getTag() const {
  return tag_;
}

void CopySnapshotRequest::setTag(const std::vector<CopySnapshotRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

std::vector<CopySnapshotRequest::Arn> CopySnapshotRequest::getArn() const {
  return arn_;
}

void CopySnapshotRequest::setArn(const std::vector<CopySnapshotRequest::Arn> &arn) {
  arn_ = arn;
  for(int dep1 = 0; dep1 != arn.size(); dep1++) {
  auto arnObj = arn.at(dep1);
  std::string arnObjStr = std::string("Arn") + "." + std::to_string(dep1 + 1);
    setParameter(arnObjStr + ".RoleType", arnObj.roleType);
    setParameter(arnObjStr + ".Rolearn", arnObj.rolearn);
    setParameter(arnObjStr + ".AssumeRoleFor", std::to_string(arnObj.assumeRoleFor));
  }
}

std::string CopySnapshotRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CopySnapshotRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CopySnapshotRequest::getOwnerId() const {
  return ownerId_;
}

void CopySnapshotRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CopySnapshotRequest::getDestinationSnapshotName() const {
  return destinationSnapshotName_;
}

void CopySnapshotRequest::setDestinationSnapshotName(const std::string &destinationSnapshotName) {
  destinationSnapshotName_ = destinationSnapshotName;
  setParameter(std::string("DestinationSnapshotName"), destinationSnapshotName);
}

std::string CopySnapshotRequest::getDestinationSnapshotDescription() const {
  return destinationSnapshotDescription_;
}

void CopySnapshotRequest::setDestinationSnapshotDescription(const std::string &destinationSnapshotDescription) {
  destinationSnapshotDescription_ = destinationSnapshotDescription;
  setParameter(std::string("DestinationSnapshotDescription"), destinationSnapshotDescription);
}

bool CopySnapshotRequest::getEncrypted() const {
  return encrypted_;
}

void CopySnapshotRequest::setEncrypted(bool encrypted) {
  encrypted_ = encrypted;
  setParameter(std::string("Encrypted"), encrypted ? "true" : "false");
}

int CopySnapshotRequest::getRetentionDays() const {
  return retentionDays_;
}

void CopySnapshotRequest::setRetentionDays(int retentionDays) {
  retentionDays_ = retentionDays;
  setParameter(std::string("RetentionDays"), std::to_string(retentionDays));
}

std::string CopySnapshotRequest::getKMSKeyId() const {
  return kMSKeyId_;
}

void CopySnapshotRequest::setKMSKeyId(const std::string &kMSKeyId) {
  kMSKeyId_ = kMSKeyId;
  setParameter(std::string("KMSKeyId"), kMSKeyId);
}

std::string CopySnapshotRequest::getDestinationStorageLocationArn() const {
  return destinationStorageLocationArn_;
}

void CopySnapshotRequest::setDestinationStorageLocationArn(const std::string &destinationStorageLocationArn) {
  destinationStorageLocationArn_ = destinationStorageLocationArn;
  setParameter(std::string("DestinationStorageLocationArn"), destinationStorageLocationArn);
}

