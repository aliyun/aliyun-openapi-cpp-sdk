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

#include <alibabacloud/rds/model/CreateTempDBInstanceRequest.h>

using AlibabaCloud::Rds::Model::CreateTempDBInstanceRequest;

CreateTempDBInstanceRequest::CreateTempDBInstanceRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateTempDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

CreateTempDBInstanceRequest::~CreateTempDBInstanceRequest() {}

long CreateTempDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateTempDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateTempDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateTempDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateTempDBInstanceRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateTempDBInstanceRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateTempDBInstanceRequest::getRegionId() const {
  return regionId_;
}

void CreateTempDBInstanceRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateTempDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateTempDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string CreateTempDBInstanceRequest::getRestoreTime() const {
  return restoreTime_;
}

void CreateTempDBInstanceRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string CreateTempDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateTempDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CreateTempDBInstanceRequest::getBackupId() const {
  return backupId_;
}

void CreateTempDBInstanceRequest::setBackupId(long backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), std::to_string(backupId));
}

std::string CreateTempDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateTempDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateTempDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void CreateTempDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

