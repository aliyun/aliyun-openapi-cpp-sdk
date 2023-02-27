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

#include <alibabacloud/ice/model/GetSnapshotUrlsRequest.h>

using AlibabaCloud::ICE::Model::GetSnapshotUrlsRequest;

GetSnapshotUrlsRequest::GetSnapshotUrlsRequest()
    : RpcServiceRequest("ice", "2020-11-09", "GetSnapshotUrls") {
  setMethod(HttpRequest::Method::Post);
}

GetSnapshotUrlsRequest::~GetSnapshotUrlsRequest() {}

long GetSnapshotUrlsRequest::getResourceRealOwnerId() const {
  return resourceRealOwnerId_;
}

void GetSnapshotUrlsRequest::setResourceRealOwnerId(long resourceRealOwnerId) {
  resourceRealOwnerId_ = resourceRealOwnerId;
  setParameter(std::string("ResourceRealOwnerId"), std::to_string(resourceRealOwnerId));
}

int GetSnapshotUrlsRequest::getPageNumber() const {
  return pageNumber_;
}

void GetSnapshotUrlsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long GetSnapshotUrlsRequest::getTimeout() const {
  return timeout_;
}

void GetSnapshotUrlsRequest::setTimeout(long timeout) {
  timeout_ = timeout;
  setParameter(std::string("Timeout"), std::to_string(timeout));
}

std::string GetSnapshotUrlsRequest::getJobId() const {
  return jobId_;
}

void GetSnapshotUrlsRequest::setJobId(const std::string &jobId) {
  jobId_ = jobId;
  setParameter(std::string("JobId"), jobId);
}

int GetSnapshotUrlsRequest::getPageSize() const {
  return pageSize_;
}

void GetSnapshotUrlsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetSnapshotUrlsRequest::getOrderBy() const {
  return orderBy_;
}

void GetSnapshotUrlsRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

