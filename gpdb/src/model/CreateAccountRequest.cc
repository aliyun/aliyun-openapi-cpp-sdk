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

#include <alibabacloud/gpdb/model/CreateAccountRequest.h>

using AlibabaCloud::Gpdb::Model::CreateAccountRequest;

CreateAccountRequest::CreateAccountRequest()
    : RpcServiceRequest("gpdb", "2016-05-03", "CreateAccount") {
  setMethod(HttpRequest::Method::Post);
}

CreateAccountRequest::~CreateAccountRequest() {}

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

std::string CreateAccountRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateAccountRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
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

std::string CreateAccountRequest::getDatabaseName() const {
  return databaseName_;
}

void CreateAccountRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

