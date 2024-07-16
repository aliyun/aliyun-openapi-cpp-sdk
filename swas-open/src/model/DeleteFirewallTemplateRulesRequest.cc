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

#include <alibabacloud/swas-open/model/DeleteFirewallTemplateRulesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DeleteFirewallTemplateRulesRequest;

DeleteFirewallTemplateRulesRequest::DeleteFirewallTemplateRulesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DeleteFirewallTemplateRules") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFirewallTemplateRulesRequest::~DeleteFirewallTemplateRulesRequest() {}

std::string DeleteFirewallTemplateRulesRequest::getFirewallTemplateId() const {
  return firewallTemplateId_;
}

void DeleteFirewallTemplateRulesRequest::setFirewallTemplateId(const std::string &firewallTemplateId) {
  firewallTemplateId_ = firewallTemplateId;
  setParameter(std::string("FirewallTemplateId"), firewallTemplateId);
}

std::string DeleteFirewallTemplateRulesRequest::getClientToken() const {
  return clientToken_;
}

void DeleteFirewallTemplateRulesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteFirewallTemplateRulesRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteFirewallTemplateRulesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteFirewallTemplateRulesRequest::getRegionId() const {
  return regionId_;
}

void DeleteFirewallTemplateRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::vector<std::string> DeleteFirewallTemplateRulesRequest::getFirewallTemplateRuleId() const {
  return firewallTemplateRuleId_;
}

void DeleteFirewallTemplateRulesRequest::setFirewallTemplateRuleId(const std::vector<std::string> &firewallTemplateRuleId) {
  firewallTemplateRuleId_ = firewallTemplateRuleId;
}

