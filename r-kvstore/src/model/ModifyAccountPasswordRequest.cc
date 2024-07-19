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

#include <alibabacloud/r-kvstore/model/ModifyAccountPasswordRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyAccountPasswordRequest;

ModifyAccountPasswordRequest::ModifyAccountPasswordRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyAccountPassword") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAccountPasswordRequest::~ModifyAccountPasswordRequest() {}

long ModifyAccountPasswordRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAccountPasswordRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyAccountPasswordRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyAccountPasswordRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyAccountPasswordRequest::getAccountName() const {
  return accountName_;
}

void ModifyAccountPasswordRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string ModifyAccountPasswordRequest::getNewAccountPassword() const {
  return newAccountPassword_;
}

void ModifyAccountPasswordRequest::setNewAccountPassword(const std::string &newAccountPassword) {
  newAccountPassword_ = newAccountPassword;
  setParameter(std::string("NewAccountPassword"), newAccountPassword);
}

std::string ModifyAccountPasswordRequest::getSecurityToken() const {
  return securityToken_;
}

void ModifyAccountPasswordRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string ModifyAccountPasswordRequest::getSourceBiz() const {
  return sourceBiz_;
}

void ModifyAccountPasswordRequest::setSourceBiz(const std::string &sourceBiz) {
  sourceBiz_ = sourceBiz;
  setParameter(std::string("SourceBiz"), sourceBiz);
}

std::string ModifyAccountPasswordRequest::getOldAccountPassword() const {
  return oldAccountPassword_;
}

void ModifyAccountPasswordRequest::setOldAccountPassword(const std::string &oldAccountPassword) {
  oldAccountPassword_ = oldAccountPassword;
  setParameter(std::string("OldAccountPassword"), oldAccountPassword);
}

std::string ModifyAccountPasswordRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAccountPasswordRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAccountPasswordRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyAccountPasswordRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyAccountPasswordRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAccountPasswordRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyAccountPasswordRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyAccountPasswordRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

