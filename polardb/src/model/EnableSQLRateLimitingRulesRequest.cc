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

#include <alibabacloud/polardb/model/EnableSQLRateLimitingRulesRequest.h>

using AlibabaCloud::Polardb::Model::EnableSQLRateLimitingRulesRequest;

EnableSQLRateLimitingRulesRequest::EnableSQLRateLimitingRulesRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "EnableSQLRateLimitingRules") {
  setMethod(HttpRequest::Method::Post);
}

EnableSQLRateLimitingRulesRequest::~EnableSQLRateLimitingRulesRequest() {}

long EnableSQLRateLimitingRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void EnableSQLRateLimitingRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string EnableSQLRateLimitingRulesRequest::getAccessKeyId() const {
  return accessKeyId_;
}

void EnableSQLRateLimitingRulesRequest::setAccessKeyId(const std::string &accessKeyId) {
  accessKeyId_ = accessKeyId;
  setParameter(std::string("AccessKeyId"), accessKeyId);
}

bool EnableSQLRateLimitingRulesRequest::getEnable() const {
  return enable_;
}

void EnableSQLRateLimitingRulesRequest::setEnable(bool enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable ? "true" : "false");
}

std::string EnableSQLRateLimitingRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void EnableSQLRateLimitingRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string EnableSQLRateLimitingRulesRequest::getDBClusterId() const {
  return dBClusterId_;
}

void EnableSQLRateLimitingRulesRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string EnableSQLRateLimitingRulesRequest::getOwnerAccount() const {
  return ownerAccount_;
}

void EnableSQLRateLimitingRulesRequest::setOwnerAccount(const std::string &ownerAccount) {
  ownerAccount_ = ownerAccount;
  setParameter(std::string("OwnerAccount"), ownerAccount);
}

long EnableSQLRateLimitingRulesRequest::getOwnerId() const {
  return ownerId_;
}

void EnableSQLRateLimitingRulesRequest::setOwnerId(long ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), std::to_string(ownerId));
}

std::string EnableSQLRateLimitingRulesRequest::getRuleNameList() const {
  return ruleNameList_;
}

void EnableSQLRateLimitingRulesRequest::setRuleNameList(const std::string &ruleNameList) {
  ruleNameList_ = ruleNameList;
  setParameter(std::string("RuleNameList"), ruleNameList);
}

