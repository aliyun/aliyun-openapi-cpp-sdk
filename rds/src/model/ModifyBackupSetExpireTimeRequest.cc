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

#include <alibabacloud/rds/model/ModifyBackupSetExpireTimeRequest.h>

using AlibabaCloud::Rds::Model::ModifyBackupSetExpireTimeRequest;

ModifyBackupSetExpireTimeRequest::ModifyBackupSetExpireTimeRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyBackupSetExpireTime") {
  setMethod(HttpRequest::Method::Post);
}

ModifyBackupSetExpireTimeRequest::~ModifyBackupSetExpireTimeRequest() {}

long ModifyBackupSetExpireTimeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyBackupSetExpireTimeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyBackupSetExpireTimeRequest::getExpectExpireTime() const {
  return expectExpireTime_;
}

void ModifyBackupSetExpireTimeRequest::setExpectExpireTime(const std::string &expectExpireTime) {
  expectExpireTime_ = expectExpireTime;
  setParameter(std::string("ExpectExpireTime"), expectExpireTime);
}

std::string ModifyBackupSetExpireTimeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyBackupSetExpireTimeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyBackupSetExpireTimeRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyBackupSetExpireTimeRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyBackupSetExpireTimeRequest::getRegionId() const {
  return regionId_;
}

void ModifyBackupSetExpireTimeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyBackupSetExpireTimeRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ModifyBackupSetExpireTimeRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string ModifyBackupSetExpireTimeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyBackupSetExpireTimeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ModifyBackupSetExpireTimeRequest::getBackupId() const {
  return backupId_;
}

void ModifyBackupSetExpireTimeRequest::setBackupId(long backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), std::to_string(backupId));
}

std::string ModifyBackupSetExpireTimeRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyBackupSetExpireTimeRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyBackupSetExpireTimeRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyBackupSetExpireTimeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

