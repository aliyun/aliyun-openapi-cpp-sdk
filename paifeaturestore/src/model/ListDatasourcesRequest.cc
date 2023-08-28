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

#include <alibabacloud/paifeaturestore/model/ListDatasourcesRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::ListDatasourcesRequest;

ListDatasourcesRequest::ListDatasourcesRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/datasources"};
  setMethod(HttpRequest::Method::Get);
}

ListDatasourcesRequest::~ListDatasourcesRequest() {}

std::string ListDatasourcesRequest::getType() const {
  return type_;
}

void ListDatasourcesRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("Type"), type);
}

int ListDatasourcesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDatasourcesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListDatasourcesRequest::getInstanceId() const {
  return instanceId_;
}

void ListDatasourcesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListDatasourcesRequest::getName() const {
  return name_;
}

void ListDatasourcesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListDatasourcesRequest::getPageSize() const {
  return pageSize_;
}

void ListDatasourcesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDatasourcesRequest::getSortBy() const {
  return sortBy_;
}

void ListDatasourcesRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListDatasourcesRequest::getWorkspaceId() const {
  return workspaceId_;
}

void ListDatasourcesRequest::setWorkspaceId(const std::string &workspaceId) {
  workspaceId_ = workspaceId;
  setParameter(std::string("WorkspaceId"), workspaceId);
}

std::string ListDatasourcesRequest::getOrder() const {
  return order_;
}

void ListDatasourcesRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

