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

#include <alibabacloud/r-kvstore/model/ModifyBackupPolicyRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyBackupPolicyRequest;

ModifyBackupPolicyRequest::ModifyBackupPolicyRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyBackupPolicy") {
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

std::string ModifyBackupPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyBackupPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyBackupPolicyRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyBackupPolicyRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

int ModifyBackupPolicyRequest::getEnableBackupLog() const {
  return enableBackupLog_;
}

void ModifyBackupPolicyRequest::setEnableBackupLog(int enableBackupLog) {
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

std::string ModifyBackupPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyBackupPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
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

std::string ModifyBackupPolicyRequest::getPreferredBackupTime() const {
  return preferredBackupTime_;
}

void ModifyBackupPolicyRequest::setPreferredBackupTime(const std::string &preferredBackupTime) {
  preferredBackupTime_ = preferredBackupTime;
  setParameter(std::string("PreferredBackupTime"), preferredBackupTime);
}

int ModifyBackupPolicyRequest::getBackupRetentionPeriod() const {
  return backupRetentionPeriod_;
}

void ModifyBackupPolicyRequest::setBackupRetentionPeriod(int backupRetentionPeriod) {
  backupRetentionPeriod_ = backupRetentionPeriod;
  setParameter(std::string("BackupRetentionPeriod"), std::to_string(backupRetentionPeriod));
}

std::string ModifyBackupPolicyRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyBackupPolicyRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

