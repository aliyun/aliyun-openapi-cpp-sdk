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

#include <alibabacloud/dds/model/ModifyBackupExpireTimeRequest.h>

using AlibabaCloud::Dds::Model::ModifyBackupExpireTimeRequest;

ModifyBackupExpireTimeRequest::ModifyBackupExpireTimeRequest()
    : RpcServiceRequest("dds", "2015-12-01", "ModifyBackupExpireTime") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBackupExpireTimeRequest::~ModifyBackupExpireTimeRequest() {}

long ModifyBackupExpireTimeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyBackupExpireTimeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyBackupExpireTimeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyBackupExpireTimeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyBackupExpireTimeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyBackupExpireTimeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyBackupExpireTimeRequest::getBackupExpireTime() const {
  return backupExpireTime_;
}

void ModifyBackupExpireTimeRequest::setBackupExpireTime(const std::string &backupExpireTime) {
  backupExpireTime_ = backupExpireTime;
  setParameter(std::string("BackupExpireTime"), backupExpireTime);
}

std::string ModifyBackupExpireTimeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyBackupExpireTimeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyBackupExpireTimeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyBackupExpireTimeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string ModifyBackupExpireTimeRequest::getBackupId() const {
  return backupId_;
}

void ModifyBackupExpireTimeRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

long ModifyBackupExpireTimeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyBackupExpireTimeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

