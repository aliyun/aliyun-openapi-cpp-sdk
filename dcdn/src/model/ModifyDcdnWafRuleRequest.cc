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

#include <alibabacloud/dcdn/model/ModifyDcdnWafRuleRequest.h>

using AlibabaCloud::Dcdn::Model::ModifyDcdnWafRuleRequest;

ModifyDcdnWafRuleRequest::ModifyDcdnWafRuleRequest()
    : RpcServiceRequest("dcdn", "2018-01-15", "ModifyDcdnWafRule") {
  setMethod(HttpRequest::Method::Post);
}

ModifyDcdnWafRuleRequest::~ModifyDcdnWafRuleRequest() {}

std::string ModifyDcdnWafRuleRequest::getRuleConfig() const {
  return ruleConfig_;
}

void ModifyDcdnWafRuleRequest::setRuleConfig(const std::string &ruleConfig) {
  ruleConfig_ = ruleConfig;
  setBodyParameter(std::string("RuleConfig"), ruleConfig);
}

std::string ModifyDcdnWafRuleRequest::getRuleStatus() const {
  return ruleStatus_;
}

void ModifyDcdnWafRuleRequest::setRuleStatus(const std::string &ruleStatus) {
  ruleStatus_ = ruleStatus;
  setBodyParameter(std::string("RuleStatus"), ruleStatus);
}

std::string ModifyDcdnWafRuleRequest::getRuleName() const {
  return ruleName_;
}

void ModifyDcdnWafRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setBodyParameter(std::string("RuleName"), ruleName);
}

long ModifyDcdnWafRuleRequest::getRuleId() const {
  return ruleId_;
}

void ModifyDcdnWafRuleRequest::setRuleId(long ruleId) {
  ruleId_ = ruleId;
  setBodyParameter(std::string("RuleId"), std::to_string(ruleId));
}

