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

#include <alibabacloud/sas/model/CreateRestoreJobRequest.h>

using AlibabaCloud::Sas::Model::CreateRestoreJobRequest;

CreateRestoreJobRequest::CreateRestoreJobRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateRestoreJob") {
  setMethod(HttpRequest::Method::Post);
}

CreateRestoreJobRequest::~CreateRestoreJobRequest() {}

long CreateRestoreJobRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateRestoreJobRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateRestoreJobRequest::getSnapshotId() const {
  return snapshotId_;
}

void CreateRestoreJobRequest::setSnapshotId(const std::string &snapshotId) {
  snapshotId_ = snapshotId;
  setParameter(std::string("SnapshotId"), snapshotId);
}

std::string CreateRestoreJobRequest::getVaultId() const {
  return vaultId_;
}

void CreateRestoreJobRequest::setVaultId(const std::string &vaultId) {
  vaultId_ = vaultId;
  setParameter(std::string("VaultId"), vaultId);
}

std::string CreateRestoreJobRequest::getUuid() const {
  return uuid_;
}

void CreateRestoreJobRequest::setUuid(const std::string &uuid) {
  uuid_ = uuid;
  setParameter(std::string("Uuid"), uuid);
}

std::string CreateRestoreJobRequest::getSnapshotHash() const {
  return snapshotHash_;
}

void CreateRestoreJobRequest::setSnapshotHash(const std::string &snapshotHash) {
  snapshotHash_ = snapshotHash;
  setParameter(std::string("SnapshotHash"), snapshotHash);
}

std::string CreateRestoreJobRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateRestoreJobRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateRestoreJobRequest::getSourceType() const {
  return sourceType_;
}

void CreateRestoreJobRequest::setSourceType(const std::string &sourceType) {
  sourceType_ = sourceType;
  setParameter(std::string("SourceType"), sourceType);
}

std::string CreateRestoreJobRequest::getSnapshotVersion() const {
  return snapshotVersion_;
}

void CreateRestoreJobRequest::setSnapshotVersion(const std::string &snapshotVersion) {
  snapshotVersion_ = snapshotVersion;
  setParameter(std::string("SnapshotVersion"), snapshotVersion);
}

std::string CreateRestoreJobRequest::getIncludes() const {
  return includes_;
}

void CreateRestoreJobRequest::setIncludes(const std::string &includes) {
  includes_ = includes;
  setParameter(std::string("Includes"), includes);
}

std::string CreateRestoreJobRequest::getTarget() const {
  return target_;
}

void CreateRestoreJobRequest::setTarget(const std::string &target) {
  target_ = target;
  setParameter(std::string("Target"), target);
}

