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

#include <alibabacloud/paifeaturestore/model/ListProjectFeaturesRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::ListProjectFeaturesRequest;

ListProjectFeaturesRequest::ListProjectFeaturesRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances/[InstanceId]/projects/[ProjectId]/features"};
  setMethod(HttpRequest::Method::Get);
}

ListProjectFeaturesRequest::~ListProjectFeaturesRequest() {}

int ListProjectFeaturesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListProjectFeaturesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListProjectFeaturesRequest::getPageSize() const {
  return pageSize_;
}

void ListProjectFeaturesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListProjectFeaturesRequest::getProjectId() const {
  return projectId_;
}

void ListProjectFeaturesRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), projectId);
}

std::string ListProjectFeaturesRequest::getOrder() const {
  return order_;
}

void ListProjectFeaturesRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string ListProjectFeaturesRequest::getFilter() const {
  return filter_;
}

void ListProjectFeaturesRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), filter);
}

std::string ListProjectFeaturesRequest::getAliasName() const {
  return aliasName_;
}

void ListProjectFeaturesRequest::setAliasName(const std::string &aliasName) {
  aliasName_ = aliasName;
  setParameter(std::string("AliasName"), aliasName);
}

std::string ListProjectFeaturesRequest::getInstanceId() const {
  return instanceId_;
}

void ListProjectFeaturesRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListProjectFeaturesRequest::getName() const {
  return name_;
}

void ListProjectFeaturesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

std::string ListProjectFeaturesRequest::getSortBy() const {
  return sortBy_;
}

void ListProjectFeaturesRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

