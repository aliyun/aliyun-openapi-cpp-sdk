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

#include <alibabacloud/rds/model/RestoreTableRequest.h>

using AlibabaCloud::Rds::Model::RestoreTableRequest;

RestoreTableRequest::RestoreTableRequest()
    : RpcServiceRequest("rds", "2014-08-15", "RestoreTable") {
  setMethod(HttpRequest::Method::Post);
}

RestoreTableRequest::~RestoreTableRequest() {}

std::string RestoreTableRequest::getRestoreTableMode() const {
  return restoreTableMode_;
}

void RestoreTableRequest::setRestoreTableMode(const std::string &restoreTableMode) {
  restoreTableMode_ = restoreTableMode;
  setParameter(std::string("RestoreTableMode"), restoreTableMode);
}

long RestoreTableRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RestoreTableRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RestoreTableRequest::getClientToken() const {
  return clientToken_;
}

void RestoreTableRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

bool RestoreTableRequest::getInstantRecovery() const {
  return instantRecovery_;
}

void RestoreTableRequest::setInstantRecovery(bool instantRecovery) {
  instantRecovery_ = instantRecovery;
  setParameter(std::string("InstantRecovery"), instantRecovery ? "true" : "false");
}

std::string RestoreTableRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RestoreTableRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RestoreTableRequest::getRegionId() const {
  return regionId_;
}

void RestoreTableRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string RestoreTableRequest::getTableMeta() const {
  return tableMeta_;
}

void RestoreTableRequest::setTableMeta(const std::string &tableMeta) {
  tableMeta_ = tableMeta;
  setParameter(std::string("TableMeta"), tableMeta);
}

std::string RestoreTableRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void RestoreTableRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
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

std::string RestoreTableRequest::getBackupId() const {
  return backupId_;
}

void RestoreTableRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

std::string RestoreTableRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RestoreTableRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long RestoreTableRequest::getOwnerId() const {
  return ownerId_;
}

void RestoreTableRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

