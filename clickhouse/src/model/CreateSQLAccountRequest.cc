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

#include <alibabacloud/clickhouse/model/CreateSQLAccountRequest.h>

using AlibabaCloud::Clickhouse::Model::CreateSQLAccountRequest;

CreateSQLAccountRequest::CreateSQLAccountRequest()
    : RpcServiceRequest("clickhouse", "2019-11-11", "CreateSQLAccount") {
  setMethod(HttpRequest::Method::Post);
}

CreateSQLAccountRequest::~CreateSQLAccountRequest() {}

long CreateSQLAccountRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateSQLAccountRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateSQLAccountRequest::getAccountType() const {
  return accountType_;
}

void CreateSQLAccountRequest::setAccountType(const std::string &accountType) {
  accountType_ = accountType;
  setParameter(std::string("AccountType"), accountType);
}

std::string CreateSQLAccountRequest::getAccountDescription() const {
  return accountDescription_;
}

void CreateSQLAccountRequest::setAccountDescription(const std::string &accountDescription) {
  accountDescription_ = accountDescription;
  setParameter(std::string("AccountDescription"), accountDescription);
}

std::string CreateSQLAccountRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateSQLAccountRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateSQLAccountRequest::getAccountName() const {
  return accountName_;
}

void CreateSQLAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateSQLAccountRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateSQLAccountRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateSQLAccountRequest::getDBClusterId() const {
  return dBClusterId_;
}

void CreateSQLAccountRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string CreateSQLAccountRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void CreateSQLAccountRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long CreateSQLAccountRequest::getOwnerId() const {
  return ownerId_;
}

void CreateSQLAccountRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateSQLAccountRequest::getAccountPassword() const {
  return accountPassword_;
}

void CreateSQLAccountRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

