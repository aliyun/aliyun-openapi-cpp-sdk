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

#include <alibabacloud/dds/model/CheckRecoveryConditionRequest.h>

using AlibabaCloud::Dds::Model::CheckRecoveryConditionRequest;

CheckRecoveryConditionRequest::CheckRecoveryConditionRequest()
    : RpcServiceRequest("dds", "2015-12-01", "CheckRecoveryCondition") {
  setMethod(HttpRequest::Method::Post);
}

CheckRecoveryConditionRequest::~CheckRecoveryConditionRequest() {}

long CheckRecoveryConditionRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckRecoveryConditionRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckRecoveryConditionRequest::getEngineVersion() const {
  return engineVersion_;
}

void CheckRecoveryConditionRequest::setEngineVersion(const std::string &engineVersion) {
  engineVersion_ = engineVersion;
  setParameter(std::string("EngineVersion"), engineVersion);
}

std::string CheckRecoveryConditionRequest::getSrcRegion() const {
  return srcRegion_;
}

void CheckRecoveryConditionRequest::setSrcRegion(const std::string &srcRegion) {
  srcRegion_ = srcRegion;
  setParameter(std::string("SrcRegion"), srcRegion);
}

std::string CheckRecoveryConditionRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CheckRecoveryConditionRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CheckRecoveryConditionRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CheckRecoveryConditionRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CheckRecoveryConditionRequest::getDatabaseNames() const {
  return databaseNames_;
}

void CheckRecoveryConditionRequest::setDatabaseNames(const std::string &databaseNames) {
  databaseNames_ = databaseNames;
  setParameter(std::string("DatabaseNames"), databaseNames);
}

std::string CheckRecoveryConditionRequest::getInstanceType() const {
  return instanceType_;
}

void CheckRecoveryConditionRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string CheckRecoveryConditionRequest::getRestoreTime() const {
  return restoreTime_;
}

void CheckRecoveryConditionRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string CheckRecoveryConditionRequest::getDestRegion() const {
  return destRegion_;
}

void CheckRecoveryConditionRequest::setDestRegion(const std::string &destRegion) {
  destRegion_ = destRegion;
  setParameter(std::string("DestRegion"), destRegion);
}

std::string CheckRecoveryConditionRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckRecoveryConditionRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CheckRecoveryConditionRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CheckRecoveryConditionRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string CheckRecoveryConditionRequest::getBackupId() const {
  return backupId_;
}

void CheckRecoveryConditionRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

std::string CheckRecoveryConditionRequest::getSourceDBInstance() const {
  return sourceDBInstance_;
}

void CheckRecoveryConditionRequest::setSourceDBInstance(const std::string &sourceDBInstance) {
  sourceDBInstance_ = sourceDBInstance;
  setParameter(std::string("SourceDBInstance"), sourceDBInstance);
}

long CheckRecoveryConditionRequest::getOwnerId() const {
  return ownerId_;
}

void CheckRecoveryConditionRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CheckRecoveryConditionRequest::getRestoreType() const {
  return restoreType_;
}

void CheckRecoveryConditionRequest::setRestoreType(const std::string &restoreType) {
  restoreType_ = restoreType;
  setParameter(std::string("RestoreType"), restoreType);
}

