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

#include <alibabacloud/cloudauth/model/DescribeVerifyTokenRequest.h>

using AlibabaCloud::Cloudauth::Model::DescribeVerifyTokenRequest;

DescribeVerifyTokenRequest::DescribeVerifyTokenRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "DescribeVerifyToken") {
  setMethod(HttpRequest::Method::Post);
}

DescribeVerifyTokenRequest::~DescribeVerifyTokenRequest() {}

std::string DescribeVerifyTokenRequest::getFaceRetainedImageUrl() const {
  return faceRetainedImageUrl_;
}

void DescribeVerifyTokenRequest::setFaceRetainedImageUrl(const std::string &faceRetainedImageUrl) {
  faceRetainedImageUrl_ = faceRetainedImageUrl;
  setParameter(std::string("FaceRetainedImageUrl"), faceRetainedImageUrl);
}

std::string DescribeVerifyTokenRequest::getUserId() const {
  return userId_;
}

void DescribeVerifyTokenRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string DescribeVerifyTokenRequest::getCallbackSeed() const {
  return callbackSeed_;
}

void DescribeVerifyTokenRequest::setCallbackSeed(const std::string &callbackSeed) {
  callbackSeed_ = callbackSeed;
  setParameter(std::string("CallbackSeed"), callbackSeed);
}

std::string DescribeVerifyTokenRequest::getUserIp() const {
  return userIp_;
}

void DescribeVerifyTokenRequest::setUserIp(const std::string &userIp) {
  userIp_ = userIp;
  setParameter(std::string("UserIp"), userIp);
}

std::string DescribeVerifyTokenRequest::getIdCardBackImageUrl() const {
  return idCardBackImageUrl_;
}

void DescribeVerifyTokenRequest::setIdCardBackImageUrl(const std::string &idCardBackImageUrl) {
  idCardBackImageUrl_ = idCardBackImageUrl;
  setParameter(std::string("IdCardBackImageUrl"), idCardBackImageUrl);
}

std::string DescribeVerifyTokenRequest::getIdCardNumber() const {
  return idCardNumber_;
}

void DescribeVerifyTokenRequest::setIdCardNumber(const std::string &idCardNumber) {
  idCardNumber_ = idCardNumber;
  setParameter(std::string("IdCardNumber"), idCardNumber);
}

std::string DescribeVerifyTokenRequest::getIdCardFrontImageUrl() const {
  return idCardFrontImageUrl_;
}

void DescribeVerifyTokenRequest::setIdCardFrontImageUrl(const std::string &idCardFrontImageUrl) {
  idCardFrontImageUrl_ = idCardFrontImageUrl;
  setParameter(std::string("IdCardFrontImageUrl"), idCardFrontImageUrl);
}

std::string DescribeVerifyTokenRequest::getBizType() const {
  return bizType_;
}

void DescribeVerifyTokenRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), bizType);
}

std::string DescribeVerifyTokenRequest::getPassedRedirectUrl() const {
  return passedRedirectUrl_;
}

void DescribeVerifyTokenRequest::setPassedRedirectUrl(const std::string &passedRedirectUrl) {
  passedRedirectUrl_ = passedRedirectUrl;
  setParameter(std::string("PassedRedirectUrl"), passedRedirectUrl);
}

long DescribeVerifyTokenRequest::getUserRegistTime() const {
  return userRegistTime_;
}

void DescribeVerifyTokenRequest::setUserRegistTime(long userRegistTime) {
  userRegistTime_ = userRegistTime;
  setParameter(std::string("UserRegistTime"), std::to_string(userRegistTime));
}

std::string DescribeVerifyTokenRequest::getBizId() const {
  return bizId_;
}

void DescribeVerifyTokenRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

std::string DescribeVerifyTokenRequest::getName() const {
  return name_;
}

void DescribeVerifyTokenRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string DescribeVerifyTokenRequest::getUserPhoneNumber() const {
  return userPhoneNumber_;
}

void DescribeVerifyTokenRequest::setUserPhoneNumber(const std::string &userPhoneNumber) {
  userPhoneNumber_ = userPhoneNumber;
  setParameter(std::string("UserPhoneNumber"), userPhoneNumber);
}

std::string DescribeVerifyTokenRequest::getCallbackUrl() const {
  return callbackUrl_;
}

void DescribeVerifyTokenRequest::setCallbackUrl(const std::string &callbackUrl) {
  callbackUrl_ = callbackUrl;
  setParameter(std::string("CallbackUrl"), callbackUrl);
}

std::string DescribeVerifyTokenRequest::getFailedRedirectUrl() const {
  return failedRedirectUrl_;
}

void DescribeVerifyTokenRequest::setFailedRedirectUrl(const std::string &failedRedirectUrl) {
  failedRedirectUrl_ = failedRedirectUrl;
  setParameter(std::string("FailedRedirectUrl"), failedRedirectUrl);
}

