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

#include <alibabacloud/dytnsapi/model/PhoneNumberStatusForPublicRequest.h>

using AlibabaCloud::Dytnsapi::Model::PhoneNumberStatusForPublicRequest;

PhoneNumberStatusForPublicRequest::PhoneNumberStatusForPublicRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "PhoneNumberStatusForPublic") {
  setMethod(HttpRequest::Method::Post);
}

PhoneNumberStatusForPublicRequest::~PhoneNumberStatusForPublicRequest() {}

long PhoneNumberStatusForPublicRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PhoneNumberStatusForPublicRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PhoneNumberStatusForPublicRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void PhoneNumberStatusForPublicRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string PhoneNumberStatusForPublicRequest::getRouteName() const {
  return routeName_;
}

void PhoneNumberStatusForPublicRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string PhoneNumberStatusForPublicRequest::getMask() const {
  return mask_;
}

void PhoneNumberStatusForPublicRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string PhoneNumberStatusForPublicRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PhoneNumberStatusForPublicRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long PhoneNumberStatusForPublicRequest::getOwnerId() const {
  return ownerId_;
}

void PhoneNumberStatusForPublicRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string PhoneNumberStatusForPublicRequest::getAuthCode() const {
  return authCode_;
}

void PhoneNumberStatusForPublicRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string PhoneNumberStatusForPublicRequest::getInputNumber() const {
  return inputNumber_;
}

void PhoneNumberStatusForPublicRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

