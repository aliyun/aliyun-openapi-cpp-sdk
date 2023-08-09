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

#include <alibabacloud/config/model/UpdateAggregateCompliancePackRequest.h>

using AlibabaCloud::Config::Model::UpdateAggregateCompliancePackRequest;

UpdateAggregateCompliancePackRequest::UpdateAggregateCompliancePackRequest()
    : RpcServiceRequest("config", "2020-09-07", "UpdateAggregateCompliancePack") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAggregateCompliancePackRequest::~UpdateAggregateCompliancePackRequest() {}

std::string UpdateAggregateCompliancePackRequest::getTagKeyScope() const {
  return tagKeyScope_;
}

void UpdateAggregateCompliancePackRequest::setTagKeyScope(const std::string &tagKeyScope) {
  tagKeyScope_ = tagKeyScope;
  setBodyParameter(std::string("TagKeyScope"), tagKeyScope);
}

std::string UpdateAggregateCompliancePackRequest::getCompliancePackName() const {
  return compliancePackName_;
}

void UpdateAggregateCompliancePackRequest::setCompliancePackName(const std::string &compliancePackName) {
  compliancePackName_ = compliancePackName;
  setBodyParameter(std::string("CompliancePackName"), compliancePackName);
}

std::string UpdateAggregateCompliancePackRequest::getClientToken() const {
  return clientToken_;
}

void UpdateAggregateCompliancePackRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateAggregateCompliancePackRequest::getDescription() const {
  return description_;
}

void UpdateAggregateCompliancePackRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateAggregateCompliancePackRequest::getAggregatorId() const {
  return aggregatorId_;
}

void UpdateAggregateCompliancePackRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setBodyParameter(std::string("AggregatorId"), aggregatorId);
}

std::string UpdateAggregateCompliancePackRequest::getTagValueScope() const {
  return tagValueScope_;
}

void UpdateAggregateCompliancePackRequest::setTagValueScope(const std::string &tagValueScope) {
  tagValueScope_ = tagValueScope;
  setBodyParameter(std::string("TagValueScope"), tagValueScope);
}

std::string UpdateAggregateCompliancePackRequest::getRegionIdsScope() const {
  return regionIdsScope_;
}

void UpdateAggregateCompliancePackRequest::setRegionIdsScope(const std::string &regionIdsScope) {
  regionIdsScope_ = regionIdsScope;
  setBodyParameter(std::string("RegionIdsScope"), regionIdsScope);
}

std::string UpdateAggregateCompliancePackRequest::getCompliancePackId() const {
  return compliancePackId_;
}

void UpdateAggregateCompliancePackRequest::setCompliancePackId(const std::string &compliancePackId) {
  compliancePackId_ = compliancePackId;
  setBodyParameter(std::string("CompliancePackId"), compliancePackId);
}

std::vector<UpdateAggregateCompliancePackRequest::ConfigRules> UpdateAggregateCompliancePackRequest::getConfigRules() const {
  return configRules_;
}

void UpdateAggregateCompliancePackRequest::setConfigRules(const std::vector<UpdateAggregateCompliancePackRequest::ConfigRules> &configRules) {
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

int UpdateAggregateCompliancePackRequest::getRiskLevel() const {
  return riskLevel_;
}

void UpdateAggregateCompliancePackRequest::setRiskLevel(int riskLevel) {
  riskLevel_ = riskLevel;
  setBodyParameter(std::string("RiskLevel"), std::to_string(riskLevel));
}

std::string UpdateAggregateCompliancePackRequest::getResourceGroupIdsScope() const {
  return resourceGroupIdsScope_;
}

void UpdateAggregateCompliancePackRequest::setResourceGroupIdsScope(const std::string &resourceGroupIdsScope) {
  resourceGroupIdsScope_ = resourceGroupIdsScope;
  setBodyParameter(std::string("ResourceGroupIdsScope"), resourceGroupIdsScope);
}

std::string UpdateAggregateCompliancePackRequest::getExcludeResourceIdsScope() const {
  return excludeResourceIdsScope_;
}

void UpdateAggregateCompliancePackRequest::setExcludeResourceIdsScope(const std::string &excludeResourceIdsScope) {
  excludeResourceIdsScope_ = excludeResourceIdsScope;
  setBodyParameter(std::string("ExcludeResourceIdsScope"), excludeResourceIdsScope);
}

