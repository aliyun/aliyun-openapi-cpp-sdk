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

#include <alibabacloud/polardbx/model/CreateAccountRequest.h>

using AlibabaCloud::Polardbx::Model::CreateAccountRequest;

CreateAccountRequest::CreateAccountRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "CreateAccount") {
  setMethod(HttpRequest::Method::Post);
}

CreateAccountRequest::~CreateAccountRequest() {}

std::string CreateAccountRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void CreateAccountRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string CreateAccountRequest::getSecurityAccountPassword() const {
  return securityAccountPassword_;
}

void CreateAccountRequest::setSecurityAccountPassword(const std::string &securityAccountPassword) {
  securityAccountPassword_ = securityAccountPassword;
  setParameter(std::string("SecurityAccountPassword"), securityAccountPassword);
}

std::string CreateAccountRequest::getAccountDescription() const {
  return accountDescription_;
}

void CreateAccountRequest::setAccountDescription(const std::string &accountDescription) {
  accountDescription_ = accountDescription;
  setParameter(std::string("AccountDescription"), accountDescription);
}

std::string CreateAccountRequest::getAccountPrivilege() const {
  return accountPrivilege_;
}

void CreateAccountRequest::setAccountPrivilege(const std::string &accountPrivilege) {
  accountPrivilege_ = accountPrivilege;
  setParameter(std::string("AccountPrivilege"), accountPrivilege);
}

std::string CreateAccountRequest::getAccountPassword() const {
  return accountPassword_;
}

void CreateAccountRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string CreateAccountRequest::getAccountName() const {
  return accountName_;
}

void CreateAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateAccountRequest::getDBName() const {
  return dBName_;
}

void CreateAccountRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

std::string CreateAccountRequest::getRegionId() const {
  return regionId_;
}

void CreateAccountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateAccountRequest::getSecurityAccountName() const {
  return securityAccountName_;
}

void CreateAccountRequest::setSecurityAccountName(const std::string &securityAccountName) {
  securityAccountName_ = securityAccountName;
  setParameter(std::string("SecurityAccountName"), securityAccountName);
}

