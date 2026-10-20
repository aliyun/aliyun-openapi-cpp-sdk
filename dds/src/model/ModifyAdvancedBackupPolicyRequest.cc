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

#include <alibabacloud/dds/model/ModifyAdvancedBackupPolicyRequest.h>

using AlibabaCloud::Dds::Model::ModifyAdvancedBackupPolicyRequest;

ModifyAdvancedBackupPolicyRequest::ModifyAdvancedBackupPolicyRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyAdvancedBackupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAdvancedBackupPolicyRequest::~ModifyAdvancedBackupPolicyRequest() {}

std::vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupDataPolicies> ModifyAdvancedBackupPolicyRequest::getAdvancedBackupDataPolicies() const {
  return advancedBackupDataPolicies_;
}

void ModifyAdvancedBackupPolicyRequest::setAdvancedBackupDataPolicies(const std::vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupDataPolicies> &advancedBackupDataPolicies) {
  advancedBackupDataPolicies_ = advancedBackupDataPolicies;
  for(int dep1 = 0; dep1 != advancedBackupDataPolicies.size(); dep1++) {
    setParameter(std::string("AdvancedBackupDataPolicies") + "." + std::to_string(dep1 + 1) + ".PreferredBackupPeriod", advancedBackupDataPolicies[dep1].preferredBackupPeriod);
    setParameter(std::string("AdvancedBackupDataPolicies") + "." + std::to_string(dep1 + 1) + ".ActionType", advancedBackupDataPolicies[dep1].actionType);
    setParameter(std::string("AdvancedBackupDataPolicies") + "." + std::to_string(dep1 + 1) + ".SrcType", advancedBackupDataPolicies[dep1].srcType);
    setParameter(std::string("AdvancedBackupDataPolicies") + "." + std::to_string(dep1 + 1) + ".RetentionPeriod", std::to_string(advancedBackupDataPolicies[dep1].retentionPeriod));
    setParameter(std::string("AdvancedBackupDataPolicies") + "." + std::to_string(dep1 + 1) + ".DestRegion", advancedBackupDataPolicies[dep1].destRegion);
    setParameter(std::string("AdvancedBackupDataPolicies") + "." + std::to_string(dep1 + 1) + ".PolicyId", advancedBackupDataPolicies[dep1].policyId);
    setParameter(std::string("AdvancedBackupDataPolicies") + "." + std::to_string(dep1 + 1) + ".SrcRegion", advancedBackupDataPolicies[dep1].srcRegion);
    setParameter(std::string("AdvancedBackupDataPolicies") + "." + std::to_string(dep1 + 1) + ".DestType", advancedBackupDataPolicies[dep1].destType);
    setParameter(std::string("AdvancedBackupDataPolicies") + "." + std::to_string(dep1 + 1) + ".PreserveOneEachHour", advancedBackupDataPolicies[dep1].preserveOneEachHour ? "true" : "false");
    setParameter(std::string("AdvancedBackupDataPolicies") + "." + std::to_string(dep1 + 1) + ".RetentionType", advancedBackupDataPolicies[dep1].retentionType);
    setParameter(std::string("AdvancedBackupDataPolicies") + "." + std::to_string(dep1 + 1) + ".BackupPolicy", advancedBackupDataPolicies[dep1].backupPolicy);
  }
}

std::string ModifyAdvancedBackupPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyAdvancedBackupPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyAdvancedBackupPolicyRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyAdvancedBackupPolicyRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

int ModifyAdvancedBackupPolicyRequest::getBackupRetentionPolicyOnClusterDeletion() const {
  return backupRetentionPolicyOnClusterDeletion_;
}

void ModifyAdvancedBackupPolicyRequest::setBackupRetentionPolicyOnClusterDeletion(int backupRetentionPolicyOnClusterDeletion) {
  backupRetentionPolicyOnClusterDeletion_ = backupRetentionPolicyOnClusterDeletion;
  setParameter(std::string("BackupRetentionPolicyOnClusterDeletion"), std::to_string(backupRetentionPolicyOnClusterDeletion));
}

bool ModifyAdvancedBackupPolicyRequest::getBackupTamperProofEnabled() const {
  return backupTamperProofEnabled_;
}

void ModifyAdvancedBackupPolicyRequest::setBackupTamperProofEnabled(bool backupTamperProofEnabled) {
  backupTamperProofEnabled_ = backupTamperProofEnabled;
  setParameter(std::string("BackupTamperProofEnabled"), backupTamperProofEnabled ? "true" : "false");
}

std::vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupLogPolicies> ModifyAdvancedBackupPolicyRequest::getAdvancedBackupLogPolicies() const {
  return advancedBackupLogPolicies_;
}

void ModifyAdvancedBackupPolicyRequest::setAdvancedBackupLogPolicies(const std::vector<ModifyAdvancedBackupPolicyRequest::AdvancedBackupLogPolicies> &advancedBackupLogPolicies) {
  advancedBackupLogPolicies_ = advancedBackupLogPolicies;
  for(int dep1 = 0; dep1 != advancedBackupLogPolicies.size(); dep1++) {
    setParameter(std::string("AdvancedBackupLogPolicies") + "." + std::to_string(dep1 + 1) + ".ActionType", advancedBackupLogPolicies[dep1].actionType);
    setParameter(std::string("AdvancedBackupLogPolicies") + "." + std::to_string(dep1 + 1) + ".SrcType", advancedBackupLogPolicies[dep1].srcType);
    setParameter(std::string("AdvancedBackupLogPolicies") + "." + std::to_string(dep1 + 1) + ".RetentionPeriod", std::to_string(advancedBackupLogPolicies[dep1].retentionPeriod));
    setParameter(std::string("AdvancedBackupLogPolicies") + "." + std::to_string(dep1 + 1) + ".DestRegion", advancedBackupLogPolicies[dep1].destRegion);
    setParameter(std::string("AdvancedBackupLogPolicies") + "." + std::to_string(dep1 + 1) + ".PolicyId", advancedBackupLogPolicies[dep1].policyId);
    setParameter(std::string("AdvancedBackupLogPolicies") + "." + std::to_string(dep1 + 1) + ".SrcRegion", advancedBackupLogPolicies[dep1].srcRegion);
    setParameter(std::string("AdvancedBackupLogPolicies") + "." + std::to_string(dep1 + 1) + ".DestType", advancedBackupLogPolicies[dep1].destType);
    setParameter(std::string("AdvancedBackupLogPolicies") + "." + std::to_string(dep1 + 1) + ".RetentionType", advancedBackupLogPolicies[dep1].retentionType);
    setParameter(std::string("AdvancedBackupLogPolicies") + "." + std::to_string(dep1 + 1) + ".EnableLogBackup", std::to_string(advancedBackupLogPolicies[dep1].enableLogBackup));
  }
}

std::string ModifyAdvancedBackupPolicyRequest::getSnapshotBackupType() const {
  return snapshotBackupType_;
}

void ModifyAdvancedBackupPolicyRequest::setSnapshotBackupType(const std::string &snapshotBackupType) {
  snapshotBackupType_ = snapshotBackupType;
  setParameter(std::string("SnapshotBackupType"), snapshotBackupType);
}

std::string ModifyAdvancedBackupPolicyRequest::getPreferredBackupTime() const {
  return preferredBackupTime_;
}

void ModifyAdvancedBackupPolicyRequest::setPreferredBackupTime(const std::string &preferredBackupTime) {
  preferredBackupTime_ = preferredBackupTime;
  setParameter(std::string("PreferredBackupTime"), preferredBackupTime);
}

