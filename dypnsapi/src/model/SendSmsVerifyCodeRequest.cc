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

#include <alibabacloud/dypnsapi/model/SendSmsVerifyCodeRequest.h>

using AlibabaCloud::Dypnsapi::Model::SendSmsVerifyCodeRequest;

SendSmsVerifyCodeRequest::SendSmsVerifyCodeRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "SendSmsVerifyCode") {
  setMethod(HttpRequest::Method::Post);
}

SendSmsVerifyCodeRequest::~SendSmsVerifyCodeRequest() {}

long SendSmsVerifyCodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void SendSmsVerifyCodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string SendSmsVerifyCodeRequest::getCountryCode() const {
  return countryCode_;
}

void SendSmsVerifyCodeRequest::setCountryCode(const std::string &countryCode) {
  countryCode_ = countryCode;
  setParameter(std::string("CountryCode"), countryCode);
}

std::string SendSmsVerifyCodeRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void SendSmsVerifyCodeRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string SendSmsVerifyCodeRequest::getExtendFunction() const {
  return extendFunction_;
}

void SendSmsVerifyCodeRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string SendSmsVerifyCodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void SendSmsVerifyCodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string SendSmsVerifyCodeRequest::getSmsUpExtendCode() const {
  return smsUpExtendCode_;
}

void SendSmsVerifyCodeRequest::setSmsUpExtendCode(const std::string &smsUpExtendCode) {
  smsUpExtendCode_ = smsUpExtendCode;
  setParameter(std::string("SmsUpExtendCode"), smsUpExtendCode);
}

std::string SendSmsVerifyCodeRequest::getSignName() const {
  return signName_;
}

void SendSmsVerifyCodeRequest::setSignName(const std::string &signName) {
  signName_ = signName;
  setParameter(std::string("SignName"), signName);
}

std::string SendSmsVerifyCodeRequest::getRouteName() const {
  return routeName_;
}

void SendSmsVerifyCodeRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string SendSmsVerifyCodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void SendSmsVerifyCodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long SendSmsVerifyCodeRequest::getValidTime() const {
  return validTime_;
}

void SendSmsVerifyCodeRequest::setValidTime(long validTime) {
  validTime_ = validTime;
  setParameter(std::string("ValidTime"), std::to_string(validTime));
}

long SendSmsVerifyCodeRequest::getOwnerId() const {
  return ownerId_;
}

void SendSmsVerifyCodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

bool SendSmsVerifyCodeRequest::getReturnVerifyCode() const {
  return returnVerifyCode_;
}

void SendSmsVerifyCodeRequest::setReturnVerifyCode(bool returnVerifyCode) {
  returnVerifyCode_ = returnVerifyCode;
  setParameter(std::string("ReturnVerifyCode"), returnVerifyCode ? "true" : "false");
}

long SendSmsVerifyCodeRequest::getCodeType() const {
  return codeType_;
}

void SendSmsVerifyCodeRequest::setCodeType(long codeType) {
  codeType_ = codeType;
  setParameter(std::string("CodeType"), std::to_string(codeType));
}

std::string SendSmsVerifyCodeRequest::getSchemeName() const {
  return schemeName_;
}

void SendSmsVerifyCodeRequest::setSchemeName(const std::string &schemeName) {
  schemeName_ = schemeName;
  setParameter(std::string("SchemeName"), schemeName);
}

long SendSmsVerifyCodeRequest::getDuplicatePolicy() const {
  return duplicatePolicy_;
}

void SendSmsVerifyCodeRequest::setDuplicatePolicy(long duplicatePolicy) {
  duplicatePolicy_ = duplicatePolicy;
  setParameter(std::string("DuplicatePolicy"), std::to_string(duplicatePolicy));
}

std::string SendSmsVerifyCodeRequest::getOutId() const {
  return outId_;
}

void SendSmsVerifyCodeRequest::setOutId(const std::string &outId) {
  outId_ = outId;
  setParameter(std::string("OutId"), outId);
}

long SendSmsVerifyCodeRequest::getInterval() const {
  return interval_;
}

void SendSmsVerifyCodeRequest::setInterval(long interval) {
  interval_ = interval;
  setParameter(std::string("Interval"), std::to_string(interval));
}

std::string SendSmsVerifyCodeRequest::getTemplateCode() const {
  return templateCode_;
}

void SendSmsVerifyCodeRequest::setTemplateCode(const std::string &templateCode) {
  templateCode_ = templateCode;
  setParameter(std::string("TemplateCode"), templateCode);
}

std::string SendSmsVerifyCodeRequest::getTemplateParam() const {
  return templateParam_;
}

void SendSmsVerifyCodeRequest::setTemplateParam(const std::string &templateParam) {
  templateParam_ = templateParam;
  setParameter(std::string("TemplateParam"), templateParam);
}

long SendSmsVerifyCodeRequest::getCodeLength() const {
  return codeLength_;
}

void SendSmsVerifyCodeRequest::setCodeLength(long codeLength) {
  codeLength_ = codeLength;
  setParameter(std::string("CodeLength"), std::to_string(codeLength));
}

