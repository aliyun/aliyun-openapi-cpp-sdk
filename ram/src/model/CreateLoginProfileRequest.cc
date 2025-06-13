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

#include <alibabacloud/ram/model/CreateLoginProfileRequest.h>

using AlibabaCloud::Ram::Model::CreateLoginProfileRequest;

CreateLoginProfileRequest::CreateLoginProfileRequest()
    : RpcServiceRequest("ram", "2015-05-01", "CreateLoginProfile") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoginProfileRequest::~CreateLoginProfileRequest() {}

std::string CreateLoginProfileRequest::getPassword() const {
  return password_;
}

void CreateLoginProfileRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

bool CreateLoginProfileRequest::getMFABindRequired() const {
  return mFABindRequired_;
}

void CreateLoginProfileRequest::setMFABindRequired(bool mFABindRequired) {
  mFABindRequired_ = mFABindRequired;
  setParameter(std::string("MFABindRequired"), mFABindRequired ? "true" : "false");
}

bool CreateLoginProfileRequest::getPasswordResetRequired() const {
  return passwordResetRequired_;
}

void CreateLoginProfileRequest::setPasswordResetRequired(bool passwordResetRequired) {
  passwordResetRequired_ = passwordResetRequired;
  setParameter(std::string("PasswordResetRequired"), passwordResetRequired ? "true" : "false");
}

std::string CreateLoginProfileRequest::getUserName() const {
  return userName_;
}

void CreateLoginProfileRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

