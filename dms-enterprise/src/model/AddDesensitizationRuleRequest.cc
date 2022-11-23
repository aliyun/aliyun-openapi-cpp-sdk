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

#include <alibabacloud/dms-enterprise/model/AddDesensitizationRuleRequest.h>

using AlibabaCloud::Dms_enterprise::Model::AddDesensitizationRuleRequest;

AddDesensitizationRuleRequest::AddDesensitizationRuleRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "AddDesensitizationRule") {
  setMethod(HttpRequest::Method::Post);
}

AddDesensitizationRuleRequest::~AddDesensitizationRuleRequest() {}

std::vector<AddDesensitizationRuleRequest::std::map<std::string, std::string>> AddDesensitizationRuleRequest::getFunctionParams() const {
  return functionParams_;
}

void AddDesensitizationRuleRequest::setFunctionParams(const std::vector<AddDesensitizationRuleRequest::std::map<std::string, std::string>> &functionParams) {
  functionParams_ = functionParams;
  for(int dep1 = 0; dep1 != functionParams.size(); dep1++) {
    for(auto const &iter2 : functionParams[dep1]) {
      setBodyParameter(std::string("FunctionParams") + "." + std::to_string(dep1 + 1) + "." + iter2.first, iter2.second);
    }
  }
}

std::string AddDesensitizationRuleRequest::getRuleName() const {
  return ruleName_;
}

void AddDesensitizationRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

long AddDesensitizationRuleRequest::getTid() const {
  return tid_;
}

void AddDesensitizationRuleRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string AddDesensitizationRuleRequest::getRuleDescription() const {
  return ruleDescription_;
}

void AddDesensitizationRuleRequest::setRuleDescription(const std::string &ruleDescription) {
  ruleDescription_ = ruleDescription;
  setParameter(std::string("RuleDescription"), ruleDescription);
}

std::string AddDesensitizationRuleRequest::getRuleType() const {
  return ruleType_;
}

void AddDesensitizationRuleRequest::setRuleType(const std::string &ruleType) {
  ruleType_ = ruleType;
  setParameter(std::string("RuleType"), ruleType);
}

std::string AddDesensitizationRuleRequest::getFunctionType() const {
  return functionType_;
}

void AddDesensitizationRuleRequest::setFunctionType(const std::string &functionType) {
  functionType_ = functionType;
  setParameter(std::string("FunctionType"), functionType);
}

