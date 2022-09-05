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

#include <alibabacloud/cdn/model/CreateCdnCertificateSigningRequestRequest.h>

using AlibabaCloud::Cdn::Model::CreateCdnCertificateSigningRequestRequest;

CreateCdnCertificateSigningRequestRequest::CreateCdnCertificateSigningRequestRequest()
    : RpcServiceRequest("cdn", "2018-05-10", "CreateCdnCertificateSigningRequest") {
  setMethod(HttpRequest::Method::Post);
}

CreateCdnCertificateSigningRequestRequest::~CreateCdnCertificateSigningRequestRequest() {}

std::string CreateCdnCertificateSigningRequestRequest::getCountry() const {
  return country_;
}

void CreateCdnCertificateSigningRequestRequest::setCountry(const std::string &country) {
  country_ = country;
  setParameter(std::string("Country"), country);
}

std::string CreateCdnCertificateSigningRequestRequest::getCity() const {
  return city_;
}

void CreateCdnCertificateSigningRequestRequest::setCity(const std::string &city) {
  city_ = city;
  setParameter(std::string("City"), city);
}

std::string CreateCdnCertificateSigningRequestRequest::getCommonName() const {
  return commonName_;
}

void CreateCdnCertificateSigningRequestRequest::setCommonName(const std::string &commonName) {
  commonName_ = commonName;
  setParameter(std::string("CommonName"), commonName);
}

std::string CreateCdnCertificateSigningRequestRequest::getState() const {
  return state_;
}

void CreateCdnCertificateSigningRequestRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string CreateCdnCertificateSigningRequestRequest::getEmail() const {
  return email_;
}

void CreateCdnCertificateSigningRequestRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string CreateCdnCertificateSigningRequestRequest::getSANs() const {
  return sANs_;
}

void CreateCdnCertificateSigningRequestRequest::setSANs(const std::string &sANs) {
  sANs_ = sANs;
  setParameter(std::string("SANs"), sANs);
}

long CreateCdnCertificateSigningRequestRequest::getOwnerId() const {
  return ownerId_;
}

void CreateCdnCertificateSigningRequestRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string CreateCdnCertificateSigningRequestRequest::getOrganization() const {
  return organization_;
}

void CreateCdnCertificateSigningRequestRequest::setOrganization(const std::string &organization) {
  organization_ = organization;
  setParameter(std::string("Organization"), organization);
}

std::string CreateCdnCertificateSigningRequestRequest::getOrganizationUnit() const {
  return organizationUnit_;
}

void CreateCdnCertificateSigningRequestRequest::setOrganizationUnit(const std::string &organizationUnit) {
  organizationUnit_ = organizationUnit;
  setParameter(std::string("OrganizationUnit"), organizationUnit);
}

