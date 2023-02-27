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

#include <alibabacloud/ice/model/ListLiveSnapshotFilesRequest.h>

using AlibabaCloud::ICE::Model::ListLiveSnapshotFilesRequest;

ListLiveSnapshotFilesRequest::ListLiveSnapshotFilesRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListLiveSnapshotFiles") {
  setMethod(HttpRequest::Method::Get);
}

ListLiveSnapshotFilesRequest::~ListLiveSnapshotFilesRequest() {}

std::string ListLiveSnapshotFilesRequest::getEndTime() const {
  return endTime_;
}

void ListLiveSnapshotFilesRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ListLiveSnapshotFilesRequest::getStartTime() const {
  return startTime_;
}

void ListLiveSnapshotFilesRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

std::string ListLiveSnapshotFilesRequest::getJobId() const {
  return jobId_;
}

void ListLiveSnapshotFilesRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

int ListLiveSnapshotFilesRequest::getLimit() const {
  return limit_;
}

void ListLiveSnapshotFilesRequest::setLimit(int limit) {
  limit_ = limit;
  setParameter(std::string("Limit"), std::to_string(limit));
}

std::string ListLiveSnapshotFilesRequest::getSortBy() const {
  return sortBy_;
}

void ListLiveSnapshotFilesRequest::setSortBy(const std::string &sortBy) {
  sortBy_ = sortBy;
  setParameter(std::string("SortBy"), sortBy);
}

