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

#include <alibabacloud/paifeaturestore/model/ListLabelTablesRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::ListLabelTablesRequest;

ListLabelTablesRequest::ListLabelTablesRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/labeltables"};
  setMethod(HttpRequest::Method::Get);
}

ListLabelTablesRequest::~ListLabelTablesRequest() {}

std::string ListLabelTablesRequest::getOwner() const {
  return owner_;
}

void ListLabelTablesRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setParameter(std::string("Owner"), owner);
}

long ListLabelTablesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListLabelTablesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListLabelTablesRequest::getInstanceId() const {
  return instanceId_;
}

void ListLabelTablesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ListLabelTablesRequest::getPageSize() const {
  return pageSize_;
}

void ListLabelTablesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLabelTablesRequest::getName() const {
  return name_;
}

void ListLabelTablesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListLabelTablesRequest::getSortBy() const {
  return sortBy_;
}

void ListLabelTablesRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListLabelTablesRequest::getProjectId() const {
  return projectId_;
}

void ListLabelTablesRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string ListLabelTablesRequest::getOrder() const {
  return order_;
}

void ListLabelTablesRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

