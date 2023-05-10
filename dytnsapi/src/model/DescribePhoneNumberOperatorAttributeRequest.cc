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

#include <alibabacloud/dytnsapi/model/DescribePhoneNumberOperatorAttributeRequest.h>

using AlibabaCloud::Dytnsapi::Model::DescribePhoneNumberOperatorAttributeRequest;

DescribePhoneNumberOperatorAttributeRequest::DescribePhoneNumberOperatorAttributeRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "DescribePhoneNumberOperatorAttribute") {
  setMethod(HttpRequest::Method::Post);
}

DescribePhoneNumberOperatorAttributeRequest::~DescribePhoneNumberOperatorAttributeRequest() {}

long DescribePhoneNumberOperatorAttributeRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePhoneNumberOperatorAttributeRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePhoneNumberOperatorAttributeRequest::getExtendFunction() const {
  return extendFunction_;
}

void DescribePhoneNumberOperatorAttributeRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string DescribePhoneNumberOperatorAttributeRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePhoneNumberOperatorAttributeRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribePhoneNumberOperatorAttributeRequest::getRouteName() const {
  return routeName_;
}

void DescribePhoneNumberOperatorAttributeRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string DescribePhoneNumberOperatorAttributeRequest::getMask() const {
  return mask_;
}

void DescribePhoneNumberOperatorAttributeRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string DescribePhoneNumberOperatorAttributeRequest::getResultCount() const {
  return resultCount_;
}

void DescribePhoneNumberOperatorAttributeRequest::setResultCount(const std::string &resultCount) {
  resultCount_ = resultCount;
  setParameter(std::string("ResultCount"), resultCount);
}

std::string DescribePhoneNumberOperatorAttributeRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePhoneNumberOperatorAttributeRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribePhoneNumberOperatorAttributeRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePhoneNumberOperatorAttributeRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribePhoneNumberOperatorAttributeRequest::getAuthCode() const {
  return authCode_;
}

void DescribePhoneNumberOperatorAttributeRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string DescribePhoneNumberOperatorAttributeRequest::getInputNumber() const {
  return inputNumber_;
}

void DescribePhoneNumberOperatorAttributeRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

std::string DescribePhoneNumberOperatorAttributeRequest::getFlowName() const {
  return flowName_;
}

void DescribePhoneNumberOperatorAttributeRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

