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

#include <alibabacloud/swas-open/model/CreateFirewallTemplateRulesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::CreateFirewallTemplateRulesRequest;

CreateFirewallTemplateRulesRequest::CreateFirewallTemplateRulesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "CreateFirewallTemplateRules") {
  setMethod(HttpRequest::Method::Post);
}

CreateFirewallTemplateRulesRequest::~CreateFirewallTemplateRulesRequest() {}

std::string CreateFirewallTemplateRulesRequest::getFirewallTemplateId() const {
  return firewallTemplateId_;
}

void CreateFirewallTemplateRulesRequest::setFirewallTemplateId(const std::string &firewallTemplateId) {
  firewallTemplateId_ = firewallTemplateId;
  setParameter(std::string("FirewallTemplateId"), firewallTemplateId);
}

std::string CreateFirewallTemplateRulesRequest::getRegionId() const {
  return regionId_;
}

void CreateFirewallTemplateRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateFirewallTemplateRulesRequest::FirewallRule> CreateFirewallTemplateRulesRequest::getFirewallRule() const {
  return firewallRule_;
}

void CreateFirewallTemplateRulesRequest::setFirewallRule(const std::vector<CreateFirewallTemplateRulesRequest::FirewallRule> &firewallRule) {
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

