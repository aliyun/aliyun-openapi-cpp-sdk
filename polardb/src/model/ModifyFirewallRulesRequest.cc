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

#include <alibabacloud/polardb/model/ModifyFirewallRulesRequest.h>

using AlibabaCloud::Polardb::Model::ModifyFirewallRulesRequest;

ModifyFirewallRulesRequest::ModifyFirewallRulesRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyFirewallRules") {
  setMethod(HttpRequest::Method::Post);
}

ModifyFirewallRulesRequest::~ModifyFirewallRulesRequest() {}

long ModifyFirewallRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyFirewallRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyFirewallRulesRequest::getRuleName() const {
  return ruleName_;
}

void ModifyFirewallRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string ModifyFirewallRulesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifyFirewallRulesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifyFirewallRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyFirewallRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyFirewallRulesRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyFirewallRulesRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyFirewallRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifyFirewallRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifyFirewallRulesRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyFirewallRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifyFirewallRulesRequest::getRuleConfig() const {
  return ruleConfig_;
}

void ModifyFirewallRulesRequest::setRuleConfig(const std::string &ruleConfig) {
  ruleConfig_ = ruleConfig;
  setParameter(std::string("RuleConfig"), ruleConfig);
}

