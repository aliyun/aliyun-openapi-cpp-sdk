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

#include <alibabacloud/cas/model/CreateServerCertificateRequest.h>

using AlibabaCloud::Cas::Model::CreateServerCertificateRequest;

CreateServerCertificateRequest::CreateServerCertificateRequest()
    : RpcServiceRequest("cas", "2020-06-30", "CreateServerCertificate") {
  setMethod(HttpRequest::Method::Post);
}

CreateServerCertificateRequest::~CreateServerCertificateRequest() {}

std::string CreateServerCertificateRequest::getCountry() const {
  return country_;
}

void CreateServerCertificateRequest::setCountry(const std::string &country) {
  country_ = country;
  setParameter(std::string("Country"), country);
}

int CreateServerCertificateRequest::getMonths() const {
  return months_;
}

void CreateServerCertificateRequest::setMonths(int months) {
  months_ = months;
  setParameter(std::string("Months"), std::to_string(months));
}

long CreateServerCertificateRequest::getEnableCrl() const {
  return enableCrl_;
}

void CreateServerCertificateRequest::setEnableCrl(long enableCrl) {
  enableCrl_ = enableCrl;
  setParameter(std::string("EnableCrl"), std::to_string(enableCrl));
}

long CreateServerCertificateRequest::getAfterTime() const {
  return afterTime_;
}

void CreateServerCertificateRequest::setAfterTime(long afterTime) {
  afterTime_ = afterTime;
  setParameter(std::string("AfterTime"), std::to_string(afterTime));
}

std::string CreateServerCertificateRequest::getLocality() const {
  return locality_;
}

void CreateServerCertificateRequest::setLocality(const std::string &locality) {
  locality_ = locality;
  setParameter(std::string("Locality"), locality);
}

int CreateServerCertificateRequest::getImmediately() const {
  return immediately_;
}

void CreateServerCertificateRequest::setImmediately(int immediately) {
  immediately_ = immediately;
  setParameter(std::string("Immediately"), std::to_string(immediately));
}

int CreateServerCertificateRequest::getYears() const {
  return years_;
}

void CreateServerCertificateRequest::setYears(int years) {
  years_ = years;
  setParameter(std::string("Years"), std::to_string(years));
}

std::string CreateServerCertificateRequest::getCommonName() const {
  return commonName_;
}

void CreateServerCertificateRequest::setCommonName(const std::string &commonName) {
  commonName_ = commonName;
  setParameter(std::string("CommonName"), commonName);
}

std::string CreateServerCertificateRequest::getOrganization() const {
  return organization_;
}

void CreateServerCertificateRequest::setOrganization(const std::string &organization) {
  organization_ = organization;
  setParameter(std::string("Organization"), organization);
}

int CreateServerCertificateRequest::getDays() const {
  return days_;
}

void CreateServerCertificateRequest::setDays(int days) {
  days_ = days;
  setParameter(std::string("Days"), std::to_string(days));
}

long CreateServerCertificateRequest::getBeforeTime() const {
  return beforeTime_;
}

void CreateServerCertificateRequest::setBeforeTime(long beforeTime) {
  beforeTime_ = beforeTime;
  setParameter(std::string("BeforeTime"), std::to_string(beforeTime));
}

std::string CreateServerCertificateRequest::getState() const {
  return state_;
}

void CreateServerCertificateRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string CreateServerCertificateRequest::getParentIdentifier() const {
  return parentIdentifier_;
}

void CreateServerCertificateRequest::setParentIdentifier(const std::string &parentIdentifier) {
  parentIdentifier_ = parentIdentifier;
  setParameter(std::string("ParentIdentifier"), parentIdentifier);
}

std::string CreateServerCertificateRequest::getOrganizationUnit() const {
  return organizationUnit_;
}

void CreateServerCertificateRequest::setOrganizationUnit(const std::string &organizationUnit) {
  organizationUnit_ = organizationUnit;
  setParameter(std::string("OrganizationUnit"), organizationUnit);
}

std::string CreateServerCertificateRequest::getAlgorithm() const {
  return algorithm_;
}

void CreateServerCertificateRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

std::string CreateServerCertificateRequest::getDomain() const {
  return domain_;
}

void CreateServerCertificateRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

