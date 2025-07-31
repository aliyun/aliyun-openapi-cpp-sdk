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

#include <alibabacloud/dds/model/ModifyBackupPolicyRequest.h>

using AlibabaCloud::Dds::Model::ModifyBackupPolicyRequest;

ModifyBackupPolicyRequest::ModifyBackupPolicyRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyBackupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBackupPolicyRequest::~ModifyBackupPolicyRequest() {}

long ModifyBackupPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

int ModifyBackupPolicyRequest::getCrossLogRetentionValue() const {
  return crossLogRetentionValue_;
}

void ModifyBackupPolicyRequest::setCrossLogRetentionValue(int crossLogRetentionValue) {
  crossLogRetentionValue_ = crossLogRetentionValue;
  setParameter(std::string("CrossLogRetentionValue"), std::to_string(crossLogRetentionValue));
}

std::string ModifyBackupPolicyRequest::getSrcRegion() const {
  return srcRegion_;
}

void ModifyBackupPolicyRequest::setSrcRegion(const std::string &srcRegion) {
  srcRegion_ = srcRegion;
  setParameter(std::string("SrcRegion"), srcRegion);
}

std::string ModifyBackupPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyBackupPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyBackupPolicyRequest::getCrossRetentionType() const {
  return crossRetentionType_;
}

void ModifyBackupPolicyRequest::setCrossRetentionType(const std::string &crossRetentionType) {
  crossRetentionType_ = crossRetentionType;
  setParameter(std::string("CrossRetentionType"), crossRetentionType);
}

std::string ModifyBackupPolicyRequest::getBackupInterval() const {
  return backupInterval_;
}

void ModifyBackupPolicyRequest::setBackupInterval(const std::string &backupInterval) {
  backupInterval_ = backupInterval;
  setParameter(std::string("BackupInterval"), backupInterval);
}

std::string ModifyBackupPolicyRequest::getInstanceType() const {
  return instanceType_;
}

void ModifyBackupPolicyRequest::setInstanceType(const std::string &instanceType) {
  instanceType_ = instanceType;
  setParameter(std::string("InstanceType"), instanceType);
}

std::string ModifyBackupPolicyRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyBackupPolicyRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

long ModifyBackupPolicyRequest::getEnableBackupLog() const {
  return enableBackupLog_;
}

void ModifyBackupPolicyRequest::setEnableBackupLog(long enableBackupLog) {
  enableBackupLog_ = enableBackupLog;
  setParameter(std::string("EnableBackupLog"), std::to_string(enableBackupLog));
}

std::string ModifyBackupPolicyRequest::getPreferredBackupPeriod() const {
  return preferredBackupPeriod_;
}

void ModifyBackupPolicyRequest::setPreferredBackupPeriod(const std::string &preferredBackupPeriod) {
  preferredBackupPeriod_ = preferredBackupPeriod;
  setParameter(std::string("PreferredBackupPeriod"), preferredBackupPeriod);
}

int ModifyBackupPolicyRequest::getBackupRetentionPolicyOnClusterDeletion() const {
  return backupRetentionPolicyOnClusterDeletion_;
}

void ModifyBackupPolicyRequest::setBackupRetentionPolicyOnClusterDeletion(int backupRetentionPolicyOnClusterDeletion) {
  backupRetentionPolicyOnClusterDeletion_ = backupRetentionPolicyOnClusterDeletion;
  setParameter(std::string("BackupRetentionPolicyOnClusterDeletion"), std::to_string(backupRetentionPolicyOnClusterDeletion));
}

std::string ModifyBackupPolicyRequest::getDestRegion() const {
  return destRegion_;
}

void ModifyBackupPolicyRequest::setDestRegion(const std::string &destRegion) {
  destRegion_ = destRegion;
  setParameter(std::string("DestRegion"), destRegion);
}

std::string ModifyBackupPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyBackupPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyBackupPolicyRequest::getCrossBackupType() const {
  return crossBackupType_;
}

