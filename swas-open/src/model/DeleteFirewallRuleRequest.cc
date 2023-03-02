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

#include <alibabacloud/swas-open/model/DeleteFirewallRuleRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::DeleteFirewallRuleRequest;

DeleteFirewallRuleRequest::DeleteFirewallRuleRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "DeleteFirewallRule") {
  setMethod(HttpRequest::Method::Post);
}

DeleteFirewallRuleRequest::~DeleteFirewallRuleRequest() {}

std::string DeleteFirewallRuleRequest::getClientToken() const {
  return clientToken_;
}

void DeleteFirewallRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string DeleteFirewallRuleRequest::getInstanceId() const {
  return instanceId_;
}

void DeleteFirewallRuleRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string DeleteFirewallRuleRequest::getRegionId() const {
  return regionId_;
}

void DeleteFirewallRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string DeleteFirewallRuleRequest::getRuleId() const {
  return ruleId_;
}

void DeleteFirewallRuleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

