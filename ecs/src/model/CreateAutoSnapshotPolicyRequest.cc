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

#include <alibabacloud/ecs/model/CreateAutoSnapshotPolicyRequest.h>

using AlibabaCloud::Ecs::Model::CreateAutoSnapshotPolicyRequest;

CreateAutoSnapshotPolicyRequest::CreateAutoSnapshotPolicyRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "CreateAutoSnapshotPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateAutoSnapshotPolicyRequest::~CreateAutoSnapshotPolicyRequest() {}

long CreateAutoSnapshotPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateAutoSnapshotPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

CreateAutoSnapshotPolicyRequest::CopyEncryptionConfiguration CreateAutoSnapshotPolicyRequest::getCopyEncryptionConfiguration() const {
  return copyEncryptionConfiguration_;
}

void CreateAutoSnapshotPolicyRequest::setCopyEncryptionConfiguration(const CreateAutoSnapshotPolicyRequest::CopyEncryptionConfiguration &copyEncryptionConfiguration) {
  copyEncryptionConfiguration_ = copyEncryptionConfiguration;
  setParameter(std::string("CopyEncryptionConfiguration") + ".Encrypted", copyEncryptionConfiguration.encrypted ? "true" : "false");
  setParameter(std::string("CopyEncryptionConfiguration") + ".KMSKeyId", copyEncryptionConfiguration.kMSKeyId);
  for(int dep1 = 0; dep1 != copyEncryptionConfiguration.arn.size(); dep1++) {
    setParameter(std::string("CopyEncryptionConfiguration") + ".Arn." + std::to_string(dep1 + 1) + ".Rolearn", copyEncryptionConfiguration.arn[dep1].rolearn);
    setParameter(std::string("CopyEncryptionConfiguration") + ".Arn." + std::to_string(dep1 + 1) + ".RoleType", copyEncryptionConfiguration.arn[dep1].roleType);
    setParameter(std::string("CopyEncryptionConfiguration") + ".Arn." + std::to_string(dep1 + 1) + ".AssumeRoleFor", std::to_string(copyEncryptionConfiguration.arn[dep1].assumeRoleFor));
  }
}

int CreateAutoSnapshotPolicyRequest::getCopiedSnapshotsRetentionDays() const {
  return copiedSnapshotsRetentionDays_;
}

void CreateAutoSnapshotPolicyRequest::setCopiedSnapshotsRetentionDays(int copiedSnapshotsRetentionDays) {
  copiedSnapshotsRetentionDays_ = copiedSnapshotsRetentionDays;
  setParameter(std::string("CopiedSnapshotsRetentionDays"), std::to_string(copiedSnapshotsRetentionDays));
}

std::string CreateAutoSnapshotPolicyRequest::getTimePoints() const {
  return timePoints_;
}

void CreateAutoSnapshotPolicyRequest::setTimePoints(const std::string &timePoints) {
  timePoints_ = timePoints;
  setParameter(std::string("timePoints"), timePoints);
}

std::string CreateAutoSnapshotPolicyRequest::getRepeatWeekdays() const {
  return repeatWeekdays_;
}

void CreateAutoSnapshotPolicyRequest::setRepeatWeekdays(const std::string &repeatWeekdays) {
  repeatWeekdays_ = repeatWeekdays;
  setParameter(std::string("repeatWeekdays"), repeatWeekdays);
}

std::string CreateAutoSnapshotPolicyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateAutoSnapshotPolicyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateAutoSnapshotPolicyRequest::getRegionId() const {
  return regionId_;
}

void CreateAutoSnapshotPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("regionId"), regionId);
}

std::string CreateAutoSnapshotPolicyRequest::getStorageLocationArn() const {
  return storageLocationArn_;
}

void CreateAutoSnapshotPolicyRequest::setStorageLocationArn(const std::string &storageLocationArn) {
  storageLocationArn_ = storageLocationArn;
  setParameter(std::string("StorageLocationArn"), storageLocationArn);
}

std::vector<CreateAutoSnapshotPolicyRequest::Tag> CreateAutoSnapshotPolicyRequest::getTag() const {
  return tag_;
}

void CreateAutoSnapshotPolicyRequest::setTag(const std::vector<CreateAutoSnapshotPolicyRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Value", tagObj.value);
    setParameter(tagObjStr + ".Key", tagObj.key);
  }
}

bool CreateAutoSnapshotPolicyRequest::getEnableCrossRegionCopy() const {
  return enableCrossRegionCopy_;
}

void CreateAutoSnapshotPolicyRequest::setEnableCrossRegionCopy(bool enableCrossRegionCopy) {
  enableCrossRegionCopy_ = enableCrossRegionCopy;
  setParameter(std::string("EnableCrossRegionCopy"), enableCrossRegionCopy ? "true" : "false");
}

std::string CreateAutoSnapshotPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateAutoSnapshotPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CreateAutoSnapshotPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void CreateAutoSnapshotPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateAutoSnapshotPolicyRequest::getAutoSnapshotPolicyName() const {
  return autoSnapshotPolicyName_;
}

void CreateAutoSnapshotPolicyRequest::setAutoSnapshotPolicyName(const std::string &autoSnapshotPolicyName) {
  autoSnapshotPolicyName_ = autoSnapshotPolicyName;
  setParameter(std::string("autoSnapshotPolicyName"), autoSnapshotPolicyName);
}

int CreateAutoSnapshotPolicyRequest::getRetentionDays() const {
  return retentionDays_;
}

void CreateAutoSnapshotPolicyRequest::setRetentionDays(int retentionDays) {
  retentionDays_ = retentionDays;
  setParameter(std::string("retentionDays"), std::to_string(retentionDays));
}

std::string CreateAutoSnapshotPolicyRequest::getTargetCopyRegions() const {
  return targetCopyRegions_;
}

void CreateAutoSnapshotPolicyRequest::setTargetCopyRegions(const std::string &targetCopyRegions) {
  targetCopyRegions_ = targetCopyRegions;
  setParameter(std::string("TargetCopyRegions"), targetCopyRegions);
}

