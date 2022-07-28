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

#include <alibabacloud/eas/model/ListServicesRequest.h>

using AlibabaCloud::Eas::Model::ListServicesRequest;

ListServicesRequest::ListServicesRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/services"};
  setMethod(HttpRequest::Method::Get);
}

ListServicesRequest::~ListServicesRequest() {}

string ListServicesRequest::getFilter() const {
  return filter_;
}

void ListServicesRequest::setFilter(string filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), std::to_string(filter));
}

integer ListServicesRequest::getPageSize() const {
  return pageSize_;
}

void ListServicesRequest::setPageSize(integer pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

string ListServicesRequest::getSort() const {
  return sort_;
}

void ListServicesRequest::setSort(string sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), std::to_string(sort));
}

integer ListServicesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListServicesRequest::setPageNumber(integer pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

string ListServicesRequest::getOrder() const {
  return order_;
}

void ListServicesRequest::setOrder(string order) {
  order_ = order;
  setParameter(std::string("Order"), std::to_string(order));
}

