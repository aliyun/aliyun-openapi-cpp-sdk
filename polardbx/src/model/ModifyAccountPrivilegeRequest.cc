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

#include <alibabacloud/polardbx/model/ModifyAccountPrivilegeRequest.h>

using AlibabaCloud::Polardbx::Model::ModifyAccountPrivilegeRequest;

ModifyAccountPrivilegeRequest::ModifyAccountPrivilegeRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "ModifyAccountPrivilege") {
  setMethod(HttpRequest::Method::Post);
}

ModifyAccountPrivilegeRequest::~ModifyAccountPrivilegeRequest() {}

std::string ModifyAccountPrivilegeRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void ModifyAccountPrivilegeRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string ModifyAccountPrivilegeRequest::getSecurityAccountPassword() const {
  return securityAccountPassword_;
}

void ModifyAccountPrivilegeRequest::setSecurityAccountPassword(const std::string &securityAccountPassword) {
  securityAccountPassword_ = securityAccountPassword;
  setParameter(std::string("SecurityAccountPassword"), securityAccountPassword);
}

std::string ModifyAccountPrivilegeRequest::getAccountPrivilege() const {
  return accountPrivilege_;
}

void ModifyAccountPrivilegeRequest::setAccountPrivilege(const std::string &accountPrivilege) {
  accountPrivilege_ = accountPrivilege;
  setParameter(std::string("AccountPrivilege"), accountPrivilege);
}

std::string ModifyAccountPrivilegeRequest::getAccountName() const {
  return accountName_;
}

void ModifyAccountPrivilegeRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string ModifyAccountPrivilegeRequest::getDbName() const {
  return dbName_;
}

void ModifyAccountPrivilegeRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

std::string ModifyAccountPrivilegeRequest::getRegionId() const {
  return regionId_;
}

void ModifyAccountPrivilegeRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyAccountPrivilegeRequest::getSecurityAccountName() const {
  return securityAccountName_;
}

void ModifyAccountPrivilegeRequest::setSecurityAccountName(const std::string &securityAccountName) {
  securityAccountName_ = securityAccountName;
  setParameter(std::string("SecurityAccountName"), securityAccountName);
}

