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

#include <alibabacloud/dytnsapi/model/PhoneNumberStatusForRealRequest.h>

using AlibabaCloud::Dytnsapi::Model::PhoneNumberStatusForRealRequest;

PhoneNumberStatusForRealRequest::PhoneNumberStatusForRealRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "PhoneNumberStatusForReal") {
  setMethod(HttpRequest::Method::Post);
}

PhoneNumberStatusForRealRequest::~PhoneNumberStatusForRealRequest() {}

long PhoneNumberStatusForRealRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PhoneNumberStatusForRealRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PhoneNumberStatusForRealRequest::getExtendFunction() const {
  return extendFunction_;
}

void PhoneNumberStatusForRealRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string PhoneNumberStatusForRealRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void PhoneNumberStatusForRealRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string PhoneNumberStatusForRealRequest::getRouteName() const {
  return routeName_;
}

void PhoneNumberStatusForRealRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string PhoneNumberStatusForRealRequest::getMask() const {
  return mask_;
}

void PhoneNumberStatusForRealRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string PhoneNumberStatusForRealRequest::getResultCount() const {
  return resultCount_;
}

void PhoneNumberStatusForRealRequest::setResultCount(const std::string &resultCount) {
  resultCount_ = resultCount;
  setParameter(std::string("ResultCount"), resultCount);
}

std::string PhoneNumberStatusForRealRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PhoneNumberStatusForRealRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long PhoneNumberStatusForRealRequest::getOwnerId() const {
  return ownerId_;
}

void PhoneNumberStatusForRealRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string PhoneNumberStatusForRealRequest::getAuthCode() const {
  return authCode_;
}

void PhoneNumberStatusForRealRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string PhoneNumberStatusForRealRequest::getInputNumber() const {
  return inputNumber_;
}

void PhoneNumberStatusForRealRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

std::string PhoneNumberStatusForRealRequest::getFlowName() const {
  return flowName_;
}

void PhoneNumberStatusForRealRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

std::string PhoneNumberStatusForRealRequest::getPhoneStatusSceneCode() const {
  return phoneStatusSceneCode_;
}

void PhoneNumberStatusForRealRequest::setPhoneStatusSceneCode(const std::string &phoneStatusSceneCode) {
  phoneStatusSceneCode_ = phoneStatusSceneCode;
  setParameter(std::string("PhoneStatusSceneCode"), phoneStatusSceneCode);
}

