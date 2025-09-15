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

#include <alibabacloud/cas/model/CreateClientCertificateWithCsrRequest.h>

using AlibabaCloud::Cas::Model::CreateClientCertificateWithCsrRequest;

CreateClientCertificateWithCsrRequest::CreateClientCertificateWithCsrRequest()
    : RpcServiceRequest("cas", "2020-06-30", "CreateClientCertificateWithCsr") {
  setMethod(HttpRequest::Method::Post);
}

CreateClientCertificateWithCsrRequest::~CreateClientCertificateWithCsrRequest() {}

std::string CreateClientCertificateWithCsrRequest::getCountry() const {
  return country_;
}

void CreateClientCertificateWithCsrRequest::setCountry(const std::string &country) {
  country_ = country;
  setParameter(std::string("Country"), country);
}

int CreateClientCertificateWithCsrRequest::getMonths() const {
  return months_;
}

void CreateClientCertificateWithCsrRequest::setMonths(int months) {
  months_ = months;
  setParameter(std::string("Months"), std::to_string(months));
}

long CreateClientCertificateWithCsrRequest::getEnableCrl() const {
  return enableCrl_;
}

void CreateClientCertificateWithCsrRequest::setEnableCrl(long enableCrl) {
  enableCrl_ = enableCrl;
  setParameter(std::string("EnableCrl"), std::to_string(enableCrl));
}

long CreateClientCertificateWithCsrRequest::getAfterTime() const {
  return afterTime_;
}

void CreateClientCertificateWithCsrRequest::setAfterTime(long afterTime) {
  afterTime_ = afterTime;
  setParameter(std::string("AfterTime"), std::to_string(afterTime));
}

std::string CreateClientCertificateWithCsrRequest::getLocality() const {
  return locality_;
}

void CreateClientCertificateWithCsrRequest::setLocality(const std::string &locality) {
  locality_ = locality;
  setParameter(std::string("Locality"), locality);
}

int CreateClientCertificateWithCsrRequest::getImmediately() const {
  return immediately_;
}

void CreateClientCertificateWithCsrRequest::setImmediately(int immediately) {
  immediately_ = immediately;
  setParameter(std::string("Immediately"), std::to_string(immediately));
}

int CreateClientCertificateWithCsrRequest::getYears() const {
  return years_;
}

void CreateClientCertificateWithCsrRequest::setYears(int years) {
  years_ = years;
  setParameter(std::string("Years"), std::to_string(years));
}

std::string CreateClientCertificateWithCsrRequest::getCommonName() const {
  return commonName_;
}

void CreateClientCertificateWithCsrRequest::setCommonName(const std::string &commonName) {
  commonName_ = commonName;
  setParameter(std::string("CommonName"), commonName);
}

std::string CreateClientCertificateWithCsrRequest::getOrganization() const {
  return organization_;
}

void CreateClientCertificateWithCsrRequest::setOrganization(const std::string &organization) {
  organization_ = organization;
  setParameter(std::string("Organization"), organization);
}

int CreateClientCertificateWithCsrRequest::getDays() const {
  return days_;
}

void CreateClientCertificateWithCsrRequest::setDays(int days) {
  days_ = days;
  setParameter(std::string("Days"), std::to_string(days));
}

long CreateClientCertificateWithCsrRequest::getBeforeTime() const {
  return beforeTime_;
}

void CreateClientCertificateWithCsrRequest::setBeforeTime(long beforeTime) {
  beforeTime_ = beforeTime;
  setParameter(std::string("BeforeTime"), std::to_string(beforeTime));
}

std::string CreateClientCertificateWithCsrRequest::getState() const {
  return state_;
}

void CreateClientCertificateWithCsrRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string CreateClientCertificateWithCsrRequest::getParentIdentifier() const {
  return parentIdentifier_;
}

void CreateClientCertificateWithCsrRequest::setParentIdentifier(const std::string &parentIdentifier) {
  parentIdentifier_ = parentIdentifier;
  setParameter(std::string("ParentIdentifier"), parentIdentifier);
}

std::string CreateClientCertificateWithCsrRequest::getOrganizationUnit() const {
  return organizationUnit_;
}

void CreateClientCertificateWithCsrRequest::setOrganizationUnit(const std::string &organizationUnit) {
  organizationUnit_ = organizationUnit;
  setParameter(std::string("OrganizationUnit"), organizationUnit);
}

std::string CreateClientCertificateWithCsrRequest::getAlgorithm() const {
  return algorithm_;
}

void CreateClientCertificateWithCsrRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string CreateClientCertificateWithCsrRequest::getCsr() const {
  return csr_;
}

void CreateClientCertificateWithCsrRequest::setCsr(const std::string &csr) {
  csr_ = csr;
  setParameter(std::string("Csr"), csr);
}

int CreateClientCertificateWithCsrRequest::getSanType() const {
  return sanType_;
}

void CreateClientCertificateWithCsrRequest::setSanType(int sanType) {
  sanType_ = sanType;
  setParameter(std::string("SanType"), std::to_string(sanType));
}

std::string CreateClientCertificateWithCsrRequest::getSanValue() const {
  return sanValue_;
}

void CreateClientCertificateWithCsrRequest::setSanValue(const std::string &sanValue) {
  sanValue_ = sanValue;
  setParameter(std::string("SanValue"), sanValue);
}

