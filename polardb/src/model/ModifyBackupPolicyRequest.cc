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

#include <alibabacloud/polardb/model/ModifyBackupPolicyRequest.h>

using AlibabaCloud::Polardb::Model::ModifyBackupPolicyRequest;

ModifyBackupPolicyRequest::ModifyBackupPolicyRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyBackupPolicy") {
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

std::string ModifyBackupPolicyRequest::getDataLevel2BackupRetentionPeriod() const {
  return dataLevel2BackupRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setDataLevel2BackupRetentionPeriod(const std::string &dataLevel2BackupRetentionPeriod) {
  dataLevel2BackupRetentionPeriod_ = dataLevel2BackupRetentionPeriod;
  setParameter(std::string("DataLevel2BackupRetentionPeriod"), dataLevel2BackupRetentionPeriod);
}

std::string ModifyBackupPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyBackupPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::vector<ModifyBackupPolicyRequest::AdvancedDataPolicies> ModifyBackupPolicyRequest::getAdvancedDataPolicies() const {
  return advancedDataPolicies_;
}

void ModifyBackupPolicyRequest::setAdvancedDataPolicies(const std::vector<ModifyBackupPolicyRequest::AdvancedDataPolicies> &advancedDataPolicies) {
  advancedDataPolicies_ = advancedDataPolicies;
  for(int dep1 = 0; dep1 != advancedDataPolicies.size(); dep1++) {
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".ActionType", advancedDataPolicies[dep1].actionType);
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".SrcType", advancedDataPolicies[dep1].srcType);
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".RetentionValue", advancedDataPolicies[dep1].retentionValue);
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".DestRegion", advancedDataPolicies[dep1].destRegion);
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".BakType", advancedDataPolicies[dep1].bakType);
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".OnlyPreserveOneEachDay", advancedDataPolicies[dep1].onlyPreserveOneEachDay ? "true" : "false");
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".FilterValue", advancedDataPolicies[dep1].filterValue);
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".DumpAction", advancedDataPolicies[dep1].dumpAction);
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".OnlyPreserveOneEachHour", advancedDataPolicies[dep1].onlyPreserveOneEachHour ? "true" : "false");
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".SrcRegion", advancedDataPolicies[dep1].srcRegion);
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".FilterType", advancedDataPolicies[dep1].filterType);
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".RetentionType", advancedDataPolicies[dep1].retentionType);
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".FilterKey", advancedDataPolicies[dep1].filterKey);
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".AutoCreated", advancedDataPolicies[dep1].autoCreated ? "true" : "false");
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".PolicyId", advancedDataPolicies[dep1].policyId);
    setParameter(std::string("AdvancedDataPolicies") + "." + std::to_string(dep1 + 1) + ".DestType", advancedDataPolicies[dep1].destType);
  }
}

std::string ModifyBackupPolicyRequest::getDataLevel1BackupPeriod() const {
  return dataLevel1BackupPeriod_;
}

void ModifyBackupPolicyRequest::setDataLevel1BackupPeriod(const std::string &dataLevel1BackupPeriod) {
  dataLevel1BackupPeriod_ = dataLevel1BackupPeriod;
  setParameter(std::string("DataLevel1BackupPeriod"), dataLevel1BackupPeriod);
}

std::string ModifyBackupPolicyRequest::getDataLevel2BackupPeriod() const {
  return dataLevel2BackupPeriod_;
}

void ModifyBackupPolicyRequest::setDataLevel2BackupPeriod(const std::string &dataLevel2BackupPeriod) {
  dataLevel2BackupPeriod_ = dataLevel2BackupPeriod;
  setParameter(std::string("DataLevel2BackupPeriod"), dataLevel2BackupPeriod);
}

std::string ModifyBackupPolicyRequest::getPreferredBackupPeriod() const {
  return preferredBackupPeriod_;
}

void ModifyBackupPolicyRequest::setPreferredBackupPeriod(const std::string &preferredBackupPeriod) {
  preferredBackupPeriod_ = preferredBackupPeriod;
  setParameter(std::string("PreferredBackupPeriod"), preferredBackupPeriod);
}

