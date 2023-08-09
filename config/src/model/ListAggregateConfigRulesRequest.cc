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

#include <alibabacloud/config/model/ListAggregateConfigRulesRequest.h>

using AlibabaCloud::Config::Model::ListAggregateConfigRulesRequest;

ListAggregateConfigRulesRequest::ListAggregateConfigRulesRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListAggregateConfigRules") {
  setMethod(HttpRequest::Method::Post);
}

ListAggregateConfigRulesRequest::~ListAggregateConfigRulesRequest() {}

bool ListAggregateConfigRulesRequest::getFilterInCompliancePack() const {
  return filterInCompliancePack_;
}

void ListAggregateConfigRulesRequest::setFilterInCompliancePack(bool filterInCompliancePack) {
  filterInCompliancePack_ = filterInCompliancePack;
  setParameter(std::string("FilterInCompliancePack"), filterInCompliancePack ? "true" : "false");
}

std::string ListAggregateConfigRulesRequest::getMessageType() const {
  return messageType_;
}

void ListAggregateConfigRulesRequest::setMessageType(const std::string &messageType) {
  messageType_ = messageType;
  setParameter(std::string("MessageType"), messageType);
}

std::string ListAggregateConfigRulesRequest::getConfigRuleState() const {
  return configRuleState_;
}

void ListAggregateConfigRulesRequest::setConfigRuleState(const std::string &configRuleState) {
  configRuleState_ = configRuleState;
  setParameter(std::string("ConfigRuleState"), configRuleState);
}

std::string ListAggregateConfigRulesRequest::getAggregatorId() const {
  return aggregatorId_;
}

void ListAggregateConfigRulesRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string ListAggregateConfigRulesRequest::getFilterInCompliancePackExcludeIds() const {
  return filterInCompliancePackExcludeIds_;
}

void ListAggregateConfigRulesRequest::setFilterInCompliancePackExcludeIds(const std::string &filterInCompliancePackExcludeIds) {
  filterInCompliancePackExcludeIds_ = filterInCompliancePackExcludeIds;
  setParameter(std::string("FilterInCompliancePackExcludeIds"), filterInCompliancePackExcludeIds);
}

int ListAggregateConfigRulesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAggregateConfigRulesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListAggregateConfigRulesRequest::getPageSize() const {
  return pageSize_;
}

void ListAggregateConfigRulesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListAggregateConfigRulesRequest::getCompliancePackId() const {
  return compliancePackId_;
}

void ListAggregateConfigRulesRequest::setCompliancePackId(const std::string &compliancePackId) {
  compliancePackId_ = compliancePackId;
  setParameter(std::string("CompliancePackId"), compliancePackId);
}

ListAggregateConfigRulesRequest::Tag ListAggregateConfigRulesRequest::getTag() const {
  return tag_;
}

void ListAggregateConfigRulesRequest::setTag(const ListAggregateConfigRulesRequest::Tag &tag) {
  tag_ = tag;
  setParameter(std::string("Tag") + ".Value", tag.value);
  setParameter(std::string("Tag") + ".Key", tag.key);
}

std::string ListAggregateConfigRulesRequest::getKeyword() const {
  return keyword_;
}

void ListAggregateConfigRulesRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListAggregateConfigRulesRequest::getComplianceType() const {
  return complianceType_;
}

void ListAggregateConfigRulesRequest::setComplianceType(const std::string &complianceType) {
  complianceType_ = complianceType;
  setParameter(std::string("ComplianceType"), complianceType);
}

std::string ListAggregateConfigRulesRequest::getResourceTypes() const {
  return resourceTypes_;
}

void ListAggregateConfigRulesRequest::setResourceTypes(const std::string &resourceTypes) {
  resourceTypes_ = resourceTypes;
  setParameter(std::string("ResourceTypes"), resourceTypes);
}

int ListAggregateConfigRulesRequest::getRiskLevel() const {
  return riskLevel_;
}

void ListAggregateConfigRulesRequest::setRiskLevel(int riskLevel) {
  riskLevel_ = riskLevel;
  setParameter(std::string("RiskLevel"), std::to_string(riskLevel));
}

std::string ListAggregateConfigRulesRequest::getConfigRuleName() const {
  return configRuleName_;
}

void ListAggregateConfigRulesRequest::setConfigRuleName(const std::string &configRuleName) {
  configRuleName_ = configRuleName;
  setParameter(std::string("ConfigRuleName"), configRuleName);
}

std::string ListAggregateConfigRulesRequest::getServiceChannel() const {
  return serviceChannel_;
}

void ListAggregateConfigRulesRequest::setServiceChannel(const std::string &serviceChannel) {
  serviceChannel_ = serviceChannel;
  setParameter(std::string("ServiceChannel"), serviceChannel);
}

