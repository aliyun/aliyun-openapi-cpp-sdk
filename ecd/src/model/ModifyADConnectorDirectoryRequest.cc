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

#include <alibabacloud/ecd/model/ModifyADConnectorDirectoryRequest.h>

using AlibabaCloud::Ecd::Model::ModifyADConnectorDirectoryRequest;

ModifyADConnectorDirectoryRequest::ModifyADConnectorDirectoryRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "ModifyADConnectorDirectory") {
  setMethod(HttpRequest::Method::Post);
}

ModifyADConnectorDirectoryRequest::~ModifyADConnectorDirectoryRequest() {}

std::vector<std::string> ModifyADConnectorDirectoryRequest::getSubDomainDnsAddress() const {
  return subDomainDnsAddress_;
}

void ModifyADConnectorDirectoryRequest::setSubDomainDnsAddress(const std::vector<std::string> &subDomainDnsAddress) {
  subDomainDnsAddress_ = subDomainDnsAddress;
}

std::string ModifyADConnectorDirectoryRequest::getSubDomainName() const {
  return subDomainName_;
}

void ModifyADConnectorDirectoryRequest::setSubDomainName(const std::string &subDomainName) {
  subDomainName_ = subDomainName;
  setParameter(std::string("SubDomainName"), subDomainName);
}

std::string ModifyADConnectorDirectoryRequest::getDomainPassword() const {
  return domainPassword_;
}

void ModifyADConnectorDirectoryRequest::setDomainPassword(const std::string &domainPassword) {
  domainPassword_ = domainPassword;
  setParameter(std::string("DomainPassword"), domainPassword);
}

std::string ModifyADConnectorDirectoryRequest::getRegionId() const {
  return regionId_;
}

void ModifyADConnectorDirectoryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyADConnectorDirectoryRequest::getDirectoryId() const {
  return directoryId_;
}

void ModifyADConnectorDirectoryRequest::setDirectoryId(const std::string &directoryId) {
  directoryId_ = directoryId;
  setParameter(std::string("DirectoryId"), directoryId);
}

std::string ModifyADConnectorDirectoryRequest::getAdHostname() const {
  return adHostname_;
}

void ModifyADConnectorDirectoryRequest::setAdHostname(const std::string &adHostname) {
  adHostname_ = adHostname;
  setParameter(std::string("AdHostname"), adHostname);
}

std::string ModifyADConnectorDirectoryRequest::getDomainName() const {
  return domainName_;
}

void ModifyADConnectorDirectoryRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string ModifyADConnectorDirectoryRequest::getDirectoryName() const {
  return directoryName_;
}

void ModifyADConnectorDirectoryRequest::setDirectoryName(const std::string &directoryName) {
  directoryName_ = directoryName;
  setParameter(std::string("DirectoryName"), directoryName);
}

bool ModifyADConnectorDirectoryRequest::getMfaEnabled() const {
  return mfaEnabled_;
}

void ModifyADConnectorDirectoryRequest::setMfaEnabled(bool mfaEnabled) {
  mfaEnabled_ = mfaEnabled;
  setParameter(std::string("MfaEnabled"), mfaEnabled ? "true" : "false");
}

std::string ModifyADConnectorDirectoryRequest::getDomainUserName() const {
  return domainUserName_;
}

void ModifyADConnectorDirectoryRequest::setDomainUserName(const std::string &domainUserName) {
  domainUserName_ = domainUserName;
  setParameter(std::string("DomainUserName"), domainUserName);
}

std::vector<std::string> ModifyADConnectorDirectoryRequest::getDnsAddress() const {
  return dnsAddress_;
}

void ModifyADConnectorDirectoryRequest::setDnsAddress(const std::vector<std::string> &dnsAddress) {
  dnsAddress_ = dnsAddress;
}

std::string ModifyADConnectorDirectoryRequest::getOUName() const {
  return oUName_;
}

void ModifyADConnectorDirectoryRequest::setOUName(const std::string &oUName) {
  oUName_ = oUName;
  setParameter(std::string("OUName"), oUName);
}

