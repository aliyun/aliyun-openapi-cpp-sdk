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

#include <alibabacloud/dytnsapi/model/PhoneNumberStatusForVoiceRequest.h>

using AlibabaCloud::Dytnsapi::Model::PhoneNumberStatusForVoiceRequest;

PhoneNumberStatusForVoiceRequest::PhoneNumberStatusForVoiceRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "PhoneNumberStatusForVoice") {
  setMethod(HttpRequest::Method::Post);
}

PhoneNumberStatusForVoiceRequest::~PhoneNumberStatusForVoiceRequest() {}

long PhoneNumberStatusForVoiceRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PhoneNumberStatusForVoiceRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PhoneNumberStatusForVoiceRequest::getExtendFunction() const {
  return extendFunction_;
}

void PhoneNumberStatusForVoiceRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string PhoneNumberStatusForVoiceRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void PhoneNumberStatusForVoiceRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string PhoneNumberStatusForVoiceRequest::getRouteName() const {
  return routeName_;
}

void PhoneNumberStatusForVoiceRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string PhoneNumberStatusForVoiceRequest::getMask() const {
  return mask_;
}

void PhoneNumberStatusForVoiceRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string PhoneNumberStatusForVoiceRequest::getResultCount() const {
  return resultCount_;
}

void PhoneNumberStatusForVoiceRequest::setResultCount(const std::string &resultCount) {
  resultCount_ = resultCount;
  setParameter(std::string("ResultCount"), resultCount);
}

std::string PhoneNumberStatusForVoiceRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PhoneNumberStatusForVoiceRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long PhoneNumberStatusForVoiceRequest::getOwnerId() const {
  return ownerId_;
}

void PhoneNumberStatusForVoiceRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string PhoneNumberStatusForVoiceRequest::getAuthCode() const {
  return authCode_;
}

void PhoneNumberStatusForVoiceRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string PhoneNumberStatusForVoiceRequest::getInputNumber() const {
  return inputNumber_;
}

void PhoneNumberStatusForVoiceRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

std::string PhoneNumberStatusForVoiceRequest::getFlowName() const {
  return flowName_;
}

void PhoneNumberStatusForVoiceRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

std::string PhoneNumberStatusForVoiceRequest::getPhoneStatusSceneCode() const {
  return phoneStatusSceneCode_;
}

void PhoneNumberStatusForVoiceRequest::setPhoneStatusSceneCode(const std::string &phoneStatusSceneCode) {
  phoneStatusSceneCode_ = phoneStatusSceneCode;
  setParameter(std::string("PhoneStatusSceneCode"), phoneStatusSceneCode);
}

