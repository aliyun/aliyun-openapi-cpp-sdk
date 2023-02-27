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

#include <alibabacloud/ice/model/ListLiveRecordJobsRequest.h>

using AlibabaCloud::ICE::Model::ListLiveRecordJobsRequest;

ListLiveRecordJobsRequest::ListLiveRecordJobsRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListLiveRecordJobs") {
  setMethod(HttpRequest::Method::Get);
}

ListLiveRecordJobsRequest::~ListLiveRecordJobsRequest() {}

std::string ListLiveRecordJobsRequest::getEndTime() const {
  return endTime_;
}

void ListLiveRecordJobsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ListLiveRecordJobsRequest::getStartTime() const {
  return startTime_;
}

void ListLiveRecordJobsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

long ListLiveRecordJobsRequest::getPageNo() const {
  return pageNo_;
}

void ListLiveRecordJobsRequest::setPageNo(long pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

long ListLiveRecordJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListLiveRecordJobsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLiveRecordJobsRequest::getSortBy() const {
  return sortBy_;
}

void ListLiveRecordJobsRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListLiveRecordJobsRequest::getKeyword() const {
  return keyword_;
}

void ListLiveRecordJobsRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setParameter(std::string("Keyword"), keyword);
}

std::string ListLiveRecordJobsRequest::getStatus() const {
  return status_;
}

void ListLiveRecordJobsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

