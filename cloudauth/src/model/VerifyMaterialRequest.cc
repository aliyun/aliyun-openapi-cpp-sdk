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

#include <alibabacloud/cloudauth/model/VerifyMaterialRequest.h>

using AlibabaCloud::Cloudauth::Model::VerifyMaterialRequest;

VerifyMaterialRequest::VerifyMaterialRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "VerifyMaterial") {
  setMethod(HttpRequest::Method::Post);
}

VerifyMaterialRequest::~VerifyMaterialRequest() {}

std::string VerifyMaterialRequest::getFaceImageUrl() const {
  return faceImageUrl_;
}

void VerifyMaterialRequest::setFaceImageUrl(const std::string &faceImageUrl) {
  faceImageUrl_ = faceImageUrl;
  setParameter(std::string("FaceImageUrl"), faceImageUrl);
}

std::string VerifyMaterialRequest::getUserId() const {
  return userId_;
}

void VerifyMaterialRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string VerifyMaterialRequest::getIdCardBackImageUrl() const {
  return idCardBackImageUrl_;
}

void VerifyMaterialRequest::setIdCardBackImageUrl(const std::string &idCardBackImageUrl) {
  idCardBackImageUrl_ = idCardBackImageUrl;
  setParameter(std::string("IdCardBackImageUrl"), idCardBackImageUrl);
}

std::string VerifyMaterialRequest::getIdCardNumber() const {
  return idCardNumber_;
}

void VerifyMaterialRequest::setIdCardNumber(const std::string &idCardNumber) {
  idCardNumber_ = idCardNumber;
  setParameter(std::string("IdCardNumber"), idCardNumber);
}

std::string VerifyMaterialRequest::getIdCardFrontImageUrl() const {
  return idCardFrontImageUrl_;
}

void VerifyMaterialRequest::setIdCardFrontImageUrl(const std::string &idCardFrontImageUrl) {
  idCardFrontImageUrl_ = idCardFrontImageUrl;
  setParameter(std::string("IdCardFrontImageUrl"), idCardFrontImageUrl);
}

std::string VerifyMaterialRequest::getBizType() const {
  return bizType_;
}

void VerifyMaterialRequest::setBizType(const std::string &bizType) {
  bizType_ = bizType;
  setParameter(std::string("BizType"), bizType);
}

std::string VerifyMaterialRequest::getBizId() const {
  return bizId_;
}

void VerifyMaterialRequest::setBizId(const std::string &bizId) {
  bizId_ = bizId;
  setParameter(std::string("BizId"), bizId);
}

std::string VerifyMaterialRequest::getName() const {
  return name_;
}

void VerifyMaterialRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

