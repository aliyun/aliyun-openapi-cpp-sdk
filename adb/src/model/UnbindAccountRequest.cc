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

#include <alibabacloud/adb/model/UnbindAccountRequest.h>

using AlibabaCloud::Adb::Model::UnbindAccountRequest;

UnbindAccountRequest::UnbindAccountRequest()
    : RpcServiceRequest("adb", "2021-12-01", "UnbindAccount") {
  setMethod(HttpRequest::Method::Post);
}

UnbindAccountRequest::~UnbindAccountRequest() {}

std::string UnbindAccountRequest::getDBClusterId() const {
  return dBClusterId_;
}

void UnbindAccountRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string UnbindAccountRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void UnbindAccountRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string UnbindAccountRequest::getAccountName() const {
  return accountName_;
}

void UnbindAccountRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

