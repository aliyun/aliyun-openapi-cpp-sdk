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

#include <alibabacloud/ecd/model/CreateADConnectorOfficeSiteRequest.h>

using AlibabaCloud::Ecd::Model::CreateADConnectorOfficeSiteRequest;

CreateADConnectorOfficeSiteRequest::CreateADConnectorOfficeSiteRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateADConnectorOfficeSite") {
  setMethod(HttpRequest::Method::Post);
}

CreateADConnectorOfficeSiteRequest::~CreateADConnectorOfficeSiteRequest() {}

std::string CreateADConnectorOfficeSiteRequest::getCenId() const {
  return cenId_;
}

void CreateADConnectorOfficeSiteRequest::setCenId(const std::string &cenId) {
  cenId_ = cenId;
  setParameter(std::string("CenId"), cenId);
}

std::vector<std::string> CreateADConnectorOfficeSiteRequest::getSubDomainDnsAddress() const {
  return subDomainDnsAddress_;
}

void CreateADConnectorOfficeSiteRequest::setSubDomainDnsAddress(const std::vector<std::string> &subDomainDnsAddress) {
  subDomainDnsAddress_ = subDomainDnsAddress;
}

long CreateADConnectorOfficeSiteRequest::getCenOwnerId() const {
  return cenOwnerId_;
}

void CreateADConnectorOfficeSiteRequest::setCenOwnerId(long cenOwnerId) {
  cenOwnerId_ = cenOwnerId;
  setParameter(std::string("CenOwnerId"), std::to_string(cenOwnerId));
}

bool CreateADConnectorOfficeSiteRequest::getEnableInternetAccess() const {
  return enableInternetAccess_;
}

void CreateADConnectorOfficeSiteRequest::setEnableInternetAccess(bool enableInternetAccess) {
  enableInternetAccess_ = enableInternetAccess;
  setParameter(std::string("EnableInternetAccess"), enableInternetAccess ? "true" : "false");
}

std::string CreateADConnectorOfficeSiteRequest::getSubDomainName() const {
  return subDomainName_;
}

void CreateADConnectorOfficeSiteRequest::setSubDomainName(const std::string &subDomainName) {
  subDomainName_ = subDomainName;
  setParameter(std::string("SubDomainName"), subDomainName);
}

std::string CreateADConnectorOfficeSiteRequest::getDomainPassword() const {
  return domainPassword_;
}

void CreateADConnectorOfficeSiteRequest::setDomainPassword(const std::string &domainPassword) {
  domainPassword_ = domainPassword;
  setParameter(std::string("DomainPassword"), domainPassword);
}

std::string CreateADConnectorOfficeSiteRequest::getVerifyCode() const {
  return verifyCode_;
}

void CreateADConnectorOfficeSiteRequest::setVerifyCode(const std::string &verifyCode) {
  verifyCode_ = verifyCode;
  setParameter(std::string("VerifyCode"), verifyCode);
}

std::string CreateADConnectorOfficeSiteRequest::getRegionId() const {
  return regionId_;
}

void CreateADConnectorOfficeSiteRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateADConnectorOfficeSiteRequest::getEnableAdminAccess() const {
  return enableAdminAccess_;
}

void CreateADConnectorOfficeSiteRequest::setEnableAdminAccess(bool enableAdminAccess) {
  enableAdminAccess_ = enableAdminAccess;
  setParameter(std::string("EnableAdminAccess"), enableAdminAccess ? "true" : "false");
}

int CreateADConnectorOfficeSiteRequest::getBandwidth() const {
  return bandwidth_;
}

void CreateADConnectorOfficeSiteRequest::setBandwidth(int bandwidth) {
  bandwidth_ = bandwidth;
  setParameter(std::string("Bandwidth"), std::to_string(bandwidth));
}

std::string CreateADConnectorOfficeSiteRequest::getDesktopAccessType() const {
  return desktopAccessType_;
}

void CreateADConnectorOfficeSiteRequest::setDesktopAccessType(const std::string &desktopAccessType) {
  desktopAccessType_ = desktopAccessType;
  setParameter(std::string("DesktopAccessType"), desktopAccessType);
}

std::string CreateADConnectorOfficeSiteRequest::getAdHostname() const {
  return adHostname_;
}

void CreateADConnectorOfficeSiteRequest::setAdHostname(const std::string &adHostname) {
  adHostname_ = adHostname;
  setParameter(std::string("AdHostname"), adHostname);
}

std::string CreateADConnectorOfficeSiteRequest::getDomainName() const {
  return domainName_;
}

void CreateADConnectorOfficeSiteRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long CreateADConnectorOfficeSiteRequest::getSpecification() const {
  return specification_;
}

void CreateADConnectorOfficeSiteRequest::setSpecification(long specification) {
  specification_ = specification;
  setParameter(std::string("Specification"), std::to_string(specification));
}

std::string CreateADConnectorOfficeSiteRequest::getOfficeSiteName() const {
  return officeSiteName_;
}

void CreateADConnectorOfficeSiteRequest::setOfficeSiteName(const std::string &officeSiteName) {
  officeSiteName_ = officeSiteName;
  setParameter(std::string("OfficeSiteName"), officeSiteName);
}

bool CreateADConnectorOfficeSiteRequest::getMfaEnabled() const {
  return mfaEnabled_;
}

void CreateADConnectorOfficeSiteRequest::setMfaEnabled(bool mfaEnabled) {
  mfaEnabled_ = mfaEnabled;
  setParameter(std::string("MfaEnabled"), mfaEnabled ? "true" : "false");
}

std::string CreateADConnectorOfficeSiteRequest::getDomainUserName() const {
  return domainUserName_;
}

void CreateADConnectorOfficeSiteRequest::setDomainUserName(const std::string &domainUserName) {
  domainUserName_ = domainUserName;
  setParameter(std::string("DomainUserName"), domainUserName);
}

std::string CreateADConnectorOfficeSiteRequest::getCidrBlock() const {
  return cidrBlock_;
}

void CreateADConnectorOfficeSiteRequest::setCidrBlock(const std::string &cidrBlock) {
  cidrBlock_ = cidrBlock;
  setParameter(std::string("CidrBlock"), cidrBlock);
}

std::string CreateADConnectorOfficeSiteRequest::getProtocolType() const {
  return protocolType_;
}

void CreateADConnectorOfficeSiteRequest::setProtocolType(const std::string &protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), protocolType);
}

std::vector<std::string> CreateADConnectorOfficeSiteRequest::getDnsAddress() const {
  return dnsAddress_;
}

void CreateADConnectorOfficeSiteRequest::setDnsAddress(const std::vector<std::string> &dnsAddress) {
  dnsAddress_ = dnsAddress;
}

