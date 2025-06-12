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

#include <alibabacloud/clickhouse/model/CreateBackupPolicyRequest.h>

using AlibabaCloud::Clickhouse::Model::CreateBackupPolicyRequest;

CreateBackupPolicyRequest::CreateBackupPolicyRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "CreateBackupPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateBackupPolicyRequest::~CreateBackupPolicyRequest() {}

long CreateBackupPolicyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateBackupPolicyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateBackupPolicyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateBackupPolicyRequest::getRegionId() const {
  return regionId_;
}

void CreateBackupPolicyRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateBackupPolicyRequest::getPreferredBackupPeriod() const {
  return preferredBackupPeriod_;
}

void CreateBackupPolicyRequest::setPreferredBackupPeriod(const std::string &preferredBackupPeriod) {
  preferredBackupPeriod_ = preferredBackupPeriod;
  setParameter(std::string("PreferredBackupPeriod"), preferredBackupPeriod);
}

std::string CreateBackupPolicyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateBackupPolicyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateBackupPolicyRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateBackupPolicyRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateBackupPolicyRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateBackupPolicyRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateBackupPolicyRequest::getOwnerId() const {
  return ownerId_;
}

void CreateBackupPolicyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateBackupPolicyRequest::getPreferredBackupTime() const {
  return preferredBackupTime_;
}

void CreateBackupPolicyRequest::setPreferredBackupTime(const std::string &preferredBackupTime) {
  preferredBackupTime_ = preferredBackupTime;
  setParameter(std::string("PreferredBackupTime"), preferredBackupTime);
}

std::string CreateBackupPolicyRequest::getBackupRetentionPeriod() const {
  return backupRetentionPeriod_;
}

void CreateBackupPolicyRequest::setBackupRetentionPeriod(const std::string &backupRetentionPeriod) {
  backupRetentionPeriod_ = backupRetentionPeriod;
  setParameter(std::string("BackupRetentionPeriod"), backupRetentionPeriod);
}

