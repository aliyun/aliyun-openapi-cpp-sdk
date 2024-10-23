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

#include <alibabacloud/ims/model/CreateLoginProfileRequest.h>

using AlibabaCloud::Ims::Model::CreateLoginProfileRequest;

CreateLoginProfileRequest::CreateLoginProfileRequest()
    : RpcServiceRequest("ims", "2019-08-15", "CreateLoginProfile") {
  setMethod(HttpRequest::Method::Post);
}

CreateLoginProfileRequest::~CreateLoginProfileRequest() {}

std::string CreateLoginProfileRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void CreateLoginProfileRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string CreateLoginProfileRequest::getPassword() const {
  return password_;
}

void CreateLoginProfileRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

bool CreateLoginProfileRequest::getGenerateRandomPassword() const {
  return generateRandomPassword_;
}

void CreateLoginProfileRequest::setGenerateRandomPassword(bool generateRandomPassword) {
  generateRandomPassword_ = generateRandomPassword;
  setParameter(std::string("GenerateRandomPassword"), generateRandomPassword ? "true" : "false");
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

std::string CreateLoginProfileRequest::getUserPrincipalName() const {
  return userPrincipalName_;
}

void CreateLoginProfileRequest::setUserPrincipalName(const std::string &userPrincipalName) {
  userPrincipalName_ = userPrincipalName;
  setParameter(std::string("UserPrincipalName"), userPrincipalName);
}

std::string CreateLoginProfileRequest::getStatus() const {
  return status_;
}

void CreateLoginProfileRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

