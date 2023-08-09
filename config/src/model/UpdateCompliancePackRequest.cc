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

#include <alibabacloud/config/model/UpdateCompliancePackRequest.h>

using AlibabaCloud::Config::Model::UpdateCompliancePackRequest;

UpdateCompliancePackRequest::UpdateCompliancePackRequest()
    : RpcServiceRequest("config", "2020-09-07", "UpdateCompliancePack") {
  setMethod(HttpRequest::Method::Post);
}

UpdateCompliancePackRequest::~UpdateCompliancePackRequest() {}

std::string UpdateCompliancePackRequest::getTagKeyScope() const {
  return tagKeyScope_;
}

void UpdateCompliancePackRequest::setTagKeyScope(const std::string &tagKeyScope) {
  tagKeyScope_ = tagKeyScope;
  setBodyParameter(std::string("TagKeyScope"), tagKeyScope);
}

std::string UpdateCompliancePackRequest::getCompliancePackName() const {
  return compliancePackName_;
}

void UpdateCompliancePackRequest::setCompliancePackName(const std::string &compliancePackName) {
  compliancePackName_ = compliancePackName;
  setBodyParameter(std::string("CompliancePackName"), compliancePackName);
}

std::string UpdateCompliancePackRequest::getClientToken() const {
  return clientToken_;
}

void UpdateCompliancePackRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string UpdateCompliancePackRequest::getDescription() const {
  return description_;
}

void UpdateCompliancePackRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateCompliancePackRequest::getTagValueScope() const {
  return tagValueScope_;
}

void UpdateCompliancePackRequest::setTagValueScope(const std::string &tagValueScope) {
  tagValueScope_ = tagValueScope;
  setBodyParameter(std::string("TagValueScope"), tagValueScope);
}

std::string UpdateCompliancePackRequest::getRegionIdsScope() const {
  return regionIdsScope_;
}

void UpdateCompliancePackRequest::setRegionIdsScope(const std::string &regionIdsScope) {
  regionIdsScope_ = regionIdsScope;
  setBodyParameter(std::string("RegionIdsScope"), regionIdsScope);
}

std::string UpdateCompliancePackRequest::getCompliancePackId() const {
  return compliancePackId_;
}

void UpdateCompliancePackRequest::setCompliancePackId(const std::string &compliancePackId) {
  compliancePackId_ = compliancePackId;
  setBodyParameter(std::string("CompliancePackId"), compliancePackId);
}

std::vector<UpdateCompliancePackRequest::ConfigRules> UpdateCompliancePackRequest::getConfigRules() const {
  return configRules_;
}

void UpdateCompliancePackRequest::setConfigRules(const std::vector<UpdateCompliancePackRequest::ConfigRules> &configRules) {
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

int UpdateCompliancePackRequest::getRiskLevel() const {
  return riskLevel_;
}

void UpdateCompliancePackRequest::setRiskLevel(int riskLevel) {
  riskLevel_ = riskLevel;
  setBodyParameter(std::string("RiskLevel"), std::to_string(riskLevel));
}

std::string UpdateCompliancePackRequest::getResourceGroupIdsScope() const {
  return resourceGroupIdsScope_;
}

void UpdateCompliancePackRequest::setResourceGroupIdsScope(const std::string &resourceGroupIdsScope) {
  resourceGroupIdsScope_ = resourceGroupIdsScope;
  setBodyParameter(std::string("ResourceGroupIdsScope"), resourceGroupIdsScope);
}

std::string UpdateCompliancePackRequest::getExcludeResourceIdsScope() const {
  return excludeResourceIdsScope_;
}

void UpdateCompliancePackRequest::setExcludeResourceIdsScope(const std::string &excludeResourceIdsScope) {
  excludeResourceIdsScope_ = excludeResourceIdsScope;
  setBodyParameter(std::string("ExcludeResourceIdsScope"), excludeResourceIdsScope);
}

