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

#include <alibabacloud/polardb/model/CreateAccountZonalRequest.h>

using AlibabaCloud::Polardb::Model::CreateAccountZonalRequest;

CreateAccountZonalRequest::CreateAccountZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateAccountZonal") {
  setMethod(HttpRequest::Method::Post);
}

CreateAccountZonalRequest::~CreateAccountZonalRequest() {}

long CreateAccountZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateAccountZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateAccountZonalRequest::getNodeType() const {
  return nodeType_;
}

void CreateAccountZonalRequest::setNodeType(const std::string &nodeType) {
  nodeType_ = nodeType;
  setParameter(std::string("NodeType"), nodeType);
}

std::string CreateAccountZonalRequest::getClientToken() const {
  return clientToken_;
}

void CreateAccountZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateAccountZonalRequest::getAccountType() const {
  return accountType_;
}

void CreateAccountZonalRequest::setAccountType(const std::string &accountType) {
  accountType_ = accountType;
  setParameter(std::string("AccountType"), accountType);
}

std::string CreateAccountZonalRequest::getAccountDescription() const {
  return accountDescription_;
}

void CreateAccountZonalRequest::setAccountDescription(const std::string &accountDescription) {
  accountDescription_ = accountDescription;
  setParameter(std::string("AccountDescription"), accountDescription);
}

std::string CreateAccountZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateAccountZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateAccountZonalRequest::getAccountPrivilege() const {
  return accountPrivilege_;
}

void CreateAccountZonalRequest::setAccountPrivilege(const std::string &accountPrivilege) {
  accountPrivilege_ = accountPrivilege;
  setParameter(std::string("AccountPrivilege"), accountPrivilege);
}

std::string CreateAccountZonalRequest::getAccountName() const {
  return accountName_;
}

void CreateAccountZonalRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateAccountZonalRequest::getTairAccountPassword() const {
  return tairAccountPassword_;
}

void CreateAccountZonalRequest::setTairAccountPassword(const std::string &tairAccountPassword) {
  tairAccountPassword_ = tairAccountPassword;
  setParameter(std::string("TairAccountPassword"), tairAccountPassword);
}

std::string CreateAccountZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateAccountZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateAccountZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateAccountZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateAccountZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateAccountZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateAccountZonalRequest::getOwnerId() const {
  return ownerId_;
}

void CreateAccountZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateAccountZonalRequest::getAccountPassword() const {
  return accountPassword_;
}

void CreateAccountZonalRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string CreateAccountZonalRequest::getDBName() const {
  return dBName_;
}

void CreateAccountZonalRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string CreateAccountZonalRequest::getPrivForAllDB() const {
  return privForAllDB_;
}

void CreateAccountZonalRequest::setPrivForAllDB(const std::string &privForAllDB) {
  privForAllDB_ = privForAllDB;
  setParameter(std::string("PrivForAllDB"), privForAllDB);
}

