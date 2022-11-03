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

#include <alibabacloud/cas/model/CreateCertificateForPackageRequestRequest.h>

using AlibabaCloud::Cas::Model::CreateCertificateForPackageRequestRequest;

CreateCertificateForPackageRequestRequest::CreateCertificateForPackageRequestRequest()
    : RpcServiceRequest("cas", "2020-04-07", "CreateCertificateForPackageRequest") {
  setMethod(HttpRequest::Method::Post);
}

CreateCertificateForPackageRequestRequest::~CreateCertificateForPackageRequestRequest() {}

std::string CreateCertificateForPackageRequestRequest::getProductCode() const {
  return productCode_;
}

void CreateCertificateForPackageRequestRequest::setProductCode(const std::string &productCode) {
  productCode_ = productCode;
  setParameter(std::string("ProductCode"), productCode);
}

std::string CreateCertificateForPackageRequestRequest::getCsr() const {
  return csr_;
}

void CreateCertificateForPackageRequestRequest::setCsr(const std::string &csr) {
  csr_ = csr;
  setParameter(std::string("Csr"), csr);
}

std::string CreateCertificateForPackageRequestRequest::getValidateType() const {
  return validateType_;
}

void CreateCertificateForPackageRequestRequest::setValidateType(const std::string &validateType) {
  validateType_ = validateType;
  setParameter(std::string("ValidateType"), validateType);
}

std::string CreateCertificateForPackageRequestRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateCertificateForPackageRequestRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateCertificateForPackageRequestRequest::getEmail() const {
  return email_;
}

void CreateCertificateForPackageRequestRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string CreateCertificateForPackageRequestRequest::getPhone() const {
  return phone_;
}

void CreateCertificateForPackageRequestRequest::setPhone(const std::string &phone) {
  phone_ = phone;
  setParameter(std::string("Phone"), phone);
}

std::string CreateCertificateForPackageRequestRequest::getCompanyName() const {
  return companyName_;
}

void CreateCertificateForPackageRequestRequest::setCompanyName(const std::string &companyName) {
  companyName_ = companyName;
  setParameter(std::string("CompanyName"), companyName);
}

std::string CreateCertificateForPackageRequestRequest::getDomain() const {
  return domain_;
}

void CreateCertificateForPackageRequestRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

std::string CreateCertificateForPackageRequestRequest::getUsername() const {
  return username_;
}

void CreateCertificateForPackageRequestRequest::setUsername(const std::string &username) {
  username_ = username;
  setParameter(std::string("Username"), username);
}

