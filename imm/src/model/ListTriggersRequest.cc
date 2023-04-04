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

#include <alibabacloud/imm/model/ListTriggersRequest.h>

using AlibabaCloud::Imm::Model::ListTriggersRequest;

ListTriggersRequest::ListTriggersRequest()
    : RpcServiceRequest("imm", "2020-09-30", "ListTriggers") {
  setMethod(HttpRequest::Method::Post);
}

ListTriggersRequest::~ListTriggersRequest() {}

std::string ListTriggersRequest::getNextToken() const {
  return nextToken_;
}

void ListTriggersRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTriggersRequest::getState() const {
  return state_;
}

void ListTriggersRequest::setState(const std::string &state) {
  state_ = state;
  setParameter(std::string("State"), state);
}

std::string ListTriggersRequest::getOrder() const {
  return order_;
}

void ListTriggersRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string ListTriggersRequest::getProjectName() const {
  return projectName_;
}

void ListTriggersRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string ListTriggersRequest::getSort() const {
  return sort_;
}

void ListTriggersRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

int ListTriggersRequest::getMaxResults() const {
  return maxResults_;
}

void ListTriggersRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListTriggersRequest::getTagSelector() const {
  return tagSelector_;
}

void ListTriggersRequest::setTagSelector(const std::string &tagSelector) {
  tagSelector_ = tagSelector;
  setParameter(std::string("TagSelector"), tagSelector);
}

