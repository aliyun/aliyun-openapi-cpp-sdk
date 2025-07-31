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

#include <alibabacloud/dds/model/CreateBackupRequest.h>

using AlibabaCloud::Dds::Model::CreateBackupRequest;

CreateBackupRequest::CreateBackupRequest()
    : RpcServiceRequest("dds", "2015-12-01", "CreateBackup") {
  setMethod(HttpRequest::Method::Post);
}

CreateBackupRequest::~CreateBackupRequest() {}

long CreateBackupRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateBackupRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateBackupRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateBackupRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateBackupRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateBackupRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateBackupRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateBackupRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateBackupRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateBackupRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateBackupRequest::getOwnerId() const {
  return ownerId_;
}

void CreateBackupRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateBackupRequest::getBackupMethod() const {
  return backupMethod_;
}

void CreateBackupRequest::setBackupMethod(const std::string &backupMethod) {
  backupMethod_ = backupMethod;
  setParameter(std::string("BackupMethod"), backupMethod);
}

long CreateBackupRequest::getBackupRetentionPeriod() const {
  return backupRetentionPeriod_;
}

void CreateBackupRequest::setBackupRetentionPeriod(long backupRetentionPeriod) {
  backupRetentionPeriod_ = backupRetentionPeriod;
  setParameter(std::string("BackupRetentionPeriod"), std::to_string(backupRetentionPeriod));
}

