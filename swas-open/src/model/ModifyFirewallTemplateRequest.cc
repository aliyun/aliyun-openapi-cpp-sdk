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

#include <alibabacloud/swas-open/model/ModifyFirewallTemplateRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ModifyFirewallTemplateRequest;

ModifyFirewallTemplateRequest::ModifyFirewallTemplateRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ModifyFirewallTemplate") {
  setMethod(HttpRequest::Method::Post);
}

ModifyFirewallTemplateRequest::~ModifyFirewallTemplateRequest() {}

std::string ModifyFirewallTemplateRequest::getFirewallTemplateId() const {
  return firewallTemplateId_;
}

void ModifyFirewallTemplateRequest::setFirewallTemplateId(const std::string &firewallTemplateId) {
  firewallTemplateId_ = firewallTemplateId;
  setParameter(std::string("FirewallTemplateId"), firewallTemplateId);
}

std::string ModifyFirewallTemplateRequest::getClientToken() const {
  return clientToken_;
}

void ModifyFirewallTemplateRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyFirewallTemplateRequest::getDescription() const {
  return description_;
}

void ModifyFirewallTemplateRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string ModifyFirewallTemplateRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyFirewallTemplateRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyFirewallTemplateRequest::getRegionId() const {
  return regionId_;
}

void ModifyFirewallTemplateRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<ModifyFirewallTemplateRequest::FirewallTemplateRule> ModifyFirewallTemplateRequest::getFirewallTemplateRule() const {
  return firewallTemplateRule_;
}

void ModifyFirewallTemplateRequest::setFirewallTemplateRule(const std::vector<ModifyFirewallTemplateRequest::FirewallTemplateRule> &firewallTemplateRule) {
  firewallTemplateRule_ = firewallTemplateRule;
  for(int dep1 = 0; dep1 != firewallTemplateRule.size(); dep1++) {
  auto firewallTemplateRuleObj = firewallTemplateRule.at(dep1);
  std::string firewallTemplateRuleObjStr = std::string("FirewallTemplateRule") + "." + std::to_string(dep1 + 1);
    setParameter(firewallTemplateRuleObjStr + ".FirewallTemplateRuleId", firewallTemplateRuleObj.firewallTemplateRuleId);
    setParameter(firewallTemplateRuleObjStr + ".RuleProtocol", firewallTemplateRuleObj.ruleProtocol);
    setParameter(firewallTemplateRuleObjStr + ".Port", firewallTemplateRuleObj.port);
    setParameter(firewallTemplateRuleObjStr + ".SourceCidrIp", firewallTemplateRuleObj.sourceCidrIp);
    setParameter(firewallTemplateRuleObjStr + ".Remark", firewallTemplateRuleObj.remark);
  }
}

std::string ModifyFirewallTemplateRequest::getName() const {
  return name_;
}

void ModifyFirewallTemplateRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

