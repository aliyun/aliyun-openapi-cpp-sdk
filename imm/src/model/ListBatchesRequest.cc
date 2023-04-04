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

#include <alibabacloud/imm/model/ListBatchesRequest.h>

using AlibabaCloud::Imm::Model::ListBatchesRequest;

ListBatchesRequest::ListBatchesRequest()
    : RpcServiceRequest("imm", "2020-09-30", "ListBatches") {
  setMethod(HttpRequest::Method::Post);
}

ListBatchesRequest::~ListBatchesRequest() {}

std::string ListBatchesRequest::getNextToken() const {
  return nextToken_;
}

void ListBatchesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListBatchesRequest::getState() const {
  return state_;
}

void ListBatchesRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string ListBatchesRequest::getOrder() const {
  return order_;
}

void ListBatchesRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string ListBatchesRequest::getProjectName() const {
  return projectName_;
}

void ListBatchesRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string ListBatchesRequest::getSort() const {
  return sort_;
}

void ListBatchesRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

int ListBatchesRequest::getMaxResults() const {
  return maxResults_;
}

void ListBatchesRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListBatchesRequest::getTagSelector() const {
  return tagSelector_;
}

void ListBatchesRequest::setTagSelector(const std::string &tagSelector) {
  tagSelector_ = tagSelector;
  setParameter(std::string("TagSelector"), tagSelector);
}

