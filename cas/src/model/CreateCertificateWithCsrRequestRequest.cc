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

#include <alibabacloud/cas/model/CreateCertificateWithCsrRequestRequest.h>

using AlibabaCloud::Cas::Model::CreateCertificateWithCsrRequestRequest;

CreateCertificateWithCsrRequestRequest::CreateCertificateWithCsrRequestRequest()
    : RpcServiceRequest("cas", "2020-04-07", "CreateCertificateWithCsrRequest") {
  setMethod(HttpRequest::Method::Post);
}

CreateCertificateWithCsrRequestRequest::~CreateCertificateWithCsrRequestRequest() {}

std::string CreateCertificateWithCsrRequestRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateCertificateWithCsrRequestRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateCertificateWithCsrRequestRequest::getCsr() const {
  return csr_;
}

void CreateCertificateWithCsrRequestRequest::setCsr(const std::string &csr) {
  csr_ = csr;
  setParameter(std::string("Csr"), csr);
}

std::string CreateCertificateWithCsrRequestRequest::getProductCode() const {
  return productCode_;
}

void CreateCertificateWithCsrRequestRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string CreateCertificateWithCsrRequestRequest::getUsername() const {
  return username_;
}

void CreateCertificateWithCsrRequestRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

std::string CreateCertificateWithCsrRequestRequest::getPhone() const {
  return phone_;
}

void CreateCertificateWithCsrRequestRequest::setPhone(const std::string &phone) {
  phone_ = phone;
  setParameter(std::string("Phone"), phone);
}

std::string CreateCertificateWithCsrRequestRequest::getEmail() const {
  return email_;
}

void CreateCertificateWithCsrRequestRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string CreateCertificateWithCsrRequestRequest::getValidateType() const {
  return validateType_;
}

void CreateCertificateWithCsrRequestRequest::setValidateType(const std::string &validateType) {
  validateType_ = validateType;
  setParameter(std::string("ValidateType"), validateType);
}

