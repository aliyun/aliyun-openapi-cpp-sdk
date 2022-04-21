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

#include <alibabacloud/outboundbot/model/ListJobGroupsRequest.h>

using AlibabaCloud::OutboundBot::Model::ListJobGroupsRequest;

ListJobGroupsRequest::ListJobGroupsRequest()
    : RpcServiceRequest("outboundbot", "2019-12-26", "ListJobGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListJobGroupsRequest::~ListJobGroupsRequest() {}

bool ListJobGroupsRequest::getAsyncQuery() const {
  return asyncQuery_;
}

void ListJobGroupsRequest::setAsyncQuery(bool asyncQuery) {
  asyncQuery_ = asyncQuery;
  setParameter(std::string("AsyncQuery"), asyncQuery ? "true" : "false");
}

std::string ListJobGroupsRequest::getSearchText() const {
  return searchText_;
}

void ListJobGroupsRequest::setSearchText(const std::string &searchText) {
  searchText_ = searchText;
  setParameter(std::string("SearchText"), searchText);
}

long ListJobGroupsRequest::getEndTime() const {
  return endTime_;
}

void ListJobGroupsRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListJobGroupsRequest::getStartTime() const {
  return startTime_;
}

void ListJobGroupsRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int ListJobGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListJobGroupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListJobGroupsRequest::getInstanceId() const {
  return instanceId_;
}

void ListJobGroupsRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListJobGroupsRequest::getJobGroupStatusFilter() const {
  return jobGroupStatusFilter_;
}

void ListJobGroupsRequest::setJobGroupStatusFilter(const std::string &jobGroupStatusFilter) {
  jobGroupStatusFilter_ = jobGroupStatusFilter;
  setParameter(std::string("JobGroupStatusFilter"), jobGroupStatusFilter);
}

int ListJobGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListJobGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

