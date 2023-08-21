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

#include <alibabacloud/config/model/CreateAggregateConfigRuleRequest.h>

using AlibabaCloud::Config::Model::CreateAggregateConfigRuleRequest;

CreateAggregateConfigRuleRequest::CreateAggregateConfigRuleRequest()
    : RpcServiceRequest("config", "2020-09-07", "CreateAggregateConfigRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateAggregateConfigRuleRequest::~CreateAggregateConfigRuleRequest() {}

std::string CreateAggregateConfigRuleRequest::getTagKeyScope() const {
  return tagKeyScope_;
}

void CreateAggregateConfigRuleRequest::setTagKeyScope(const std::string &tagKeyScope) {
  tagKeyScope_ = tagKeyScope;
  setBodyParameter(std::string("TagKeyScope"), tagKeyScope);
}

std::string CreateAggregateConfigRuleRequest::getClientToken() const {
  return clientToken_;
}

void CreateAggregateConfigRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateAggregateConfigRuleRequest::std::string> CreateAggregateConfigRuleRequest::getResourceTypesScope() const {
  return resourceTypesScope_;
}

void CreateAggregateConfigRuleRequest::setResourceTypesScope(const std::vector<CreateAggregateConfigRuleRequest::std::string> &resourceTypesScope) {
  resourceTypesScope_ = resourceTypesScope;
  for(int dep1 = 0; dep1 != resourceTypesScope.size(); dep1++) {
    setBodyParameter(std::string("ResourceTypesScope") + "." + std::to_string(dep1 + 1), resourceTypesScope[dep1]);
  }
}

std::string CreateAggregateConfigRuleRequest::getDescription() const {
  return description_;
}

void CreateAggregateConfigRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateAggregateConfigRuleRequest::getAggregatorId() const {
  return aggregatorId_;
}

void CreateAggregateConfigRuleRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setBodyParameter(std::string("AggregatorId"), aggregatorId);
}

std::string CreateAggregateConfigRuleRequest::getConfigRuleTriggerTypes() const {
  return configRuleTriggerTypes_;
}

void CreateAggregateConfigRuleRequest::setConfigRuleTriggerTypes(const std::string &configRuleTriggerTypes) {
  configRuleTriggerTypes_ = configRuleTriggerTypes;
  setBodyParameter(std::string("ConfigRuleTriggerTypes"), configRuleTriggerTypes);
}

std::string CreateAggregateConfigRuleRequest::getSourceIdentifier() const {
  return sourceIdentifier_;
}

void CreateAggregateConfigRuleRequest::setSourceIdentifier(const std::string &sourceIdentifier) {
  sourceIdentifier_ = sourceIdentifier;
  setBodyParameter(std::string("SourceIdentifier"), sourceIdentifier);
}

std::string CreateAggregateConfigRuleRequest::getTagValueScope() const {
  return tagValueScope_;
}

void CreateAggregateConfigRuleRequest::setTagValueScope(const std::string &tagValueScope) {
  tagValueScope_ = tagValueScope;
  setBodyParameter(std::string("TagValueScope"), tagValueScope);
}

std::string CreateAggregateConfigRuleRequest::getExcludeAccountIdsScope() const {
  return excludeAccountIdsScope_;
}

void CreateAggregateConfigRuleRequest::setExcludeAccountIdsScope(const std::string &excludeAccountIdsScope) {
  excludeAccountIdsScope_ = excludeAccountIdsScope;
  setBodyParameter(std::string("ExcludeAccountIdsScope"), excludeAccountIdsScope);
}

std::string CreateAggregateConfigRuleRequest::getRegionIdsScope() const {
  return regionIdsScope_;
}

void CreateAggregateConfigRuleRequest::setRegionIdsScope(const std::string &regionIdsScope) {
  regionIdsScope_ = regionIdsScope;
  setBodyParameter(std::string("RegionIdsScope"), regionIdsScope);
}

std::string CreateAggregateConfigRuleRequest::getExcludeFolderIdsScope() const {
  return excludeFolderIdsScope_;
}

