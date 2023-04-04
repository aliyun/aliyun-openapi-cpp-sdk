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

#include <alibabacloud/imm/model/FuzzyQueryRequest.h>

using AlibabaCloud::Imm::Model::FuzzyQueryRequest;

FuzzyQueryRequest::FuzzyQueryRequest()
    : RpcServiceRequest("imm", "2020-09-30", "FuzzyQuery") {
  setMethod(HttpRequest::Method::Post);
}

FuzzyQueryRequest::~FuzzyQueryRequest() {}

std::string FuzzyQueryRequest::getNextToken() const {
  return nextToken_;
}

void FuzzyQueryRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string FuzzyQueryRequest::getDatasetName() const {
  return datasetName_;
}

void FuzzyQueryRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string FuzzyQueryRequest::getOrder() const {
  return order_;
}

void FuzzyQueryRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string FuzzyQueryRequest::getProjectName() const {
  return projectName_;
}

void FuzzyQueryRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string FuzzyQueryRequest::getQuery() const {
  return query_;
}

void FuzzyQueryRequest::setQuery(const std::string &query) {
  query_ = query;
  setParameter(std::string("Query"), query);
}

std::string FuzzyQueryRequest::getSort() const {
  return sort_;
}

void FuzzyQueryRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

long FuzzyQueryRequest::getMaxResults() const {
  return maxResults_;
}

void FuzzyQueryRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

