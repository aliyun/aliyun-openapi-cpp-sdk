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

#include <alibabacloud/ims/model/SetSecurityPreferenceRequest.h>

using AlibabaCloud::Ims::Model::SetSecurityPreferenceRequest;

SetSecurityPreferenceRequest::SetSecurityPreferenceRequest()
    : RpcServiceRequest("ims", "2019-08-15", "SetSecurityPreference") {
  setMethod(HttpRequest::Method::Post);
}

SetSecurityPreferenceRequest::~SetSecurityPreferenceRequest() {}

std::string SetSecurityPreferenceRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void SetSecurityPreferenceRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

bool SetSecurityPreferenceRequest::getEnableSaveMFATicket() const {
  return enableSaveMFATicket_;
}

void SetSecurityPreferenceRequest::setEnableSaveMFATicket(bool enableSaveMFATicket) {
  enableSaveMFATicket_ = enableSaveMFATicket;
  setParameter(std::string("EnableSaveMFATicket"), enableSaveMFATicket ? "true" : "false");
}

std::string SetSecurityPreferenceRequest::getLoginNetworkMasks() const {
  return loginNetworkMasks_;
}

void SetSecurityPreferenceRequest::setLoginNetworkMasks(const std::string &loginNetworkMasks) {
  loginNetworkMasks_ = loginNetworkMasks;
  setParameter(std::string("LoginNetworkMasks"), loginNetworkMasks);
}

bool SetSecurityPreferenceRequest::getAllowUserToChangePassword() const {
  return allowUserToChangePassword_;
}

void SetSecurityPreferenceRequest::setAllowUserToChangePassword(bool allowUserToChangePassword) {
  allowUserToChangePassword_ = allowUserToChangePassword;
  setParameter(std::string("AllowUserToChangePassword"), allowUserToChangePassword ? "true" : "false");
}

bool SetSecurityPreferenceRequest::getEnforceMFAForLogin() const {
  return enforceMFAForLogin_;
}

void SetSecurityPreferenceRequest::setEnforceMFAForLogin(bool enforceMFAForLogin) {
  enforceMFAForLogin_ = enforceMFAForLogin;
  setParameter(std::string("EnforceMFAForLogin"), enforceMFAForLogin ? "true" : "false");
}

int SetSecurityPreferenceRequest::getLoginSessionDuration() const {
  return loginSessionDuration_;
}

void SetSecurityPreferenceRequest::setLoginSessionDuration(int loginSessionDuration) {
  loginSessionDuration_ = loginSessionDuration;
  setParameter(std::string("LoginSessionDuration"), std::to_string(loginSessionDuration));
}

std::vector<SetSecurityPreferenceRequest::std::string> SetSecurityPreferenceRequest::getVerificationTypes() const {
  return verificationTypes_;
}

void SetSecurityPreferenceRequest::setVerificationTypes(const std::vector<SetSecurityPreferenceRequest::std::string> &verificationTypes) {
  verificationTypes_ = verificationTypes;
  for(int dep1 = 0; dep1 != verificationTypes.size(); dep1++) {
    setParameter(std::string("VerificationTypes") + "." + std::to_string(dep1 + 1), verificationTypes[dep1]);
  }
}

bool SetSecurityPreferenceRequest::getAllowUserLongTermLogin() const {
  return allowUserLongTermLogin_;
}

void SetSecurityPreferenceRequest::setAllowUserLongTermLogin(bool allowUserLongTermLogin) {
  allowUserLongTermLogin_ = allowUserLongTermLogin;
  setParameter(std::string("AllowUserLongTermLogin"), allowUserLongTermLogin ? "true" : "false");
}

bool SetSecurityPreferenceRequest::getAllowUserToManageAccessKeys() const {
  return allowUserToManageAccessKeys_;
}

void SetSecurityPreferenceRequest::setAllowUserToManageAccessKeys(bool allowUserToManageAccessKeys) {
  allowUserToManageAccessKeys_ = allowUserToManageAccessKeys;
  setParameter(std::string("AllowUserToManageAccessKeys"), allowUserToManageAccessKeys ? "true" : "false");
}

bool SetSecurityPreferenceRequest::getAllowUserToManageMFADevices() const {
  return allowUserToManageMFADevices_;
}

void SetSecurityPreferenceRequest::setAllowUserToManageMFADevices(bool allowUserToManageMFADevices) {
  allowUserToManageMFADevices_ = allowUserToManageMFADevices;
  setParameter(std::string("AllowUserToManageMFADevices"), allowUserToManageMFADevices ? "true" : "false");
}

std::string SetSecurityPreferenceRequest::getOperationForRiskLogin() const {
  return operationForRiskLogin_;
}

void SetSecurityPreferenceRequest::setOperationForRiskLogin(const std::string &operationForRiskLogin) {
  operationForRiskLogin_ = operationForRiskLogin;
  setParameter(std::string("OperationForRiskLogin"), operationForRiskLogin);
}

std::string SetSecurityPreferenceRequest::getMFAOperationForLogin() const {
  return mFAOperationForLogin_;
}

void SetSecurityPreferenceRequest::setMFAOperationForLogin(const std::string &mFAOperationForLogin) {
  mFAOperationForLogin_ = mFAOperationForLogin;
  setParameter(std::string("MFAOperationForLogin"), mFAOperationForLogin);
}

bool SetSecurityPreferenceRequest::getAllowUserToManagePersonalDingTalk() const {
  return allowUserToManagePersonalDingTalk_;
}

void SetSecurityPreferenceRequest::setAllowUserToManagePersonalDingTalk(bool allowUserToManagePersonalDingTalk) {
  allowUserToManagePersonalDingTalk_ = allowUserToManagePersonalDingTalk;
  setParameter(std::string("AllowUserToManagePersonalDingTalk"), allowUserToManagePersonalDingTalk ? "true" : "false");
}

