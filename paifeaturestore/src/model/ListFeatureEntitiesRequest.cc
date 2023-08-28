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

#include <alibabacloud/paifeaturestore/model/ListFeatureEntitiesRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::ListFeatureEntitiesRequest;

ListFeatureEntitiesRequest::ListFeatureEntitiesRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/featureentities"};
  setMethod(HttpRequest::Method::Get);
}

ListFeatureEntitiesRequest::~ListFeatureEntitiesRequest() {}

std::string ListFeatureEntitiesRequest::getOwner() const {
  return owner_;
}

void ListFeatureEntitiesRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setParameter(std::string("Owner"), owner);
}

int ListFeatureEntitiesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListFeatureEntitiesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListFeatureEntitiesRequest::getInstanceId() const {
  return instanceId_;
}

void ListFeatureEntitiesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListFeatureEntitiesRequest::getName() const {
  return name_;
}

void ListFeatureEntitiesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int ListFeatureEntitiesRequest::getPageSize() const {
  return pageSize_;
}

void ListFeatureEntitiesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListFeatureEntitiesRequest::getSortBy() const {
  return sortBy_;
}

void ListFeatureEntitiesRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListFeatureEntitiesRequest::getProjectId() const {
  return projectId_;
}

void ListFeatureEntitiesRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string ListFeatureEntitiesRequest::getOrder() const {
  return order_;
}

void ListFeatureEntitiesRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

