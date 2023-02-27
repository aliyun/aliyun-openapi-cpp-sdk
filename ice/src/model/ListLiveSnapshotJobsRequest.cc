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

#include <alibabacloud/ice/model/ListLiveSnapshotJobsRequest.h>

using AlibabaCloud::ICE::Model::ListLiveSnapshotJobsRequest;

ListLiveSnapshotJobsRequest::ListLiveSnapshotJobsRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListLiveSnapshotJobs") {
  setMethod(HttpRequest::Method::Get);
}

ListLiveSnapshotJobsRequest::~ListLiveSnapshotJobsRequest() {}

std::string ListLiveSnapshotJobsRequest::getEndTime() const {
  return endTime_;
}

void ListLiveSnapshotJobsRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ListLiveSnapshotJobsRequest::getStartTime() const {
  return startTime_;
}

void ListLiveSnapshotJobsRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ListLiveSnapshotJobsRequest::getSearchKeyWord() const {
  return searchKeyWord_;
}

void ListLiveSnapshotJobsRequest::setSearchKeyWord(const std::string &searchKeyWord) {
  searchKeyWord_ = searchKeyWord;
  setParameter(std::string("SearchKeyWord"), searchKeyWord);
}

int ListLiveSnapshotJobsRequest::getPageNo() const {
  return pageNo_;
}

void ListLiveSnapshotJobsRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

int ListLiveSnapshotJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListLiveSnapshotJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLiveSnapshotJobsRequest::getSortBy() const {
  return sortBy_;
}

void ListLiveSnapshotJobsRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

std::string ListLiveSnapshotJobsRequest::getStatus() const {
  return status_;
}

void ListLiveSnapshotJobsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

