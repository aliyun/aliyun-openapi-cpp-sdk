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

#include <alibabacloud/r-kvstore/model/RestoreInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::RestoreInstanceRequest;

RestoreInstanceRequest::RestoreInstanceRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "RestoreInstance") {
  setMethod(HttpRequest::Method::Post);
}

RestoreInstanceRequest::~RestoreInstanceRequest() {}

long RestoreInstanceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void RestoreInstanceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string RestoreInstanceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void RestoreInstanceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string RestoreInstanceRequest::getFilterKey() const {
  return filterKey_;
}

void RestoreInstanceRequest::setFilterKey(const std::string &filterKey) {
  filterKey_ = filterKey;
  setParameter(std::string("FilterKey"), filterKey);
}

std::string RestoreInstanceRequest::getSecurityToken() const {
  return securityToken_;
}

void RestoreInstanceRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string RestoreInstanceRequest::getTimeShift() const {
  return timeShift_;
}

void RestoreInstanceRequest::setTimeShift(const std::string &timeShift) {
  timeShift_ = timeShift;
  setParameter(std::string("TimeShift"), timeShift);
}

std::string RestoreInstanceRequest::getRestoreTime() const {
  return restoreTime_;
}

void RestoreInstanceRequest::setRestoreTime(const std::string &restoreTime) {
  restoreTime_ = restoreTime;
  setParameter(std::string("RestoreTime"), restoreTime);
}

std::string RestoreInstanceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void RestoreInstanceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string RestoreInstanceRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void RestoreInstanceRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

std::string RestoreInstanceRequest::getBackupId() const {
  return backupId_;
}

void RestoreInstanceRequest::setBackupId(const std::string &backupId) {
  backupId_ = backupId;
  setParameter(std::string("BackupId"), backupId);
}

long RestoreInstanceRequest::getOwnerId() const {
  return ownerId_;
}

void RestoreInstanceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string RestoreInstanceRequest::getRestoreType() const {
  return restoreType_;
}

void RestoreInstanceRequest::setRestoreType(const std::string &restoreType) {
  restoreType_ = restoreType;
  setParameter(std::string("RestoreType"), restoreType);
}

std::string RestoreInstanceRequest::getInstanceId() const {
  return instanceId_;
}

void RestoreInstanceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

