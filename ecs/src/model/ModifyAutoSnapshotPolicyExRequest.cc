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

#include <alibabacloud/ecs/model/ModifyAutoSnapshotPolicyExRequest.h>

using AlibabaCloud::Ecs::Model::ModifyAutoSnapshotPolicyExRequest;

ModifyAutoSnapshotPolicyExRequest::ModifyAutoSnapshotPolicyExRequest()
    : RpcServiceRequest("ecs", "2014-05-26", "ModifyAutoSnapshotPolicyEx") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAutoSnapshotPolicyExRequest::~ModifyAutoSnapshotPolicyExRequest() {}

long ModifyAutoSnapshotPolicyExRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAutoSnapshotPolicyExRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

ModifyAutoSnapshotPolicyExRequest::CopyEncryptionConfiguration ModifyAutoSnapshotPolicyExRequest::getCopyEncryptionConfiguration() const {
  return copyEncryptionConfiguration_;
}

void ModifyAutoSnapshotPolicyExRequest::setCopyEncryptionConfiguration(const ModifyAutoSnapshotPolicyExRequest::CopyEncryptionConfiguration &copyEncryptionConfiguration) {
  copyEncryptionConfiguration_ = copyEncryptionConfiguration;
  setParameter(std::string("CopyEncryptionConfiguration") + ".Encrypted", copyEncryptionConfiguration.encrypted ? "true" : "false");
  setParameter(std::string("CopyEncryptionConfiguration") + ".KMSKeyId", copyEncryptionConfiguration.kMSKeyId);
  for(int dep1 = 0; dep1 != copyEncryptionConfiguration.arn.size(); dep1++) {
    setParameter(std::string("CopyEncryptionConfiguration") + ".Arn." + std::to_string(dep1 + 1) + ".Rolearn", copyEncryptionConfiguration.arn[dep1].rolearn);
    setParameter(std::string("CopyEncryptionConfiguration") + ".Arn." + std::to_string(dep1 + 1) + ".RoleType", copyEncryptionConfiguration.arn[dep1].roleType);
    setParameter(std::string("CopyEncryptionConfiguration") + ".Arn." + std::to_string(dep1 + 1) + ".AssumeRoleFor", std::to_string(copyEncryptionConfiguration.arn[dep1].assumeRoleFor));
  }
}

std::string ModifyAutoSnapshotPolicyExRequest::getAutoSnapshotPolicyId() const {
  return autoSnapshotPolicyId_;
}

void ModifyAutoSnapshotPolicyExRequest::setAutoSnapshotPolicyId(const std::string &autoSnapshotPolicyId) {
  autoSnapshotPolicyId_ = autoSnapshotPolicyId;
  setParameter(std::string("autoSnapshotPolicyId"), autoSnapshotPolicyId);
}

int ModifyAutoSnapshotPolicyExRequest::getCopiedSnapshotsRetentionDays() const {
  return copiedSnapshotsRetentionDays_;
}

void ModifyAutoSnapshotPolicyExRequest::setCopiedSnapshotsRetentionDays(int copiedSnapshotsRetentionDays) {
  copiedSnapshotsRetentionDays_ = copiedSnapshotsRetentionDays;
  setParameter(std::string("CopiedSnapshotsRetentionDays"), std::to_string(copiedSnapshotsRetentionDays));
}

std::string ModifyAutoSnapshotPolicyExRequest::getTimePoints() const {
  return timePoints_;
}

void ModifyAutoSnapshotPolicyExRequest::setTimePoints(const std::string &timePoints) {
  timePoints_ = timePoints;
  setParameter(std::string("timePoints"), timePoints);
}

std::string ModifyAutoSnapshotPolicyExRequest::getRepeatWeekdays() const {
  return repeatWeekdays_;
}

void ModifyAutoSnapshotPolicyExRequest::setRepeatWeekdays(const std::string &repeatWeekdays) {
  repeatWeekdays_ = repeatWeekdays;
  setParameter(std::string("repeatWeekdays"), repeatWeekdays);
}

std::string ModifyAutoSnapshotPolicyExRequest::getRegionId() const {
  return regionId_;
}

void ModifyAutoSnapshotPolicyExRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("regionId"), regionId);
}

bool ModifyAutoSnapshotPolicyExRequest::getEnableCrossRegionCopy() const {
  return enableCrossRegionCopy_;
}

void ModifyAutoSnapshotPolicyExRequest::setEnableCrossRegionCopy(bool enableCrossRegionCopy) {
  enableCrossRegionCopy_ = enableCrossRegionCopy;
  setParameter(std::string("EnableCrossRegionCopy"), enableCrossRegionCopy ? "true" : "false");
}

std::string ModifyAutoSnapshotPolicyExRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAutoSnapshotPolicyExRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ModifyAutoSnapshotPolicyExRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAutoSnapshotPolicyExRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyAutoSnapshotPolicyExRequest::getAutoSnapshotPolicyName() const {
  return autoSnapshotPolicyName_;
}

void ModifyAutoSnapshotPolicyExRequest::setAutoSnapshotPolicyName(const std::string &autoSnapshotPolicyName) {
  autoSnapshotPolicyName_ = autoSnapshotPolicyName;
  setParameter(std::string("autoSnapshotPolicyName"), autoSnapshotPolicyName);
}

int ModifyAutoSnapshotPolicyExRequest::getRetentionDays() const {
  return retentionDays_;
}

void ModifyAutoSnapshotPolicyExRequest::setRetentionDays(int retentionDays) {
  retentionDays_ = retentionDays;
  setParameter(std::string("retentionDays"), std::to_string(retentionDays));
}

std::string ModifyAutoSnapshotPolicyExRequest::getTargetCopyRegions() const {
  return targetCopyRegions_;
}

void ModifyAutoSnapshotPolicyExRequest::setTargetCopyRegions(const std::string &targetCopyRegions) {
  targetCopyRegions_ = targetCopyRegions;
  setParameter(std::string("TargetCopyRegions"), targetCopyRegions);
}

