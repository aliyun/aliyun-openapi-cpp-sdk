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

#include <alibabacloud/config/model/UpdateConfigRuleRequest.h>

using AlibabaCloud::Config::Model::UpdateConfigRuleRequest;

UpdateConfigRuleRequest::UpdateConfigRuleRequest()
    : RpcServiceRequest("config", "2020-09-07", "UpdateConfigRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateConfigRuleRequest::~UpdateConfigRuleRequest() {}

std::string UpdateConfigRuleRequest::getConfigRuleId() const {
  return configRuleId_;
}

void UpdateConfigRuleRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setBodyParameter(std::string("ConfigRuleId"), configRuleId);
}

std::string UpdateConfigRuleRequest::getTagKeyScope() const {
  return tagKeyScope_;
}

void UpdateConfigRuleRequest::setTagKeyScope(const std::string &tagKeyScope) {
  tagKeyScope_ = tagKeyScope;
  setBodyParameter(std::string("TagKeyScope"), tagKeyScope);
}

std::string UpdateConfigRuleRequest::getClientToken() const {
  return clientToken_;
}

void UpdateConfigRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::vector<UpdateConfigRuleRequest::std::string> UpdateConfigRuleRequest::getResourceTypesScope() const {
  return resourceTypesScope_;
}

void UpdateConfigRuleRequest::setResourceTypesScope(const std::vector<UpdateConfigRuleRequest::std::string> &resourceTypesScope) {
  resourceTypesScope_ = resourceTypesScope;
  for(int dep1 = 0; dep1 != resourceTypesScope.size(); dep1++) {
    setBodyParameter(std::string("ResourceTypesScope") + "." + std::to_string(dep1 + 1), resourceTypesScope[dep1]);
  }
}

std::string UpdateConfigRuleRequest::getDescription() const {
  return description_;
}

void UpdateConfigRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateConfigRuleRequest::getConfigRuleTriggerTypes() const {
  return configRuleTriggerTypes_;
}

void UpdateConfigRuleRequest::setConfigRuleTriggerTypes(const std::string &configRuleTriggerTypes) {
  configRuleTriggerTypes_ = configRuleTriggerTypes;
  setBodyParameter(std::string("ConfigRuleTriggerTypes"), configRuleTriggerTypes);
}

std::string UpdateConfigRuleRequest::getTagValueScope() const {
  return tagValueScope_;
}

void UpdateConfigRuleRequest::setTagValueScope(const std::string &tagValueScope) {
  tagValueScope_ = tagValueScope;
  setBodyParameter(std::string("TagValueScope"), tagValueScope);
}

std::string UpdateConfigRuleRequest::getRegionIdsScope() const {
  return regionIdsScope_;
}

void UpdateConfigRuleRequest::setRegionIdsScope(const std::string &regionIdsScope) {
  regionIdsScope_ = regionIdsScope;
  setBodyParameter(std::string("RegionIdsScope"), regionIdsScope);
}

int UpdateConfigRuleRequest::getRiskLevel() const {
  return riskLevel_;
}

void UpdateConfigRuleRequest::setRiskLevel(int riskLevel) {
  riskLevel_ = riskLevel;
  setBodyParameter(std::string("RiskLevel"), std::to_string(riskLevel));
}

std::string UpdateConfigRuleRequest::getResourceGroupIdsScope() const {
  return resourceGroupIdsScope_;
}

void UpdateConfigRuleRequest::setResourceGroupIdsScope(const std::string &resourceGroupIdsScope) {
  resourceGroupIdsScope_ = resourceGroupIdsScope;
  setBodyParameter(std::string("ResourceGroupIdsScope"), resourceGroupIdsScope);
}

std::string UpdateConfigRuleRequest::getInputParameters() const {
  return inputParameters_;
}

void UpdateConfigRuleRequest::setInputParameters(const std::string &inputParameters) {
  inputParameters_ = inputParameters;
  setBodyParameter(std::string("InputParameters"), inputParameters);
}

std::string UpdateConfigRuleRequest::getConfigRuleName() const {
  return configRuleName_;
}

void UpdateConfigRuleRequest::setConfigRuleName(const std::string &configRuleName) {
  configRuleName_ = configRuleName;
  setBodyParameter(std::string("ConfigRuleName"), configRuleName);
}

std::string UpdateConfigRuleRequest::getTagKeyLogicScope() const {
  return tagKeyLogicScope_;
}

void UpdateConfigRuleRequest::setTagKeyLogicScope(const std::string &tagKeyLogicScope) {
  tagKeyLogicScope_ = tagKeyLogicScope;
  setBodyParameter(std::string("TagKeyLogicScope"), tagKeyLogicScope);
}

std::string UpdateConfigRuleRequest::getMaximumExecutionFrequency() const {
  return maximumExecutionFrequency_;
}

void UpdateConfigRuleRequest::setMaximumExecutionFrequency(const std::string &maximumExecutionFrequency) {
  maximumExecutionFrequency_ = maximumExecutionFrequency;
  setBodyParameter(std::string("MaximumExecutionFrequency"), maximumExecutionFrequency);
}

std::string UpdateConfigRuleRequest::getExcludeResourceIdsScope() const {
  return excludeResourceIdsScope_;
}

void UpdateConfigRuleRequest::setExcludeResourceIdsScope(const std::string &excludeResourceIdsScope) {
  excludeResourceIdsScope_ = excludeResourceIdsScope;
  setBodyParameter(std::string("ExcludeResourceIdsScope"), excludeResourceIdsScope);
}

std::string UpdateConfigRuleRequest::getConditions() const {
  return conditions_;
}

void UpdateConfigRuleRequest::setConditions(const std::string &conditions) {
  conditions_ = conditions;
  setBodyParameter(std::string("Conditions"), conditions);
}

