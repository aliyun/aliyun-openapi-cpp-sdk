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

#include <alibabacloud/waf-openapi/model/ModifyProtectionModuleStatusRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyProtectionModuleStatusRequest;

ModifyProtectionModuleStatusRequest::ModifyProtectionModuleStatusRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "ModifyProtectionModuleStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyProtectionModuleStatusRequest::~ModifyProtectionModuleStatusRequest() {}

std::string ModifyProtectionModuleStatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyProtectionModuleStatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyProtectionModuleStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyProtectionModuleStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyProtectionModuleStatusRequest::getRegionId() const {
  return regionId_;
}

void ModifyProtectionModuleStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyProtectionModuleStatusRequest::getLang() const {
  return lang_;
}

void ModifyProtectionModuleStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ModifyProtectionModuleStatusRequest::getDefenseType() const {
  return defenseType_;
}

void ModifyProtectionModuleStatusRequest::setDefenseType(const std::string &defenseType) {
  defenseType_ = defenseType;
  setParameter(std::string("DefenseType"), defenseType);
}

std::string ModifyProtectionModuleStatusRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyProtectionModuleStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyProtectionModuleStatusRequest::getDomain() const {
  return domain_;
}

void ModifyProtectionModuleStatusRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

int ModifyProtectionModuleStatusRequest::getModuleStatus() const {
  return moduleStatus_;
}

void ModifyProtectionModuleStatusRequest::setModuleStatus(int moduleStatus) {
  moduleStatus_ = moduleStatus;
  setParameter(std::string("ModuleStatus"), std::to_string(moduleStatus));
}

