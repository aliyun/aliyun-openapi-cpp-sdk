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

#include <alibabacloud/swas-open/model/ResetDatabaseAccountPasswordRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ResetDatabaseAccountPasswordRequest;

ResetDatabaseAccountPasswordRequest::ResetDatabaseAccountPasswordRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ResetDatabaseAccountPassword") {
  setMethod(HttpRequest::Method::Post);
}

ResetDatabaseAccountPasswordRequest::~ResetDatabaseAccountPasswordRequest() {}

std::string ResetDatabaseAccountPasswordRequest::getClientToken() const {
  return clientToken_;
}

void ResetDatabaseAccountPasswordRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ResetDatabaseAccountPasswordRequest::getDatabaseInstanceId() const {
  return databaseInstanceId_;
}

void ResetDatabaseAccountPasswordRequest::setDatabaseInstanceId(const std::string &databaseInstanceId) {
  databaseInstanceId_ = databaseInstanceId;
  setParameter(std::string("DatabaseInstanceId"), databaseInstanceId);
}

std::string ResetDatabaseAccountPasswordRequest::getAccountPassword() const {
  return accountPassword_;
}

void ResetDatabaseAccountPasswordRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string ResetDatabaseAccountPasswordRequest::getRegionId() const {
  return regionId_;
}

void ResetDatabaseAccountPasswordRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

