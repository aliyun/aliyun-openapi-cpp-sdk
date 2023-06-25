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

#include <alibabacloud/dytnsapi/model/DescribePhoneNumberAnalysisRequest.h>

using AlibabaCloud::Dytnsapi::Model::DescribePhoneNumberAnalysisRequest;

DescribePhoneNumberAnalysisRequest::DescribePhoneNumberAnalysisRequest()
    : RpcServiceRequest("dytnsapi", "2020-02-17", "DescribePhoneNumberAnalysis") {
  setMethod(HttpRequest::Method::Post);
}

DescribePhoneNumberAnalysisRequest::~DescribePhoneNumberAnalysisRequest() {}

long DescribePhoneNumberAnalysisRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void DescribePhoneNumberAnalysisRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string DescribePhoneNumberAnalysisRequest::getExtendFunction() const {
  return extendFunction_;
}

void DescribePhoneNumberAnalysisRequest::setExtendFunction(const std::string &extendFunction) {
  extendFunction_ = extendFunction;
  setParameter(std::string("ExtendFunction"), extendFunction);
}

std::string DescribePhoneNumberAnalysisRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void DescribePhoneNumberAnalysisRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

long DescribePhoneNumberAnalysisRequest::getRate() const {
  return rate_;
}

void DescribePhoneNumberAnalysisRequest::setRate(long rate) {
  rate_ = rate;
  setParameter(std::string("Rate"), std::to_string(rate));
}

std::string DescribePhoneNumberAnalysisRequest::getRouteName() const {
  return routeName_;
}

void DescribePhoneNumberAnalysisRequest::setRouteName(const std::string &routeName) {
  routeName_ = routeName;
  setParameter(std::string("RouteName"), routeName);
}

std::string DescribePhoneNumberAnalysisRequest::getMask() const {
  return mask_;
}

void DescribePhoneNumberAnalysisRequest::setMask(const std::string &mask) {
  mask_ = mask;
  setParameter(std::string("Mask"), mask);
}

std::string DescribePhoneNumberAnalysisRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void DescribePhoneNumberAnalysisRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

long DescribePhoneNumberAnalysisRequest::getOwnerId() const {
  return ownerId_;
}

void DescribePhoneNumberAnalysisRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

long DescribePhoneNumberAnalysisRequest::getNumberType() const {
  return numberType_;
}

void DescribePhoneNumberAnalysisRequest::setNumberType(long numberType) {
  numberType_ = numberType;
  setParameter(std::string("NumberType"), std::to_string(numberType));
}

std::string DescribePhoneNumberAnalysisRequest::getAuthCode() const {
  return authCode_;
}

void DescribePhoneNumberAnalysisRequest::setAuthCode(const std::string &authCode) {
  authCode_ = authCode;
  setParameter(std::string("AuthCode"), authCode);
}

std::string DescribePhoneNumberAnalysisRequest::getInputNumber() const {
  return inputNumber_;
}

void DescribePhoneNumberAnalysisRequest::setInputNumber(const std::string &inputNumber) {
  inputNumber_ = inputNumber;
  setParameter(std::string("InputNumber"), inputNumber);
}

