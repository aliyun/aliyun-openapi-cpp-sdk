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

#include <alibabacloud/oceanbasepro/model/ModifyTenantResourceRequest.h>

using AlibabaCloud::OceanBasePro::Model::ModifyTenantResourceRequest;

ModifyTenantResourceRequest::ModifyTenantResourceRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "ModifyTenantResource") {
  setMethod(HttpRequest::Method::Post);
}

ModifyTenantResourceRequest::~ModifyTenantResourceRequest() {}

int ModifyTenantResourceRequest::getMemory() const {
  return memory_;
}

void ModifyTenantResourceRequest::setMemory(int memory) {
  memory_ = memory;
  setBodyParameter(std::string("Memory"), std::to_string(memory));
}

long ModifyTenantResourceRequest::getLogDisk() const {
  return logDisk_;
}

void ModifyTenantResourceRequest::setLogDisk(long logDisk) {
  logDisk_ = logDisk;
  setBodyParameter(std::string("LogDisk"), std::to_string(logDisk));
}

int ModifyTenantResourceRequest::getCpu() const {
  return cpu_;
}

void ModifyTenantResourceRequest::setCpu(int cpu) {
  cpu_ = cpu;
  setBodyParameter(std::string("Cpu"), std::to_string(cpu));
}

std::string ModifyTenantResourceRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyTenantResourceRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setBodyParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyTenantResourceRequest::getTenantId() const {
  return tenantId_;
}

void ModifyTenantResourceRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

std::string ModifyTenantResourceRequest::getIops() const {
  return iops_;
}

void ModifyTenantResourceRequest::setIops(const std::string &iops) {
  iops_ = iops;
  setBodyParameter(std::string("Iops"), iops);
}

std::string ModifyTenantResourceRequest::getReadOnlyZoneList() const {
  return readOnlyZoneList_;
}

void ModifyTenantResourceRequest::setReadOnlyZoneList(const std::string &readOnlyZoneList) {
  readOnlyZoneList_ = readOnlyZoneList;
  setBodyParameter(std::string("ReadOnlyZoneList"), readOnlyZoneList);
}

