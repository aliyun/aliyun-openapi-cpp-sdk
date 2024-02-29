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

#include <alibabacloud/sddp/model/ModifyDataLimitRequest.h>

using AlibabaCloud::Sddp::Model::ModifyDataLimitRequest;

ModifyDataLimitRequest::ModifyDataLimitRequest()
    : RpcServiceRequest("sddp", "2019-01-03", "ModifyDataLimit") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDataLimitRequest::~ModifyDataLimitRequest() {}

bool ModifyDataLimitRequest::getModifyPassword() const {
  return modifyPassword_;
}

void ModifyDataLimitRequest::setModifyPassword(bool modifyPassword) {
  modifyPassword_ = modifyPassword;
  setParameter(std::string("ModifyPassword"), modifyPassword ? "true" : "false");
}

std::vector<std::string> ModifyDataLimitRequest::getVSwitchIdList() const {
  return vSwitchIdList_;
}

void ModifyDataLimitRequest::setVSwitchIdList(const std::vector<std::string> &vSwitchIdList) {
  vSwitchIdList_ = vSwitchIdList;
}

int ModifyDataLimitRequest::getSamplingSize() const {
  return samplingSize_;
}

void ModifyDataLimitRequest::setSamplingSize(int samplingSize) {
  samplingSize_ = samplingSize;
  setParameter(std::string("SamplingSize"), std::to_string(samplingSize));
}

std::string ModifyDataLimitRequest::getPassword() const {
  return password_;
}

void ModifyDataLimitRequest::setPassword(const std::string &password) {
  password_ = password;
  setParameter(std::string("Password"), password);
}

std::string ModifyDataLimitRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyDataLimitRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

long ModifyDataLimitRequest::getId() const {
  return id_;
}

void ModifyDataLimitRequest::setId(long id) {
  id_ = id;
  setParameter(std::string("Id"), std::to_string(id));
}

std::string ModifyDataLimitRequest::getLang() const {
  return lang_;
}

void ModifyDataLimitRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ModifyDataLimitRequest::getServiceRegionId() const {
  return serviceRegionId_;
}

void ModifyDataLimitRequest::setServiceRegionId(const std::string &serviceRegionId) {
  serviceRegionId_ = serviceRegionId;
  setParameter(std::string("ServiceRegionId"), serviceRegionId);
}

std::string ModifyDataLimitRequest::getEngineType() const {
  return engineType_;
}

void ModifyDataLimitRequest::setEngineType(const std::string &engineType) {
  engineType_ = engineType;
  setParameter(std::string("EngineType"), engineType);
}

int ModifyDataLimitRequest::getAuditStatus() const {
  return auditStatus_;
}

void ModifyDataLimitRequest::setAuditStatus(int auditStatus) {
  auditStatus_ = auditStatus;
  setParameter(std::string("AuditStatus"), std::to_string(auditStatus));
}

int ModifyDataLimitRequest::getAutoScan() const {
  return autoScan_;
}

void ModifyDataLimitRequest::setAutoScan(int autoScan) {
  autoScan_ = autoScan;
  setParameter(std::string("AutoScan"), std::to_string(autoScan));
}

int ModifyDataLimitRequest::getFeatureType() const {
  return featureType_;
}

void ModifyDataLimitRequest::setFeatureType(int featureType) {
  featureType_ = featureType;
  setParameter(std::string("FeatureType"), std::to_string(featureType));
}

std::vector<std::string> ModifyDataLimitRequest::getSecurityGroupIdList() const {
  return securityGroupIdList_;
}

void ModifyDataLimitRequest::setSecurityGroupIdList(const std::vector<std::string> &securityGroupIdList) {
  securityGroupIdList_ = securityGroupIdList;
}

int ModifyDataLimitRequest::getLogStoreDay() const {
  return logStoreDay_;
}

void ModifyDataLimitRequest::setLogStoreDay(int logStoreDay) {
  logStoreDay_ = logStoreDay;
  setParameter(std::string("LogStoreDay"), std::to_string(logStoreDay));
}

int ModifyDataLimitRequest::getResourceType() const {
  return resourceType_;
}

void ModifyDataLimitRequest::setResourceType(int resourceType) {
  resourceType_ = resourceType;
  setParameter(std::string("ResourceType"), std::to_string(resourceType));
}

std::string ModifyDataLimitRequest::getConnector() const {
  return connector_;
}

void ModifyDataLimitRequest::setConnector(const std::string &connector) {
  connector_ = connector;
  setParameter(std::string("Connector"), connector);
}

int ModifyDataLimitRequest::getPort() const {
  return port_;
}

void ModifyDataLimitRequest::setPort(int port) {
  port_ = port;
  setParameter(std::string("Port"), std::to_string(port));
}

std::string ModifyDataLimitRequest::getVpcId() const {
  return vpcId_;
}

void ModifyDataLimitRequest::setVpcId(const std::string &vpcId) {
  vpcId_ = vpcId;
  setParameter(std::string("VpcId"), vpcId);
}

std::string ModifyDataLimitRequest::getUserName() const {
  return userName_;
}

void ModifyDataLimitRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

