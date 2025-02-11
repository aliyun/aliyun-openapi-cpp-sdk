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

#include <alibabacloud/cloudauth/model/BankMetaVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::BankMetaVerifyRequest;

BankMetaVerifyRequest::BankMetaVerifyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "BankMetaVerify") {
  setMethod(HttpRequest::Method::Post);
}

BankMetaVerifyRequest::~BankMetaVerifyRequest() {}

std::string BankMetaVerifyRequest::getParamType() const {
  return paramType_;
}

void BankMetaVerifyRequest::setParamType(const std::string &paramType) {
  paramType_ = paramType;
  setParameter(std::string("ParamType"), paramType);
}

std::string BankMetaVerifyRequest::getVerifyMode() const {
  return verifyMode_;
}

void BankMetaVerifyRequest::setVerifyMode(const std::string &verifyMode) {
  verifyMode_ = verifyMode;
  setParameter(std::string("VerifyMode"), verifyMode);
}

std::string BankMetaVerifyRequest::getIdentityType() const {
  return identityType_;
}

void BankMetaVerifyRequest::setIdentityType(const std::string &identityType) {
  identityType_ = identityType;
  setParameter(std::string("IdentityType"), identityType);
}

std::string BankMetaVerifyRequest::getMobile() const {
  return mobile_;
}

void BankMetaVerifyRequest::setMobile(const std::string &mobile) {
  mobile_ = mobile;
  setParameter(std::string("Mobile"), mobile);
}

std::string BankMetaVerifyRequest::getIdentifyNum() const {
  return identifyNum_;
}

void BankMetaVerifyRequest::setIdentifyNum(const std::string &identifyNum) {
  identifyNum_ = identifyNum;
  setParameter(std::string("IdentifyNum"), identifyNum);
}

std::string BankMetaVerifyRequest::getProductType() const {
  return productType_;
}

void BankMetaVerifyRequest::setProductType(const std::string &productType) {
  productType_ = productType;
  setParameter(std::string("ProductType"), productType);
}

std::string BankMetaVerifyRequest::getBankCard() const {
  return bankCard_;
}

void BankMetaVerifyRequest::setBankCard(const std::string &bankCard) {
  bankCard_ = bankCard;
  setParameter(std::string("BankCard"), bankCard);
}

std::string BankMetaVerifyRequest::getUserName() const {
  return userName_;
}

void BankMetaVerifyRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

