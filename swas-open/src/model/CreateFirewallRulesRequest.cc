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

#include <alibabacloud/swas-open/model/CreateFirewallRulesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::CreateFirewallRulesRequest;

CreateFirewallRulesRequest::CreateFirewallRulesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "CreateFirewallRules") {
  setMethod(HttpRequest::Method::Post);
}

CreateFirewallRulesRequest::~CreateFirewallRulesRequest() {}

std::string CreateFirewallRulesRequest::getClientToken() const {
  return clientToken_;
}

void CreateFirewallRulesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateFirewallRulesRequest::getInstanceId() const {
  return instanceId_;
}

void CreateFirewallRulesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateFirewallRulesRequest::getRegionId() const {
  return regionId_;
}

void CreateFirewallRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<CreateFirewallRulesRequest::FirewallRules> CreateFirewallRulesRequest::getFirewallRules() const {
  return firewallRules_;
}

void CreateFirewallRulesRequest::setFirewallRules(const std::vector<CreateFirewallRulesRequest::FirewallRules> &firewallRules) {
  firewallRules_ = firewallRules;
  for(int dep1 = 0; dep1 != firewallRules.size(); dep1++) {
    setParameter(std::string("FirewallRules") + "." + std::to_string(dep1 + 1) + ".RuleProtocol", firewallRules[dep1].ruleProtocol);
    setParameter(std::string("FirewallRules") + "." + std::to_string(dep1 + 1) + ".Port", firewallRules[dep1].port);
    setParameter(std::string("FirewallRules") + "." + std::to_string(dep1 + 1) + ".SourceCidrIp", firewallRules[dep1].sourceCidrIp);
    setParameter(std::string("FirewallRules") + "." + std::to_string(dep1 + 1) + ".Remark", firewallRules[dep1].remark);
  }
}

std::vector<CreateFirewallRulesRequest::Tag> CreateFirewallRulesRequest::getTag() const {
  return tag_;
}

void CreateFirewallRulesRequest::setTag(const std::vector<CreateFirewallRulesRequest::Tag> &tag) {
  tag_ = tag;
  for(int dep1 = 0; dep1 != tag.size(); dep1++) {
  auto tagObj = tag.at(dep1);
  std::string tagObjStr = std::string("Tag") + "." + std::to_string(dep1 + 1);
    setParameter(tagObjStr + ".Key", tagObj.key);
    setParameter(tagObjStr + ".Value", tagObj.value);
  }
}

