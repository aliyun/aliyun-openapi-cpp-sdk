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

#include <alibabacloud/sas/model/CreateJenkinsImageRegistryRequest.h>

using AlibabaCloud::Sas::Model::CreateJenkinsImageRegistryRequest;

CreateJenkinsImageRegistryRequest::CreateJenkinsImageRegistryRequest()
    : RpcServiceRequest("sas", "2018-12-03", "CreateJenkinsImageRegistry") {
  setMethod(HttpRequest::Method::Post);
}

CreateJenkinsImageRegistryRequest::~CreateJenkinsImageRegistryRequest() {}

std::string CreateJenkinsImageRegistryRequest::getExtraParam() const {
  return extraParam_;
}

void CreateJenkinsImageRegistryRequest::setExtraParam(const std::string &extraParam) {
  extraParam_ = extraParam;
  setBodyParameter(std::string("ExtraParam"), extraParam);
}

std::string CreateJenkinsImageRegistryRequest::getRegistryVersion() const {
  return registryVersion_;
}

void CreateJenkinsImageRegistryRequest::setRegistryVersion(const std::string &registryVersion) {
  registryVersion_ = registryVersion;
  setBodyParameter(std::string("RegistryVersion"), registryVersion);
}

std::string CreateJenkinsImageRegistryRequest::getRegistryHostIp() const {
  return registryHostIp_;
}

void CreateJenkinsImageRegistryRequest::setRegistryHostIp(const std::string &registryHostIp) {
  registryHostIp_ = registryHostIp;
  setBodyParameter(std::string("RegistryHostIp"), registryHostIp);
}

std::string CreateJenkinsImageRegistryRequest::getPassword() const {
  return password_;
}

void CreateJenkinsImageRegistryRequest::setPassword(const std::string &password) {
  password_ = password;
  setBodyParameter(std::string("Password"), password);
}

std::string CreateJenkinsImageRegistryRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateJenkinsImageRegistryRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateJenkinsImageRegistryRequest::getRegionId() const {
  return regionId_;
}

void CreateJenkinsImageRegistryRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setBodyParameter(std::string("RegionId"), regionId);
}

std::string CreateJenkinsImageRegistryRequest::getRegistryName() const {
  return registryName_;
}

void CreateJenkinsImageRegistryRequest::setRegistryName(const std::string &registryName) {
  registryName_ = registryName;
  setBodyParameter(std::string("RegistryName"), registryName);
}

int CreateJenkinsImageRegistryRequest::getTransPerHour() const {
  return transPerHour_;
}

void CreateJenkinsImageRegistryRequest::setTransPerHour(int transPerHour) {
  transPerHour_ = transPerHour;
  setBodyParameter(std::string("TransPerHour"), std::to_string(transPerHour));
}

std::string CreateJenkinsImageRegistryRequest::getRegistryType() const {
  return registryType_;
}

void CreateJenkinsImageRegistryRequest::setRegistryType(const std::string &registryType) {
  registryType_ = registryType;
  setBodyParameter(std::string("RegistryType"), registryType);
}

std::string CreateJenkinsImageRegistryRequest::getDomainName() const {
  return domainName_;
}

void CreateJenkinsImageRegistryRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setBodyParameter(std::string("DomainName"), domainName);
}

std::string CreateJenkinsImageRegistryRequest::getWhiteList() const {
  return whiteList_;
}

void CreateJenkinsImageRegistryRequest::setWhiteList(const std::string &whiteList) {
  whiteList_ = whiteList;
  setBodyParameter(std::string("WhiteList"), whiteList);
}

int CreateJenkinsImageRegistryRequest::getNetType() const {
  return netType_;
}

void CreateJenkinsImageRegistryRequest::setNetType(int netType) {
  netType_ = netType;
  setBodyParameter(std::string("NetType"), std::to_string(netType));
}

std::string CreateJenkinsImageRegistryRequest::getVpcId() const {
  return vpcId_;
}

void CreateJenkinsImageRegistryRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setBodyParameter(std::string("VpcId"), vpcId);
}

int CreateJenkinsImageRegistryRequest::getPersistenceDay() const {
  return persistenceDay_;
}

void CreateJenkinsImageRegistryRequest::setPersistenceDay(int persistenceDay) {
  persistenceDay_ = persistenceDay;
  setBodyParameter(std::string("PersistenceDay"), std::to_string(persistenceDay));
}

int CreateJenkinsImageRegistryRequest::getProtocolType() const {
  return protocolType_;
}

void CreateJenkinsImageRegistryRequest::setProtocolType(int protocolType) {
  protocolType_ = protocolType;
  setBodyParameter(std::string("ProtocolType"), std::to_string(protocolType));
}

std::string CreateJenkinsImageRegistryRequest::getUserName() const {
  return userName_;
}

void CreateJenkinsImageRegistryRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

