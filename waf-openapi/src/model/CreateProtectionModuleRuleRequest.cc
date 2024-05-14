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

#include <alibabacloud/waf-openapi/model/CreateProtectionModuleRuleRequest.h>

using AlibabaCloud::Waf_openapi::Model::CreateProtectionModuleRuleRequest;

CreateProtectionModuleRuleRequest::CreateProtectionModuleRuleRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "CreateProtectionModuleRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateProtectionModuleRuleRequest::~CreateProtectionModuleRuleRequest() {}

std::string CreateProtectionModuleRuleRequest::getRule() const {
  return rule_;
}

void CreateProtectionModuleRuleRequest::setRule(const std::string &rule) {
  rule_ = rule;
  setParameter(std::string("Rule"), rule);
}

std::string CreateProtectionModuleRuleRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void CreateProtectionModuleRuleRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string CreateProtectionModuleRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void CreateProtectionModuleRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string CreateProtectionModuleRuleRequest::getRegionId() const {
  return regionId_;
}

void CreateProtectionModuleRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateProtectionModuleRuleRequest::getLang() const {
  return lang_;
}

void CreateProtectionModuleRuleRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string CreateProtectionModuleRuleRequest::getDefenseType() const {
  return defenseType_;
}

void CreateProtectionModuleRuleRequest::setDefenseType(const std::string &defenseType) {
  defenseType_ = defenseType;
  setParameter(std::string("DefenseType"), defenseType);
}

std::string CreateProtectionModuleRuleRequest::getInstanceId() const {
  return instanceId_;
}

void CreateProtectionModuleRuleRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateProtectionModuleRuleRequest::getDomain() const {
  return domain_;
}

void CreateProtectionModuleRuleRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

