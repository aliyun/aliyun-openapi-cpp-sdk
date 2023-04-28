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

#include <alibabacloud/dytnsapi/model/PhoneNumberStatusForVirtualRequest.h>

using AlibabaCloud::Dytnsapi::Model::PhoneNumberStatusForVirtualRequest;

PhoneNumberStatusForVirtualRequest::PhoneNumberStatusForVirtualRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "PhoneNumberStatusForVirtual") {
  setMethod(HttpRequest::Method::Post);
}

PhoneNumberStatusForVirtualRequest::~PhoneNumberStatusForVirtualRequest() {}

long PhoneNumberStatusForVirtualRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void PhoneNumberStatusForVirtualRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string PhoneNumberStatusForVirtualRequest::getExtendFunction() const {
  return extendFunction_;
}

void PhoneNumberStatusForVirtualRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string PhoneNumberStatusForVirtualRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void PhoneNumberStatusForVirtualRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string PhoneNumberStatusForVirtualRequest::getRouteName() const {
  return routeName_;
}

void PhoneNumberStatusForVirtualRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string PhoneNumberStatusForVirtualRequest::getMask() const {
  return mask_;
}

void PhoneNumberStatusForVirtualRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string PhoneNumberStatusForVirtualRequest::getResultCount() const {
  return resultCount_;
}

void PhoneNumberStatusForVirtualRequest::setResultCount(const std::string &resultCount) {
  resultCount_ = resultCount;
  setParameter(std::string("ResultCount"), resultCount);
}

std::string PhoneNumberStatusForVirtualRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void PhoneNumberStatusForVirtualRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long PhoneNumberStatusForVirtualRequest::getOwnerId() const {
  return ownerId_;
}

void PhoneNumberStatusForVirtualRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string PhoneNumberStatusForVirtualRequest::getAuthCode() const {
  return authCode_;
}

void PhoneNumberStatusForVirtualRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string PhoneNumberStatusForVirtualRequest::getInputNumber() const {
  return inputNumber_;
}

void PhoneNumberStatusForVirtualRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

std::string PhoneNumberStatusForVirtualRequest::getFlowName() const {
  return flowName_;
}

void PhoneNumberStatusForVirtualRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

std::string PhoneNumberStatusForVirtualRequest::getPhoneStatusSceneCode() const {
  return phoneStatusSceneCode_;
}

void PhoneNumberStatusForVirtualRequest::setPhoneStatusSceneCode(const std::string &phoneStatusSceneCode) {
  phoneStatusSceneCode_ = phoneStatusSceneCode;
  setParameter(std::string("PhoneStatusSceneCode"), phoneStatusSceneCode);
}

