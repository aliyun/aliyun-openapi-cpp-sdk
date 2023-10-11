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

#include <alibabacloud/dypnsapi/model/VerifySmsCodeRequest.h>

using AlibabaCloud::Dypnsapi::Model::VerifySmsCodeRequest;

VerifySmsCodeRequest::VerifySmsCodeRequest()
    : RpcServiceRequest("dypnsapi", "2017-05-25", "VerifySmsCode") {
  setMethod(HttpRequest::Method::Post);
}

VerifySmsCodeRequest::~VerifySmsCodeRequest() {}

long VerifySmsCodeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void VerifySmsCodeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string VerifySmsCodeRequest::getProductCode() const {
  return productCode_;
}

void VerifySmsCodeRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string VerifySmsCodeRequest::getSmsToken() const {
  return smsToken_;
}

void VerifySmsCodeRequest::setSmsToken(const std::string &smsToken) {
  smsToken_ = smsToken;
  setParameter(std::string("SmsToken"), smsToken);
}

std::string VerifySmsCodeRequest::getPhoneNumber() const {
  return phoneNumber_;
}

void VerifySmsCodeRequest::setPhoneNumber(const std::string &phoneNumber) {
  phoneNumber_ = phoneNumber;
  setParameter(std::string("PhoneNumber"), phoneNumber);
}

std::string VerifySmsCodeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void VerifySmsCodeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string VerifySmsCodeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void VerifySmsCodeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long VerifySmsCodeRequest::getOwnerId() const {
  return ownerId_;
}

void VerifySmsCodeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string VerifySmsCodeRequest::getSmsCode() const {
  return smsCode_;
}

void VerifySmsCodeRequest::setSmsCode(const std::string &smsCode) {
  smsCode_ = smsCode;
  setParameter(std::string("SmsCode"), smsCode);
}

