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

#include <alibabacloud/oceanbasepro/model/CreateTenantRequest.h>

using AlibabaCloud::OceanBasePro::Model::CreateTenantRequest;

CreateTenantRequest::CreateTenantRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "CreateTenant") {
  setMethod(HttpRequest::Method::Post);
}

CreateTenantRequest::~CreateTenantRequest() {}

std::string CreateTenantRequest::getCharset() const {
  return charset_;
}

void CreateTenantRequest::setCharset(const std::string &charset) {
  charset_ = charset;
  setBodyParameter(std::string("Charset"), charset);
}

std::string CreateTenantRequest::getTenantMode() const {
  return tenantMode_;
}

void CreateTenantRequest::setTenantMode(const std::string &tenantMode) {
  tenantMode_ = tenantMode;
  setBodyParameter(std::string("TenantMode"), tenantMode);
}

int CreateTenantRequest::getMemory() const {
  return memory_;
}

void CreateTenantRequest::setMemory(int memory) {
  memory_ = memory;
  setBodyParameter(std::string("Memory"), std::to_string(memory));
}

long CreateTenantRequest::getLogDisk() const {
  return logDisk_;
}

void CreateTenantRequest::setLogDisk(long logDisk) {
  logDisk_ = logDisk;
  setBodyParameter(std::string("LogDisk"), std::to_string(logDisk));
}

std::string CreateTenantRequest::getTimeZone() const {
  return timeZone_;
}

void CreateTenantRequest::setTimeZone(const std::string &timeZone) {
  timeZone_ = timeZone;
  setBodyParameter(std::string("TimeZone"), timeZone);
}

std::string CreateTenantRequest::getDescription() const {
  return description_;
}

void CreateTenantRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateTenantRequest::getUserVSwitchId() const {
  return userVSwitchId_;
}

void CreateTenantRequest::setUserVSwitchId(const std::string &userVSwitchId) {
  userVSwitchId_ = userVSwitchId;
  setBodyParameter(std::string("UserVSwitchId"), userVSwitchId);
}

std::string CreateTenantRequest::getUserVpcId() const {
  return userVpcId_;
}

void CreateTenantRequest::setUserVpcId(const std::string &userVpcId) {
  userVpcId_ = userVpcId;
  setBodyParameter(std::string("UserVpcId"), userVpcId);
}

int CreateTenantRequest::getCpu() const {
  return cpu_;
}

void CreateTenantRequest::setCpu(int cpu) {
  cpu_ = cpu;
  setBodyParameter(std::string("Cpu"), std::to_string(cpu));
}

int CreateTenantRequest::getUnitNum() const {
  return unitNum_;
}

void CreateTenantRequest::setUnitNum(int unitNum) {
  unitNum_ = unitNum;
  setBodyParameter(std::string("UnitNum"), std::to_string(unitNum));
}

std::string CreateTenantRequest::getInstanceId() const {
  return instanceId_;
}

void CreateTenantRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string CreateTenantRequest::getPrimaryZone() const {
  return primaryZone_;
}

void CreateTenantRequest::setPrimaryZone(const std::string &primaryZone) {
  primaryZone_ = primaryZone;
  setBodyParameter(std::string("PrimaryZone"), primaryZone);
}

std::string CreateTenantRequest::getUserVpcOwnerId() const {
  return userVpcOwnerId_;
}

void CreateTenantRequest::setUserVpcOwnerId(const std::string &userVpcOwnerId) {
  userVpcOwnerId_ = userVpcOwnerId;
  setBodyParameter(std::string("UserVpcOwnerId"), userVpcOwnerId);
}

std::map<std::string, std::string> CreateTenantRequest::getCreateParams() const {
  return createParams_;
}

void CreateTenantRequest::setCreateParams(const std::map<std::string, std::string> &createParams) {
  createParams_ = createParams;
  for(auto const &iter1 : createParams) {
    setBodyParameter(std::string("CreateParams") + "." + iter1.first, iter1.second);
  }
}

std::string CreateTenantRequest::getTenantName() const {
  return tenantName_;
}

void CreateTenantRequest::setTenantName(const std::string &tenantName) {
  tenantName_ = tenantName;
  setBodyParameter(std::string("TenantName"), tenantName);
}

std::string CreateTenantRequest::getReadOnlyZoneList() const {
  return readOnlyZoneList_;
}

void CreateTenantRequest::setReadOnlyZoneList(const std::string &readOnlyZoneList) {
  readOnlyZoneList_ = readOnlyZoneList;
  setBodyParameter(std::string("ReadOnlyZoneList"), readOnlyZoneList);
}

