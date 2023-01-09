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

#include <alibabacloud/dytnsapi/model/InvalidPhoneNumberFilterRequest.h>

using AlibabaCloud::Dytnsapi::Model::InvalidPhoneNumberFilterRequest;

InvalidPhoneNumberFilterRequest::InvalidPhoneNumberFilterRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "InvalidPhoneNumberFilter") {
  setMethod(HttpRequest::Method::Post);
}

InvalidPhoneNumberFilterRequest::~InvalidPhoneNumberFilterRequest() {}

long InvalidPhoneNumberFilterRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void InvalidPhoneNumberFilterRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string InvalidPhoneNumberFilterRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void InvalidPhoneNumberFilterRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string InvalidPhoneNumberFilterRequest::getMask() const {
  return mask_;
}

void InvalidPhoneNumberFilterRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string InvalidPhoneNumberFilterRequest::getOfferType() const {
  return offerType_;
}

void InvalidPhoneNumberFilterRequest::setOfferType(const std::string &offerType) {
  offerType_ = offerType;
  setParameter(std::string("OfferType"), offerType);
}

std::string InvalidPhoneNumberFilterRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void InvalidPhoneNumberFilterRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long InvalidPhoneNumberFilterRequest::getOwnerId() const {
  return ownerId_;
}

void InvalidPhoneNumberFilterRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string InvalidPhoneNumberFilterRequest::getAuthCode() const {
  return authCode_;
}

void InvalidPhoneNumberFilterRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string InvalidPhoneNumberFilterRequest::getInputNumber() const {
  return inputNumber_;
}

void InvalidPhoneNumberFilterRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

