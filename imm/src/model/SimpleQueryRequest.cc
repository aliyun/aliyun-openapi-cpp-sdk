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

#include <alibabacloud/imm/model/SimpleQueryRequest.h>

using AlibabaCloud::Imm::Model::SimpleQueryRequest;

SimpleQueryRequest::SimpleQueryRequest()
    : RpcServiceRequest("imm", "2020-09-30", "SimpleQuery") {
  setMethod(HttpRequest::Method::Post);
}

SimpleQueryRequest::~SimpleQueryRequest() {}

std::string SimpleQueryRequest::getNextToken() const {
  return nextToken_;
}

void SimpleQueryRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string SimpleQueryRequest::getDatasetName() const {
  return datasetName_;
}

void SimpleQueryRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string SimpleQueryRequest::getOrder() const {
  return order_;
}

void SimpleQueryRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string SimpleQueryRequest::getProjectName() const {
  return projectName_;
}

void SimpleQueryRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

SimpleQueryRequest::Query SimpleQueryRequest::getQuery() const {
  return query_;
}

void SimpleQueryRequest::setQuery(const SimpleQueryRequest::Query &query) {
  query_ = query;
  setParameter(std::string("Query") + ".Field", query.field);
  for(int dep1 = 0; dep1 != query.subQueries.size(); dep1++) {
    setParameter(std::string("Query") + ".SubQueries." + std::to_string(dep1 + 1), std::to_string(query.subQueries[dep1]));
  }
  setParameter(std::string("Query") + ".Value", query.value);
  setParameter(std::string("Query") + ".Operation", query.operation);
}

std::string SimpleQueryRequest::getSort() const {
  return sort_;
}

void SimpleQueryRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

std::vector<SimpleQueryRequest::std::string> SimpleQueryRequest::getWithFields() const {
  return withFields_;
}

void SimpleQueryRequest::setWithFields(const std::vector<SimpleQueryRequest::std::string> &withFields) {
  withFields_ = withFields;
  for(int dep1 = 0; dep1 != withFields.size(); dep1++) {
    setParameter(std::string("WithFields") + "." + std::to_string(dep1 + 1), withFields[dep1]);
  }
}

int SimpleQueryRequest::getMaxResults() const {
  return maxResults_;
}

void SimpleQueryRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::vector<SimpleQueryRequest::Aggregations> SimpleQueryRequest::getAggregations() const {
  return aggregations_;
}

void SimpleQueryRequest::setAggregations(const std::vector<SimpleQueryRequest::Aggregations> &aggregations) {
  aggregations_ = aggregations;
  for(int dep1 = 0; dep1 != aggregations.size(); dep1++) {
    setParameter(std::string("Aggregations") + "." + std::to_string(dep1 + 1) + ".Field", aggregations[dep1].field);
    setParameter(std::string("Aggregations") + "." + std::to_string(dep1 + 1) + ".Operation", aggregations[dep1].operation);
  }
}

