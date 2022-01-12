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

#include <alibabacloud/config/model/CreateAggregateCompliancePackRequest.h>

using AlibabaCloud::Config::Model::CreateAggregateCompliancePackRequest;

CreateAggregateCompliancePackRequest::CreateAggregateCompliancePackRequest()
    : RpcServiceRequest("config", "2020-09-07", "CreateAggregateCompliancePack") {
  setMethod(HttpRequest::Method::Post);
}

CreateAggregateCompliancePackRequest::~CreateAggregateCompliancePackRequest() {}

std::string CreateAggregateCompliancePackRequest::getCompliancePackName() const {
  return compliancePackName_;
}

void CreateAggregateCompliancePackRequest::setCompliancePackName(const std::string &compliancePackName) {
  compliancePackName_ = compliancePackName;
  setBodyParameter(std::string("CompliancePackName"), compliancePackName);
}

std::string CreateAggregateCompliancePackRequest::getClientToken() const {
  return clientToken_;
}

void CreateAggregateCompliancePackRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string CreateAggregateCompliancePackRequest::getCompliancePackTemplateId() const {
  return compliancePackTemplateId_;
}

void CreateAggregateCompliancePackRequest::setCompliancePackTemplateId(const std::string &compliancePackTemplateId) {
  compliancePackTemplateId_ = compliancePackTemplateId;
  setBodyParameter(std::string("CompliancePackTemplateId"), compliancePackTemplateId);
}

std::string CreateAggregateCompliancePackRequest::getDescription() const {
  return description_;
}

void CreateAggregateCompliancePackRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateAggregateCompliancePackRequest::getAggregatorId() const {
  return aggregatorId_;
}

void CreateAggregateCompliancePackRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setBodyParameter(std::string("AggregatorId"), aggregatorId);
}

std::vector<CreateAggregateCompliancePackRequest::ConfigRules> CreateAggregateCompliancePackRequest::getConfigRules() const {
  return configRules_;
}

void CreateAggregateCompliancePackRequest::setConfigRules(const std::vector<CreateAggregateCompliancePackRequest::ConfigRules> &configRules) {
  configRules_ = configRules;
  for(int dep1 = 0; dep1 != configRules.size(); dep1++) {
    setBodyParameter(std::string("ConfigRules") + "." + std::to_string(dep1 + 1) + ".ManagedRuleIdentifier", configRules[dep1].managedRuleIdentifier);
    for(int dep2 = 0; dep2 != configRules[dep1].configRuleParameters.size(); dep2++) {
      setBodyParameter(std::string("ConfigRules") + "." + std::to_string(dep1 + 1) + ".ConfigRuleParameters." + std::to_string(dep2 + 1) + ".ParameterValue", configRules[dep1].configRuleParameters[dep2].parameterValue);
      setBodyParameter(std::string("ConfigRules") + "." + std::to_string(dep1 + 1) + ".ConfigRuleParameters." + std::to_string(dep2 + 1) + ".ParameterName", configRules[dep1].configRuleParameters[dep2].parameterName);
    }
    setBodyParameter(std::string("ConfigRules") + "." + std::to_string(dep1 + 1) + ".ConfigRuleId", configRules[dep1].configRuleId);
    setBodyParameter(std::string("ConfigRules") + "." + std::to_string(dep1 + 1) + ".ConfigRuleName", configRules[dep1].configRuleName);
    setBodyParameter(std::string("ConfigRules") + "." + std::to_string(dep1 + 1) + ".Description", configRules[dep1].description);
    setBodyParameter(std::string("ConfigRules") + "." + std::to_string(dep1 + 1) + ".RiskLevel", std::to_string(configRules[dep1].riskLevel));
  }
}

int CreateAggregateCompliancePackRequest::getRiskLevel() const {
  return riskLevel_;
}

void CreateAggregateCompliancePackRequest::setRiskLevel(int riskLevel) {
  riskLevel_ = riskLevel;
  setBodyParameter(std::string("RiskLevel"), std::to_string(riskLevel));
}

