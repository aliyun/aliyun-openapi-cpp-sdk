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

#include <alibabacloud/ice/model/ListLiveRecordFilesRequest.h>

using AlibabaCloud::ICE::Model::ListLiveRecordFilesRequest;

ListLiveRecordFilesRequest::ListLiveRecordFilesRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListLiveRecordFiles") {
  setMethod(HttpRequest::Method::Get);
}

ListLiveRecordFilesRequest::~ListLiveRecordFilesRequest() {}

std::string ListLiveRecordFilesRequest::getEndTime() const {
  return endTime_;
}

void ListLiveRecordFilesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ListLiveRecordFilesRequest::getStartTime() const {
  return startTime_;
}

void ListLiveRecordFilesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int ListLiveRecordFilesRequest::getPageNo() const {
  return pageNo_;
}

void ListLiveRecordFilesRequest::setPageNo(int pageNo) {
  pageNo_ = pageNo;
  setParameter(std::string("PageNo"), std::to_string(pageNo));
}

std::string ListLiveRecordFilesRequest::getRecordFormat() const {
  return recordFormat_;
}

void ListLiveRecordFilesRequest::setRecordFormat(const std::string &recordFormat) {
  recordFormat_ = recordFormat;
  setParameter(std::string("RecordFormat"), recordFormat);
}

std::vector<ListLiveRecordFilesRequest::std::string> ListLiveRecordFilesRequest::getJobIds() const {
  return jobIds_;
}

void ListLiveRecordFilesRequest::setJobIds(const std::vector<ListLiveRecordFilesRequest::std::string> &jobIds) {
  jobIds_ = jobIds;
  for(int dep1 = 0; dep1 != jobIds.size(); dep1++) {
    setParameter(std::string("JobIds") + "." + std::to_string(dep1 + 1), jobIds[dep1]);
  }
}

int ListLiveRecordFilesRequest::getPageSize() const {
  return pageSize_;
}

void ListLiveRecordFilesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLiveRecordFilesRequest::getSortBy() const {
  return sortBy_;
}

void ListLiveRecordFilesRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

