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

#include <alibabacloud/dypnsapi/model/CheckSmsVerifyCodeRequest.h>

using AlibabaCloud::Dypnsapi::Model::CheckSmsVerifyCodeRequest;

CheckSmsVerifyCodeRequest::CheckSmsVerifyCodeRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "CheckSmsVerifyCode") {
  setMethod(HttpRequest::Method::Post);
}

CheckSmsVerifyCodeRequest::~CheckSmsVerifyCodeRequest() {}

long CheckSmsVerifyCodeRequest::getCaseAuthPolicy() const {
  return caseAuthPolicy_;
}

void CheckSmsVerifyCodeRequest::setCaseAuthPolicy(long caseAuthPolicy) {
  caseAuthPolicy_ = caseAuthPolicy;
  setParameter(std::string("CaseAuthPolicy"), std::to_string(caseAuthPolicy));
}

long CheckSmsVerifyCodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CheckSmsVerifyCodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CheckSmsVerifyCodeRequest::getCountryCode() const {
  return countryCode_;
}

void CheckSmsVerifyCodeRequest::setCountryCode(const std::string &countryCode) {
  countryCode_ = countryCode;
  setParameter(std::string("CountryCode"), countryCode);
}

std::string CheckSmsVerifyCodeRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void CheckSmsVerifyCodeRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string CheckSmsVerifyCodeRequest::getExtendFunction() const {
  return extendFunction_;
}

void CheckSmsVerifyCodeRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string CheckSmsVerifyCodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void CheckSmsVerifyCodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string CheckSmsVerifyCodeRequest::getVerifyCode() const {
  return verifyCode_;
}

void CheckSmsVerifyCodeRequest::setVerifyCode(const std::string &verifyCode) {
  verifyCode_ = verifyCode;
  setParameter(std::string("VerifyCode"), verifyCode);
}

std::string CheckSmsVerifyCodeRequest::getRouteName() const {
  return routeName_;
}

void CheckSmsVerifyCodeRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string CheckSmsVerifyCodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CheckSmsVerifyCodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long CheckSmsVerifyCodeRequest::getOwnerId() const {
  return ownerId_;
}

void CheckSmsVerifyCodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CheckSmsVerifyCodeRequest::getSchemeName() const {
  return schemeName_;
}

void CheckSmsVerifyCodeRequest::setSchemeName(const std::string &schemeName) {
  schemeName_ = schemeName;
  setParameter(std::string("SchemeName"), schemeName);
}

std::string CheckSmsVerifyCodeRequest::getOutId() const {
  return outId_;
}

void CheckSmsVerifyCodeRequest::setOutId(const std::string &outId) {
  outId_ = outId;
  setParameter(std::string("OutId"), outId);
}

