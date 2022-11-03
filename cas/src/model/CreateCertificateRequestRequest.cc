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

#include <alibabacloud/cas/model/CreateCertificateRequestRequest.h>

using AlibabaCloud::Cas::Model::CreateCertificateRequestRequest;

CreateCertificateRequestRequest::CreateCertificateRequestRequest()
    : RpcServiceRequest("cas", "2020-04-07", "CreateCertificateRequest") {
  setMethod(HttpRequest::Method::Post);
}

CreateCertificateRequestRequest::~CreateCertificateRequestRequest() {}

std::string CreateCertificateRequestRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateCertificateRequestRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateCertificateRequestRequest::getProductCode() const {
  return productCode_;
}

void CreateCertificateRequestRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string CreateCertificateRequestRequest::getUsername() const {
  return username_;
}

void CreateCertificateRequestRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

std::string CreateCertificateRequestRequest::getPhone() const {
  return phone_;
}

void CreateCertificateRequestRequest::setPhone(const std::string &phone) {
  phone_ = phone;
  setParameter(std::string("Phone"), phone);
}

std::string CreateCertificateRequestRequest::getEmail() const {
  return email_;
}

void CreateCertificateRequestRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string CreateCertificateRequestRequest::getDomain() const {
  return domain_;
}

void CreateCertificateRequestRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string CreateCertificateRequestRequest::getValidateType() const {
  return validateType_;
}

void CreateCertificateRequestRequest::setValidateType(const std::string &validateType) {
  validateType_ = validateType;
  setParameter(std::string("ValidateType"), validateType);
}

