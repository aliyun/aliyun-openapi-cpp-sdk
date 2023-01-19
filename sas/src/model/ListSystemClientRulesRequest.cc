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

#include <alibabacloud/sas/model/ListSystemClientRulesRequest.h>

using AlibabaCloud::Sas::Model::ListSystemClientRulesRequest;

ListSystemClientRulesRequest::ListSystemClientRulesRequest()
    : RpcServiceRequest("sas", "2018-12-03", "ListSystemClientRules") {
  setMethod(HttpRequest::Method::Post);
}

ListSystemClientRulesRequest::~ListSystemClientRulesRequest() {}

std::vector<int> ListSystemClientRulesRequest::getRuleTypes() const {
  return ruleTypes_;
}

void ListSystemClientRulesRequest::setRuleTypes(const std::vector<int> &ruleTypes) {
  ruleTypes_ = ruleTypes;
}

int ListSystemClientRulesRequest::getSystemType() const {
  return systemType_;
}

void ListSystemClientRulesRequest::setSystemType(int systemType) {
  systemType_ = systemType;
  setParameter(std::string("SystemType"), std::to_string(systemType));
}

std::string ListSystemClientRulesRequest::getRuleName() const {
  return ruleName_;
}

void ListSystemClientRulesRequest::setRuleName(const std::string &ruleName) {
  ruleName_ = ruleName;
  setParameter(std::string("RuleName"), ruleName);
}

std::string ListSystemClientRulesRequest::getSourceIp() const {
  return sourceIp_;
}

void ListSystemClientRulesRequest::setSourceIp(const std::string &sourceIp) {
  sourceIp_ = sourceIp;
  setParameter(std::string("SourceIp"), sourceIp);
}

int ListSystemClientRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListSystemClientRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

int ListSystemClientRulesRequest::getIsContainer() const {
  return isContainer_;
}

void ListSystemClientRulesRequest::setIsContainer(int isContainer) {
  isContainer_ = isContainer;
  setParameter(std::string("IsContainer"), std::to_string(isContainer));
}

std::string ListSystemClientRulesRequest::getLang() const {
  return lang_;
}

void ListSystemClientRulesRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::vector<int> ListSystemClientRulesRequest::getAggregationIds() const {
  return aggregationIds_;
}

void ListSystemClientRulesRequest::setAggregationIds(const std::vector<int> &aggregationIds) {
  aggregationIds_ = aggregationIds;
}

int ListSystemClientRulesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListSystemClientRulesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListSystemClientRulesRequest::getBusinessSecondType() const {
  return businessSecondType_;
}

void ListSystemClientRulesRequest::setBusinessSecondType(const std::string &businessSecondType) {
  businessSecondType_ = businessSecondType;
  setParameter(std::string("BusinessSecondType"), businessSecondType);
}

