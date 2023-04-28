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

#include <alibabacloud/dytnsapi/model/PhoneNumberStatusForSmsRequest.h>

using AlibabaCloud::Dytnsapi::Model::PhoneNumberStatusForSmsRequest;

PhoneNumberStatusForSmsRequest::PhoneNumberStatusForSmsRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "PhoneNumberStatusForSms") {
  setMethod(HttpRequest::Method::Post);
}

PhoneNumberStatusForSmsRequest::~PhoneNumberStatusForSmsRequest() {}

long PhoneNumberStatusForSmsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PhoneNumberStatusForSmsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PhoneNumberStatusForSmsRequest::getExtendFunction() const {
  return extendFunction_;
}

void PhoneNumberStatusForSmsRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string PhoneNumberStatusForSmsRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void PhoneNumberStatusForSmsRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string PhoneNumberStatusForSmsRequest::getRouteName() const {
  return routeName_;
}

void PhoneNumberStatusForSmsRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string PhoneNumberStatusForSmsRequest::getMask() const {
  return mask_;
}

void PhoneNumberStatusForSmsRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string PhoneNumberStatusForSmsRequest::getResultCount() const {
  return resultCount_;
}

void PhoneNumberStatusForSmsRequest::setResultCount(const std::string &resultCount) {
  resultCount_ = resultCount;
  setParameter(std::string("ResultCount"), resultCount);
}

std::string PhoneNumberStatusForSmsRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PhoneNumberStatusForSmsRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long PhoneNumberStatusForSmsRequest::getOwnerId() const {
  return ownerId_;
}

void PhoneNumberStatusForSmsRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string PhoneNumberStatusForSmsRequest::getAuthCode() const {
  return authCode_;
}

void PhoneNumberStatusForSmsRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string PhoneNumberStatusForSmsRequest::getInputNumber() const {
  return inputNumber_;
}

void PhoneNumberStatusForSmsRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

std::string PhoneNumberStatusForSmsRequest::getFlowName() const {
  return flowName_;
}

void PhoneNumberStatusForSmsRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

std::string PhoneNumberStatusForSmsRequest::getPhoneStatusSceneCode() const {
  return phoneStatusSceneCode_;
}

void PhoneNumberStatusForSmsRequest::setPhoneStatusSceneCode(const std::string &phoneStatusSceneCode) {
  phoneStatusSceneCode_ = phoneStatusSceneCode;
  setParameter(std::string("PhoneStatusSceneCode"), phoneStatusSceneCode);
}

