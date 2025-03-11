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

#include <alibabacloud/drds/model/CreateInstanceAccountRequest.h>

using AlibabaCloud::Drds::Model::CreateInstanceAccountRequest;

CreateInstanceAccountRequest::CreateInstanceAccountRequest()
    : RpcServiceRequest("drds", "2019-01-23", "CreateInstanceAccount") {
  setMethod(HttpRequest::Method::Post);
}

CreateInstanceAccountRequest::~CreateInstanceAccountRequest() {}

std::string CreateInstanceAccountRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void CreateInstanceAccountRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string CreateInstanceAccountRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CreateInstanceAccountRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CreateInstanceAccountRequest::getPassword() const {
  return password_;
}

void CreateInstanceAccountRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string CreateInstanceAccountRequest::getAccountName() const {
  return accountName_;
}

void CreateInstanceAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::vector<CreateInstanceAccountRequest::DbPrivilege> CreateInstanceAccountRequest::getDbPrivilege() const {
  return dbPrivilege_;
}

void CreateInstanceAccountRequest::setDbPrivilege(const std::vector<CreateInstanceAccountRequest::DbPrivilege> &dbPrivilege) {
  dbPrivilege_ = dbPrivilege;
  for(int dep1 = 0; dep1 != dbPrivilege.size(); dep1++) {
  auto dbPrivilegeObj = dbPrivilege.at(dep1);
  std::string dbPrivilegeObjStr = std::string("DbPrivilege") + "." + std::to_string(dep1 + 1);
    setParameter(dbPrivilegeObjStr + ".DbName", dbPrivilegeObj.dbName);
    setParameter(dbPrivilegeObjStr + ".Privilege", dbPrivilegeObj.privilege);
  }
}

