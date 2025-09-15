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

#include <alibabacloud/cas/model/CreateClientCertificateRequest.h>

using AlibabaCloud::Cas::Model::CreateClientCertificateRequest;

CreateClientCertificateRequest::CreateClientCertificateRequest()
    : RpcServiceRequest("cas", "2020-06-30", "CreateClientCertificate") {
  setMethod(HttpRequest::Method::Post);
}

CreateClientCertificateRequest::~CreateClientCertificateRequest() {}

std::string CreateClientCertificateRequest::getCountry() const {
  return country_;
}

void CreateClientCertificateRequest::setCountry(const std::string &country) {
  country_ = country;
  setParameter(std::string("Country"), country);
}

int CreateClientCertificateRequest::getMonths() const {
  return months_;
}

void CreateClientCertificateRequest::setMonths(int months) {
  months_ = months;
  setParameter(std::string("Months"), std::to_string(months));
}

long CreateClientCertificateRequest::getEnableCrl() const {
  return enableCrl_;
}

void CreateClientCertificateRequest::setEnableCrl(long enableCrl) {
  enableCrl_ = enableCrl;
  setParameter(std::string("EnableCrl"), std::to_string(enableCrl));
}

long CreateClientCertificateRequest::getAfterTime() const {
  return afterTime_;
}

void CreateClientCertificateRequest::setAfterTime(long afterTime) {
  afterTime_ = afterTime;
  setParameter(std::string("AfterTime"), std::to_string(afterTime));
}

std::string CreateClientCertificateRequest::getLocality() const {
  return locality_;
}

void CreateClientCertificateRequest::setLocality(const std::string &locality) {
  locality_ = locality;
  setParameter(std::string("Locality"), locality);
}

int CreateClientCertificateRequest::getImmediately() const {
  return immediately_;
}

void CreateClientCertificateRequest::setImmediately(int immediately) {
  immediately_ = immediately;
  setParameter(std::string("Immediately"), std::to_string(immediately));
}

int CreateClientCertificateRequest::getYears() const {
  return years_;
}

void CreateClientCertificateRequest::setYears(int years) {
  years_ = years;
  setParameter(std::string("Years"), std::to_string(years));
}

std::string CreateClientCertificateRequest::getCommonName() const {
  return commonName_;
}

void CreateClientCertificateRequest::setCommonName(const std::string &commonName) {
  commonName_ = commonName;
  setParameter(std::string("CommonName"), commonName);
}

std::string CreateClientCertificateRequest::getOrganization() const {
  return organization_;
}

void CreateClientCertificateRequest::setOrganization(const std::string &organization) {
  organization_ = organization;
  setParameter(std::string("Organization"), organization);
}

int CreateClientCertificateRequest::getDays() const {
  return days_;
}

void CreateClientCertificateRequest::setDays(int days) {
  days_ = days;
  setParameter(std::string("Days"), std::to_string(days));
}

long CreateClientCertificateRequest::getBeforeTime() const {
  return beforeTime_;
}

void CreateClientCertificateRequest::setBeforeTime(long beforeTime) {
  beforeTime_ = beforeTime;
  setParameter(std::string("BeforeTime"), std::to_string(beforeTime));
}

std::string CreateClientCertificateRequest::getState() const {
  return state_;
}

void CreateClientCertificateRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string CreateClientCertificateRequest::getParentIdentifier() const {
  return parentIdentifier_;
}

void CreateClientCertificateRequest::setParentIdentifier(const std::string &parentIdentifier) {
  parentIdentifier_ = parentIdentifier;
  setParameter(std::string("ParentIdentifier"), parentIdentifier);
}

std::string CreateClientCertificateRequest::getOrganizationUnit() const {
  return organizationUnit_;
}

void CreateClientCertificateRequest::setOrganizationUnit(const std::string &organizationUnit) {
  organizationUnit_ = organizationUnit;
  setParameter(std::string("OrganizationUnit"), organizationUnit);
}

std::string CreateClientCertificateRequest::getAlgorithm() const {
  return algorithm_;
}

void CreateClientCertificateRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

int CreateClientCertificateRequest::getSanType() const {
  return sanType_;
}

void CreateClientCertificateRequest::setSanType(int sanType) {
  sanType_ = sanType;
  setParameter(std::string("SanType"), std::to_string(sanType));
}

std::string CreateClientCertificateRequest::getSanValue() const {
  return sanValue_;
}

void CreateClientCertificateRequest::setSanValue(const std::string &sanValue) {
  sanValue_ = sanValue;
  setParameter(std::string("SanValue"), sanValue);
}

