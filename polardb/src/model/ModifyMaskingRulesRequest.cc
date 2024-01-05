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

#include <alibabacloud/polardb/model/ModifyMaskingRulesRequest.h>

using AlibabaCloud::Polardb::Model::ModifyMaskingRulesRequest;

ModifyMaskingRulesRequest::ModifyMaskingRulesRequest()
    : RpcServiceRequest("polardb", "2017-08-01", "ModifyMaskingRules") {
  setMethod(HttpRequest::Method::Post);
}

ModifyMaskingRulesRequest::~ModifyMaskingRulesRequest() {}

std::string ModifyMaskingRulesRequest::getDBClusterId() const {
  return dBClusterId_;
}

void ModifyMaskingRulesRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string ModifyMaskingRulesRequest::getRuleName() const {
  return ruleName_;
}

void ModifyMaskingRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string ModifyMaskingRulesRequest::getRuleVersion() const {
  return ruleVersion_;
}

void ModifyMaskingRulesRequest::setRuleVersion(const std::string &ruleVersion) {
  ruleVersion_ = ruleVersion;
  setParameter(std::string("RuleVersion"), ruleVersion);
}

std::string ModifyMaskingRulesRequest::getRuleConfig() const {
  return ruleConfig_;
}

void ModifyMaskingRulesRequest::setRuleConfig(const std::string &ruleConfig) {
  ruleConfig_ = ruleConfig;
  setParameter(std::string("RuleConfig"), ruleConfig);
}

std::string ModifyMaskingRulesRequest::getEnable() const {
  return enable_;
}

void ModifyMaskingRulesRequest::setEnable(const std::string &enable) {
  enable_ = enable;
  setParameter(std::string("Enable"), enable);
}

std::string ModifyMaskingRulesRequest::getRuleNameList() const {
  return ruleNameList_;
}

void ModifyMaskingRulesRequest::setRuleNameList(const std::string &ruleNameList) {
  ruleNameList_ = ruleNameList;
  setParameter(std::string("RuleNameList"), ruleNameList);
}

