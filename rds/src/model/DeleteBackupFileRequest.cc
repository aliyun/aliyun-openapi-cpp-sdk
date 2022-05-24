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

#include <alibabacloud/rds/model/DeleteBackupFileRequest.h>

using AlibabaCloud::Rds::Model::DeleteBackupFileRequest;

DeleteBackupFileRequest::DeleteBackupFileRequest()
    : RpcServiceRequest("rds", "2014-08-15", "DeleteBackupFile") {
  setMethod(HttpRequest::Method::Post);
}

DeleteBackupFileRequest::~DeleteBackupFileRequest() {}

long DeleteBackupFileRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DeleteBackupFileRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DeleteBackupFileRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DeleteBackupFileRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DeleteBackupFileRequest::getRegionId() const {
  return regionId_;
}

void DeleteBackupFileRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteBackupFileRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void DeleteBackupFileRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string DeleteBackupFileRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DeleteBackupFileRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string DeleteBackupFileRequest::getBackupId() const {
  return backupId_;
}

void DeleteBackupFileRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

long DeleteBackupFileRequest::getOwnerId() const {
  return ownerId_;
}

void DeleteBackupFileRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DeleteBackupFileRequest::getBackupTime() const {
  return backupTime_;
}

void DeleteBackupFileRequest::setBackupTime(const std::string &backupTime) {
  backupTime_ = backupTime;
  setParameter(std::string("BackupTime"), backupTime);
}

std::string DeleteBackupFileRequest::getDBName() const {
  return dBName_;
}

void DeleteBackupFileRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

