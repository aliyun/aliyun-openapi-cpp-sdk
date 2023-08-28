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

#include <alibabacloud/paifeaturestore/model/ListInstancesRequest.h>

using AlibabaCloud::PaiFeatureStore::Model::ListInstancesRequest;

ListInstancesRequest::ListInstancesRequest()
    : RoaServiceRequest("paifeaturestore", "2023-06-21") {
  setResourcePath("/api/v1/instances"};
  setMethod(HttpRequest::Method::Get);
}

ListInstancesRequest::~ListInstancesRequest() {}

int ListInstancesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInstancesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListInstancesRequest::getPageSize() const {
  return pageSize_;
}

void ListInstancesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListInstancesRequest::getSortBy() const {
  return sortBy_;
}

void ListInstancesRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListInstancesRequest::getStatus() const {
  return status_;
}

void ListInstancesRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

std::string ListInstancesRequest::getOrder() const {
  return order_;
}

void ListInstancesRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

