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

#include <alibabacloud/dytnsapi/model/ThreeElementsVerificationRequest.h>

using AlibabaCloud::Dytnsapi::Model::ThreeElementsVerificationRequest;

ThreeElementsVerificationRequest::ThreeElementsVerificationRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "ThreeElementsVerification") {
  setMethod(HttpRequest::Method::Post);
}

ThreeElementsVerificationRequest::~ThreeElementsVerificationRequest() {}

long ThreeElementsVerificationRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ThreeElementsVerificationRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ThreeElementsVerificationRequest::getExtendFunction() const {
  return extendFunction_;
}

void ThreeElementsVerificationRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string ThreeElementsVerificationRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ThreeElementsVerificationRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ThreeElementsVerificationRequest::getCertCode() const {
  return certCode_;
}

void ThreeElementsVerificationRequest::setCertCode(const std::string &certCode) {
  certCode_ = certCode;
  setParameter(std::string("CertCode"), certCode);
}

std::string ThreeElementsVerificationRequest::getRouteName() const {
  return routeName_;
}

void ThreeElementsVerificationRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string ThreeElementsVerificationRequest::getMask() const {
  return mask_;
}

void ThreeElementsVerificationRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string ThreeElementsVerificationRequest::getResultCount() const {
  return resultCount_;
}

void ThreeElementsVerificationRequest::setResultCount(const std::string &resultCount) {
  resultCount_ = resultCount;
  setParameter(std::string("ResultCount"), resultCount);
}

std::string ThreeElementsVerificationRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ThreeElementsVerificationRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long ThreeElementsVerificationRequest::getOwnerId() const {
  return ownerId_;
}

void ThreeElementsVerificationRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ThreeElementsVerificationRequest::getAuthCode() const {
  return authCode_;
}

void ThreeElementsVerificationRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string ThreeElementsVerificationRequest::getInputNumber() const {
  return inputNumber_;
}

void ThreeElementsVerificationRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

std::string ThreeElementsVerificationRequest::getName() const {
  return name_;
}

void ThreeElementsVerificationRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ThreeElementsVerificationRequest::getFlowName() const {
  return flowName_;
}

void ThreeElementsVerificationRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

