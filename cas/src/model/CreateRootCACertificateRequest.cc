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

#include <alibabacloud/cas/model/CreateRootCACertificateRequest.h>

using AlibabaCloud::Cas::Model::CreateRootCACertificateRequest;

CreateRootCACertificateRequest::CreateRootCACertificateRequest()
    : RpcServiceRequest("cas", "2020-06-30", "CreateRootCACertificate") {
  setMethod(HttpRequest::Method::Post);
}

CreateRootCACertificateRequest::~CreateRootCACertificateRequest() {}

std::string CreateRootCACertificateRequest::getClientToken() const {
  return clientToken_;
}

void CreateRootCACertificateRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateRootCACertificateRequest::getCountryCode() const {
  return countryCode_;
}

void CreateRootCACertificateRequest::setCountryCode(const std::string &countryCode) {
  countryCode_ = countryCode;
  setParameter(std::string("CountryCode"), countryCode);
}

std::string CreateRootCACertificateRequest::getLocality() const {
  return locality_;
}

void CreateRootCACertificateRequest::setLocality(const std::string &locality) {
  locality_ = locality;
  setParameter(std::string("Locality"), locality);
}

int CreateRootCACertificateRequest::getYears() const {
  return years_;
}

void CreateRootCACertificateRequest::setYears(int years) {
  years_ = years;
  setParameter(std::string("Years"), std::to_string(years));
}

std::string CreateRootCACertificateRequest::getInstanceId() const {
  return instanceId_;
}

void CreateRootCACertificateRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateRootCACertificateRequest::getCommonName() const {
  return commonName_;
}

void CreateRootCACertificateRequest::setCommonName(const std::string &commonName) {
  commonName_ = commonName;
  setParameter(std::string("CommonName"), commonName);
}

std::string CreateRootCACertificateRequest::getOrganization() const {
  return organization_;
}

void CreateRootCACertificateRequest::setOrganization(const std::string &organization) {
  organization_ = organization;
  setParameter(std::string("Organization"), organization);
}

std::string CreateRootCACertificateRequest::getState() const {
  return state_;
}

void CreateRootCACertificateRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string CreateRootCACertificateRequest::getOrganizationUnit() const {
  return organizationUnit_;
}

void CreateRootCACertificateRequest::setOrganizationUnit(const std::string &organizationUnit) {
  organizationUnit_ = organizationUnit;
  setParameter(std::string("OrganizationUnit"), organizationUnit);
}

std::string CreateRootCACertificateRequest::getAlgorithm() const {
  return algorithm_;
}

void CreateRootCACertificateRequest::setAlgorithm(const std::string &algorithm) {
  algorithm_ = algorithm;
  setParameter(std::string("Algorithm"), algorithm);
}

