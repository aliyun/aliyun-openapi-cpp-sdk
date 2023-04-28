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

#include <alibabacloud/dytnsapi/model/DescribePhoneTwiceTelVerifyRequest.h>

using AlibabaCloud::Dytnsapi::Model::DescribePhoneTwiceTelVerifyRequest;

DescribePhoneTwiceTelVerifyRequest::DescribePhoneTwiceTelVerifyRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "DescribePhoneTwiceTelVerify") {
  setMethod(HttpRequest::Method::Post);
}

DescribePhoneTwiceTelVerifyRequest::~DescribePhoneTwiceTelVerifyRequest() {}

long DescribePhoneTwiceTelVerifyRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePhoneTwiceTelVerifyRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePhoneTwiceTelVerifyRequest::getStartTime() const {
  return startTime_;
}

void DescribePhoneTwiceTelVerifyRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string DescribePhoneTwiceTelVerifyRequest::getExtendFunction() const {
  return extendFunction_;
}

void DescribePhoneTwiceTelVerifyRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string DescribePhoneTwiceTelVerifyRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePhoneTwiceTelVerifyRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string DescribePhoneTwiceTelVerifyRequest::getRouteName() const {
  return routeName_;
}

void DescribePhoneTwiceTelVerifyRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string DescribePhoneTwiceTelVerifyRequest::getMask() const {
  return mask_;
}

void DescribePhoneTwiceTelVerifyRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string DescribePhoneTwiceTelVerifyRequest::getOfferType() const {
  return offerType_;
}

void DescribePhoneTwiceTelVerifyRequest::setOfferType(const std::string &offerType) {
  offerType_ = offerType;
  setParameter(std::string("OfferType"), offerType);
}

int DescribePhoneTwiceTelVerifyRequest::getResultCount() const {
  return resultCount_;
}

void DescribePhoneTwiceTelVerifyRequest::setResultCount(int resultCount) {
  resultCount_ = resultCount;
  setParameter(std::string("ResultCount"), std::to_string(resultCount));
}

std::string DescribePhoneTwiceTelVerifyRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePhoneTwiceTelVerifyRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribePhoneTwiceTelVerifyRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePhoneTwiceTelVerifyRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string DescribePhoneTwiceTelVerifyRequest::getAuthCode() const {
  return authCode_;
}

void DescribePhoneTwiceTelVerifyRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string DescribePhoneTwiceTelVerifyRequest::getInputNumber() const {
  return inputNumber_;
}

void DescribePhoneTwiceTelVerifyRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

std::string DescribePhoneTwiceTelVerifyRequest::getFlowName() const {
  return flowName_;
}

void DescribePhoneTwiceTelVerifyRequest::setFlowName(const std::string &flowName) {
  flowName_ = flowName;
  setParameter(std::string("FlowName"), flowName);
}

