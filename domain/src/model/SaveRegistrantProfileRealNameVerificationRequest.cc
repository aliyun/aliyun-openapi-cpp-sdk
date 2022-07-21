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

#include <alibabacloud/domain/model/SaveRegistrantProfileRealNameVerificationRequest.h>

using AlibabaCloud::Domain::Model::SaveRegistrantProfileRealNameVerificationRequest;

SaveRegistrantProfileRealNameVerificationRequest::SaveRegistrantProfileRealNameVerificationRequest()
    : RpcServiceRequest("domain", "2018-01-29", "SaveRegistrantProfileRealNameVerification") {
  setMethod(HttpRequest::Method::Post);
}

SaveRegistrantProfileRealNameVerificationRequest::~SaveRegistrantProfileRealNameVerificationRequest() {}

std::string SaveRegistrantProfileRealNameVerificationRequest::getCountry() const {
  return country_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setCountry(const std::string &country) {
  country_ = country;
  setParameter(std::string("Country"), country);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getIdentityCredentialType() const {
  return identityCredentialType_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setIdentityCredentialType(const std::string &identityCredentialType) {
  identityCredentialType_ = identityCredentialType;
  setParameter(std::string("IdentityCredentialType"), identityCredentialType);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getCity() const {
  return city_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setCity(const std::string &city) {
  city_ = city;
  setParameter(std::string("City"), city);
}

long SaveRegistrantProfileRealNameVerificationRequest::getRegistrantProfileId() const {
  return registrantProfileId_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setRegistrantProfileId(long registrantProfileId) {
  registrantProfileId_ = registrantProfileId;
  setParameter(std::string("RegistrantProfileId"), std::to_string(registrantProfileId));
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getIdentityCredential() const {
  return identityCredential_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setIdentityCredential(const std::string &identityCredential) {
  identityCredential_ = identityCredential;
  setParameter(std::string("IdentityCredential"), identityCredential);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getZhCity() const {
  return zhCity_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setZhCity(const std::string &zhCity) {
  zhCity_ = zhCity;
  setParameter(std::string("ZhCity"), zhCity);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getTelExt() const {
  return telExt_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setTelExt(const std::string &telExt) {
  telExt_ = telExt;
  setParameter(std::string("TelExt"), telExt);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getProvince() const {
  return province_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setProvince(const std::string &province) {
  province_ = province;
  setParameter(std::string("Province"), province);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getZhRegistrantName() const {
  return zhRegistrantName_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setZhRegistrantName(const std::string &zhRegistrantName) {
  zhRegistrantName_ = zhRegistrantName;
  setParameter(std::string("ZhRegistrantName"), zhRegistrantName);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getPostalCode() const {
  return postalCode_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setPostalCode(const std::string &postalCode) {
  postalCode_ = postalCode;
  setParameter(std::string("PostalCode"), postalCode);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getLang() const {
  return lang_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getEmail() const {
  return email_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setEmail(const std::string &email) {
  email_ = email;
  setParameter(std::string("Email"), email);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getZhRegistrantOrganization() const {
  return zhRegistrantOrganization_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setZhRegistrantOrganization(const std::string &zhRegistrantOrganization) {
  zhRegistrantOrganization_ = zhRegistrantOrganization;
  setParameter(std::string("ZhRegistrantOrganization"), zhRegistrantOrganization);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getAddress() const {
  return address_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setAddress(const std::string &address) {
  address_ = address;
  setParameter(std::string("Address"), address);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getTelArea() const {
  return telArea_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setTelArea(const std::string &telArea) {
  telArea_ = telArea;
  setParameter(std::string("TelArea"), telArea);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getZhAddress() const {
  return zhAddress_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setZhAddress(const std::string &zhAddress) {
  zhAddress_ = zhAddress;
  setParameter(std::string("ZhAddress"), zhAddress);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getRegistrantType() const {
  return registrantType_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setRegistrantType(const std::string &registrantType) {
  registrantType_ = registrantType;
  setParameter(std::string("RegistrantType"), registrantType);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getRegistrantProfileType() const {
  return registrantProfileType_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setRegistrantProfileType(const std::string &registrantProfileType) {
  registrantProfileType_ = registrantProfileType;
  setParameter(std::string("RegistrantProfileType"), registrantProfileType);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getTelephone() const {
  return telephone_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setTelephone(const std::string &telephone) {
  telephone_ = telephone;
  setParameter(std::string("Telephone"), telephone);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getZhProvince() const {
  return zhProvince_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setZhProvince(const std::string &zhProvince) {
  zhProvince_ = zhProvince;
  setParameter(std::string("ZhProvince"), zhProvince);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getRegistrantOrganization() const {
  return registrantOrganization_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setRegistrantOrganization(const std::string &registrantOrganization) {
  registrantOrganization_ = registrantOrganization;
  setParameter(std::string("RegistrantOrganization"), registrantOrganization);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getUserClientIp() const {
  return userClientIp_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getIdentityCredentialNo() const {
  return identityCredentialNo_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setIdentityCredentialNo(const std::string &identityCredentialNo) {
  identityCredentialNo_ = identityCredentialNo;
  setParameter(std::string("IdentityCredentialNo"), identityCredentialNo);
}

std::string SaveRegistrantProfileRealNameVerificationRequest::getRegistrantName() const {
  return registrantName_;
}

void SaveRegistrantProfileRealNameVerificationRequest::setRegistrantName(const std::string &registrantName) {
  registrantName_ = registrantName;
  setParameter(std::string("RegistrantName"), registrantName);
}

