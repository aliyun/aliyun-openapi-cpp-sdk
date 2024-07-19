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

#include <alibabacloud/r-kvstore/model/CreateAccountRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateAccountRequest;

CreateAccountRequest::CreateAccountRequest()
    : RpcServiceRequest("r-kvstore", "2015-01-01", "CreateAccount") {
  setMethod(HttpRequest::Method::Post);
}

CreateAccountRequest::~CreateAccountRequest() {}

long CreateAccountRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateAccountRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateAccountRequest::getClientToken() const {
  return clientToken_;
}

void CreateAccountRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateAccountRequest::getAccountType() const {
  return accountType_;
}

void CreateAccountRequest::setAccountType(const std::string &accountType) {
  accountType_ = accountType;
  setParameter(std::string("AccountType"), accountType);
}

std::string CreateAccountRequest::getAccountDescription() const {
  return accountDescription_;
}

void CreateAccountRequest::setAccountDescription(const std::string &accountDescription) {
  accountDescription_ = accountDescription;
  setParameter(std::string("AccountDescription"), accountDescription);
}

std::string CreateAccountRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateAccountRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateAccountRequest::getAccountPrivilege() const {
  return accountPrivilege_;
}

void CreateAccountRequest::setAccountPrivilege(const std::string &accountPrivilege) {
  accountPrivilege_ = accountPrivilege;
  setParameter(std::string("AccountPrivilege"), accountPrivilege);
}

std::string CreateAccountRequest::getAccountName() const {
  return accountName_;
}

void CreateAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateAccountRequest::getSecurityToken() const {
  return securityToken_;
}

void CreateAccountRequest::setSecurityToken(const std::string &securityToken) {
  securityToken_ = securityToken;
  setParameter(std::string("SecurityToken"), securityToken);
}

std::string CreateAccountRequest::getSourceBiz() const {
  return sourceBiz_;
}

void CreateAccountRequest::setSourceBiz(const std::string &sourceBiz) {
  sourceBiz_ = sourceBiz;
  setParameter(std::string("SourceBiz"), sourceBiz);
}

std::string CreateAccountRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateAccountRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateAccountRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateAccountRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateAccountRequest::getOwnerId() const {
  return ownerId_;
}

void CreateAccountRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateAccountRequest::getAccountPassword() const {
  return accountPassword_;
}

void CreateAccountRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string CreateAccountRequest::getInstanceId() const {
  return instanceId_;
}

void CreateAccountRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

