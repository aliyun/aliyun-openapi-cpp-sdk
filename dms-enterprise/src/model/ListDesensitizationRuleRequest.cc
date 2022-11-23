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

#include <alibabacloud/dms-enterprise/model/ListDesensitizationRuleRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListDesensitizationRuleRequest;

ListDesensitizationRuleRequest::ListDesensitizationRuleRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListDesensitizationRule") {
  setMethod(HttpRequest::Method::Post);
}

ListDesensitizationRuleRequest::~ListDesensitizationRuleRequest() {}

std::string ListDesensitizationRuleRequest::getRuleName() const {
  return ruleName_;
}

void ListDesensitizationRuleRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

int ListDesensitizationRuleRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDesensitizationRuleRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListDesensitizationRuleRequest::getTid() const {
  return tid_;
}

void ListDesensitizationRuleRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListDesensitizationRuleRequest::getPageSize() const {
  return pageSize_;
}

void ListDesensitizationRuleRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDesensitizationRuleRequest::getRuleType() const {
  return ruleType_;
}

void ListDesensitizationRuleRequest::setRuleType(const std::string &ruleType) {
  ruleType_ = ruleType;
  setParameter(std::string("RuleType"), ruleType);
}

std::string ListDesensitizationRuleRequest::getFuncType() const {
  return funcType_;
}

void ListDesensitizationRuleRequest::setFuncType(const std::string &funcType) {
  funcType_ = funcType;
  setParameter(std::string("FuncType"), funcType);
}

int ListDesensitizationRuleRequest::getRuleId() const {
  return ruleId_;
}

void ListDesensitizationRuleRequest::setRuleId(int ruleId) {
  ruleId_ = ruleId;
  setParameter(std::string("RuleId"), std::to_string(ruleId));
}

