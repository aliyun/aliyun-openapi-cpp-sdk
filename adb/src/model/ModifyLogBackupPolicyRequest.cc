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

#include <alibabacloud/adb/model/ModifyLogBackupPolicyRequest.h>

using AlibabaCloud::Adb::Model::ModifyLogBackupPolicyRequest;

ModifyLogBackupPolicyRequest::ModifyLogBackupPolicyRequest()
    : RpcServiceRequest("adb", "2019-03-15", "ModifyLogBackupPolicy") {
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

std::string ModifyLogBackupPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyLogBackupPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyLogBackupPolicyRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyLogBackupPolicyRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyLogBackupPolicyRequest::getEnableBackupLog() const {
  return enableBackupLog_;
}

void ModifyLogBackupPolicyRequest::setEnableBackupLog(const std::string &enableBackupLog) {
  enableBackupLog_ = enableBackupLog;
  setParameter(std::string("EnableBackupLog"), enableBackupLog);
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

std::string ModifyLogBackupPolicyRequest::getLogBackupRetentionPeriod() const {
  return logBackupRetentionPeriod_;
}

void ModifyLogBackupPolicyRequest::setLogBackupRetentionPeriod(const std::string &logBackupRetentionPeriod) {
  logBackupRetentionPeriod_ = logBackupRetentionPeriod;
  setParameter(std::string("LogBackupRetentionPeriod"), logBackupRetentionPeriod);
}

