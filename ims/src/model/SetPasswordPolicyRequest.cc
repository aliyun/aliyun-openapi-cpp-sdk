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

#include <alibabacloud/ims/model/SetPasswordPolicyRequest.h>

using AlibabaCloud::Ims::Model::SetPasswordPolicyRequest;

SetPasswordPolicyRequest::SetPasswordPolicyRequest()
    : RpcServiceRequest("ims", "2019-08-15", "SetPasswordPolicy") {
  setMethod(HttpRequest::Method::Post);
}

SetPasswordPolicyRequest::~SetPasswordPolicyRequest() {}

int SetPasswordPolicyRequest::getPasswordReusePrevention() const {
  return passwordReusePrevention_;
}

void SetPasswordPolicyRequest::setPasswordReusePrevention(int passwordReusePrevention) {
  passwordReusePrevention_ = passwordReusePrevention;
  setParameter(std::string("PasswordReusePrevention"), std::to_string(passwordReusePrevention));
}

bool SetPasswordPolicyRequest::getRequireUppercaseCharacters() const {
  return requireUppercaseCharacters_;
}

void SetPasswordPolicyRequest::setRequireUppercaseCharacters(bool requireUppercaseCharacters) {
  requireUppercaseCharacters_ = requireUppercaseCharacters;
  setParameter(std::string("RequireUppercaseCharacters"), requireUppercaseCharacters ? "true" : "false");
}

std::string SetPasswordPolicyRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void SetPasswordPolicyRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

int SetPasswordPolicyRequest::getMinimumPasswordDifferentCharacter() const {
  return minimumPasswordDifferentCharacter_;
}

void SetPasswordPolicyRequest::setMinimumPasswordDifferentCharacter(int minimumPasswordDifferentCharacter) {
  minimumPasswordDifferentCharacter_ = minimumPasswordDifferentCharacter;
  setParameter(std::string("MinimumPasswordDifferentCharacter"), std::to_string(minimumPasswordDifferentCharacter));
}

int SetPasswordPolicyRequest::getMinimumPasswordLength() const {
  return minimumPasswordLength_;
}

void SetPasswordPolicyRequest::setMinimumPasswordLength(int minimumPasswordLength) {
  minimumPasswordLength_ = minimumPasswordLength;
  setParameter(std::string("MinimumPasswordLength"), std::to_string(minimumPasswordLength));
}

bool SetPasswordPolicyRequest::getRequireNumbers() const {
  return requireNumbers_;
}

void SetPasswordPolicyRequest::setRequireNumbers(bool requireNumbers) {
  requireNumbers_ = requireNumbers;
  setParameter(std::string("RequireNumbers"), requireNumbers ? "true" : "false");
}

bool SetPasswordPolicyRequest::getPasswordNotContainUserName() const {
  return passwordNotContainUserName_;
}

void SetPasswordPolicyRequest::setPasswordNotContainUserName(bool passwordNotContainUserName) {
  passwordNotContainUserName_ = passwordNotContainUserName;
  setParameter(std::string("PasswordNotContainUserName"), passwordNotContainUserName ? "true" : "false");
}

bool SetPasswordPolicyRequest::getRequireLowercaseCharacters() const {
  return requireLowercaseCharacters_;
}

void SetPasswordPolicyRequest::setRequireLowercaseCharacters(bool requireLowercaseCharacters) {
  requireLowercaseCharacters_ = requireLowercaseCharacters;
  setParameter(std::string("RequireLowercaseCharacters"), requireLowercaseCharacters ? "true" : "false");
}

int SetPasswordPolicyRequest::getMaxPasswordAge() const {
  return maxPasswordAge_;
}

void SetPasswordPolicyRequest::setMaxPasswordAge(int maxPasswordAge) {
  maxPasswordAge_ = maxPasswordAge;
  setParameter(std::string("MaxPasswordAge"), std::to_string(maxPasswordAge));
}

bool SetPasswordPolicyRequest::getHardExpire() const {
  return hardExpire_;
}

void SetPasswordPolicyRequest::setHardExpire(bool hardExpire) {
  hardExpire_ = hardExpire;
  setParameter(std::string("HardExpire"), hardExpire ? "true" : "false");
}

int SetPasswordPolicyRequest::getMaxLoginAttemps() const {
  return maxLoginAttemps_;
}

void SetPasswordPolicyRequest::setMaxLoginAttemps(int maxLoginAttemps) {
  maxLoginAttemps_ = maxLoginAttemps;
  setParameter(std::string("MaxLoginAttemps"), std::to_string(maxLoginAttemps));
}

bool SetPasswordPolicyRequest::getRequireSymbols() const {
  return requireSymbols_;
}

void SetPasswordPolicyRequest::setRequireSymbols(bool requireSymbols) {
  requireSymbols_ = requireSymbols;
  setParameter(std::string("RequireSymbols"), requireSymbols ? "true" : "false");
}

