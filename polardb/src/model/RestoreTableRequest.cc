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

#include <alibabacloud/polardb/model/RestoreTableRequest.h>

using AlibabaCloud::Polardb::Model::RestoreTableRequest;

RestoreTableRequest::RestoreTableRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "RestoreTable") {
  setMethod(HttpRequest::Method::Post);
}

RestoreTableRequest::~RestoreTableRequest() {}

long RestoreTableRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RestoreTableRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RestoreTableRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RestoreTableRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RestoreTableRequest::getSecurityToken() const {
  return securityToken_;
}

void RestoreTableRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string RestoreTableRequest::getTableMeta() const {
  return tableMeta_;
}

void RestoreTableRequest::setTableMeta(const std::string &tableMeta) {
  tableMeta_ = tableMeta;
  setParameter(std::string("TableMeta"), tableMeta);
}

std::string RestoreTableRequest::getRestoreTime() const {
  return restoreTime_;
}

void RestoreTableRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string RestoreTableRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RestoreTableRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RestoreTableRequest::getDBClusterId() const {
  return dBClusterId_;
}

void RestoreTableRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string RestoreTableRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RestoreTableRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string RestoreTableRequest::getBackupId() const {
  return backupId_;
}

void RestoreTableRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

long RestoreTableRequest::getOwnerId() const {
  return ownerId_;
}

void RestoreTableRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

