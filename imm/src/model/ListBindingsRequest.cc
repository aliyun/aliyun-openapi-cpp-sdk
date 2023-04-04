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

#include <alibabacloud/imm/model/ListBindingsRequest.h>

using AlibabaCloud::Imm::Model::ListBindingsRequest;

ListBindingsRequest::ListBindingsRequest()
    : RpcServiceRequest("imm", "2020-09-30", "ListBindings") {
  setMethod(HttpRequest::Method::Post);
}

ListBindingsRequest::~ListBindingsRequest() {}

std::string ListBindingsRequest::getNextToken() const {
  return nextToken_;
}

void ListBindingsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListBindingsRequest::getDatasetName() const {
  return datasetName_;
}

void ListBindingsRequest::setDatasetName(const std::string &datasetName) {
  datasetName_ = datasetName;
  setParameter(std::string("DatasetName"), datasetName);
}

std::string ListBindingsRequest::getProjectName() const {
  return projectName_;
}

void ListBindingsRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

long ListBindingsRequest::getMaxResults() const {
  return maxResults_;
}

void ListBindingsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

