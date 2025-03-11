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

#include <alibabacloud/drds/model/CreateDrdsDBRequest.h>

using AlibabaCloud::Drds::Model::CreateDrdsDBRequest;

CreateDrdsDBRequest::CreateDrdsDBRequest()
    : RpcServiceRequest("drds", "2019-01-23", "CreateDrdsDB") {
  setMethod(HttpRequest::Method::Post);
}

CreateDrdsDBRequest::~CreateDrdsDBRequest() {}

std::string CreateDrdsDBRequest::getEncode() const {
  return encode_;
}

void CreateDrdsDBRequest::setEncode(const std::string &encode) {
  encode_ = encode;
  setParameter(std::string("Encode"), encode);
}

std::vector<std::string> CreateDrdsDBRequest::getRdsInstance() const {
  return rdsInstance_;
}

void CreateDrdsDBRequest::setRdsInstance(const std::vector<std::string> &rdsInstance) {
  rdsInstance_ = rdsInstance;
}

std::string CreateDrdsDBRequest::getType() const {
  return type_;
}

void CreateDrdsDBRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string CreateDrdsDBRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateDrdsDBRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateDrdsDBRequest::getPassword() const {
  return password_;
}

void CreateDrdsDBRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::vector<CreateDrdsDBRequest::RdsSuperAccount> CreateDrdsDBRequest::getRdsSuperAccount() const {
  return rdsSuperAccount_;
}

void CreateDrdsDBRequest::setRdsSuperAccount(const std::vector<CreateDrdsDBRequest::RdsSuperAccount> &rdsSuperAccount) {
  rdsSuperAccount_ = rdsSuperAccount;
  for(int dep1 = 0; dep1 != rdsSuperAccount.size(); dep1++) {
  auto rdsSuperAccountObj = rdsSuperAccount.at(dep1);
  std::string rdsSuperAccountObjStr = std::string("RdsSuperAccount") + "." + std::to_string(dep1 + 1);
    setParameter(rdsSuperAccountObjStr + ".Password", rdsSuperAccountObj.password);
    setParameter(rdsSuperAccountObjStr + ".AccountName", rdsSuperAccountObj.accountName);
    setParameter(rdsSuperAccountObjStr + ".DbInstanceId", rdsSuperAccountObj.dbInstanceId);
  }
}

std::string CreateDrdsDBRequest::getAccountName() const {
  return accountName_;
}

void CreateDrdsDBRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateDrdsDBRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void CreateDrdsDBRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

bool CreateDrdsDBRequest::getDbInstanceIsCreating() const {
  return dbInstanceIsCreating_;
}

void CreateDrdsDBRequest::setDbInstanceIsCreating(bool dbInstanceIsCreating) {
  dbInstanceIsCreating_ = dbInstanceIsCreating;
  setParameter(std::string("DbInstanceIsCreating"), dbInstanceIsCreating ? "true" : "false");
}

std::vector<CreateDrdsDBRequest::InstDbName> CreateDrdsDBRequest::getInstDbName() const {
  return instDbName_;
}

void CreateDrdsDBRequest::setInstDbName(const std::vector<CreateDrdsDBRequest::InstDbName> &instDbName) {
  instDbName_ = instDbName;
  for(int dep1 = 0; dep1 != instDbName.size(); dep1++) {
  auto instDbNameObj = instDbName.at(dep1);
  std::string instDbNameObjStr = std::string("InstDbName") + "." + std::to_string(dep1 + 1);
    setParameter(instDbNameObjStr + ".DbInstanceId", instDbNameObj.dbInstanceId);
  }
}

std::string CreateDrdsDBRequest::getDbName() const {
  return dbName_;
}

void CreateDrdsDBRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string CreateDrdsDBRequest::getDbInstType() const {
  return dbInstType_;
}

void CreateDrdsDBRequest::setDbInstType(const std::string &dbInstType) {
  dbInstType_ = dbInstType;
  setParameter(std::string("DbInstType"), dbInstType);
}

