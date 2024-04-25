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

#include <alibabacloud/ehpcinstant/model/ListJobsRequest.h>

using AlibabaCloud::EhpcInstant::Model::ListJobsRequest;

ListJobsRequest::ListJobsRequest()
    : RpcServiceRequest("ehpcinstant", "2023-07-01", "ListJobs") {
  setMethod(HttpRequest::Method::Post);
}

ListJobsRequest::~ListJobsRequest() {}

std::string ListJobsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListJobsRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

ListJobsRequest::Filter ListJobsRequest::getFilter() const {
  return filter_;
}

void ListJobsRequest::setFilter(const ListJobsRequest::Filter &filter) {
  filter_ = filter;
  setParameter(std::string("Filter") + ".JobId", filter.jobId);
  setParameter(std::string("Filter") + ".TimeCreatedAfter", std::to_string(filter.timeCreatedAfter));
  setParameter(std::string("Filter") + ".TimeCreatedBefore", std::to_string(filter.timeCreatedBefore));
  setParameter(std::string("Filter") + ".JobName", filter.jobName);
  setParameter(std::string("Filter") + ".Status", filter.status);
}

std::string ListJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListJobsRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

ListJobsRequest::SortBy ListJobsRequest::getSortBy() const {
  return sortBy_;
}

void ListJobsRequest::setSortBy(const ListJobsRequest::SortBy &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy") + ".Label", sortBy.label);
  setParameter(std::string("SortBy") + ".Order", sortBy.order);
}

