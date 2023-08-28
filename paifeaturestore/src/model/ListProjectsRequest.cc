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

#include <alibabacloud/paifeaturestore/model/ListProjectsRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::ListProjectsRequest;

ListProjectsRequest::ListProjectsRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/projects"};
  setMethod(HttpRequest::Method::Get);
}

ListProjectsRequest::~ListProjectsRequest() {}

std::string ListProjectsRequest::getOwner() const {
  return owner_;
}

void ListProjectsRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setParameter(std::string("Owner"), owner);
}

int ListProjectsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListProjectsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListProjectsRequest::getInstanceId() const {
  return instanceId_;
}

void ListProjectsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListProjectsRequest::getName() const {
  return name_;
}

void ListProjectsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListProjectsRequest::getPageSize() const {
  return pageSize_;
}

void ListProjectsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListProjectsRequest::getSortBy() const {
  return sortBy_;
}

void ListProjectsRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListProjectsRequest::getWorkspaceId() const {
  return workspaceId_;
}

void ListProjectsRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

std::string ListProjectsRequest::getOrder() const {
  return order_;
}

void ListProjectsRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

