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

#include <alibabacloud/adb/model/ResetAccountPasswordRequest.h>

using AlibabaCloud::Adb::Model::ResetAccountPasswordRequest;

ResetAccountPasswordRequest::ResetAccountPasswordRequest()
    : RpcServiceRequest("adb", "2021-12-01", "ResetAccountPassword") {
  setMethod(HttpRequest::Method::Post);
}

ResetAccountPasswordRequest::~ResetAccountPasswordRequest() {}

std::string ResetAccountPasswordRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ResetAccountPasswordRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ResetAccountPasswordRequest::getAccountDescription() const {
  return accountDescription_;
}

void ResetAccountPasswordRequest::setAccountDescription(const std::string &accountDescription) {
  accountDescription_ = accountDescription;
  setParameter(std::string("AccountDescription"), accountDescription);
}

std::string ResetAccountPasswordRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ResetAccountPasswordRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
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

