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

#include <alibabacloud/dytnsapi/model/PhoneNumberStatusForAccountRequest.h>

using AlibabaCloud::Dytnsapi::Model::PhoneNumberStatusForAccountRequest;

PhoneNumberStatusForAccountRequest::PhoneNumberStatusForAccountRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "PhoneNumberStatusForAccount") {
  setMethod(HttpRequest::Method::Post);
}

PhoneNumberStatusForAccountRequest::~PhoneNumberStatusForAccountRequest() {}

long PhoneNumberStatusForAccountRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PhoneNumberStatusForAccountRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PhoneNumberStatusForAccountRequest::getExtendFunction() const {
  return extendFunction_;
}

void PhoneNumberStatusForAccountRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string PhoneNumberStatusForAccountRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void PhoneNumberStatusForAccountRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string PhoneNumberStatusForAccountRequest::getRouteName() const {
  return routeName_;
}

void PhoneNumberStatusForAccountRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string PhoneNumberStatusForAccountRequest::getMask() const {
  return mask_;
}

void PhoneNumberStatusForAccountRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string PhoneNumberStatusForAccountRequest::getResultCount() const {
  return resultCount_;
}

void PhoneNumberStatusForAccountRequest::setResultCount(const std::string &resultCount) {
  resultCount_ = resultCount;
  setParameter(std::string("ResultCount"), resultCount);
}

std::string PhoneNumberStatusForAccountRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PhoneNumberStatusForAccountRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long PhoneNumberStatusForAccountRequest::getOwnerId() const {
  return ownerId_;
}

void PhoneNumberStatusForAccountRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string PhoneNumberStatusForAccountRequest::getAuthCode() const {
  return authCode_;
}

void PhoneNumberStatusForAccountRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string PhoneNumberStatusForAccountRequest::getInputNumber() const {
  return inputNumber_;
}

void PhoneNumberStatusForAccountRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

std::string PhoneNumberStatusForAccountRequest::getFlowName() const {
  return flowName_;
}

void PhoneNumberStatusForAccountRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

std::string PhoneNumberStatusForAccountRequest::getPhoneStatusSceneCode() const {
  return phoneStatusSceneCode_;
}

void PhoneNumberStatusForAccountRequest::setPhoneStatusSceneCode(const std::string &phoneStatusSceneCode) {
  phoneStatusSceneCode_ = phoneStatusSceneCode;
  setParameter(std::string("PhoneStatusSceneCode"), phoneStatusSceneCode);
}

