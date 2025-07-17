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

#include <alibabacloud/paifeaturestore/model/ListLLMConfigsRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::ListLLMConfigsRequest;

ListLLMConfigsRequest::ListLLMConfigsRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/llmconfigs"};
  setMethod(HttpRequest::Method::Get);
}

ListLLMConfigsRequest::~ListLLMConfigsRequest() {}

int ListLLMConfigsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListLLMConfigsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListLLMConfigsRequest::getNextToken() const {
  return nextToken_;
}

void ListLLMConfigsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListLLMConfigsRequest::getPageSize() const {
  return pageSize_;
}

void ListLLMConfigsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLLMConfigsRequest::getOrder() const {
  return order_;
}

void ListLLMConfigsRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string ListLLMConfigsRequest::getInstanceId() const {
  return instanceId_;
}

void ListLLMConfigsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListLLMConfigsRequest::getName() const {
  return name_;
}

void ListLLMConfigsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListLLMConfigsRequest::getMaxResults() const {
  return maxResults_;
}

void ListLLMConfigsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListLLMConfigsRequest::getSortBy() const {
  return sortBy_;
}

void ListLLMConfigsRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListLLMConfigsRequest::getWorkspaceId() const {
  return workspaceId_;
}

void ListLLMConfigsRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

