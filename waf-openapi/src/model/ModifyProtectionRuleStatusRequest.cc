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

#include <alibabacloud/waf-openapi/model/ModifyProtectionRuleStatusRequest.h>

using AlibabaCloud::Waf_openapi::Model::ModifyProtectionRuleStatusRequest;

ModifyProtectionRuleStatusRequest::ModifyProtectionRuleStatusRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "ModifyProtectionRuleStatus") {
  setMethod(HttpRequest::Method::Post);
}

ModifyProtectionRuleStatusRequest::~ModifyProtectionRuleStatusRequest() {}

long ModifyProtectionRuleStatusRequest::getLockVersion() const {
  return lockVersion_;
}

void ModifyProtectionRuleStatusRequest::setLockVersion(long lockVersion) {
  lockVersion_ = lockVersion;
  setParameter(std::string("LockVersion"), std::to_string(lockVersion));
}

std::string ModifyProtectionRuleStatusRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifyProtectionRuleStatusRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifyProtectionRuleStatusRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifyProtectionRuleStatusRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifyProtectionRuleStatusRequest::getRegionId() const {
  return regionId_;
}

void ModifyProtectionRuleStatusRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyProtectionRuleStatusRequest::getLang() const {
  return lang_;
}

void ModifyProtectionRuleStatusRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ModifyProtectionRuleStatusRequest::getDefenseType() const {
  return defenseType_;
}

void ModifyProtectionRuleStatusRequest::setDefenseType(const std::string &defenseType) {
  defenseType_ = defenseType;
  setParameter(std::string("DefenseType"), defenseType);
}

int ModifyProtectionRuleStatusRequest::getRuleStatus() const {
  return ruleStatus_;
}

void ModifyProtectionRuleStatusRequest::setRuleStatus(int ruleStatus) {
  ruleStatus_ = ruleStatus;
  setParameter(std::string("RuleStatus"), std::to_string(ruleStatus));
}

std::string ModifyProtectionRuleStatusRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyProtectionRuleStatusRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyProtectionRuleStatusRequest::getDomain() const {
  return domain_;
}

void ModifyProtectionRuleStatusRequest::setDomain(const std::string &domain) {
  domain_ = domain;
  setParameter(std::string("Domain"), domain);
}

long ModifyProtectionRuleStatusRequest::getRuleId() const {
  return ruleId_;
}

void ModifyProtectionRuleStatusRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

