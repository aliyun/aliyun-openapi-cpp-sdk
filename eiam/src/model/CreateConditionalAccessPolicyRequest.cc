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

#include <alibabacloud/eiam/model/CreateConditionalAccessPolicyRequest.h>

using AlibabaCloud::Eiam::Model::CreateConditionalAccessPolicyRequest;

CreateConditionalAccessPolicyRequest::CreateConditionalAccessPolicyRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "CreateConditionalAccessPolicy") {
  setMethod(HttpRequest::Method::Post);
}

CreateConditionalAccessPolicyRequest::~CreateConditionalAccessPolicyRequest() {}

std::string CreateConditionalAccessPolicyRequest::getClientToken() const {
  return clientToken_;
}

void CreateConditionalAccessPolicyRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

CreateConditionalAccessPolicyRequest::ConditionsConfig CreateConditionalAccessPolicyRequest::getConditionsConfig() const {
  return conditionsConfig_;
}

void CreateConditionalAccessPolicyRequest::setConditionsConfig(const CreateConditionalAccessPolicyRequest::ConditionsConfig &conditionsConfig) {
  conditionsConfig_ = conditionsConfig;
  for(int dep1 = 0; dep1 != conditionsConfig.networkZones.excludeNetworkZones.size(); dep1++) {
    setParameter(std::string("ConditionsConfig") + ".NetworkZones.ExcludeNetworkZones." + std::to_string(dep1 + 1), conditionsConfig.networkZones.excludeNetworkZones[dep1]);
  }
  for(int dep1 = 0; dep1 != conditionsConfig.networkZones.includeNetworkZones.size(); dep1++) {
    setParameter(std::string("ConditionsConfig") + ".NetworkZones.IncludeNetworkZones." + std::to_string(dep1 + 1), conditionsConfig.networkZones.includeNetworkZones[dep1]);
  }
  for(int dep1 = 0; dep1 != conditionsConfig.users.includeGroups.size(); dep1++) {
    setParameter(std::string("ConditionsConfig") + ".Users.IncludeGroups." + std::to_string(dep1 + 1), conditionsConfig.users.includeGroups[dep1]);
  }
  for(int dep1 = 0; dep1 != conditionsConfig.users.excludeUsers.size(); dep1++) {
    setParameter(std::string("ConditionsConfig") + ".Users.ExcludeUsers." + std::to_string(dep1 + 1), conditionsConfig.users.excludeUsers[dep1]);
  }
  for(int dep1 = 0; dep1 != conditionsConfig.users.includeOrganizationalUnits.size(); dep1++) {
    setParameter(std::string("ConditionsConfig") + ".Users.IncludeOrganizationalUnits." + std::to_string(dep1 + 1), conditionsConfig.users.includeOrganizationalUnits[dep1]);
  }
  for(int dep1 = 0; dep1 != conditionsConfig.users.excludeOrganizationalUnits.size(); dep1++) {
    setParameter(std::string("ConditionsConfig") + ".Users.ExcludeOrganizationalUnits." + std::to_string(dep1 + 1), conditionsConfig.users.excludeOrganizationalUnits[dep1]);
  }
  for(int dep1 = 0; dep1 != conditionsConfig.users.excludeGroups.size(); dep1++) {
    setParameter(std::string("ConditionsConfig") + ".Users.ExcludeGroups." + std::to_string(dep1 + 1), conditionsConfig.users.excludeGroups[dep1]);
  }
  for(int dep1 = 0; dep1 != conditionsConfig.users.includeUsers.size(); dep1++) {
    setParameter(std::string("ConditionsConfig") + ".Users.IncludeUsers." + std::to_string(dep1 + 1), conditionsConfig.users.includeUsers[dep1]);
  }
  for(int dep1 = 0; dep1 != conditionsConfig.applications.excludeApplications.size(); dep1++) {
    setParameter(std::string("ConditionsConfig") + ".Applications.ExcludeApplications." + std::to_string(dep1 + 1), conditionsConfig.applications.excludeApplications[dep1]);
  }
  for(int dep1 = 0; dep1 != conditionsConfig.applications.includeApplications.size(); dep1++) {
    setParameter(std::string("ConditionsConfig") + ".Applications.IncludeApplications." + std::to_string(dep1 + 1), conditionsConfig.applications.includeApplications[dep1]);
  }
}

