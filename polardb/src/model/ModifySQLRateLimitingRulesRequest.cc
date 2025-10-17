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

#include <alibabacloud/polardb/model/ModifySQLRateLimitingRulesRequest.h>

using AlibabaCloud::Polardb::Model::ModifySQLRateLimitingRulesRequest;

ModifySQLRateLimitingRulesRequest::ModifySQLRateLimitingRulesRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifySQLRateLimitingRules") {
  setMethod(HttpRequest::Method::Post);
}

ModifySQLRateLimitingRulesRequest::~ModifySQLRateLimitingRulesRequest() {}

long ModifySQLRateLimitingRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifySQLRateLimitingRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifySQLRateLimitingRulesRequest::getRuleName() const {
  return ruleName_;
}

void ModifySQLRateLimitingRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string ModifySQLRateLimitingRulesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void ModifySQLRateLimitingRulesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string ModifySQLRateLimitingRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifySQLRateLimitingRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifySQLRateLimitingRulesRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifySQLRateLimitingRulesRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifySQLRateLimitingRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void ModifySQLRateLimitingRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long ModifySQLRateLimitingRulesRequest::getOwnerId() const {
  return ownerId_;
}

void ModifySQLRateLimitingRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string ModifySQLRateLimitingRulesRequest::getRuleConfig() const {
  return ruleConfig_;
}

void ModifySQLRateLimitingRulesRequest::setRuleConfig(const std::string &ruleConfig) {
  ruleConfig_ = ruleConfig;
  setParameter(std::string("RuleConfig"), ruleConfig);
}

