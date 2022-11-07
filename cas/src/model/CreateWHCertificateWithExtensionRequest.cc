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

#include <alibabacloud/cas/model/CreateWHCertificateWithExtensionRequest.h>

using AlibabaCloud::Cas::Model::CreateWHCertificateWithExtensionRequest;

CreateWHCertificateWithExtensionRequest::CreateWHCertificateWithExtensionRequest()
    : RpcServiceRequest("cas", "2020-04-07", "CreateWHCertificateWithExtension") {
  setMethod(HttpRequest::Method::Post);
}

CreateWHCertificateWithExtensionRequest::~CreateWHCertificateWithExtensionRequest() {}

bool CreateWHCertificateWithExtensionRequest::getAppendCrl() const {
  return appendCrl_;
}

void CreateWHCertificateWithExtensionRequest::setAppendCrl(bool appendCrl) {
  appendCrl_ = appendCrl;
  setParameter(std::string("AppendCrl"), appendCrl ? "true" : "false");
}

std::string CreateWHCertificateWithExtensionRequest::getCountryCode() const {
  return countryCode_;
}

void CreateWHCertificateWithExtensionRequest::setCountryCode(const std::string &countryCode) {
  countryCode_ = countryCode;
  setParameter(std::string("CountryCode"), countryCode);
}

long CreateWHCertificateWithExtensionRequest::getImmediately() const {
  return immediately_;
}

void CreateWHCertificateWithExtensionRequest::setImmediately(long immediately) {
  immediately_ = immediately;
  setParameter(std::string("Immediately"), std::to_string(immediately));
}

std::string CreateWHCertificateWithExtensionRequest::getCommonName() const {
  return commonName_;
}

void CreateWHCertificateWithExtensionRequest::setCommonName(const std::string &commonName) {
  commonName_ = commonName;
  setParameter(std::string("CommonName"), commonName);
}

std::string CreateWHCertificateWithExtensionRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateWHCertificateWithExtensionRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateWHCertificateWithExtensionRequest::getCertType() const {
  return certType_;
}

void CreateWHCertificateWithExtensionRequest::setCertType(const std::string &certType) {
  certType_ = certType;
  setParameter(std::string("CertType"), certType);
}

std::string CreateWHCertificateWithExtensionRequest::getState() const {
  return state_;
}

void CreateWHCertificateWithExtensionRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string CreateWHCertificateWithExtensionRequest::getCsrPemString() const {
  return csrPemString_;
}

void CreateWHCertificateWithExtensionRequest::setCsrPemString(const std::string &csrPemString) {
  csrPemString_ = csrPemString;
  setParameter(std::string("CsrPemString"), csrPemString);
}

std::string CreateWHCertificateWithExtensionRequest::getAlgorithmKeySize() const {
  return algorithmKeySize_;
}

void CreateWHCertificateWithExtensionRequest::setAlgorithmKeySize(const std::string &algorithmKeySize) {
  algorithmKeySize_ = algorithmKeySize;
  setParameter(std::string("AlgorithmKeySize"), algorithmKeySize);
}

long CreateWHCertificateWithExtensionRequest::getAfterTime() const {
  return afterTime_;
}

void CreateWHCertificateWithExtensionRequest::setAfterTime(long afterTime) {
  afterTime_ = afterTime;
  setParameter(std::string("AfterTime"), std::to_string(afterTime));
}

std::string CreateWHCertificateWithExtensionRequest::getSans() const {
  return sans_;
}

void CreateWHCertificateWithExtensionRequest::setSans(const std::string &sans) {
  sans_ = sans;
  setParameter(std::string("Sans"), sans);
}

std::string CreateWHCertificateWithExtensionRequest::getLocality() const {
  return locality_;
}

void CreateWHCertificateWithExtensionRequest::setLocality(const std::string &locality) {
  locality_ = locality;
  setParameter(std::string("Locality"), locality);
}

bool CreateWHCertificateWithExtensionRequest::getBasicConstraintsCritical() const {
  return basicConstraintsCritical_;
}

void CreateWHCertificateWithExtensionRequest::setBasicConstraintsCritical(bool basicConstraintsCritical) {
  basicConstraintsCritical_ = basicConstraintsCritical;
  setParameter(std::string("BasicConstraintsCritical"), basicConstraintsCritical ? "true" : "false");
}

std::string CreateWHCertificateWithExtensionRequest::getAliasName() const {
  return aliasName_;
}

void CreateWHCertificateWithExtensionRequest::setAliasName(const std::string &aliasName) {
  aliasName_ = aliasName;
  setParameter(std::string("AliasName"), aliasName);
}

std::string CreateWHCertificateWithExtensionRequest::getOrganization() const {
  return organization_;
}

void CreateWHCertificateWithExtensionRequest::setOrganization(const std::string &organization) {
  organization_ = organization;
  setParameter(std::string("Organization"), organization);
}

long CreateWHCertificateWithExtensionRequest::getBeforeTime() const {
  return beforeTime_;
}

void CreateWHCertificateWithExtensionRequest::setBeforeTime(long beforeTime) {
  beforeTime_ = beforeTime;
  setParameter(std::string("BeforeTime"), std::to_string(beforeTime));
}

std::string CreateWHCertificateWithExtensionRequest::getParentIdentifier() const {
  return parentIdentifier_;
}

void CreateWHCertificateWithExtensionRequest::setParentIdentifier(const std::string &parentIdentifier) {
  parentIdentifier_ = parentIdentifier;
  setParameter(std::string("ParentIdentifier"), parentIdentifier);
}

std::string CreateWHCertificateWithExtensionRequest::getOrganizationUnit() const {
  return organizationUnit_;
}

void CreateWHCertificateWithExtensionRequest::setOrganizationUnit(const std::string &organizationUnit) {
  organizationUnit_ = organizationUnit;
  setParameter(std::string("OrganizationUnit"), organizationUnit);
}

