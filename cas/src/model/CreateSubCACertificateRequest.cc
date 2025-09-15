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

#include <alibabacloud/cas/model/CreateSubCACertificateRequest.h>

using AlibabaCloud::Cas::Model::CreateSubCACertificateRequest;

CreateSubCACertificateRequest::CreateSubCACertificateRequest()
    : RpcServiceRequest("cas", "2020-06-30", "CreateSubCACertificate") {
  setMethod(HttpRequest::Method::Post);
}

CreateSubCACertificateRequest::~CreateSubCACertificateRequest() {}

std::vector<std::string> CreateSubCACertificateRequest::getExtendedKeyUsages() const {
  return extendedKeyUsages_;
}

void CreateSubCACertificateRequest::setExtendedKeyUsages(const std::vector<std::string> &extendedKeyUsages) {
  extendedKeyUsages_ = extendedKeyUsages;
}

bool CreateSubCACertificateRequest::getEnableCrl() const {
  return enableCrl_;
}

void CreateSubCACertificateRequest::setEnableCrl(bool enableCrl) {
  enableCrl_ = enableCrl;
  setParameter(std::string("EnableCrl"), enableCrl ? "true" : "false");
}

std::string CreateSubCACertificateRequest::getCountryCode() const {
  return countryCode_;
}

void CreateSubCACertificateRequest::setCountryCode(const std::string &countryCode) {
  countryCode_ = countryCode;
  setParameter(std::string("CountryCode"), countryCode);
}

std::string CreateSubCACertificateRequest::getLocality() const {
  return locality_;
}

void CreateSubCACertificateRequest::setLocality(const std::string &locality) {
  locality_ = locality;
  setParameter(std::string("Locality"), locality);
}

int CreateSubCACertificateRequest::getPathLenConstraint() const {
  return pathLenConstraint_;
}

void CreateSubCACertificateRequest::setPathLenConstraint(int pathLenConstraint) {
  pathLenConstraint_ = pathLenConstraint;
  setParameter(std::string("PathLenConstraint"), std::to_string(pathLenConstraint));
}

int CreateSubCACertificateRequest::getYears() const {
  return years_;
}

void CreateSubCACertificateRequest::setYears(int years) {
  years_ = years;
  setParameter(std::string("Years"), std::to_string(years));
}

std::string CreateSubCACertificateRequest::getInstanceId() const {
  return instanceId_;
}

void CreateSubCACertificateRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateSubCACertificateRequest::getCommonName() const {
  return commonName_;
}

void CreateSubCACertificateRequest::setCommonName(const std::string &commonName) {
  commonName_ = commonName;
  setParameter(std::string("CommonName"), commonName);
}

std::string CreateSubCACertificateRequest::getOrganization() const {
  return organization_;
}

void CreateSubCACertificateRequest::setOrganization(const std::string &organization) {
  organization_ = organization;
  setParameter(std::string("Organization"), organization);
}

int CreateSubCACertificateRequest::getCrlDay() const {
  return crlDay_;
}

void CreateSubCACertificateRequest::setCrlDay(int crlDay) {
  crlDay_ = crlDay;
  setParameter(std::string("CrlDay"), std::to_string(crlDay));
}

std::string CreateSubCACertificateRequest::getParentIdentifier() const {
  return parentIdentifier_;
}

void CreateSubCACertificateRequest::setParentIdentifier(const std::string &parentIdentifier) {
  parentIdentifier_ = parentIdentifier;
  setParameter(std::string("ParentIdentifier"), parentIdentifier);
}

std::string CreateSubCACertificateRequest::getState() const {
  return state_;
}

void CreateSubCACertificateRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string CreateSubCACertificateRequest::getOrganizationUnit() const {
  return organizationUnit_;
}

void CreateSubCACertificateRequest::setOrganizationUnit(const std::string &organizationUnit) {
  organizationUnit_ = organizationUnit;
  setParameter(std::string("OrganizationUnit"), organizationUnit);
}

std::string CreateSubCACertificateRequest::getAlgorithm() const {
  return algorithm_;
}

void CreateSubCACertificateRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

