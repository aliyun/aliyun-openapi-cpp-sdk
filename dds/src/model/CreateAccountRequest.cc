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

#include <alibabacloud/dds/model/CreateAccountRequest.h>

using AlibabaCloud::Dds::Model::CreateAccountRequest;

CreateAccountRequest::CreateAccountRequest()
    : RpcServiceRequest("dds", "2015-12-01", "CreateAccount") {
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

std::vector<CreateAccountRequest::Roles> CreateAccountRequest::getRoles() const {
  return roles_;
}

void CreateAccountRequest::setRoles(const std::vector<CreateAccountRequest::Roles> &roles) {
  roles_ = roles;
  for(int dep1 = 0; dep1 != roles.size(); dep1++) {
  auto rolesObj = roles.at(dep1);
  std::string rolesObjStr = std::string("Roles") + "." + std::to_string(dep1 + 1);
    setParameter(rolesObjStr + ".Role", rolesObj.role);
    setParameter(rolesObjStr + ".DBName", rolesObj.dBName);
  }
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

std::string CreateAccountRequest::getAccountName() const {
  return accountName_;
}

void CreateAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateAccountRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void CreateAccountRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
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

std::string CreateAccountRequest::getDBName() const {
  return dBName_;
}

void CreateAccountRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string CreateAccountRequest::getCharacterType() const {
  return characterType_;
}

void CreateAccountRequest::setCharacterType(const std::string &characterType) {
  characterType_ = characterType;
  setParameter(std::string("CharacterType"), characterType);
}

