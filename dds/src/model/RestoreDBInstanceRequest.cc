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

#include <alibabacloud/dds/model/RestoreDBInstanceRequest.h>

using AlibabaCloud::Dds::Model::RestoreDBInstanceRequest;

RestoreDBInstanceRequest::RestoreDBInstanceRequest()
    : RpcServiceRequest("dds", "2015-12-01", "RestoreDBInstance") {
  setMethod(HttpRequest::Method::Post);
}

RestoreDBInstanceRequest::~RestoreDBInstanceRequest() {}

long RestoreDBInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RestoreDBInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RestoreDBInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RestoreDBInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RestoreDBInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void RestoreDBInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string RestoreDBInstanceRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void RestoreDBInstanceRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string RestoreDBInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RestoreDBInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RestoreDBInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RestoreDBInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

int RestoreDBInstanceRequest::getBackupId() const {
  return backupId_;
}

void RestoreDBInstanceRequest::setBackupId(int backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), std::to_string(backupId));
}

long RestoreDBInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RestoreDBInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

