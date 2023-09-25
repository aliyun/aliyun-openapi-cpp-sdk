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

#include <alibabacloud/swas-open/model/ModifyFirewallRuleRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::ModifyFirewallRuleRequest;

ModifyFirewallRuleRequest::ModifyFirewallRuleRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "ModifyFirewallRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyFirewallRuleRequest::~ModifyFirewallRuleRequest() {}

std::string ModifyFirewallRuleRequest::getClientToken() const {
  return clientToken_;
}

void ModifyFirewallRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string ModifyFirewallRuleRequest::getRemark() const {
  return remark_;
}

void ModifyFirewallRuleRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string ModifyFirewallRuleRequest::getRegionId() const {
  return regionId_;
}

void ModifyFirewallRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyFirewallRuleRequest::getSourceCidrIp() const {
  return sourceCidrIp_;
}

void ModifyFirewallRuleRequest::setSourceCidrIp(const std::string &sourceCidrIp) {
  sourceCidrIp_ = sourceCidrIp;
  setParameter(std::string("SourceCidrIp"), sourceCidrIp);
}

std::string ModifyFirewallRuleRequest::getInstanceId() const {
  return instanceId_;
}

void ModifyFirewallRuleRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ModifyFirewallRuleRequest::getRuleProtocol() const {
  return ruleProtocol_;
}

void ModifyFirewallRuleRequest::setRuleProtocol(const std::string &ruleProtocol) {
  ruleProtocol_ = ruleProtocol;
  setParameter(std::string("RuleProtocol"), ruleProtocol);
}

std::string ModifyFirewallRuleRequest::getPort() const {
  return port_;
}

void ModifyFirewallRuleRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

std::string ModifyFirewallRuleRequest::getRuleId() const {
  return ruleId_;
}

void ModifyFirewallRuleRequest::setRuleId(const std::string &ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), ruleId);
}

