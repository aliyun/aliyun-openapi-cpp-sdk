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

#include <alibabacloud/imm/model/QueryFigureClustersRequest.h>

using AlibabaCloud::Imm::Model::QueryFigureClustersRequest;

QueryFigureClustersRequest::QueryFigureClustersRequest()
    : RpcServiceRequest("imm", "2020-09-30", "QueryFigureClusters") {
  setMethod(HttpRequest::Method::Post);
}

QueryFigureClustersRequest::~QueryFigureClustersRequest() {}

std::string QueryFigureClustersRequest::getCustomLabels() const {
  return customLabels_;
}

void QueryFigureClustersRequest::setCustomLabels(const std::string &customLabels) {
  customLabels_ = customLabels;
  setParameter(std::string("CustomLabels"), customLabels);
}

std::string QueryFigureClustersRequest::getNextToken() const {
  return nextToken_;
}

void QueryFigureClustersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string QueryFigureClustersRequest::getDatasetName() const {
  return datasetName_;
}

void QueryFigureClustersRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string QueryFigureClustersRequest::getOrder() const {
  return order_;
}

void QueryFigureClustersRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string QueryFigureClustersRequest::getProjectName() const {
  return projectName_;
}

void QueryFigureClustersRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string QueryFigureClustersRequest::getSort() const {
  return sort_;
}

void QueryFigureClustersRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

long QueryFigureClustersRequest::getMaxResults() const {
  return maxResults_;
}

void QueryFigureClustersRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

