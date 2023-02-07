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

#include <alibabacloud/bssopenapi/model/DescribeCostBudgetsSummaryRequest.h>

using AlibabaCloud::BssOpenApi::Model::DescribeCostBudgetsSummaryRequest;

DescribeCostBudgetsSummaryRequest::DescribeCostBudgetsSummaryRequest()
    : RpcServiceRequest("bssopenapi", "2017-12-14", "DescribeCostBudgetsSummary") {
  setMethod(HttpRequest::Method::Post);
}

DescribeCostBudgetsSummaryRequest::~DescribeCostBudgetsSummaryRequest() {}

std::string DescribeCostBudgetsSummaryRequest::getBudgetStatus() const {
  return budgetStatus_;
}

void DescribeCostBudgetsSummaryRequest::setBudgetStatus(const std::string &budgetStatus) {
  budgetStatus_ = budgetStatus;
  setParameter(std::string("BudgetStatus"), budgetStatus);
}

std::string DescribeCostBudgetsSummaryRequest::getBudgetType() const {
  return budgetType_;
}

void DescribeCostBudgetsSummaryRequest::setBudgetType(const std::string &budgetType) {
  budgetType_ = budgetType;
  setParameter(std::string("BudgetType"), budgetType);
}

std::string DescribeCostBudgetsSummaryRequest::getNextToken() const {
  return nextToken_;
}

void DescribeCostBudgetsSummaryRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int DescribeCostBudgetsSummaryRequest::getMaxResults() const {
  return maxResults_;
}

void DescribeCostBudgetsSummaryRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string DescribeCostBudgetsSummaryRequest::getBudgetName() const {
  return budgetName_;
}

void DescribeCostBudgetsSummaryRequest::setBudgetName(const std::string &budgetName) {
  budgetName_ = budgetName;
  setParameter(std::string("BudgetName"), budgetName);
}