void ModifyBackupPolicyRequest::setCrossBackupType(const std::string &crossBackupType) {
  crossBackupType_ = crossBackupType;
  setParameter(std::string("CrossBackupType"), crossBackupType);
}

std::string ModifyBackupPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyBackupPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyBackupPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyBackupPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyBackupPolicyRequest::getSnapshotBackupType() const {
  return snapshotBackupType_;
}

void ModifyBackupPolicyRequest::setSnapshotBackupType(const std::string &snapshotBackupType) {
  snapshotBackupType_ = snapshotBackupType;
  setParameter(std::string("SnapshotBackupType"), snapshotBackupType);
}

std::string ModifyBackupPolicyRequest::getPreferredBackupTime() const {
  return preferredBackupTime_;
}

void ModifyBackupPolicyRequest::setPreferredBackupTime(const std::string &preferredBackupTime) {
  preferredBackupTime_ = preferredBackupTime;
  setParameter(std::string("PreferredBackupTime"), preferredBackupTime);
}

long ModifyBackupPolicyRequest::getBackupRetentionPeriod() const {
  return backupRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setBackupRetentionPeriod(long backupRetentionPeriod) {
  backupRetentionPeriod_ = backupRetentionPeriod;
  setParameter(std::string("BackupRetentionPeriod"), std::to_string(backupRetentionPeriod));
}

long ModifyBackupPolicyRequest::getHighFrequencyBackupRetention() const {
  return highFrequencyBackupRetention_;
}

void ModifyBackupPolicyRequest::setHighFrequencyBackupRetention(long highFrequencyBackupRetention) {
  highFrequencyBackupRetention_ = highFrequencyBackupRetention;
  setParameter(std::string("HighFrequencyBackupRetention"), std::to_string(highFrequencyBackupRetention));
}

int ModifyBackupPolicyRequest::getEnableCrossLogBackup() const {
  return enableCrossLogBackup_;
}

void ModifyBackupPolicyRequest::setEnableCrossLogBackup(int enableCrossLogBackup) {
  enableCrossLogBackup_ = enableCrossLogBackup;
  setParameter(std::string("EnableCrossLogBackup"), std::to_string(enableCrossLogBackup));
}

std::string ModifyBackupPolicyRequest::getCrossBackupPeriod() const {
  return crossBackupPeriod_;
}

void ModifyBackupPolicyRequest::setCrossBackupPeriod(const std::string &crossBackupPeriod) {
  crossBackupPeriod_ = crossBackupPeriod;
  setParameter(std::string("CrossBackupPeriod"), crossBackupPeriod);
}

int ModifyBackupPolicyRequest::getCrossRetentionValue() const {
  return crossRetentionValue_;
}

void ModifyBackupPolicyRequest::setCrossRetentionValue(int crossRetentionValue) {
  crossRetentionValue_ = crossRetentionValue;
  setParameter(std::string("CrossRetentionValue"), std::to_string(crossRetentionValue));
}

std::string ModifyBackupPolicyRequest::getCrossLogRetentionType() const {
  return crossLogRetentionType_;
}

void ModifyBackupPolicyRequest::setCrossLogRetentionType(const std::string &crossLogRetentionType) {
  crossLogRetentionType_ = crossLogRetentionType;
  setParameter(std::string("CrossLogRetentionType"), crossLogRetentionType);
}

long ModifyBackupPolicyRequest::getLogBackupRetentionPeriod() const {
  return logBackupRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setLogBackupRetentionPeriod(long logBackupRetentionPeriod) {
  logBackupRetentionPeriod_ = logBackupRetentionPeriod;
  setParameter(std::string("LogBackupRetentionPeriod"), std::to_string(logBackupRetentionPeriod));
}

bool ModifyBackupPolicyRequest::getPreserveOneEachHour() const {
  return preserveOneEachHour_;
}

void ModifyBackupPolicyRequest::setPreserveOneEachHour(bool preserveOneEachHour) {
  preserveOneEachHour_ = preserveOneEachHour;
  setParameter(std::string("PreserveOneEachHour"), preserveOneEachHour ? "true" : "false");
}

