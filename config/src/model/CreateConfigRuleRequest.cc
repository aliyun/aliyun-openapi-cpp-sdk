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

#include <alibabacloud/config/model/CreateConfigRuleRequest.h>

using AlibabaCloud::Config::Model::CreateConfigRuleRequest;

CreateConfigRuleRequest::CreateConfigRuleRequest()
    : RpcServiceRequest("config", "2020-09-07", "CreateConfigRule") {
  setMethod(HttpRequest::Method::Post);
}

CreateConfigRuleRequest::~CreateConfigRuleRequest() {}

std::string CreateConfigRuleRequest::getTagKeyScope() const {
  return tagKeyScope_;
}

void CreateConfigRuleRequest::setTagKeyScope(const std::string &tagKeyScope) {
  tagKeyScope_ = tagKeyScope;
  setBodyParameter(std::string("TagKeyScope"), tagKeyScope);
}

std::string CreateConfigRuleRequest::getClientToken() const {
  return clientToken_;
}

void CreateConfigRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::vector<CreateConfigRuleRequest::std::string> CreateConfigRuleRequest::getResourceTypesScope() const {
  return resourceTypesScope_;
}

void CreateConfigRuleRequest::setResourceTypesScope(const std::vector<CreateConfigRuleRequest::std::string> &resourceTypesScope) {
  resourceTypesScope_ = resourceTypesScope;
  for(int dep1 = 0; dep1 != resourceTypesScope.size(); dep1++) {
    setBodyParameter(std::string("ResourceTypesScope") + "." + std::to_string(dep1 + 1), resourceTypesScope[dep1]);
  }
}

std::string CreateConfigRuleRequest::getDescription() const {
  return description_;
}

void CreateConfigRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string CreateConfigRuleRequest::getConfigRuleTriggerTypes() const {
  return configRuleTriggerTypes_;
}

void CreateConfigRuleRequest::setConfigRuleTriggerTypes(const std::string &configRuleTriggerTypes) {
  configRuleTriggerTypes_ = configRuleTriggerTypes;
  setBodyParameter(std::string("ConfigRuleTriggerTypes"), configRuleTriggerTypes);
}

std::string CreateConfigRuleRequest::getSourceIdentifier() const {
  return sourceIdentifier_;
}

void CreateConfigRuleRequest::setSourceIdentifier(const std::string &sourceIdentifier) {
  sourceIdentifier_ = sourceIdentifier;
  setBodyParameter(std::string("SourceIdentifier"), sourceIdentifier);
}

std::string CreateConfigRuleRequest::getTagValueScope() const {
  return tagValueScope_;
}

void CreateConfigRuleRequest::setTagValueScope(const std::string &tagValueScope) {
  tagValueScope_ = tagValueScope;
  setBodyParameter(std::string("TagValueScope"), tagValueScope);
}

std::string CreateConfigRuleRequest::getRegionIdsScope() const {
  return regionIdsScope_;
}

void CreateConfigRuleRequest::setRegionIdsScope(const std::string &regionIdsScope) {
  regionIdsScope_ = regionIdsScope;
  setBodyParameter(std::string("RegionIdsScope"), regionIdsScope);
}

int CreateConfigRuleRequest::getRiskLevel() const {
  return riskLevel_;
}

void CreateConfigRuleRequest::setRiskLevel(int riskLevel) {
  riskLevel_ = riskLevel;
  setBodyParameter(std::string("RiskLevel"), std::to_string(riskLevel));
}

std::string CreateConfigRuleRequest::getSourceOwner() const {
  return sourceOwner_;
}

void CreateConfigRuleRequest::setSourceOwner(const std::string &sourceOwner) {
  sourceOwner_ = sourceOwner;
  setBodyParameter(std::string("SourceOwner"), sourceOwner);
}

std::string CreateConfigRuleRequest::getResourceGroupIdsScope() const {
  return resourceGroupIdsScope_;
}

void CreateConfigRuleRequest::setResourceGroupIdsScope(const std::string &resourceGroupIdsScope) {
  resourceGroupIdsScope_ = resourceGroupIdsScope;
  setBodyParameter(std::string("ResourceGroupIdsScope"), resourceGroupIdsScope);
}

std::string CreateConfigRuleRequest::getInputParameters() const {
  return inputParameters_;
}

void CreateConfigRuleRequest::setInputParameters(const std::string &inputParameters) {
  inputParameters_ = inputParameters;
  setBodyParameter(std::string("InputParameters"), inputParameters);
}

std::string CreateConfigRuleRequest::getConfigRuleName() const {
  return configRuleName_;
}

void CreateConfigRuleRequest::setConfigRuleName(const std::string &configRuleName) {
  configRuleName_ = configRuleName;
  setBodyParameter(std::string("ConfigRuleName"), configRuleName);
}

std::string CreateConfigRuleRequest::getTagKeyLogicScope() const {
  return tagKeyLogicScope_;
}

void CreateConfigRuleRequest::setTagKeyLogicScope(const std::string &tagKeyLogicScope) {
  tagKeyLogicScope_ = tagKeyLogicScope;
  setBodyParameter(std::string("TagKeyLogicScope"), tagKeyLogicScope);
}

std::string CreateConfigRuleRequest::getMaximumExecutionFrequency() const {
  return maximumExecutionFrequency_;
}

void CreateConfigRuleRequest::setMaximumExecutionFrequency(const std::string &maximumExecutionFrequency) {
  maximumExecutionFrequency_ = maximumExecutionFrequency;
  setBodyParameter(std::string("MaximumExecutionFrequency"), maximumExecutionFrequency);
}

std::string CreateConfigRuleRequest::getExcludeResourceIdsScope() const {
  return excludeResourceIdsScope_;
}

void CreateConfigRuleRequest::setExcludeResourceIdsScope(const std::string &excludeResourceIdsScope) {
  excludeResourceIdsScope_ = excludeResourceIdsScope;
  setBodyParameter(std::string("ExcludeResourceIdsScope"), excludeResourceIdsScope);
}

std::string CreateConfigRuleRequest::getConditions() const {
  return conditions_;
}

void CreateConfigRuleRequest::setConditions(const std::string &conditions) {
  conditions_ = conditions;
  setBodyParameter(std::string("Conditions"), conditions);
}

