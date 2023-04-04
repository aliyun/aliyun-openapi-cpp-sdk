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

#include <alibabacloud/imm/model/QuerySimilarImageClustersRequest.h>

using AlibabaCloud::Imm::Model::QuerySimilarImageClustersRequest;

QuerySimilarImageClustersRequest::QuerySimilarImageClustersRequest()
    : RpcServiceRequest("imm", "2020-09-30", "QuerySimilarImageClusters") {
  setMethod(HttpRequest::Method::Post);
}

QuerySimilarImageClustersRequest::~QuerySimilarImageClustersRequest() {}

std::string QuerySimilarImageClustersRequest::getCustomLabels() const {
  return customLabels_;
}

void QuerySimilarImageClustersRequest::setCustomLabels(const std::string &customLabels) {
  customLabels_ = customLabels;
  setParameter(std::string("CustomLabels"), customLabels);
}

std::string QuerySimilarImageClustersRequest::getNextToken() const {
  return nextToken_;
}

void QuerySimilarImageClustersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string QuerySimilarImageClustersRequest::getDatasetName() const {
  return datasetName_;
}

void QuerySimilarImageClustersRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string QuerySimilarImageClustersRequest::getOrder() const {
  return order_;
}

void QuerySimilarImageClustersRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string QuerySimilarImageClustersRequest::getProjectName() const {
  return projectName_;
}

void QuerySimilarImageClustersRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string QuerySimilarImageClustersRequest::getSort() const {
  return sort_;
}

void QuerySimilarImageClustersRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

int QuerySimilarImageClustersRequest::getMaxResults() const {
  return maxResults_;
}

void QuerySimilarImageClustersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

