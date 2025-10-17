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

#include <alibabacloud/polardb/model/CreateDatabaseZonalRequest.h>

using AlibabaCloud::Polardb::Model::CreateDatabaseZonalRequest;

CreateDatabaseZonalRequest::CreateDatabaseZonalRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "CreateDatabaseZonal") {
  setMethod(HttpRequest::Method::Post);
}

CreateDatabaseZonalRequest::~CreateDatabaseZonalRequest() {}

long CreateDatabaseZonalRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateDatabaseZonalRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateDatabaseZonalRequest::getClientToken() const {
  return clientToken_;
}

void CreateDatabaseZonalRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDatabaseZonalRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDatabaseZonalRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDatabaseZonalRequest::getAccountPrivilege() const {
  return accountPrivilege_;
}

void CreateDatabaseZonalRequest::setAccountPrivilege(const std::string &accountPrivilege) {
  accountPrivilege_ = accountPrivilege;
  setParameter(std::string("AccountPrivilege"), accountPrivilege);
}

std::string CreateDatabaseZonalRequest::getAccountName() const {
  return accountName_;
}

void CreateDatabaseZonalRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateDatabaseZonalRequest::getDBDescription() const {
  return dBDescription_;
}

void CreateDatabaseZonalRequest::setDBDescription(const std::string &dBDescription) {
  dBDescription_ = dBDescription;
  setParameter(std::string("DBDescription"), dBDescription);
}

std::string CreateDatabaseZonalRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateDatabaseZonalRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateDatabaseZonalRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateDatabaseZonalRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateDatabaseZonalRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateDatabaseZonalRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateDatabaseZonalRequest::getOwnerId() const {
  return ownerId_;
}

void CreateDatabaseZonalRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateDatabaseZonalRequest::getCollate() const {
  return collate_;
}

void CreateDatabaseZonalRequest::setCollate(const std::string &collate) {
  collate_ = collate;
  setParameter(std::string("Collate"), collate);
}

std::string CreateDatabaseZonalRequest::getDBName() const {
  return dBName_;
}

void CreateDatabaseZonalRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string CreateDatabaseZonalRequest::getCtype() const {
  return ctype_;
}

void CreateDatabaseZonalRequest::setCtype(const std::string &ctype) {
  ctype_ = ctype;
  setParameter(std::string("Ctype"), ctype);
}

std::string CreateDatabaseZonalRequest::getCharacterSetName() const {
  return characterSetName_;
}

void CreateDatabaseZonalRequest::setCharacterSetName(const std::string &characterSetName) {
  characterSetName_ = characterSetName;
  setParameter(std::string("CharacterSetName"), characterSetName);
}