std::string CreateConditionalAccessPolicyRequest::getDescription() const {
  return description_;
}

void CreateConditionalAccessPolicyRequest::setDescription(const std::string &description) {
  description_ = description;
  setParameter(std::string("Description"), description);
}

std::string CreateConditionalAccessPolicyRequest::getConditionalAccessPolicyType() const {
  return conditionalAccessPolicyType_;
}

void CreateConditionalAccessPolicyRequest::setConditionalAccessPolicyType(const std::string &conditionalAccessPolicyType) {
  conditionalAccessPolicyType_ = conditionalAccessPolicyType;
  setParameter(std::string("ConditionalAccessPolicyType"), conditionalAccessPolicyType);
}

std::string CreateConditionalAccessPolicyRequest::getDecisionType() const {
  return decisionType_;
}

void CreateConditionalAccessPolicyRequest::setDecisionType(const std::string &decisionType) {
  decisionType_ = decisionType;
  setParameter(std::string("DecisionType"), decisionType);
}

std::string CreateConditionalAccessPolicyRequest::getEvaluateAt() const {
  return evaluateAt_;
}

void CreateConditionalAccessPolicyRequest::setEvaluateAt(const std::string &evaluateAt) {
  evaluateAt_ = evaluateAt;
  setParameter(std::string("EvaluateAt"), evaluateAt);
}

int CreateConditionalAccessPolicyRequest::getPriority() const {
  return priority_;
}

void CreateConditionalAccessPolicyRequest::setPriority(int priority) {
  priority_ = priority;
  setParameter(std::string("Priority"), std::to_string(priority));
}

CreateConditionalAccessPolicyRequest::DecisionConfig CreateConditionalAccessPolicyRequest::getDecisionConfig() const {
  return decisionConfig_;
}

void CreateConditionalAccessPolicyRequest::setDecisionConfig(const CreateConditionalAccessPolicyRequest::DecisionConfig &decisionConfig) {
  decisionConfig_ = decisionConfig;
  setParameter(std::string("DecisionConfig") + ".MfaType", decisionConfig.mfaType);
  setParameter(std::string("DecisionConfig") + ".MfaAuthenticationIntervalSeconds", std::to_string(decisionConfig.mfaAuthenticationIntervalSeconds));
  setParameter(std::string("DecisionConfig") + ".Effect", decisionConfig.effect);
  setParameter(std::string("DecisionConfig") + ".ActiveSessionReuseStatus", decisionConfig.activeSessionReuseStatus);
  for(int dep1 = 0; dep1 != decisionConfig.mfaAuthenticationMethods.size(); dep1++) {
    setParameter(std::string("DecisionConfig") + ".MfaAuthenticationMethods." + std::to_string(dep1 + 1), decisionConfig.mfaAuthenticationMethods[dep1]);
  }
}

std::string CreateConditionalAccessPolicyRequest::getConditionalAccessPolicyName() const {
  return conditionalAccessPolicyName_;
}

void CreateConditionalAccessPolicyRequest::setConditionalAccessPolicyName(const std::string &conditionalAccessPolicyName) {
  conditionalAccessPolicyName_ = conditionalAccessPolicyName;
  setParameter(std::string("ConditionalAccessPolicyName"), conditionalAccessPolicyName);
}

std::string CreateConditionalAccessPolicyRequest::getInstanceId() const {
  return instanceId_;
}

void CreateConditionalAccessPolicyRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

