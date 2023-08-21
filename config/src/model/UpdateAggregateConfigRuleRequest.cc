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

#include <alibabacloud/config/model/UpdateAggregateConfigRuleRequest.h>

using AlibabaCloud::Config::Model::UpdateAggregateConfigRuleRequest;

UpdateAggregateConfigRuleRequest::UpdateAggregateConfigRuleRequest()
    : RpcServiceRequest("config", "2020-09-07", "UpdateAggregateConfigRule") {
  setMethod(HttpRequest::Method::Post);
}

UpdateAggregateConfigRuleRequest::~UpdateAggregateConfigRuleRequest() {}

std::string UpdateAggregateConfigRuleRequest::getConfigRuleId() const {
  return configRuleId_;
}

void UpdateAggregateConfigRuleRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setBodyParameter(std::string("ConfigRuleId"), configRuleId);
}

std::string UpdateAggregateConfigRuleRequest::getTagKeyScope() const {
  return tagKeyScope_;
}

void UpdateAggregateConfigRuleRequest::setTagKeyScope(const std::string &tagKeyScope) {
  tagKeyScope_ = tagKeyScope;
  setBodyParameter(std::string("TagKeyScope"), tagKeyScope);
}

std::string UpdateAggregateConfigRuleRequest::getClientToken() const {
  return clientToken_;
}

void UpdateAggregateConfigRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::vector<UpdateAggregateConfigRuleRequest::std::string> UpdateAggregateConfigRuleRequest::getResourceTypesScope() const {
  return resourceTypesScope_;
}

void UpdateAggregateConfigRuleRequest::setResourceTypesScope(const std::vector<UpdateAggregateConfigRuleRequest::std::string> &resourceTypesScope) {
  resourceTypesScope_ = resourceTypesScope;
  for(int dep1 = 0; dep1 != resourceTypesScope.size(); dep1++) {
    setBodyParameter(std::string("ResourceTypesScope") + "." + std::to_string(dep1 + 1), resourceTypesScope[dep1]);
  }
}

std::string UpdateAggregateConfigRuleRequest::getDescription() const {
  return description_;
}

void UpdateAggregateConfigRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateAggregateConfigRuleRequest::getAggregatorId() const {
  return aggregatorId_;
}

void UpdateAggregateConfigRuleRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setBodyParameter(std::string("AggregatorId"), aggregatorId);
}

std::string UpdateAggregateConfigRuleRequest::getConfigRuleTriggerTypes() const {
  return configRuleTriggerTypes_;
}

void UpdateAggregateConfigRuleRequest::setConfigRuleTriggerTypes(const std::string &configRuleTriggerTypes) {
  configRuleTriggerTypes_ = configRuleTriggerTypes;
  setBodyParameter(std::string("ConfigRuleTriggerTypes"), configRuleTriggerTypes);
}

std::string UpdateAggregateConfigRuleRequest::getTagValueScope() const {
  return tagValueScope_;
}

void UpdateAggregateConfigRuleRequest::setTagValueScope(const std::string &tagValueScope) {
  tagValueScope_ = tagValueScope;
  setBodyParameter(std::string("TagValueScope"), tagValueScope);
}

std::string UpdateAggregateConfigRuleRequest::getExcludeAccountIdsScope() const {
  return excludeAccountIdsScope_;
}

void UpdateAggregateConfigRuleRequest::setExcludeAccountIdsScope(const std::string &excludeAccountIdsScope) {
  excludeAccountIdsScope_ = excludeAccountIdsScope;
  setBodyParameter(std::string("ExcludeAccountIdsScope"), excludeAccountIdsScope);
}

std::string UpdateAggregateConfigRuleRequest::getRegionIdsScope() const {
  return regionIdsScope_;
}

void UpdateAggregateConfigRuleRequest::setRegionIdsScope(const std::string &regionIdsScope) {
  regionIdsScope_ = regionIdsScope;
  setBodyParameter(std::string("RegionIdsScope"), regionIdsScope);
}

