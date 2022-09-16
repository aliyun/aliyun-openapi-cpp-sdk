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

#include <alibabacloud/ecd/model/CreateADConnectorDirectoryRequest.h>

using AlibabaCloud::Ecd::Model::CreateADConnectorDirectoryRequest;

CreateADConnectorDirectoryRequest::CreateADConnectorDirectoryRequest()
    : RpcServiceRequest("ecd", "2020-09-30", "CreateADConnectorDirectory") {
  setMethod(HttpRequest::Method::Post);
}

CreateADConnectorDirectoryRequest::~CreateADConnectorDirectoryRequest() {}

std::vector<std::string> CreateADConnectorDirectoryRequest::getSubDomainDnsAddress() const {
  return subDomainDnsAddress_;
}

void CreateADConnectorDirectoryRequest::setSubDomainDnsAddress(const std::vector<std::string> &subDomainDnsAddress) {
  subDomainDnsAddress_ = subDomainDnsAddress;
}

std::string CreateADConnectorDirectoryRequest::getSubDomainName() const {
  return subDomainName_;
}

void CreateADConnectorDirectoryRequest::setSubDomainName(const std::string &subDomainName) {
  subDomainName_ = subDomainName;
  setParameter(std::string("SubDomainName"), subDomainName);
}

std::string CreateADConnectorDirectoryRequest::getDomainPassword() const {
  return domainPassword_;
}

void CreateADConnectorDirectoryRequest::setDomainPassword(const std::string &domainPassword) {
  domainPassword_ = domainPassword;
  setParameter(std::string("DomainPassword"), domainPassword);
}

std::string CreateADConnectorDirectoryRequest::getRegionId() const {
  return regionId_;
}

void CreateADConnectorDirectoryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

bool CreateADConnectorDirectoryRequest::getEnableAdminAccess() const {
  return enableAdminAccess_;
}

void CreateADConnectorDirectoryRequest::setEnableAdminAccess(bool enableAdminAccess) {
  enableAdminAccess_ = enableAdminAccess;
  setParameter(std::string("EnableAdminAccess"), enableAdminAccess ? "true" : "false");
}

std::string CreateADConnectorDirectoryRequest::getDesktopAccessType() const {
  return desktopAccessType_;
}

void CreateADConnectorDirectoryRequest::setDesktopAccessType(const std::string &desktopAccessType) {
  desktopAccessType_ = desktopAccessType;
  setParameter(std::string("DesktopAccessType"), desktopAccessType);
}

std::string CreateADConnectorDirectoryRequest::getDomainName() const {
  return domainName_;
}

void CreateADConnectorDirectoryRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long CreateADConnectorDirectoryRequest::getSpecification() const {
  return specification_;
}

void CreateADConnectorDirectoryRequest::setSpecification(long specification) {
  specification_ = specification;
  setParameter(std::string("Specification"), std::to_string(specification));
}

std::string CreateADConnectorDirectoryRequest::getDirectoryName() const {
  return directoryName_;
}

void CreateADConnectorDirectoryRequest::setDirectoryName(const std::string &directoryName) {
  directoryName_ = directoryName;
  setParameter(std::string("DirectoryName"), directoryName);
}

std::vector<std::string> CreateADConnectorDirectoryRequest::getVSwitchId() const {
  return vSwitchId_;
}

void CreateADConnectorDirectoryRequest::setVSwitchId(const std::vector<std::string> &vSwitchId) {
  vSwitchId_ = vSwitchId;
}

bool CreateADConnectorDirectoryRequest::getMfaEnabled() const {
  return mfaEnabled_;
}

void CreateADConnectorDirectoryRequest::setMfaEnabled(bool mfaEnabled) {
  mfaEnabled_ = mfaEnabled;
  setParameter(std::string("MfaEnabled"), mfaEnabled ? "true" : "false");
}

std::string CreateADConnectorDirectoryRequest::getDomainUserName() const {
  return domainUserName_;
}

void CreateADConnectorDirectoryRequest::setDomainUserName(const std::string &domainUserName) {
  domainUserName_ = domainUserName;
  setParameter(std::string("DomainUserName"), domainUserName);
}

std::vector<std::string> CreateADConnectorDirectoryRequest::getDnsAddress() const {
  return dnsAddress_;
}

void CreateADConnectorDirectoryRequest::setDnsAddress(const std::vector<std::string> &dnsAddress) {
  dnsAddress_ = dnsAddress;
}

