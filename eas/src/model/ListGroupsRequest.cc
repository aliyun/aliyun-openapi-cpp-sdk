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

#include <alibabacloud/eas/model/ListGroupsRequest.h>

using AlibabaCloud::Eas::Model::ListGroupsRequest;

ListGroupsRequest::ListGroupsRequest()
    : RoaServiceRequest("eas", "2021-07-01") {
  setResourcePath("/api/v2/groups"};
  setMethod(HttpRequest::Method::Get);
}

ListGroupsRequest::~ListGroupsRequest() {}

std::string ListGroupsRequest::getFilter() const {
  return filter_;
}

void ListGroupsRequest::setFilter(const std::string &filter) {
  filter_ = filter;
  setParameter(std::string("Filter"), filter);
}

std::string ListGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListGroupsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListGroupsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

