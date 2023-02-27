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

#include <alibabacloud/ice/model/ListMediaInfoJobsRequest.h>

using AlibabaCloud::ICE::Model::ListMediaInfoJobsRequest;

ListMediaInfoJobsRequest::ListMediaInfoJobsRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListMediaInfoJobs") {
  setMethod(HttpRequest::Method::Post);
}

ListMediaInfoJobsRequest::~ListMediaInfoJobsRequest() {}

std::string ListMediaInfoJobsRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListMediaInfoJobsRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string ListMediaInfoJobsRequest::getJobId() const {
  return jobId_;
}

void ListMediaInfoJobsRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

int ListMediaInfoJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListMediaInfoJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListMediaInfoJobsRequest::getEndOfCreateTime() const {
  return endOfCreateTime_;
}

void ListMediaInfoJobsRequest::setEndOfCreateTime(const std::string &endOfCreateTime) {
  endOfCreateTime_ = endOfCreateTime;
  setParameter(std::string("EndOfCreateTime"), endOfCreateTime);
}

std::string ListMediaInfoJobsRequest::getOrderBy() const {
  return orderBy_;
}

void ListMediaInfoJobsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string ListMediaInfoJobsRequest::getStartOfCreateTime() const {
  return startOfCreateTime_;
}

void ListMediaInfoJobsRequest::setStartOfCreateTime(const std::string &startOfCreateTime) {
  startOfCreateTime_ = startOfCreateTime;
  setParameter(std::string("StartOfCreateTime"), startOfCreateTime);
}

std::string ListMediaInfoJobsRequest::getStatus() const {
  return status_;
}

void ListMediaInfoJobsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

