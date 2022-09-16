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

#include <alibabacloud/ecd/model/ModifyADConnectorOfficeSiteRequest.h>

using AlibabaCloud::Ecd::Model::ModifyADConnectorOfficeSiteRequest;

ModifyADConnectorOfficeSiteRequest::ModifyADConnectorOfficeSiteRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyADConnectorOfficeSite") {
  setMethod(HttpRequest::Method::Post);
}

ModifyADConnectorOfficeSiteRequest::~ModifyADConnectorOfficeSiteRequest() {}

std::string ModifyADConnectorOfficeSiteRequest::getOfficeSiteId() const {
  return officeSiteId_;
}

void ModifyADConnectorOfficeSiteRequest::setOfficeSiteId(const std::string &officeSiteId) {
  officeSiteId_ = officeSiteId;
  setParameter(std::string("OfficeSiteId"), officeSiteId);
}

std::vector<std::string> ModifyADConnectorOfficeSiteRequest::getSubDomainDnsAddress() const {
  return subDomainDnsAddress_;
}

void ModifyADConnectorOfficeSiteRequest::setSubDomainDnsAddress(const std::vector<std::string> &subDomainDnsAddress) {
  subDomainDnsAddress_ = subDomainDnsAddress;
}

std::string ModifyADConnectorOfficeSiteRequest::getSubDomainName() const {
  return subDomainName_;
}

void ModifyADConnectorOfficeSiteRequest::setSubDomainName(const std::string &subDomainName) {
  subDomainName_ = subDomainName;
  setParameter(std::string("SubDomainName"), subDomainName);
}

std::string ModifyADConnectorOfficeSiteRequest::getDomainPassword() const {
  return domainPassword_;
}

void ModifyADConnectorOfficeSiteRequest::setDomainPassword(const std::string &domainPassword) {
  domainPassword_ = domainPassword;
  setParameter(std::string("DomainPassword"), domainPassword);
}

std::string ModifyADConnectorOfficeSiteRequest::getRegionId() const {
  return regionId_;
}

void ModifyADConnectorOfficeSiteRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyADConnectorOfficeSiteRequest::getAdHostname() const {
  return adHostname_;
}

void ModifyADConnectorOfficeSiteRequest::setAdHostname(const std::string &adHostname) {
  adHostname_ = adHostname;
  setParameter(std::string("AdHostname"), adHostname);
}

std::string ModifyADConnectorOfficeSiteRequest::getDomainName() const {
  return domainName_;
}

void ModifyADConnectorOfficeSiteRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string ModifyADConnectorOfficeSiteRequest::getOfficeSiteName() const {
  return officeSiteName_;
}

void ModifyADConnectorOfficeSiteRequest::setOfficeSiteName(const std::string &officeSiteName) {
  officeSiteName_ = officeSiteName;
  setParameter(std::string("OfficeSiteName"), officeSiteName);
}

bool ModifyADConnectorOfficeSiteRequest::getMfaEnabled() const {
  return mfaEnabled_;
}

void ModifyADConnectorOfficeSiteRequest::setMfaEnabled(bool mfaEnabled) {
  mfaEnabled_ = mfaEnabled;
  setParameter(std::string("MfaEnabled"), mfaEnabled ? "true" : "false");
}

std::string ModifyADConnectorOfficeSiteRequest::getDomainUserName() const {
  return domainUserName_;
}

void ModifyADConnectorOfficeSiteRequest::setDomainUserName(const std::string &domainUserName) {
  domainUserName_ = domainUserName;
  setParameter(std::string("DomainUserName"), domainUserName);
}

std::vector<std::string> ModifyADConnectorOfficeSiteRequest::getDnsAddress() const {
  return dnsAddress_;
}

void ModifyADConnectorOfficeSiteRequest::setDnsAddress(const std::vector<std::string> &dnsAddress) {
  dnsAddress_ = dnsAddress;
}

std::string ModifyADConnectorOfficeSiteRequest::getOUName() const {
  return oUName_;
}

void ModifyADConnectorOfficeSiteRequest::setOUName(const std::string &oUName) {
  oUName_ = oUName;
  setParameter(std::string("OUName"), oUName);
}

