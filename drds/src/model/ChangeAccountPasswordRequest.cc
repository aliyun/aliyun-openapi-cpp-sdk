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

#include <alibabacloud/drds/model/ChangeAccountPasswordRequest.h>

using AlibabaCloud::Drds::Model::ChangeAccountPasswordRequest;

ChangeAccountPasswordRequest::ChangeAccountPasswordRequest()
    : RpcServiceRequest("drds", "2019-01-23", "ChangeAccountPassword") {
  setMethod(HttpRequest::Method::Post);
}

ChangeAccountPasswordRequest::~ChangeAccountPasswordRequest() {}

std::string ChangeAccountPasswordRequest::getDrdsInstanceId() const {
  return drdsInstanceId_;
}

void ChangeAccountPasswordRequest::setDrdsInstanceId(const std::string &drdsInstanceId) {
  drdsInstanceId_ = drdsInstanceId;
  setParameter(std::string("DrdsInstanceId"), drdsInstanceId);
}

std::string ChangeAccountPasswordRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ChangeAccountPasswordRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ChangeAccountPasswordRequest::getPassword() const {
  return password_;
}

void ChangeAccountPasswordRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ChangeAccountPasswordRequest::getAccountName() const {
  return accountName_;
}

void ChangeAccountPasswordRequest::setAccountName(const std::string &accountName) {
  accountName_ = accountName;
  setParameter(std::string("AccountName"), accountName);
}

