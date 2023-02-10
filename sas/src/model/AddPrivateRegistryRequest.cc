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

#include <alibabacloud/sas/model/AddPrivateRegistryRequest.h>

using AlibabaCloud::Sas::Model::AddPrivateRegistryRequest;

AddPrivateRegistryRequest::AddPrivateRegistryRequest()
    : RpcServiceRequest("sas", "2018-12-03", "AddPrivateRegistry") {
  setMethod(HttpRequest::Method::Post);
}

AddPrivateRegistryRequest::~AddPrivateRegistryRequest() {}

std::string AddPrivateRegistryRequest::getExtraParam() const {
  return extraParam_;
}

void AddPrivateRegistryRequest::setExtraParam(const std::string &extraParam) {
  extraParam_ = extraParam;
  setParameter(std::string("ExtraParam"), extraParam);
}

std::string AddPrivateRegistryRequest::getRegistryVersion() const {
  return registryVersion_;
}

void AddPrivateRegistryRequest::setRegistryVersion(const std::string &registryVersion) {
  registryVersion_ = registryVersion;
  setParameter(std::string("RegistryVersion"), registryVersion);
}

std::string AddPrivateRegistryRequest::getRegistryHostIp() const {
  return registryHostIp_;
}

void AddPrivateRegistryRequest::setRegistryHostIp(const std::string &registryHostIp) {
  registryHostIp_ = registryHostIp;
  setParameter(std::string("RegistryHostIp"), registryHostIp);
}

std::string AddPrivateRegistryRequest::getPassword() const {
  return password_;
}

void AddPrivateRegistryRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string AddPrivateRegistryRequest::getSourceIp() const {
  return sourceIp_;
}

void AddPrivateRegistryRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string AddPrivateRegistryRequest::getRegistryRegionId() const {
  return registryRegionId_;
}

void AddPrivateRegistryRequest::setRegistryRegionId(const std::string &registryRegionId) {
  registryRegionId_ = registryRegionId;
  setParameter(std::string("RegistryRegionId"), registryRegionId);
}

int AddPrivateRegistryRequest::getTransPerHour() const {
  return transPerHour_;
}

void AddPrivateRegistryRequest::setTransPerHour(int transPerHour) {
  transPerHour_ = transPerHour;
  setParameter(std::string("TransPerHour"), std::to_string(transPerHour));
}

std::string AddPrivateRegistryRequest::getRegistryType() const {
  return registryType_;
}

void AddPrivateRegistryRequest::setRegistryType(const std::string &registryType) {
  registryType_ = registryType;
  setParameter(std::string("RegistryType"), registryType);
}

std::string AddPrivateRegistryRequest::getDomainName() const {
  return domainName_;
}

void AddPrivateRegistryRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

long AddPrivateRegistryRequest::getNetType() const {
  return netType_;
}

void AddPrivateRegistryRequest::setNetType(long netType) {
  netType_ = netType;
  setParameter(std::string("NetType"), std::to_string(netType));
}

std::string AddPrivateRegistryRequest::getVpcId() const {
  return vpcId_;
}

void AddPrivateRegistryRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

long AddPrivateRegistryRequest::getProtocolType() const {
  return protocolType_;
}

void AddPrivateRegistryRequest::setProtocolType(long protocolType) {
  protocolType_ = protocolType;
  setParameter(std::string("ProtocolType"), std::to_string(protocolType));
}

std::string AddPrivateRegistryRequest::getUserName() const {
  return userName_;
}

void AddPrivateRegistryRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

