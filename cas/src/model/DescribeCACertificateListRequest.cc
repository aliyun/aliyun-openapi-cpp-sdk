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

#include <alibabacloud/cas/model/DescribeCACertificateListRequest.h>

using AlibabaCloud::Cas::Model::DescribeCACertificateListRequest;

DescribeCACertificateListRequest::DescribeCACertificateListRequest()
    : RpcServiceRequest("cas", "2020-06-30", "DescribeCACertificateList") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCACertificateListRequest::~DescribeCACertificateListRequest() {}

std::string DescribeCACertificateListRequest::getCaStatus() const {
  return caStatus_;
}

void DescribeCACertificateListRequest::setCaStatus(const std::string &caStatus) {
  caStatus_ = caStatus;
  setParameter(std::string("CaStatus"), caStatus);
}

std::string DescribeCACertificateListRequest::getCertType() const {
  return certType_;
}

void DescribeCACertificateListRequest::setCertType(const std::string &certType) {
  certType_ = certType;
  setParameter(std::string("CertType"), certType);
}

std::string DescribeCACertificateListRequest::getValidStatus() const {
  return validStatus_;
}

void DescribeCACertificateListRequest::setValidStatus(const std::string &validStatus) {
  validStatus_ = validStatus;
  setParameter(std::string("ValidStatus"), validStatus);
}

std::string DescribeCACertificateListRequest::getIssuerType() const {
  return issuerType_;
}

void DescribeCACertificateListRequest::setIssuerType(const std::string &issuerType) {
  issuerType_ = issuerType;
  setParameter(std::string("IssuerType"), issuerType);
}

std::string DescribeCACertificateListRequest::getIdentifier() const {
  return identifier_;
}

void DescribeCACertificateListRequest::setIdentifier(const std::string &identifier) {
  identifier_ = identifier;
  setParameter(std::string("Identifier"), identifier);
}

int DescribeCACertificateListRequest::getShowSize() const {
  return showSize_;
}

void DescribeCACertificateListRequest::setShowSize(int showSize) {
  showSize_ = showSize;
  setParameter(std::string("ShowSize"), std::to_string(showSize));
}

int DescribeCACertificateListRequest::getCurrentPage() const {
  return currentPage_;
}

void DescribeCACertificateListRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

