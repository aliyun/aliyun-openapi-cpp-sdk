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

#include <alibabacloud/dytnsapi/model/PhoneNumberEncryptRequest.h>

using AlibabaCloud::Dytnsapi::Model::PhoneNumberEncryptRequest;

PhoneNumberEncryptRequest::PhoneNumberEncryptRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "PhoneNumberEncrypt") {
  setMethod(HttpRequest::Method::Post);
}

PhoneNumberEncryptRequest::~PhoneNumberEncryptRequest() {}

long PhoneNumberEncryptRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PhoneNumberEncryptRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PhoneNumberEncryptRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void PhoneNumberEncryptRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string PhoneNumberEncryptRequest::getMask() const {
  return mask_;
}

void PhoneNumberEncryptRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string PhoneNumberEncryptRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PhoneNumberEncryptRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long PhoneNumberEncryptRequest::getOwnerId() const {
  return ownerId_;
}

void PhoneNumberEncryptRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string PhoneNumberEncryptRequest::getAuthCode() const {
  return authCode_;
}

void PhoneNumberEncryptRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string PhoneNumberEncryptRequest::getInputNumber() const {
  return inputNumber_;
}

void PhoneNumberEncryptRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

