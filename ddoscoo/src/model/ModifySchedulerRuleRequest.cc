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

#include <alibabacloud/ddoscoo/model/ModifySchedulerRuleRequest.h>

using AlibabaCloud::Ddoscoo::Model::ModifySchedulerRuleRequest;

ModifySchedulerRuleRequest::ModifySchedulerRuleRequest()
    : RpcServiceRequest("ddoscoo", "2020-01-01", "ModifySchedulerRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifySchedulerRuleRequest::~ModifySchedulerRuleRequest() {}

std::string ModifySchedulerRuleRequest::getRules() const {
  return rules_;
}

void ModifySchedulerRuleRequest::setRules(const std::string &rules) {
  rules_ = rules;
  setParameter(std::string("Rules"), rules);
}

std::string ModifySchedulerRuleRequest::getRuleName() const {
  return ruleName_;
}

void ModifySchedulerRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string ModifySchedulerRuleRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ModifySchedulerRuleRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("ResourceGroupId"), resourceGroupId);
}

std::string ModifySchedulerRuleRequest::getSourceIp() const {
  return sourceIp_;
}

void ModifySchedulerRuleRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

std::string ModifySchedulerRuleRequest::getParam() const {
  return param_;
}

void ModifySchedulerRuleRequest::setParam(const std::string &param) {
  param_ = param;
  setParameter(std::string("Param"), param);
}

int ModifySchedulerRuleRequest::getRuleType() const {
  return ruleType_;
}

void ModifySchedulerRuleRequest::setRuleType(int ruleType) {
  ruleType_ = ruleType;
  setParameter(std::string("RuleType"), std::to_string(ruleType));
}

