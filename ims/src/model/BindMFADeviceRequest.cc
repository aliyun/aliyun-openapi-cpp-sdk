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

#include <alibabacloud/ims/model/BindMFADeviceRequest.h>

using AlibabaCloud::Ims::Model::BindMFADeviceRequest;

BindMFADeviceRequest::BindMFADeviceRequest()
    : RpcServiceRequest("ims", "2019-08-15", "BindMFADevice") {
  setMethod(HttpRequest::Method::Post);
}

BindMFADeviceRequest::~BindMFADeviceRequest() {}

std::string BindMFADeviceRequest::getAkProxySuffix() const {
  return akProxySuffix_;
}

void BindMFADeviceRequest::setAkProxySuffix(const std::string &akProxySuffix) {
  akProxySuffix_ = akProxySuffix;
  setParameter(std::string("AkProxySuffix"), akProxySuffix);
}

std::string BindMFADeviceRequest::getU2fAppId() const {
  return u2fAppId_;
}

void BindMFADeviceRequest::setU2fAppId(const std::string &u2fAppId) {
  u2fAppId_ = u2fAppId;
  setParameter(std::string("U2fAppId"), u2fAppId);
}

std::string BindMFADeviceRequest::getAuthenticationCode2() const {
  return authenticationCode2_;
}

void BindMFADeviceRequest::setAuthenticationCode2(const std::string &authenticationCode2) {
  authenticationCode2_ = authenticationCode2;
  setParameter(std::string("AuthenticationCode2"), authenticationCode2);
}

std::string BindMFADeviceRequest::getType() const {
  return type_;
}

void BindMFADeviceRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

std::string BindMFADeviceRequest::getAuthenticationCode1() const {
  return authenticationCode1_;
}

void BindMFADeviceRequest::setAuthenticationCode1(const std::string &authenticationCode1) {
  authenticationCode1_ = authenticationCode1;
  setParameter(std::string("AuthenticationCode1"), authenticationCode1);
}

std::string BindMFADeviceRequest::getU2fPublicKey() const {
  return u2fPublicKey_;
}

void BindMFADeviceRequest::setU2fPublicKey(const std::string &u2fPublicKey) {
  u2fPublicKey_ = u2fPublicKey;
  setParameter(std::string("U2fPublicKey"), u2fPublicKey);
}

std::string BindMFADeviceRequest::getU2fVersion() const {
  return u2fVersion_;
}

void BindMFADeviceRequest::setU2fVersion(const std::string &u2fVersion) {
  u2fVersion_ = u2fVersion;
  setParameter(std::string("U2fVersion"), u2fVersion);
}

std::string BindMFADeviceRequest::getSerialNumber() const {
  return serialNumber_;
}

void BindMFADeviceRequest::setSerialNumber(const std::string &serialNumber) {
  serialNumber_ = serialNumber;
  setParameter(std::string("SerialNumber"), serialNumber);
}

std::string BindMFADeviceRequest::getU2fKeyHandler() const {
  return u2fKeyHandler_;
}

void BindMFADeviceRequest::setU2fKeyHandler(const std::string &u2fKeyHandler) {
  u2fKeyHandler_ = u2fKeyHandler;
  setParameter(std::string("U2fKeyHandler"), u2fKeyHandler);
}

std::string BindMFADeviceRequest::getUserPrincipalName() const {
  return userPrincipalName_;
}

void BindMFADeviceRequest::setUserPrincipalName(const std::string &userPrincipalName) {
  userPrincipalName_ = userPrincipalName;
  setParameter(std::string("UserPrincipalName"), userPrincipalName);
}

std::string BindMFADeviceRequest::getU2fAttestationCert() const {
  return u2fAttestationCert_;
}

void BindMFADeviceRequest::setU2fAttestationCert(const std::string &u2fAttestationCert) {
  u2fAttestationCert_ = u2fAttestationCert;
  setParameter(std::string("U2fAttestationCert"), u2fAttestationCert);
}

