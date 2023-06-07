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

#include <alibabacloud/swas-open/model/EnableFirewallRuleRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::EnableFirewallRuleRequest;

EnableFirewallRuleRequest::EnableFirewallRuleRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "EnableFirewallRule") {
  setMethod(HttpRequest::Method::Post);
}

EnableFirewallRuleRequest::~EnableFirewallRuleRequest() {}

std::string EnableFirewallRuleRequest::getClientToken() const {
  return clientToken_;
}

void EnableFirewallRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string EnableFirewallRuleRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void EnableFirewallRuleRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

std::string EnableFirewallRuleRequest::getRemark() const {
  return remark_;
}

void EnableFirewallRuleRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string EnableFirewallRuleRequest::getInstanceId() const {
  return instanceId_;
}

void EnableFirewallRuleRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string EnableFirewallRuleRequest::getRegionId() const {
  return regionId_;
}

void EnableFirewallRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string EnableFirewallRuleRequest::getRuleId() const {
  return ruleId_;
}

void EnableFirewallRuleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

