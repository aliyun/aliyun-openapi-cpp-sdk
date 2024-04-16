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

#include <alibabacloud/ehpc/model/ListExecutorsRequest.h>

using AlibabaCloud::EHPC::Model::ListExecutorsRequest;

ListExecutorsRequest::ListExecutorsRequest()
    : RpcServiceRequest("ehpc", "2023-07-01", "ListExecutors") {
  setMethod(HttpRequest::Method::Post);
}

ListExecutorsRequest::~ListExecutorsRequest() {}

std::string ListExecutorsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListExecutorsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

ListExecutorsRequest::Filter ListExecutorsRequest::getFilter() const {
  return filter_;
}

void ListExecutorsRequest::setFilter(const ListExecutorsRequest::Filter &filter) {
  filter_ = filter;
  setParameter(std::string("Filter") + ".TimeCreatedAfter", std::to_string(filter.timeCreatedAfter));
  for(int dep1 = 0; dep1 != filter.ipAddresses.size(); dep1++) {
    setParameter(std::string("Filter") + ".IpAddresses." + std::to_string(dep1 + 1), filter.ipAddresses[dep1]);
  }
  setParameter(std::string("Filter") + ".TimeCreatedBefore", std::to_string(filter.timeCreatedBefore));
  for(int dep1 = 0; dep1 != filter.executorIds.size(); dep1++) {
    setParameter(std::string("Filter") + ".ExecutorIds." + std::to_string(dep1 + 1), filter.executorIds[dep1]);
  }
  setParameter(std::string("Filter") + ".JobName", filter.jobName);
}

std::string ListExecutorsRequest::getPageSize() const {
  return pageSize_;
}

void ListExecutorsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

