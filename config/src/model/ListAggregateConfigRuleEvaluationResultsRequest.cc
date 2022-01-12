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

#include <alibabacloud/config/model/ListAggregateConfigRuleEvaluationResultsRequest.h>

using AlibabaCloud::Config::Model::ListAggregateConfigRuleEvaluationResultsRequest;

ListAggregateConfigRuleEvaluationResultsRequest::ListAggregateConfigRuleEvaluationResultsRequest()
    : RpcServiceRequest("config", "2020-09-07", "ListAggregateConfigRuleEvaluationResults") {
  setMethod(HttpRequest::Method::Get);
}

ListAggregateConfigRuleEvaluationResultsRequest::~ListAggregateConfigRuleEvaluationResultsRequest() {}

std::string ListAggregateConfigRuleEvaluationResultsRequest::getConfigRuleId() const {
  return configRuleId_;
}

void ListAggregateConfigRuleEvaluationResultsRequest::setConfigRuleId(const std::string &configRuleId) {
  configRuleId_ = configRuleId;
  setParameter(std::string("ConfigRuleId"), configRuleId);
}

long ListAggregateConfigRuleEvaluationResultsRequest::getResourceOwnerId() const {
  return resourceOwnerId_;
}

void ListAggregateConfigRuleEvaluationResultsRequest::setResourceOwnerId(long resourceOwnerId) {
  resourceOwnerId_ = resourceOwnerId;
  setParameter(std::string("ResourceOwnerId"), std::to_string(resourceOwnerId));
}

std::string ListAggregateConfigRuleEvaluationResultsRequest::getAggregatorId() const {
  return aggregatorId_;
}

void ListAggregateConfigRuleEvaluationResultsRequest::setAggregatorId(const std::string &aggregatorId) {
  aggregatorId_ = aggregatorId;
  setParameter(std::string("AggregatorId"), aggregatorId);
}

std::string ListAggregateConfigRuleEvaluationResultsRequest::getNextToken() const {
  return nextToken_;
}

void ListAggregateConfigRuleEvaluationResultsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListAggregateConfigRuleEvaluationResultsRequest::getMaxResults() const {
  return maxResults_;
}

void ListAggregateConfigRuleEvaluationResultsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListAggregateConfigRuleEvaluationResultsRequest::getCompliancePackId() const {
  return compliancePackId_;
}

void ListAggregateConfigRuleEvaluationResultsRequest::setCompliancePackId(const std::string &compliancePackId) {
  compliancePackId_ = compliancePackId;
  setParameter(std::string("CompliancePackId"), compliancePackId);
}

std::string ListAggregateConfigRuleEvaluationResultsRequest::getComplianceType() const {
  return complianceType_;
}

void ListAggregateConfigRuleEvaluationResultsRequest::setComplianceType(const std::string &complianceType) {
  complianceType_ = complianceType;
  setParameter(std::string("ComplianceType"), complianceType);
}

