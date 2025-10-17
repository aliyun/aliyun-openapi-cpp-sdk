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

#include <alibabacloud/polardb/model/AddSQLRateLimitingRulesRequest.h>

using AlibabaCloud::Polardb::Model::AddSQLRateLimitingRulesRequest;

AddSQLRateLimitingRulesRequest::AddSQLRateLimitingRulesRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "AddSQLRateLimitingRules") {
  setMethod(HttpRequest::Method::Post);
}

AddSQLRateLimitingRulesRequest::~AddSQLRateLimitingRulesRequest() {}

long AddSQLRateLimitingRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void AddSQLRateLimitingRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string AddSQLRateLimitingRulesRequest::getRuleName() const {
  return ruleName_;
}

void AddSQLRateLimitingRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string AddSQLRateLimitingRulesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void AddSQLRateLimitingRulesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

std::string AddSQLRateLimitingRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void AddSQLRateLimitingRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string AddSQLRateLimitingRulesRequest::getDBClusterId() const {
  return dBClusterId_;
}

void AddSQLRateLimitingRulesRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string AddSQLRateLimitingRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void AddSQLRateLimitingRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long AddSQLRateLimitingRulesRequest::getOwnerId() const {
  return ownerId_;
}

void AddSQLRateLimitingRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string AddSQLRateLimitingRulesRequest::getRuleConfig() const {
  return ruleConfig_;
}

void AddSQLRateLimitingRulesRequest::setRuleConfig(const std::string &ruleConfig) {
  ruleConfig_ = ruleConfig;
  setParameter(std::string("RuleConfig"), ruleConfig);
}

