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

#include <alibabacloud/ice/model/ListTranscodeJobsRequest.h>

using AlibabaCloud::ICE::Model::ListTranscodeJobsRequest;

ListTranscodeJobsRequest::ListTranscodeJobsRequest()
    : RpcServiceRequest("ice", "2020-11-09", "ListTranscodeJobs") {
  setMethod(HttpRequest::Method::Post);
}

ListTranscodeJobsRequest::~ListTranscodeJobsRequest() {}

std::string ListTranscodeJobsRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListTranscodeJobsRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string ListTranscodeJobsRequest::getJobId() const {
  return jobId_;
}

void ListTranscodeJobsRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

int ListTranscodeJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListTranscodeJobsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTranscodeJobsRequest::getEndOfCreateTime() const {
  return endOfCreateTime_;
}

void ListTranscodeJobsRequest::setEndOfCreateTime(const std::string &endOfCreateTime) {
  endOfCreateTime_ = endOfCreateTime;
  setParameter(std::string("EndOfCreateTime"), endOfCreateTime);
}

std::string ListTranscodeJobsRequest::getOrderBy() const {
  return orderBy_;
}

void ListTranscodeJobsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

std::string ListTranscodeJobsRequest::getParentJobId() const {
  return parentJobId_;
}

void ListTranscodeJobsRequest::setParentJobId(const std::string &parentJobId) {
  parentJobId_ = parentJobId;
  setParameter(std::string("ParentJobId"), parentJobId);
}

std::string ListTranscodeJobsRequest::getStartOfCreateTime() const {
  return startOfCreateTime_;
}

void ListTranscodeJobsRequest::setStartOfCreateTime(const std::string &startOfCreateTime) {
  startOfCreateTime_ = startOfCreateTime;
  setParameter(std::string("StartOfCreateTime"), startOfCreateTime);
}

std::string ListTranscodeJobsRequest::getStatus() const {
  return status_;
}

void ListTranscodeJobsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

