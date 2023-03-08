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

#include <alibabacloud/adb/model/BindAccountRequest.h>

using AlibabaCloud::Adb::Model::BindAccountRequest;

BindAccountRequest::BindAccountRequest()
    : RpcServiceRequest("adb", "2021-12-01", "BindAccount") {
  setMethod(HttpRequest::Method::Post);
}

BindAccountRequest::~BindAccountRequest() {}

std::string BindAccountRequest::getDBClusterId() const {
  return dBClusterId_;
}

void BindAccountRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string BindAccountRequest::getRamUser() const {
  return ramUser_;
}

void BindAccountRequest::setRamUser(const std::string &ramUser) {
  ramUser_ = ramUser;
  setParameter(std::string("RamUser"), ramUser);
}

std::string BindAccountRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void BindAccountRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string BindAccountRequest::getAccountName() const {
  return accountName_;
}

void BindAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

