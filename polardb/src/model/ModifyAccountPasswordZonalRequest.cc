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

#include <alibabacloud/polardb/model/ModifyAccountPasswordZonalRequest.h>

using AlibabaCloud::Polardb::Model::ModifyAccountPasswordZonalRequest;

ModifyAccountPasswordZonalRequest::ModifyAccountPasswordZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyAccountPasswordZonal") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAccountPasswordZonalRequest::~ModifyAccountPasswordZonalRequest() {}

long ModifyAccountPasswordZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyAccountPasswordZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyAccountPasswordZonalRequest::getClientToken() const {
  return clientToken_;
}

void ModifyAccountPasswordZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyAccountPasswordZonalRequest::getPasswordType() const {
  return passwordType_;
}

void ModifyAccountPasswordZonalRequest::setPasswordType(const std::string &passwordType) {
  passwordType_ = passwordType;
  setParameter(std::string("PasswordType"), passwordType);
}

std::string ModifyAccountPasswordZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyAccountPasswordZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyAccountPasswordZonalRequest::getAccountName() const {
  return accountName_;
}

void ModifyAccountPasswordZonalRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string ModifyAccountPasswordZonalRequest::getNewAccountPassword() const {
  return newAccountPassword_;
}

void ModifyAccountPasswordZonalRequest::setNewAccountPassword(const std::string &newAccountPassword) {
  newAccountPassword_ = newAccountPassword;
  setParameter(std::string("NewAccountPassword"), newAccountPassword);
}

std::string ModifyAccountPasswordZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyAccountPasswordZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyAccountPasswordZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyAccountPasswordZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyAccountPasswordZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyAccountPasswordZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyAccountPasswordZonalRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyAccountPasswordZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

