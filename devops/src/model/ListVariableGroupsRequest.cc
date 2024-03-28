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

#include <alibabacloud/devops/model/ListVariableGroupsRequest.h>

using AlibabaCloud::Devops::Model::ListVariableGroupsRequest;

ListVariableGroupsRequest::ListVariableGroupsRequest()
    : RoaServiceRequest("devops", "2021-06-25") {
  setResourcePath("/organization/[organizationId]/variableGroups"};
  setMethod(HttpRequest::Method::Get);
}

ListVariableGroupsRequest::~ListVariableGroupsRequest() {}

std::string ListVariableGroupsRequest::getPageSort() const {
  return pageSort_;
}

void ListVariableGroupsRequest::setPageSort(const std::string &pageSort) {
  pageSort_ = pageSort;
  setParameter(std::string("pageSort"), pageSort);
}

std::string ListVariableGroupsRequest::getOrganizationId() const {
  return organizationId_;
}

void ListVariableGroupsRequest::setOrganizationId(const std::string &organizationId) {
  organizationId_ = organizationId;
  setParameter(std::string("organizationId"), organizationId);
}

std::string ListVariableGroupsRequest::getPageOrder() const {
  return pageOrder_;
}

void ListVariableGroupsRequest::setPageOrder(const std::string &pageOrder) {
  pageOrder_ = pageOrder;
  setParameter(std::string("pageOrder"), pageOrder);
}

std::string ListVariableGroupsRequest::getNextToken() const {
  return nextToken_;
}

void ListVariableGroupsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("nextToken"), nextToken);
}

int ListVariableGroupsRequest::getMaxResults() const {
  return maxResults_;
}

void ListVariableGroupsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("maxResults"), std::to_string(maxResults));
}

