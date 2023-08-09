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

#include <alibabacloud/config/model/ListConfigRulesRequest.h>

using AlibabaCloud::Config::Model::ListConfigRulesRequest;

ListConfigRulesRequest::ListConfigRulesRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListConfigRules") {
  setMethod(HttpRequest::Method::Post);
}

ListConfigRulesRequest::~ListConfigRulesRequest() {}

bool ListConfigRulesRequest::getFilterInCompliancePack() const {
  return filterInCompliancePack_;
}

void ListConfigRulesRequest::setFilterInCompliancePack(bool filterInCompliancePack) {
  filterInCompliancePack_ = filterInCompliancePack;
  setParameter(std::string("FilterInCompliancePack"), filterInCompliancePack ? "true" : "false");
}

std::string ListConfigRulesRequest::getConfigRuleState() const {
  return configRuleState_;
}

void ListConfigRulesRequest::setConfigRuleState(const std::string &configRuleState) {
  configRuleState_ = configRuleState;
  setParameter(std::string("ConfigRuleState"), configRuleState);
}

std::string ListConfigRulesRequest::getFilterInCompliancePackExcludeIds() const {
  return filterInCompliancePackExcludeIds_;
}

void ListConfigRulesRequest::setFilterInCompliancePackExcludeIds(const std::string &filterInCompliancePackExcludeIds) {
  filterInCompliancePackExcludeIds_ = filterInCompliancePackExcludeIds;
  setParameter(std::string("FilterInCompliancePackExcludeIds"), filterInCompliancePackExcludeIds);
}

int ListConfigRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListConfigRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListConfigRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListConfigRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListConfigRulesRequest::getCompliancePackId() const {
  return compliancePackId_;
}

void ListConfigRulesRequest::setCompliancePackId(const std::string &compliancePackId) {
  compliancePackId_ = compliancePackId;
  setParameter(std::string("CompliancePackId"), compliancePackId);
}

std::string ListConfigRulesRequest::getKeyword() const {
  return keyword_;
}

void ListConfigRulesRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListConfigRulesRequest::getComplianceType() const {
  return complianceType_;
}

void ListConfigRulesRequest::setComplianceType(const std::string &complianceType) {
  complianceType_ = complianceType;
  setParameter(std::string("ComplianceType"), complianceType);
}

std::string ListConfigRulesRequest::getResourceTypes() const {
  return resourceTypes_;
}

void ListConfigRulesRequest::setResourceTypes(const std::string &resourceTypes) {
  resourceTypes_ = resourceTypes;
  setParameter(std::string("ResourceTypes"), resourceTypes);
}

int ListConfigRulesRequest::getRiskLevel() const {
  return riskLevel_;
}

void ListConfigRulesRequest::setRiskLevel(int riskLevel) {
  riskLevel_ = riskLevel;
  setParameter(std::string("RiskLevel"), std::to_string(riskLevel));
}

std::string ListConfigRulesRequest::getConfigRuleName() const {
  return configRuleName_;
}

void ListConfigRulesRequest::setConfigRuleName(const std::string &configRuleName) {
  configRuleName_ = configRuleName;
  setParameter(std::string("ConfigRuleName"), configRuleName);
}

std::string ListConfigRulesRequest::getServiceChannel() const {
  return serviceChannel_;
}

void ListConfigRulesRequest::setServiceChannel(const std::string &serviceChannel) {
  serviceChannel_ = serviceChannel;
  setParameter(std::string("ServiceChannel"), serviceChannel);
}

