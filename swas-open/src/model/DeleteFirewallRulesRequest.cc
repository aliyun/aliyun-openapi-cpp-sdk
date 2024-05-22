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

#include <alibabacloud/swas-open/model/DeleteFirewallRulesRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DeleteFirewallRulesRequest;

DeleteFirewallRulesRequest::DeleteFirewallRulesRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DeleteFirewallRules") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFirewallRulesRequest::~DeleteFirewallRulesRequest() {}

std::string DeleteFirewallRulesRequest::getClientToken() const {
  return clientToken_;
}

void DeleteFirewallRulesRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::vector<DeleteFirewallRulesRequest::std::string> DeleteFirewallRulesRequest::getRuleIds() const {
  return ruleIds_;
}

void DeleteFirewallRulesRequest::setRuleIds(const std::vector<DeleteFirewallRulesRequest::std::string> &ruleIds) {
  ruleIds_ = ruleIds;
  for(int dep1 = 0; dep1 != ruleIds.size(); dep1++) {
    setParameter(std::string("RuleIds") + "." + std::to_string(dep1 + 1), ruleIds[dep1]);
  }
}

std::string DeleteFirewallRulesRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteFirewallRulesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteFirewallRulesRequest::getRegionId() const {
  return regionId_;
}

void DeleteFirewallRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

