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

#include <alibabacloud/cas/model/CreateServerCertificateWithCsrRequest.h>

using AlibabaCloud::Cas::Model::CreateServerCertificateWithCsrRequest;

CreateServerCertificateWithCsrRequest::CreateServerCertificateWithCsrRequest()
    : RpcServiceRequest("cas", "2020-06-30", "CreateServerCertificateWithCsr") {
  setMethod(HttpRequest::Method::Post);
}

CreateServerCertificateWithCsrRequest::~CreateServerCertificateWithCsrRequest() {}

std::string CreateServerCertificateWithCsrRequest::getCountry() const {
  return country_;
}

void CreateServerCertificateWithCsrRequest::setCountry(const std::string &country) {
  country_ = country;
  setParameter(std::string("Country"), country);
}

int CreateServerCertificateWithCsrRequest::getMonths() const {
  return months_;
}

void CreateServerCertificateWithCsrRequest::setMonths(int months) {
  months_ = months;
  setParameter(std::string("Months"), std::to_string(months));
}

long CreateServerCertificateWithCsrRequest::getEnableCrl() const {
  return enableCrl_;
}

void CreateServerCertificateWithCsrRequest::setEnableCrl(long enableCrl) {
  enableCrl_ = enableCrl;
  setParameter(std::string("EnableCrl"), std::to_string(enableCrl));
}

long CreateServerCertificateWithCsrRequest::getAfterTime() const {
  return afterTime_;
}

void CreateServerCertificateWithCsrRequest::setAfterTime(long afterTime) {
  afterTime_ = afterTime;
  setParameter(std::string("AfterTime"), std::to_string(afterTime));
}

std::string CreateServerCertificateWithCsrRequest::getLocality() const {
  return locality_;
}

void CreateServerCertificateWithCsrRequest::setLocality(const std::string &locality) {
  locality_ = locality;
  setParameter(std::string("Locality"), locality);
}

int CreateServerCertificateWithCsrRequest::getImmediately() const {
  return immediately_;
}

void CreateServerCertificateWithCsrRequest::setImmediately(int immediately) {
  immediately_ = immediately;
  setParameter(std::string("Immediately"), std::to_string(immediately));
}

int CreateServerCertificateWithCsrRequest::getYears() const {
  return years_;
}

void CreateServerCertificateWithCsrRequest::setYears(int years) {
  years_ = years;
  setParameter(std::string("Years"), std::to_string(years));
}

std::string CreateServerCertificateWithCsrRequest::getCommonName() const {
  return commonName_;
}

void CreateServerCertificateWithCsrRequest::setCommonName(const std::string &commonName) {
  commonName_ = commonName;
  setParameter(std::string("CommonName"), commonName);
}

std::string CreateServerCertificateWithCsrRequest::getOrganization() const {
  return organization_;
}

void CreateServerCertificateWithCsrRequest::setOrganization(const std::string &organization) {
  organization_ = organization;
  setParameter(std::string("Organization"), organization);
}

int CreateServerCertificateWithCsrRequest::getDays() const {
  return days_;
}

void CreateServerCertificateWithCsrRequest::setDays(int days) {
  days_ = days;
  setParameter(std::string("Days"), std::to_string(days));
}

long CreateServerCertificateWithCsrRequest::getBeforeTime() const {
  return beforeTime_;
}

void CreateServerCertificateWithCsrRequest::setBeforeTime(long beforeTime) {
  beforeTime_ = beforeTime;
  setParameter(std::string("BeforeTime"), std::to_string(beforeTime));
}

std::string CreateServerCertificateWithCsrRequest::getState() const {
  return state_;
}

void CreateServerCertificateWithCsrRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string CreateServerCertificateWithCsrRequest::getParentIdentifier() const {
  return parentIdentifier_;
}

void CreateServerCertificateWithCsrRequest::setParentIdentifier(const std::string &parentIdentifier) {
  parentIdentifier_ = parentIdentifier;
  setParameter(std::string("ParentIdentifier"), parentIdentifier);
}

std::string CreateServerCertificateWithCsrRequest::getOrganizationUnit() const {
  return organizationUnit_;
}

void CreateServerCertificateWithCsrRequest::setOrganizationUnit(const std::string &organizationUnit) {
  organizationUnit_ = organizationUnit;
  setParameter(std::string("OrganizationUnit"), organizationUnit);
}

std::string CreateServerCertificateWithCsrRequest::getAlgorithm() const {
  return algorithm_;
}

void CreateServerCertificateWithCsrRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string CreateServerCertificateWithCsrRequest::getCsr() const {
  return csr_;
}

void CreateServerCertificateWithCsrRequest::setCsr(const std::string &csr) {
  csr_ = csr;
  setParameter(std::string("Csr"), csr);
}

std::string CreateServerCertificateWithCsrRequest::getDomain() const {
  return domain_;
}

void CreateServerCertificateWithCsrRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

