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

#include <alibabacloud/config/model/PutConfigRuleRequest.h>

using AlibabaCloud::Config::Model::PutConfigRuleRequest;

PutConfigRuleRequest::PutConfigRuleRequest()
    : RpcServiceRequest("config", "2019-01-08", "PutConfigRule") {
  setMethod(HttpRequest::Method::Post);
}

PutConfigRuleRequest::~PutConfigRuleRequest() {}

std::string PutConfigRuleRequest::getConfigRuleId() const {
  return configRuleId_;
}

void PutConfigRuleRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setBodyParameter(std::string("ConfigRuleId"), configRuleId);
}

bool PutConfigRuleRequest::getMultiAccount() const {
  return multiAccount_;
}

void PutConfigRuleRequest::setMultiAccount(bool multiAccount) {
  multiAccount_ = multiAccount;
  setParameter(std::string("MultiAccount"), multiAccount ? "true" : "false");
}

std::string PutConfigRuleRequest::getClientToken() const {
  return clientToken_;
}

void PutConfigRuleRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setBodyParameter(std::string("ClientToken"), clientToken);
}

std::string PutConfigRuleRequest::getDescription() const {
  return description_;
}

void PutConfigRuleRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string PutConfigRuleRequest::getSourceIdentifier() const {
  return sourceIdentifier_;
}

void PutConfigRuleRequest::setSourceIdentifier(const std::string &sourceIdentifier) {
  sourceIdentifier_ = sourceIdentifier;
  setBodyParameter(std::string("SourceIdentifier"), sourceIdentifier);
}

std::string PutConfigRuleRequest::getSourceMaximumExecutionFrequency() const {
  return sourceMaximumExecutionFrequency_;
}

void PutConfigRuleRequest::setSourceMaximumExecutionFrequency(const std::string &sourceMaximumExecutionFrequency) {
  sourceMaximumExecutionFrequency_ = sourceMaximumExecutionFrequency;
  setBodyParameter(std::string("SourceMaximumExecutionFrequency"), sourceMaximumExecutionFrequency);
}

std::string PutConfigRuleRequest::getScopeComplianceResourceTypes() const {
  return scopeComplianceResourceTypes_;
}

void PutConfigRuleRequest::setScopeComplianceResourceTypes(const std::string &scopeComplianceResourceTypes) {
  scopeComplianceResourceTypes_ = scopeComplianceResourceTypes;
  setBodyParameter(std::string("ScopeComplianceResourceTypes"), scopeComplianceResourceTypes);
}

std::string PutConfigRuleRequest::getSourceDetailMessageType() const {
  return sourceDetailMessageType_;
}

void PutConfigRuleRequest::setSourceDetailMessageType(const std::string &sourceDetailMessageType) {
  sourceDetailMessageType_ = sourceDetailMessageType;
  setBodyParameter(std::string("SourceDetailMessageType"), sourceDetailMessageType);
}

int PutConfigRuleRequest::getRiskLevel() const {
  return riskLevel_;
}

void PutConfigRuleRequest::setRiskLevel(int riskLevel) {
  riskLevel_ = riskLevel;
  setBodyParameter(std::string("RiskLevel"), std::to_string(riskLevel));
}

std::string PutConfigRuleRequest::getSourceOwner() const {
  return sourceOwner_;
}

void PutConfigRuleRequest::setSourceOwner(const std::string &sourceOwner) {
  sourceOwner_ = sourceOwner;
  setBodyParameter(std::string("SourceOwner"), sourceOwner);
}

std::string PutConfigRuleRequest::getInputParameters() const {
  return inputParameters_;
}

void PutConfigRuleRequest::setInputParameters(const std::string &inputParameters) {
  inputParameters_ = inputParameters;
  setBodyParameter(std::string("InputParameters"), inputParameters);
}

std::string PutConfigRuleRequest::getScopeComplianceExcludeResourceIds() const {
  return scopeComplianceExcludeResourceIds_;
}

void PutConfigRuleRequest::setScopeComplianceExcludeResourceIds(const std::string &scopeComplianceExcludeResourceIds) {
  scopeComplianceExcludeResourceIds_ = scopeComplianceExcludeResourceIds;
  setBodyParameter(std::string("ScopeComplianceExcludeResourceIds"), scopeComplianceExcludeResourceIds);
}

std::string PutConfigRuleRequest::getConfigRuleName() const {
  return configRuleName_;
}

void PutConfigRuleRequest::setConfigRuleName(const std::string &configRuleName) {
  configRuleName_ = configRuleName;
  setBodyParameter(std::string("ConfigRuleName"), configRuleName);
}

std::string PutConfigRuleRequest::getScopeComplianceResourceId() const {
  return scopeComplianceResourceId_;
}

void PutConfigRuleRequest::setScopeComplianceResourceId(const std::string &scopeComplianceResourceId) {
  scopeComplianceResourceId_ = scopeComplianceResourceId;
  setBodyParameter(std::string("ScopeComplianceResourceId"), scopeComplianceResourceId);
}

std::string PutConfigRuleRequest::getScopeComplianceResourceIds() const {
  return scopeComplianceResourceIds_;
}

void PutConfigRuleRequest::setScopeComplianceResourceIds(const std::string &scopeComplianceResourceIds) {
  scopeComplianceResourceIds_ = scopeComplianceResourceIds;
  setBodyParameter(std::string("ScopeComplianceResourceIds"), scopeComplianceResourceIds);
}

std::string PutConfigRuleRequest::getScopeComplianceRegionIds() const {
  return scopeComplianceRegionIds_;
}

void PutConfigRuleRequest::setScopeComplianceRegionIds(const std::string &scopeComplianceRegionIds) {
  scopeComplianceRegionIds_ = scopeComplianceRegionIds;
  setBodyParameter(std::string("ScopeComplianceRegionIds"), scopeComplianceRegionIds);
}

long PutConfigRuleRequest::getMemberId() const {
  return memberId_;
}

void PutConfigRuleRequest::setMemberId(long memberId) {
  memberId_ = memberId;
  setParameter(std::string("MemberId"), std::to_string(memberId));
}

