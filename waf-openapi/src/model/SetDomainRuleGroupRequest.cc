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

#include <alibabacloud/waf-openapi/model/SetDomainRuleGroupRequest.h>

using AlibabaCloud::Waf_openapi::Model::SetDomainRuleGroupRequest;

SetDomainRuleGroupRequest::SetDomainRuleGroupRequest()
    : RpcServiceRequest("waf-openapi", "2019-09-10", "SetDomainRuleGroup") {
  setMethod(HttpRequest::Method::Post);
}

SetDomainRuleGroupRequest::~SetDomainRuleGroupRequest() {}

long SetDomainRuleGroupRequest::getWafVersion() const {
  return wafVersion_;
}

void SetDomainRuleGroupRequest::setWafVersion(long wafVersion) {
  wafVersion_ = wafVersion;
  setParameter(std::string("WafVersion"), std::to_string(wafVersion));
}

int SetDomainRuleGroupRequest::getWafAiStatus() const {
  return wafAiStatus_;
}

void SetDomainRuleGroupRequest::setWafAiStatus(int wafAiStatus) {
  wafAiStatus_ = wafAiStatus;
  setParameter(std::string("WafAiStatus"), std::to_string(wafAiStatus));
}

long SetDomainRuleGroupRequest::getRuleGroupId() const {
  return ruleGroupId_;
}

void SetDomainRuleGroupRequest::setRuleGroupId(long ruleGroupId) {
  ruleGroupId_ = ruleGroupId;
  setParameter(std::string("RuleGroupId"), std::to_string(ruleGroupId));
}

std::string SetDomainRuleGroupRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void SetDomainRuleGroupRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string SetDomainRuleGroupRequest::getSourceIp() const {
  return sourceIp_;
}

void SetDomainRuleGroupRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string SetDomainRuleGroupRequest::getRegionId() const {
  return regionId_;
}

void SetDomainRuleGroupRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string SetDomainRuleGroupRequest::getLang() const {
  return lang_;
}

void SetDomainRuleGroupRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string SetDomainRuleGroupRequest::getDomains() const {
  return domains_;
}

void SetDomainRuleGroupRequest::setDomains(const std::string &domains) {
  domains_ = domains;
  setParameter(std::string("Domains"), domains);
}

std::string SetDomainRuleGroupRequest::getInstanceId() const {
  return instanceId_;
}

void SetDomainRuleGroupRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

