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

#include <alibabacloud/dytnsapi/model/TwoElementsVerificationRequest.h>

using AlibabaCloud::Dytnsapi::Model::TwoElementsVerificationRequest;

TwoElementsVerificationRequest::TwoElementsVerificationRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "TwoElementsVerification") {
  setMethod(HttpRequest::Method::Post);
}

TwoElementsVerificationRequest::~TwoElementsVerificationRequest() {}

long TwoElementsVerificationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void TwoElementsVerificationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string TwoElementsVerificationRequest::getExtendFunction() const {
  return extendFunction_;
}

void TwoElementsVerificationRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string TwoElementsVerificationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void TwoElementsVerificationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string TwoElementsVerificationRequest::getRouteName() const {
  return routeName_;
}

void TwoElementsVerificationRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string TwoElementsVerificationRequest::getMask() const {
  return mask_;
}

void TwoElementsVerificationRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string TwoElementsVerificationRequest::getResultCount() const {
  return resultCount_;
}

void TwoElementsVerificationRequest::setResultCount(const std::string &resultCount) {
  resultCount_ = resultCount;
  setParameter(std::string("ResultCount"), resultCount);
}

std::string TwoElementsVerificationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void TwoElementsVerificationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long TwoElementsVerificationRequest::getOwnerId() const {
  return ownerId_;
}

void TwoElementsVerificationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string TwoElementsVerificationRequest::getNumberType() const {
  return numberType_;
}

void TwoElementsVerificationRequest::setNumberType(const std::string &numberType) {
  numberType_ = numberType;
  setParameter(std::string("NumberType"), numberType);
}

std::string TwoElementsVerificationRequest::getAuthCode() const {
  return authCode_;
}

void TwoElementsVerificationRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string TwoElementsVerificationRequest::getInputNumber() const {
  return inputNumber_;
}

void TwoElementsVerificationRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

std::string TwoElementsVerificationRequest::getName() const {
  return name_;
}

void TwoElementsVerificationRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string TwoElementsVerificationRequest::getFlowName() const {
  return flowName_;
}

void TwoElementsVerificationRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

