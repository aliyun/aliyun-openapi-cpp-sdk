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

#include <alibabacloud/sas/model/ListSystemAggregationRulesRequest.h>

using AlibabaCloud::Sas::Model::ListSystemAggregationRulesRequest;

ListSystemAggregationRulesRequest::ListSystemAggregationRulesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListSystemAggregationRules") {
  setMethod(HttpRequest::Method::Get);
}

ListSystemAggregationRulesRequest::~ListSystemAggregationRulesRequest() {}

std::vector<int> ListSystemAggregationRulesRequest::getRuleTypes() const {
  return ruleTypes_;
}

void ListSystemAggregationRulesRequest::setRuleTypes(const std::vector<int> &ruleTypes) {
  ruleTypes_ = ruleTypes;
}

int ListSystemAggregationRulesRequest::getSystemType() const {
  return systemType_;
}

void ListSystemAggregationRulesRequest::setSystemType(int systemType) {
  systemType_ = systemType;
  setParameter(std::string("SystemType"), std::to_string(systemType));
}

std::string ListSystemAggregationRulesRequest::getRuleName() const {
  return ruleName_;
}

void ListSystemAggregationRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string ListSystemAggregationRulesRequest::getSourceIp() const {
  return sourceIp_;
}

void ListSystemAggregationRulesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListSystemAggregationRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListSystemAggregationRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSystemAggregationRulesRequest::getLang() const {
  return lang_;
}

void ListSystemAggregationRulesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<int> ListSystemAggregationRulesRequest::getAggregationIds() const {
  return aggregationIds_;
}

void ListSystemAggregationRulesRequest::setAggregationIds(const std::vector<int> &aggregationIds) {
  aggregationIds_ = aggregationIds;
}

int ListSystemAggregationRulesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListSystemAggregationRulesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

