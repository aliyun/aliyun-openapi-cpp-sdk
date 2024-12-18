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

#include <alibabacloud/selectdb/model/ResetAccountPasswordRequest.h>

using AlibabaCloud::Selectdb::Model::ResetAccountPasswordRequest;

ResetAccountPasswordRequest::ResetAccountPasswordRequest()
    : RpcServiceRequest("selectdb", "2023-05-22", "ResetAccountPassword") {
  setMethod(HttpRequest::Method::Get);
}

ResetAccountPasswordRequest::~ResetAccountPasswordRequest() {}

long ResetAccountPasswordRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ResetAccountPasswordRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ResetAccountPasswordRequest::getAccountPassword() const {
  return accountPassword_;
}

void ResetAccountPasswordRequest::setAccountPassword(const std::string &accountPassword) {
  accountPassword_ = accountPassword;
  setParameter(std::string("AccountPassword"), accountPassword);
}

std::string ResetAccountPasswordRequest::getAccountName() const {
  return accountName_;
}

void ResetAccountPasswordRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

std::string ResetAccountPasswordRequest::getRegionId() const {
  return regionId_;
}

void ResetAccountPasswordRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ResetAccountPasswordRequest::getDBInstanceId() const {
  return dBInstanceId_;
}

void ResetAccountPasswordRequest::setDBInstanceId(const std::string &dBInstanceId) {
  dBInstanceId_ = dBInstanceId;
  setParameter(std::string("DBInstanceId"), dBInstanceId);
}

