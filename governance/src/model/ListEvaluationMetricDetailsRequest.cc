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

#include <alibabacloud/governance/model/ListEvaluationMetricDetailsRequest.h>

using AlibabaCloud::Governance::Model::ListEvaluationMetricDetailsRequest;

ListEvaluationMetricDetailsRequest::ListEvaluationMetricDetailsRequest()
    : RpcServiceRequest("governance", "2021-01-20", "ListEvaluationMetricDetails") {
  setMethod(HttpRequest::Method::Post);
}

ListEvaluationMetricDetailsRequest::~ListEvaluationMetricDetailsRequest() {}

long ListEvaluationMetricDetailsRequest::getAccountId() const {
  return accountId_;
}

void ListEvaluationMetricDetailsRequest::setAccountId(long accountId) {
  accountId_ = accountId;
  setParameter(std::string("AccountId"), std::to_string(accountId));
}

std::string ListEvaluationMetricDetailsRequest::getNextToken() const {
  return nextToken_;
}

void ListEvaluationMetricDetailsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListEvaluationMetricDetailsRequest::getRegionId() const {
  return regionId_;
}

void ListEvaluationMetricDetailsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListEvaluationMetricDetailsRequest::getId() const {
  return id_;
}

void ListEvaluationMetricDetailsRequest::setId(const std::string &id) {
  id_ = id;
  setParameter(std::string("Id"), id);
}

std::string ListEvaluationMetricDetailsRequest::getPartnerCode() const {
  return partnerCode_;
}

void ListEvaluationMetricDetailsRequest::setPartnerCode(const std::string &partnerCode) {
  partnerCode_ = partnerCode;
  setParameter(std::string("PartnerCode"), partnerCode);
}

int ListEvaluationMetricDetailsRequest::getMaxResults() const {
  return maxResults_;
}

void ListEvaluationMetricDetailsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

