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

#include <alibabacloud/ice/model/ListSnapshotJobsRequest.h>

using AlibabaCloud::ICE::Model::ListSnapshotJobsRequest;

ListSnapshotJobsRequest::ListSnapshotJobsRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListSnapshotJobs") {
  setMethod(HttpRequest::Method::Post);
}

ListSnapshotJobsRequest::~ListSnapshotJobsRequest() {}

std::string ListSnapshotJobsRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListSnapshotJobsRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

long ListSnapshotJobsRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void ListSnapshotJobsRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

std::string ListSnapshotJobsRequest::getJobId() const {
  return jobId_;
}

void ListSnapshotJobsRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

int ListSnapshotJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListSnapshotJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSnapshotJobsRequest::getEndOfCreateTime() const {
  return endOfCreateTime_;
}

void ListSnapshotJobsRequest::setEndOfCreateTime(const std::string &endOfCreateTime) {
  endOfCreateTime_ = endOfCreateTime;
  setParameter(std::string("EndOfCreateTime"), endOfCreateTime);
}

std::string ListSnapshotJobsRequest::getOrderBy() const {
  return orderBy_;
}

void ListSnapshotJobsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string ListSnapshotJobsRequest::getStartOfCreateTime() const {
  return startOfCreateTime_;
}

void ListSnapshotJobsRequest::setStartOfCreateTime(const std::string &startOfCreateTime) {
  startOfCreateTime_ = startOfCreateTime;
  setParameter(std::string("StartOfCreateTime"), startOfCreateTime);
}

std::string ListSnapshotJobsRequest::getStatus() const {
  return status_;
}

void ListSnapshotJobsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

