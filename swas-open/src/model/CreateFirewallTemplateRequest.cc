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

#include <alibabacloud/swas-open/model/CreateFirewallTemplateRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::CreateFirewallTemplateRequest;

CreateFirewallTemplateRequest::CreateFirewallTemplateRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "CreateFirewallTemplate") {
  setMethod(HttpRequest::Method::Post);
}

CreateFirewallTemplateRequest::~CreateFirewallTemplateRequest() {}

std::string CreateFirewallTemplateRequest::getDescription() const {
  return description_;
}

void CreateFirewallTemplateRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateFirewallTemplateRequest::getRegionId() const {
  return regionId_;
}

void CreateFirewallTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateFirewallTemplateRequest::getName() const {
  return name_;
}

void CreateFirewallTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::vector<CreateFirewallTemplateRequest::FirewallRule> CreateFirewallTemplateRequest::getFirewallRule() const {
  return firewallRule_;
}

void CreateFirewallTemplateRequest::setFirewallRule(const std::vector<CreateFirewallTemplateRequest::FirewallRule> &firewallRule) {
  firewallRule_ = firewallRule;
  for(int dep1 = 0; dep1 != firewallRule.size(); dep1++) {
  auto firewallRuleObj = firewallRule.at(dep1);
  std::string firewallRuleObjStr = std::string("FirewallRule") + "." + std::to_string(dep1 + 1);
    setParameter(firewallRuleObjStr + ".RuleProtocol", firewallRuleObj.ruleProtocol);
    setParameter(firewallRuleObjStr + ".Port", firewallRuleObj.port);
    setParameter(firewallRuleObjStr + ".SourceCidrIp", firewallRuleObj.sourceCidrIp);
    setParameter(firewallRuleObjStr + ".Remark", firewallRuleObj.remark);
  }
}