std::string ModifyBackupPolicyRequest::getDataLevel1BackupRetentionPeriod() const {
  return dataLevel1BackupRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setDataLevel1BackupRetentionPeriod(const std::string &dataLevel1BackupRetentionPeriod) {
  dataLevel1BackupRetentionPeriod_ = dataLevel1BackupRetentionPeriod;
  setParameter(std::string("DataLevel1BackupRetentionPeriod"), dataLevel1BackupRetentionPeriod);
}

std::string ModifyBackupPolicyRequest::getBackupRetentionPolicyOnClusterDeletion() const {
  return backupRetentionPolicyOnClusterDeletion_;
}

void ModifyBackupPolicyRequest::setBackupRetentionPolicyOnClusterDeletion(const std::string &backupRetentionPolicyOnClusterDeletion) {
  backupRetentionPolicyOnClusterDeletion_ = backupRetentionPolicyOnClusterDeletion;
  setParameter(std::string("BackupRetentionPolicyOnClusterDeletion"), backupRetentionPolicyOnClusterDeletion);
}

std::string ModifyBackupPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyBackupPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyBackupPolicyRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyBackupPolicyRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyBackupPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyBackupPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyBackupPolicyRequest::getDataLevel2BackupAnotherRegionRetentionPeriod() const {
  return dataLevel2BackupAnotherRegionRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setDataLevel2BackupAnotherRegionRetentionPeriod(const std::string &dataLevel2BackupAnotherRegionRetentionPeriod) {
  dataLevel2BackupAnotherRegionRetentionPeriod_ = dataLevel2BackupAnotherRegionRetentionPeriod;
  setParameter(std::string("DataLevel2BackupAnotherRegionRetentionPeriod"), dataLevel2BackupAnotherRegionRetentionPeriod);
}

std::string ModifyBackupPolicyRequest::getBackupPolicyLevel() const {
  return backupPolicyLevel_;
}

void ModifyBackupPolicyRequest::setBackupPolicyLevel(const std::string &backupPolicyLevel) {
  backupPolicyLevel_ = backupPolicyLevel;
  setParameter(std::string("BackupPolicyLevel"), backupPolicyLevel);
}

long ModifyBackupPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyBackupPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyBackupPolicyRequest::getPreferredBackupTime() const {
  return preferredBackupTime_;
}

void ModifyBackupPolicyRequest::setPreferredBackupTime(const std::string &preferredBackupTime) {
  preferredBackupTime_ = preferredBackupTime;
  setParameter(std::string("PreferredBackupTime"), preferredBackupTime);
}

std::string ModifyBackupPolicyRequest::getBackupRetentionPeriod() const {
  return backupRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setBackupRetentionPeriod(const std::string &backupRetentionPeriod) {
  backupRetentionPeriod_ = backupRetentionPeriod;
  setParameter(std::string("BackupRetentionPeriod"), backupRetentionPeriod);
}

std::string ModifyBackupPolicyRequest::getBackupFrequency() const {
  return backupFrequency_;
}

void ModifyBackupPolicyRequest::setBackupFrequency(const std::string &backupFrequency) {
  backupFrequency_ = backupFrequency;
  setParameter(std::string("BackupFrequency"), backupFrequency);
}

std::string ModifyBackupPolicyRequest::getDataLevel1BackupFrequency() const {
  return dataLevel1BackupFrequency_;
}

void ModifyBackupPolicyRequest::setDataLevel1BackupFrequency(const std::string &dataLevel1BackupFrequency) {
  dataLevel1BackupFrequency_ = dataLevel1BackupFrequency;
  setParameter(std::string("DataLevel1BackupFrequency"), dataLevel1BackupFrequency);
}

std::string ModifyBackupPolicyRequest::getDataLevel2BackupAnotherRegionRegion() const {
  return dataLevel2BackupAnotherRegionRegion_;
}

void ModifyBackupPolicyRequest::setDataLevel2BackupAnotherRegionRegion(const std::string &dataLevel2BackupAnotherRegionRegion) {
  dataLevel2BackupAnotherRegionRegion_ = dataLevel2BackupAnotherRegionRegion;
  setParameter(std::string("DataLevel2BackupAnotherRegionRegion"), dataLevel2BackupAnotherRegionRegion);
}

std::string ModifyBackupPolicyRequest::getDataLevel1BackupTime() const {
  return dataLevel1BackupTime_;
}

void ModifyBackupPolicyRequest::setDataLevel1BackupTime(const std::string &dataLevel1BackupTime) {
  dataLevel1BackupTime_ = dataLevel1BackupTime;
  setParameter(std::string("DataLevel1BackupTime"), dataLevel1BackupTime);
}

