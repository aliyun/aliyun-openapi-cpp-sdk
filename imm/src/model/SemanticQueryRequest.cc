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

#include <alibabacloud/imm/model/SemanticQueryRequest.h>

using AlibabaCloud::Imm::Model::SemanticQueryRequest;

SemanticQueryRequest::SemanticQueryRequest()
    : RpcServiceRequest("imm", "2020-09-30", "SemanticQuery") {
  setMethod(HttpRequest::Method::Post);
}

SemanticQueryRequest::~SemanticQueryRequest() {}

std::string SemanticQueryRequest::getNextToken() const {
  return nextToken_;
}

void SemanticQueryRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string SemanticQueryRequest::getDatasetName() const {
  return datasetName_;
}

void SemanticQueryRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string SemanticQueryRequest::getProjectName() const {
  return projectName_;
}

void SemanticQueryRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string SemanticQueryRequest::getQuery() const {
  return query_;
}

void SemanticQueryRequest::setQuery(const std::string &query) {
  query_ = query;
  setParameter(std::string("Query"), query);
}

int SemanticQueryRequest::getMaxResults() const {
  return maxResults_;
}

void SemanticQueryRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

