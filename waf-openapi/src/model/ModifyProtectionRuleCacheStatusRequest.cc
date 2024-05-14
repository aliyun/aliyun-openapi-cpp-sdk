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

#include <alibabacloud/waf-openapi/model/ModifyProtectionRuleCacheStatusRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyProtectionRuleCacheStatusRequest;

ModifyProtectionRuleCacheStatusRequest::ModifyProtectionRuleCacheStatusRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "ModifyProtectionRuleCacheStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyProtectionRuleCacheStatusRequest::~ModifyProtectionRuleCacheStatusRequest() {}

std::string ModifyProtectionRuleCacheStatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyProtectionRuleCacheStatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyProtectionRuleCacheStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyProtectionRuleCacheStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyProtectionRuleCacheStatusRequest::getRegionId() const {
  return regionId_;
}

void ModifyProtectionRuleCacheStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyProtectionRuleCacheStatusRequest::getLang() const {
  return lang_;
}

void ModifyProtectionRuleCacheStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ModifyProtectionRuleCacheStatusRequest::getDefenseType() const {
  return defenseType_;
}

void ModifyProtectionRuleCacheStatusRequest::setDefenseType(const std::string &defenseType) {
  defenseType_ = defenseType;
  setParameter(std::string("DefenseType"), defenseType);
}

std::string ModifyProtectionRuleCacheStatusRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyProtectionRuleCacheStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyProtectionRuleCacheStatusRequest::getDomain() const {
  return domain_;
}

void ModifyProtectionRuleCacheStatusRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

long ModifyProtectionRuleCacheStatusRequest::getRuleId() const {
  return ruleId_;
}

void ModifyProtectionRuleCacheStatusRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

