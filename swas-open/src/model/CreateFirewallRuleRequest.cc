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

#include <alibabacloud/swas-open/model/CreateFirewallRuleRequest.h>

using AlibabaCloud::SWAS_OPEN::Model::CreateFirewallRuleRequest;

CreateFirewallRuleRequest::CreateFirewallRuleRequest()
    : RpcServiceRequest("swas-open", "2020-06-01", "CreateFirewallRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateFirewallRuleRequest::~CreateFirewallRuleRequest() {}

std::string CreateFirewallRuleRequest::getClientToken() const {
  return clientToken_;
}

void CreateFirewallRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateFirewallRuleRequest::getRemark() const {
  return remark_;
}

void CreateFirewallRuleRequest::setRemark(const std::string &remark) {
  remark_ = remark;
  setParameter(std::string("Remark"), remark);
}

std::string CreateFirewallRuleRequest::getInstanceId() const {
  return instanceId_;
}

void CreateFirewallRuleRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string CreateFirewallRuleRequest::getRuleProtocol() const {
  return ruleProtocol_;
}

void CreateFirewallRuleRequest::setRuleProtocol(const std::string &ruleProtocol) {
  ruleProtocol_ = ruleProtocol;
  setParameter(std::string("RuleProtocol"), ruleProtocol);
}

std::string CreateFirewallRuleRequest::getRegionId() const {
  return regionId_;
}

void CreateFirewallRuleRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateFirewallRuleRequest::getPort() const {
  return port_;
}

void CreateFirewallRuleRequest::setPort(const std::string &port) {
  port_ = port;
  setParameter(std::string("Port"), port);
}

