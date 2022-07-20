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

#include <alibabacloud/imm/model/ListDatasetsRequest.h>

using AlibabaCloud::Imm::Model::ListDatasetsRequest;

ListDatasetsRequest::ListDatasetsRequest()
    : RpcServiceRequest("imm", "2020-09-30", "ListDatasets") {
  setMethod(HttpRequest::Method::Post);
}

ListDatasetsRequest::~ListDatasetsRequest() {}

std::string ListDatasetsRequest::getPrefix() const {
  return prefix_;
}

void ListDatasetsRequest::setPrefix(const std::string &prefix) {
  prefix_ = prefix;
  setParameter(std::string("Prefix"), prefix);
}

std::string ListDatasetsRequest::getNextToken() const {
  return nextToken_;
}

void ListDatasetsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListDatasetsRequest::getProjectName() const {
  return projectName_;
}

void ListDatasetsRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

long ListDatasetsRequest::getMaxResults() const {
  return maxResults_;
}

void ListDatasetsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

