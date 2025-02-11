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

#include <alibabacloud/cloudauth/model/CredentialVerifyRequest.h>

using AlibabaCloud::Cloudauth::Model::CredentialVerifyRequest;

CredentialVerifyRequest::CredentialVerifyRequest()
    : RpcServiceRequest("cloudauth", "2019-03-07", "CredentialVerify") {
  setMethod(HttpRequest::Method::Post);
}

CredentialVerifyRequest::~CredentialVerifyRequest() {}

std::string CredentialVerifyRequest::getProductCode() const {
  return productCode_;
}

void CredentialVerifyRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string CredentialVerifyRequest::getIsOCR() const {
  return isOCR_;
}

void CredentialVerifyRequest::setIsOCR(const std::string &isOCR) {
  isOCR_ = isOCR;
  setParameter(std::string("IsOCR"), isOCR);
}

std::string CredentialVerifyRequest::getIsCheck() const {
  return isCheck_;
}

void CredentialVerifyRequest::setIsCheck(const std::string &isCheck) {
  isCheck_ = isCheck;
  setParameter(std::string("IsCheck"), isCheck);
}

std::string CredentialVerifyRequest::getImageContext() const {
  return imageContext_;
}

void CredentialVerifyRequest::setImageContext(const std::string &imageContext) {
  imageContext_ = imageContext;
  setBodyParameter(std::string("ImageContext"), imageContext);
}

std::string CredentialVerifyRequest::getCredType() const {
  return credType_;
}

void CredentialVerifyRequest::setCredType(const std::string &credType) {
  credType_ = credType;
  setParameter(std::string("CredType"), credType);
}

std::string CredentialVerifyRequest::getPromptModel() const {
  return promptModel_;
}

void CredentialVerifyRequest::setPromptModel(const std::string &promptModel) {
  promptModel_ = promptModel;
  setParameter(std::string("PromptModel"), promptModel);
}

std::string CredentialVerifyRequest::getIdentifyNum() const {
  return identifyNum_;
}

void CredentialVerifyRequest::setIdentifyNum(const std::string &identifyNum) {
  identifyNum_ = identifyNum;
  setParameter(std::string("IdentifyNum"), identifyNum);
}

std::string CredentialVerifyRequest::getCredName() const {
  return credName_;
}

void CredentialVerifyRequest::setCredName(const std::string &credName) {
  credName_ = credName;
  setParameter(std::string("CredName"), credName);
}

std::string CredentialVerifyRequest::getMerchantId() const {
  return merchantId_;
}

void CredentialVerifyRequest::setMerchantId(const std::string &merchantId) {
  merchantId_ = merchantId;
  setParameter(std::string("MerchantId"), merchantId);
}

std::vector<CredentialVerifyRequest::MerchantDetail> CredentialVerifyRequest::getMerchantDetail() const {
  return merchantDetail_;
}

void CredentialVerifyRequest::setMerchantDetail(const std::vector<CredentialVerifyRequest::MerchantDetail> &merchantDetail) {
  merchantDetail_ = merchantDetail;
  for(int dep1 = 0; dep1 != merchantDetail.size(); dep1++) {
    setParameter(std::string("MerchantDetail") + "." + std::to_string(dep1 + 1) + ".Value", merchantDetail[dep1].value);
    setParameter(std::string("MerchantDetail") + "." + std::to_string(dep1 + 1) + ".Key", merchantDetail[dep1].key);
  }
}

std::string CredentialVerifyRequest::getImageUrl() const {
  return imageUrl_;
}

void CredentialVerifyRequest::setImageUrl(const std::string &imageUrl) {
  imageUrl_ = imageUrl;
  setParameter(std::string("ImageUrl"), imageUrl);
}

std::string CredentialVerifyRequest::getCertNum() const {
  return certNum_;
}

void CredentialVerifyRequest::setCertNum(const std::string &certNum) {
  certNum_ = certNum;
  setParameter(std::string("CertNum"), certNum);
}

std::string CredentialVerifyRequest::getPrompt() const {
  return prompt_;
}

void CredentialVerifyRequest::setPrompt(const std::string &prompt) {
  prompt_ = prompt;
  setParameter(std::string("Prompt"), prompt);
}

std::string CredentialVerifyRequest::getUserName() const {
  return userName_;
}

void CredentialVerifyRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

