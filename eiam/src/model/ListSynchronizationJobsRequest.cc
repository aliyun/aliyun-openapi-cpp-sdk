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

#include <alibabacloud/eiam/model/ListSynchronizationJobsRequest.h>

using AlibabaCloud::Eiam::Model::ListSynchronizationJobsRequest;

ListSynchronizationJobsRequest::ListSynchronizationJobsRequest()
    : RpcServiceRequest("eiam", "2021-12-01", "ListSynchronizationJobs") {
  setMethod(HttpRequest::Method::Post);
}

ListSynchronizationJobsRequest::~ListSynchronizationJobsRequest() {}

std::string ListSynchronizationJobsRequest::getTargetType() const {
  return targetType_;
}

void ListSynchronizationJobsRequest::setTargetType(const std::string &targetType) {
  targetType_ = targetType;
  setParameter(std::string("TargetType"), targetType);
}

long ListSynchronizationJobsRequest::getStartTime() const {
  return startTime_;
}

void ListSynchronizationJobsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

long ListSynchronizationJobsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSynchronizationJobsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListSynchronizationJobsRequest::getNextToken() const {
  return nextToken_;
}

void ListSynchronizationJobsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

long ListSynchronizationJobsRequest::getPageSize() const {
  return pageSize_;
}

void ListSynchronizationJobsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSynchronizationJobsRequest::getDirection() const {
  return direction_;
}

void ListSynchronizationJobsRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

std::vector<ListSynchronizationJobsRequest::std::string> ListSynchronizationJobsRequest::getTargetIds() const {
  return targetIds_;
}

void ListSynchronizationJobsRequest::setTargetIds(const std::vector<ListSynchronizationJobsRequest::std::string> &targetIds) {
  targetIds_ = targetIds;
  for(int dep1 = 0; dep1 != targetIds.size(); dep1++) {
    setParameter(std::string("TargetIds") + "." + std::to_string(dep1 + 1), targetIds[dep1]);
  }
}

long ListSynchronizationJobsRequest::getEndTime() const {
  return endTime_;
}

void ListSynchronizationJobsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::vector<ListSynchronizationJobsRequest::Filters> ListSynchronizationJobsRequest::getFilters() const {
  return filters_;
}

void ListSynchronizationJobsRequest::setFilters(const std::vector<ListSynchronizationJobsRequest::Filters> &filters) {
  filters_ = filters;
  for(int dep1 = 0; dep1 != filters.size(); dep1++) {
    for(int dep2 = 0; dep2 != filters[dep1].values.size(); dep2++) {
      setParameter(std::string("Filters") + "." + std::to_string(dep1 + 1) + ".Values." + std::to_string(dep2 + 1), filters[dep1].values[dep2]);
    }
    setParameter(std::string("Filters") + "." + std::to_string(dep1 + 1) + ".Key", filters[dep1].key);
  }
}

std::string ListSynchronizationJobsRequest::getInstanceId() const {
  return instanceId_;
}

void ListSynchronizationJobsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

long ListSynchronizationJobsRequest::getMaxResults() const {
  return maxResults_;
}

void ListSynchronizationJobsRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListSynchronizationJobsRequest::getStatus() const {
  return status_;
}

void ListSynchronizationJobsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

