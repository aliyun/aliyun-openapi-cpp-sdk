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

#include <alibabacloud/opensearch/model/ListAppGroupsRequest.h>

using AlibabaCloud::OpenSearch::Model::ListAppGroupsRequest;

ListAppGroupsRequest::ListAppGroupsRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups"};
  setMethod(HttpRequest::Method::Get);
}

ListAppGroupsRequest::~ListAppGroupsRequest() {}

std::string ListAppGroupsRequest::getResourceGroupId() const {
  return resourceGroupId_;
}

void ListAppGroupsRequest::setResourceGroupId(const std::string &resourceGroupId) {
  resourceGroupId_ = resourceGroupId;
  setParameter(std::string("resourceGroupId"), resourceGroupId);
}

std::string ListAppGroupsRequest::getInstanceId() const {
  return instanceId_;
}

void ListAppGroupsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("instanceId"), instanceId);
}

int ListAppGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListAppGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

std::string ListAppGroupsRequest::getName() const {
  return name_;
}

void ListAppGroupsRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("name"), name);
}

int ListAppGroupsRequest::getSortBy() const {
  return sortBy_;
}

void ListAppGroupsRequest::setSortBy(int sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("sortBy"), std::to_string(sortBy));
}

std::string ListAppGroupsRequest::getType() const {
  return type_;
}

void ListAppGroupsRequest::setType(const std::string &type) {
  type_ = type;
  setParameter(std::string("type"), type);
}

int ListAppGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAppGroupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("pageNumber"), std::to_string(pageNumber));
}