std::string UpdateAggregateConfigRuleRequest::getExcludeFolderIdsScope() const {
  return excludeFolderIdsScope_;
}

void UpdateAggregateConfigRuleRequest::setExcludeFolderIdsScope(const std::string &excludeFolderIdsScope) {
  excludeFolderIdsScope_ = excludeFolderIdsScope;
  setBodyParameter(std::string("ExcludeFolderIdsScope"), excludeFolderIdsScope);
}

int UpdateAggregateConfigRuleRequest::getRiskLevel() const {
  return riskLevel_;
}

void UpdateAggregateConfigRuleRequest::setRiskLevel(int riskLevel) {
  riskLevel_ = riskLevel;
  setBodyParameter(std::string("RiskLevel"), std::to_string(riskLevel));
}

std::string UpdateAggregateConfigRuleRequest::getResourceGroupIdsScope() const {
  return resourceGroupIdsScope_;
}

void UpdateAggregateConfigRuleRequest::setResourceGroupIdsScope(const std::string &resourceGroupIdsScope) {
  resourceGroupIdsScope_ = resourceGroupIdsScope;
  setBodyParameter(std::string("ResourceGroupIdsScope"), resourceGroupIdsScope);
}

std::string UpdateAggregateConfigRuleRequest::getInputParameters() const {
  return inputParameters_;
}

void UpdateAggregateConfigRuleRequest::setInputParameters(const std::string &inputParameters) {
  inputParameters_ = inputParameters;
  setBodyParameter(std::string("InputParameters"), inputParameters);
}

std::string UpdateAggregateConfigRuleRequest::getConfigRuleName() const {
  return configRuleName_;
}

void UpdateAggregateConfigRuleRequest::setConfigRuleName(const std::string &configRuleName) {
  configRuleName_ = configRuleName;
  setBodyParameter(std::string("ConfigRuleName"), configRuleName);
}

std::string UpdateAggregateConfigRuleRequest::getTagKeyLogicScope() const {
  return tagKeyLogicScope_;
}

void UpdateAggregateConfigRuleRequest::setTagKeyLogicScope(const std::string &tagKeyLogicScope) {
  tagKeyLogicScope_ = tagKeyLogicScope;
  setBodyParameter(std::string("TagKeyLogicScope"), tagKeyLogicScope);
}

std::string UpdateAggregateConfigRuleRequest::getMaximumExecutionFrequency() const {
  return maximumExecutionFrequency_;
}

void UpdateAggregateConfigRuleRequest::setMaximumExecutionFrequency(const std::string &maximumExecutionFrequency) {
  maximumExecutionFrequency_ = maximumExecutionFrequency;
  setBodyParameter(std::string("MaximumExecutionFrequency"), maximumExecutionFrequency);
}

std::string UpdateAggregateConfigRuleRequest::getFolderIdsScope() const {
  return folderIdsScope_;
}

void UpdateAggregateConfigRuleRequest::setFolderIdsScope(const std::string &folderIdsScope) {
  folderIdsScope_ = folderIdsScope;
  setBodyParameter(std::string("FolderIdsScope"), folderIdsScope);
}

std::string UpdateAggregateConfigRuleRequest::getExcludeResourceIdsScope() const {
  return excludeResourceIdsScope_;
}

void UpdateAggregateConfigRuleRequest::setExcludeResourceIdsScope(const std::string &excludeResourceIdsScope) {
  excludeResourceIdsScope_ = excludeResourceIdsScope;
  setBodyParameter(std::string("ExcludeResourceIdsScope"), excludeResourceIdsScope);
}

std::string UpdateAggregateConfigRuleRequest::getConditions() const {
  return conditions_;
}

void UpdateAggregateConfigRuleRequest::setConditions(const std::string &conditions) {
  conditions_ = conditions;
  setBodyParameter(std::string("Conditions"), conditions);
}

