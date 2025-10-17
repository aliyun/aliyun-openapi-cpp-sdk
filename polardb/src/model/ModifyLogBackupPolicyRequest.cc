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

#include <alibabacloud/polardb/model/ModifyLogBackupPolicyRequest.h>

using AlibabaCloud::Polardb::Model::ModifyLogBackupPolicyRequest;

ModifyLogBackupPolicyRequest::ModifyLogBackupPolicyRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyLogBackupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

ModifyLogBackupPolicyRequest::~ModifyLogBackupPolicyRequest() {}

long ModifyLogBackupPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyLogBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::vector<ModifyLogBackupPolicyRequest::AdvancedLogPolicies> ModifyLogBackupPolicyRequest::getAdvancedLogPolicies() const {
  return advancedLogPolicies_;
}

void ModifyLogBackupPolicyRequest::setAdvancedLogPolicies(const std::vector<ModifyLogBackupPolicyRequest::AdvancedLogPolicies> &advancedLogPolicies) {
  advancedLogPolicies_ = advancedLogPolicies;
  for(int dep1 = 0; dep1 != advancedLogPolicies.size(); dep1++) {
    setParameter(std::string("AdvancedLogPolicies") + "." + std::to_string(dep1 + 1) + ".ActionType", advancedLogPolicies[dep1].actionType);
    setParameter(std::string("AdvancedLogPolicies") + "." + std::to_string(dep1 + 1) + ".SrcType", advancedLogPolicies[dep1].srcType);
    setParameter(std::string("AdvancedLogPolicies") + "." + std::to_string(dep1 + 1) + ".PolicyId", advancedLogPolicies[dep1].policyId);
    setParameter(std::string("AdvancedLogPolicies") + "." + std::to_string(dep1 + 1) + ".DestRegion", advancedLogPolicies[dep1].destRegion);
    setParameter(std::string("AdvancedLogPolicies") + "." + std::to_string(dep1 + 1) + ".LogRetentionValue", advancedLogPolicies[dep1].logRetentionValue);
    setParameter(std::string("AdvancedLogPolicies") + "." + std::to_string(dep1 + 1) + ".LogRetentionType", advancedLogPolicies[dep1].logRetentionType);
    setParameter(std::string("AdvancedLogPolicies") + "." + std::to_string(dep1 + 1) + ".SrcRegion", advancedLogPolicies[dep1].srcRegion);
    setParameter(std::string("AdvancedLogPolicies") + "." + std::to_string(dep1 + 1) + ".DestType", advancedLogPolicies[dep1].destType);
    setParameter(std::string("AdvancedLogPolicies") + "." + std::to_string(dep1 + 1) + ".EnableLogBackup", std::to_string(advancedLogPolicies[dep1].enableLogBackup));
  }
}

std::string ModifyLogBackupPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyLogBackupPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyLogBackupPolicyRequest::getLogBackupAnotherRegionRegion() const {
  return logBackupAnotherRegionRegion_;
}

void ModifyLogBackupPolicyRequest::setLogBackupAnotherRegionRegion(const std::string &logBackupAnotherRegionRegion) {
  logBackupAnotherRegionRegion_ = logBackupAnotherRegionRegion;
  setParameter(std::string("LogBackupAnotherRegionRegion"), logBackupAnotherRegionRegion);
}

std::string ModifyLogBackupPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyLogBackupPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyLogBackupPolicyRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyLogBackupPolicyRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyLogBackupPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyLogBackupPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyLogBackupPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyLogBackupPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyLogBackupPolicyRequest::getLogBackupAnotherRegionRetentionPeriod() const {
  return logBackupAnotherRegionRetentionPeriod_;
}

void ModifyLogBackupPolicyRequest::setLogBackupAnotherRegionRetentionPeriod(const std::string &logBackupAnotherRegionRetentionPeriod) {
  logBackupAnotherRegionRetentionPeriod_ = logBackupAnotherRegionRetentionPeriod;
  setParameter(std::string("LogBackupAnotherRegionRetentionPeriod"), logBackupAnotherRegionRetentionPeriod);
}

std::string ModifyLogBackupPolicyRequest::getLogBackupRetentionPeriod() const {
  return logBackupRetentionPeriod_;
}

void ModifyLogBackupPolicyRequest::setLogBackupRetentionPeriod(const std::string &logBackupRetentionPeriod) {
  logBackupRetentionPeriod_ = logBackupRetentionPeriod;
  setParameter(std::string("LogBackupRetentionPeriod"), logBackupRetentionPeriod);
}

