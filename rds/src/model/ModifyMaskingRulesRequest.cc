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

#include <alibabacloud/rds/model/ModifyMaskingRulesRequest.h>

using AlibabaCloud::Rds::Model::ModifyMaskingRulesRequest;

ModifyMaskingRulesRequest::ModifyMaskingRulesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "ModifyMaskingRules") {
  setMethod(HttpRequest::Method::Post);
}

ModifyMaskingRulesRequest::~ModifyMaskingRulesRequest() {}

std::string ModifyMaskingRulesRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void ModifyMaskingRulesRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long ModifyMaskingRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ModifyMaskingRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ModifyMaskingRulesRequest::getMaskingAlgo() const {
  return maskingAlgo_;
}

void ModifyMaskingRulesRequest::setMaskingAlgo(const std::string &maskingAlgo) {
  maskingAlgo_ = maskingAlgo;
  setParameter(std::string("MaskingAlgo"), maskingAlgo);
}

std::string ModifyMaskingRulesRequest::getRuleName() const {
  return ruleName_;
}

void ModifyMaskingRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string ModifyMaskingRulesRequest::getEnabled() const {
  return enabled_;
}

void ModifyMaskingRulesRequest::setEnabled(const std::string &enabled) {
  enabled_ = enabled;
  setParameter(std::string("Enabled"), enabled);
}

std::string ModifyMaskingRulesRequest::getRegionId() const {
  return regionId_;
}

void ModifyMaskingRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ModifyMaskingRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void ModifyMaskingRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string ModifyMaskingRulesRequest::getOwnerId() const {
  return ownerId_;
}

void ModifyMaskingRulesRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string ModifyMaskingRulesRequest::getDefaultAlgo() const {
  return defaultAlgo_;
}

void ModifyMaskingRulesRequest::setDefaultAlgo(const std::string &defaultAlgo) {
  defaultAlgo_ = defaultAlgo;
  setParameter(std::string("DefaultAlgo"), defaultAlgo);
}

ModifyMaskingRulesRequest::RuleConfig ModifyMaskingRulesRequest::getRuleConfig() const {
  return ruleConfig_;
}

void ModifyMaskingRulesRequest::setRuleConfig(const ModifyMaskingRulesRequest::RuleConfig &ruleConfig) {
  ruleConfig_ = ruleConfig;
  for(int dep1 = 0; dep1 != ruleConfig.databases.size(); dep1++) {
    setParameter(std::string("RuleConfig") + ".Databases." + std::to_string(dep1 + 1), ruleConfig.databases[dep1]);
  }
  for(int dep1 = 0; dep1 != ruleConfig.tables.size(); dep1++) {
    setParameter(std::string("RuleConfig") + ".Tables." + std::to_string(dep1 + 1), ruleConfig.tables[dep1]);
  }
  for(int dep1 = 0; dep1 != ruleConfig.columns.size(); dep1++) {
    setParameter(std::string("RuleConfig") + ".Columns." + std::to_string(dep1 + 1), ruleConfig.columns[dep1]);
  }
}

std::string ModifyMaskingRulesRequest::getDBName() const {
  return dBName_;
}

void ModifyMaskingRulesRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

