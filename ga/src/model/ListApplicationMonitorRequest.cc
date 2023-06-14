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

#include <alibabacloud/ga/model/ListApplicationMonitorRequest.h>

using AlibabaCloud::Ga::Model::ListApplicationMonitorRequest;

ListApplicationMonitorRequest::ListApplicationMonitorRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListApplicationMonitor") {
  setMethod(HttpRequest::Method::Post);
}

ListApplicationMonitorRequest::~ListApplicationMonitorRequest() {}

int ListApplicationMonitorRequest::getPageNumber() const {
  return pageNumber_;
}

void ListApplicationMonitorRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListApplicationMonitorRequest::getRegionId() const {
  return regionId_;
}

void ListApplicationMonitorRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListApplicationMonitorRequest::getPageSize() const {
  return pageSize_;
}

void ListApplicationMonitorRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListApplicationMonitorRequest::getSearchValue() const {
  return searchValue_;
}

void ListApplicationMonitorRequest::setSearchValue(const std::string &searchValue) {
  searchValue_ = searchValue;
  setParameter(std::string("SearchValue"), searchValue);
}

