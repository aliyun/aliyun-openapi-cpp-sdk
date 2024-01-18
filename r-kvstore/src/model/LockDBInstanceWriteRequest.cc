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

#include <alibabacloud/r-kvstore/model/LockDBInstanceWriteRequest.h>

using AlibabaCloud::R_kvstore::Model::LockDBInstanceWriteRequest;

LockDBInstanceWriteRequest::LockDBInstanceWriteRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "LockDBInstanceWrite") {
  setMethod(HttpRequest::Method::Post);
}

LockDBInstanceWriteRequest::~LockDBInstanceWriteRequest() {}

long LockDBInstanceWriteRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void LockDBInstanceWriteRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string LockDBInstanceWriteRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void LockDBInstanceWriteRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string LockDBInstanceWriteRequest::getLockReason() const {
  return lockReason_;
}

void LockDBInstanceWriteRequest::setLockReason(const std::string &lockReason) {
  lockReason_ = lockReason;
  setParameter(std::string("LockReason"), lockReason);
}

std::string LockDBInstanceWriteRequest::getSecurityToken() const {
  return securityToken_;
}

void LockDBInstanceWriteRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string LockDBInstanceWriteRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void LockDBInstanceWriteRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

std::string LockDBInstanceWriteRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void LockDBInstanceWriteRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string LockDBInstanceWriteRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void LockDBInstanceWriteRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long LockDBInstanceWriteRequest::getOwnerId() const {
  return ownerId_;
}

void LockDBInstanceWriteRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

