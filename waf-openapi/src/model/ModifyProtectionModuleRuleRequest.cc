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

#include <alibabacloud/waf-openapi/model/ModifyProtectionModuleRuleRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyProtectionModuleRuleRequest;

ModifyProtectionModuleRuleRequest::ModifyProtectionModuleRuleRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "ModifyProtectionModuleRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyProtectionModuleRuleRequest::~ModifyProtectionModuleRuleRequest() {}

std::string ModifyProtectionModuleRuleRequest::getRule() const {
  return rule_;
}

void ModifyProtectionModuleRuleRequest::setRule(const std::string &rule) {
  rule_ = rule;
  setParameter(std::string("Rule"), rule);
}

long ModifyProtectionModuleRuleRequest::getLockVersion() const {
  return lockVersion_;
}

void ModifyProtectionModuleRuleRequest::setLockVersion(long lockVersion) {
  lockVersion_ = lockVersion;
  setParameter(std::string("LockVersion"), std::to_string(lockVersion));
}

std::string ModifyProtectionModuleRuleRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyProtectionModuleRuleRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyProtectionModuleRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyProtectionModuleRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyProtectionModuleRuleRequest::getRegionId() const {
  return regionId_;
}

void ModifyProtectionModuleRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyProtectionModuleRuleRequest::getLang() const {
  return lang_;
}

void ModifyProtectionModuleRuleRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ModifyProtectionModuleRuleRequest::getDefenseType() const {
  return defenseType_;
}

void ModifyProtectionModuleRuleRequest::setDefenseType(const std::string &defenseType) {
  defenseType_ = defenseType;
  setParameter(std::string("DefenseType"), defenseType);
}

std::string ModifyProtectionModuleRuleRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyProtectionModuleRuleRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyProtectionModuleRuleRequest::getDomain() const {
  return domain_;
}

void ModifyProtectionModuleRuleRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

long ModifyProtectionModuleRuleRequest::getRuleId() const {
  return ruleId_;
}

void ModifyProtectionModuleRuleRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