void CreateAggregateConfigRuleRequest::setExcludeFolderIdsScope(const std::string &excludeFolderIdsScope) {
  excludeFolderIdsScope_ = excludeFolderIdsScope;
  setBodyParameter(std::string("ExcludeFolderIdsScope"), excludeFolderIdsScope);
}

int CreateAggregateConfigRuleRequest::getRiskLevel() const {
  return riskLevel_;
}

void CreateAggregateConfigRuleRequest::setRiskLevel(int riskLevel) {
  riskLevel_ = riskLevel;
  setBodyParameter(std::string("RiskLevel"), std::to_string(riskLevel));
}

std::string CreateAggregateConfigRuleRequest::getSourceOwner() const {
  return sourceOwner_;
}

void CreateAggregateConfigRuleRequest::setSourceOwner(const std::string &sourceOwner) {
  sourceOwner_ = sourceOwner;
  setBodyParameter(std::string("SourceOwner"), sourceOwner);
}

std::string CreateAggregateConfigRuleRequest::getResourceGroupIdsScope() const {
  return resourceGroupIdsScope_;
}

void CreateAggregateConfigRuleRequest::setResourceGroupIdsScope(const std::string &resourceGroupIdsScope) {
  resourceGroupIdsScope_ = resourceGroupIdsScope;
  setBodyParameter(std::string("ResourceGroupIdsScope"), resourceGroupIdsScope);
}

std::string CreateAggregateConfigRuleRequest::getInputParameters() const {
  return inputParameters_;
}

void CreateAggregateConfigRuleRequest::setInputParameters(const std::string &inputParameters) {
  inputParameters_ = inputParameters;
  setBodyParameter(std::string("InputParameters"), inputParameters);
}

std::string CreateAggregateConfigRuleRequest::getConfigRuleName() const {
  return configRuleName_;
}

void CreateAggregateConfigRuleRequest::setConfigRuleName(const std::string &configRuleName) {
  configRuleName_ = configRuleName;
  setBodyParameter(std::string("ConfigRuleName"), configRuleName);
}

std::string CreateAggregateConfigRuleRequest::getTagKeyLogicScope() const {
  return tagKeyLogicScope_;
}

void CreateAggregateConfigRuleRequest::setTagKeyLogicScope(const std::string &tagKeyLogicScope) {
  tagKeyLogicScope_ = tagKeyLogicScope;
  setBodyParameter(std::string("TagKeyLogicScope"), tagKeyLogicScope);
}

std::string CreateAggregateConfigRuleRequest::getMaximumExecutionFrequency() const {
  return maximumExecutionFrequency_;
}

void CreateAggregateConfigRuleRequest::setMaximumExecutionFrequency(const std::string &maximumExecutionFrequency) {
  maximumExecutionFrequency_ = maximumExecutionFrequency;
  setBodyParameter(std::string("MaximumExecutionFrequency"), maximumExecutionFrequency);
}

std::string CreateAggregateConfigRuleRequest::getFolderIdsScope() const {
  return folderIdsScope_;
}

void CreateAggregateConfigRuleRequest::setFolderIdsScope(const std::string &folderIdsScope) {
  folderIdsScope_ = folderIdsScope;
  setBodyParameter(std::string("FolderIdsScope"), folderIdsScope);
}

std::string CreateAggregateConfigRuleRequest::getExcludeResourceIdsScope() const {
  return excludeResourceIdsScope_;
}

void CreateAggregateConfigRuleRequest::setExcludeResourceIdsScope(const std::string &excludeResourceIdsScope) {
  excludeResourceIdsScope_ = excludeResourceIdsScope;
  setBodyParameter(std::string("ExcludeResourceIdsScope"), excludeResourceIdsScope);
}

std::string CreateAggregateConfigRuleRequest::getConditions() const {
  return conditions_;
}

void CreateAggregateConfigRuleRequest::setConditions(const std::string &conditions) {
  conditions_ = conditions;
  setBodyParameter(std::string("Conditions"), conditions);
}

