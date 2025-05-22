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

#include <alibabacloud/rds/model/CreateMaskingRulesRequest.h>

using AlibabaCloud::Rds::Model::CreateMaskingRulesRequest;

CreateMaskingRulesRequest::CreateMaskingRulesRequest()
    : RpcServiceRequest("rds", "2014-08-15", "CreateMaskingRules") {
  setMethod(HttpRequest::Method::Post);
}

CreateMaskingRulesRequest::~CreateMaskingRulesRequest() {}

std::string CreateMaskingRulesRequest::getDBInstanceName() const {
  return dBInstanceName_;
}

void CreateMaskingRulesRequest::setDBInstanceName(const std::string &dBInstanceName) {
  dBInstanceName_ = dBInstanceName;
  setParameter(std::string("DBInstanceName"), dBInstanceName);
}

long CreateMaskingRulesRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void CreateMaskingRulesRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string CreateMaskingRulesRequest::getMaskingAlgo() const {
  return maskingAlgo_;
}

void CreateMaskingRulesRequest::setMaskingAlgo(const std::string &maskingAlgo) {
  maskingAlgo_ = maskingAlgo;
  setParameter(std::string("MaskingAlgo"), maskingAlgo);
}

std::string CreateMaskingRulesRequest::getRuleName() const {
  return ruleName_;
}

void CreateMaskingRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string CreateMaskingRulesRequest::getRegionId() const {
  return regionId_;
}

void CreateMaskingRulesRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string CreateMaskingRulesRequest::getResourceOwnerAccount() const {
  return resourceOwnerAccount_;
}

void CreateMaskingRulesRequest::setResourceOwnerAccount(const std::string &resourceOwnerAccount) {
  resourceOwnerAccount_ = resourceOwnerAccount;
  setParameter(std::string("ResourceOwnerAccount"), resourceOwnerAccount);
}

std::string CreateMaskingRulesRequest::getOwnerId() const {
  return ownerId_;
}

void CreateMaskingRulesRequest::setOwnerId(const std::string &ownerId) {
  ownerId_ = ownerId;
  setParameter(std::string("OwnerId"), ownerId);
}

std::string CreateMaskingRulesRequest::getDefaultAlgo() const {
  return defaultAlgo_;
}

void CreateMaskingRulesRequest::setDefaultAlgo(const std::string &defaultAlgo) {
  defaultAlgo_ = defaultAlgo;
  setParameter(std::string("DefaultAlgo"), defaultAlgo);
}

CreateMaskingRulesRequest::RuleConfig CreateMaskingRulesRequest::getRuleConfig() const {
  return ruleConfig_;
}

void CreateMaskingRulesRequest::setRuleConfig(const CreateMaskingRulesRequest::RuleConfig &ruleConfig) {
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

std::string CreateMaskingRulesRequest::getDBName() const {
  return dBName_;
}

void CreateMaskingRulesRequest::setDBName(const std::string &dBName) {
  dBName_ = dBName;
  setParameter(std::string("DBName"), dBName);
}

