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

#include <alibabacloud/polardbx/model/CreateSuperAccountRequest.h>

using AlibabaCloud::Polardbx::Model::CreateSuperAccountRequest;

CreateSuperAccountRequest::CreateSuperAccountRequest()
    : RpcServiceRequest("polardbx", "2020-02-02", "CreateSuperAccount") {
  setMethod(HttpRequest::Method::Post);
}

CreateSuperAccountRequest::~CreateSuperAccountRequest() {}

std::string CreateSuperAccountRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void CreateSuperAccountRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

std::string CreateSuperAccountRequest::getAccountDescription() const {
  return accountDescription_;
}

void CreateSuperAccountRequest::setAccountDescription(const std::string &accountDescription) {
  accountDescription_ = accountDescription;
  setParameter(std::string("AccountDescription"), accountDescription);
}

std::string CreateSuperAccountRequest::getAccountPassword() const {
  return accountPassword_;
}

void CreateSuperAccountRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string CreateSuperAccountRequest::getAccountName() const {
  return accountName_;
}

void CreateSuperAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string CreateSuperAccountRequest::getRegionId() const {
  return regionId_;
}

void CreateSuperAccountRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

