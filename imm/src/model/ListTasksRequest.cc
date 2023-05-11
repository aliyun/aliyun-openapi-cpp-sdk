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

#include <alibabacloud/imm/model/ListTasksRequest.h>

using AlibabaCloud::Imm::Model::ListTasksRequest;

ListTasksRequest::ListTasksRequest()
    : RpcServiceRequest("imm", "2020-09-30", "ListTasks") {
  setMethod(HttpRequest::Method::Post);
}

ListTasksRequest::~ListTasksRequest() {}

ListTasksRequest::StartTimeRange ListTasksRequest::getStartTimeRange() const {
  return startTimeRange_;
}

void ListTasksRequest::setStartTimeRange(const ListTasksRequest::StartTimeRange &startTimeRange) {
  startTimeRange_ = startTimeRange;
  setParameter(std::string("StartTimeRange") + ".Start", startTimeRange.start);
  setParameter(std::string("StartTimeRange") + ".End", startTimeRange.end);
}

std::string ListTasksRequest::getNextToken() const {
  return nextToken_;
}

void ListTasksRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTasksRequest::getOrder() const {
  return order_;
}

void ListTasksRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string ListTasksRequest::getProjectName() const {
  return projectName_;
}

void ListTasksRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::vector<ListTasksRequest::std::string> ListTasksRequest::getTaskTypes() const {
  return taskTypes_;
}

void ListTasksRequest::setTaskTypes(const std::vector<ListTasksRequest::std::string> &taskTypes) {
  taskTypes_ = taskTypes;
  for(int dep1 = 0; dep1 != taskTypes.size(); dep1++) {
    setParameter(std::string("TaskTypes") + "." + std::to_string(dep1 + 1), taskTypes[dep1]);
  }
}

ListTasksRequest::EndTimeRange ListTasksRequest::getEndTimeRange() const {
  return endTimeRange_;
}

void ListTasksRequest::setEndTimeRange(const ListTasksRequest::EndTimeRange &endTimeRange) {
  endTimeRange_ = endTimeRange;
  setParameter(std::string("EndTimeRange") + ".Start", endTimeRange.start);
  setParameter(std::string("EndTimeRange") + ".End", endTimeRange.end);
}

std::string ListTasksRequest::getSort() const {
  return sort_;
}

void ListTasksRequest::setSort(const std::string &sort) {
  sort_ = sort;
  setParameter(std::string("Sort"), sort);
}

bool ListTasksRequest::getRequestDefinition() const {
  return requestDefinition_;
}

void ListTasksRequest::setRequestDefinition(bool requestDefinition) {
  requestDefinition_ = requestDefinition;
  setParameter(std::string("RequestDefinition"), requestDefinition ? "true" : "false");
}

long ListTasksRequest::getMaxResults() const {
  return maxResults_;
}

void ListTasksRequest::setMaxResults(long maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListTasksRequest::getTagSelector() const {
  return tagSelector_;
}

void ListTasksRequest::setTagSelector(const std::string &tagSelector) {
  tagSelector_ = tagSelector;
  setParameter(std::string("TagSelector"), tagSelector);
}

std::string ListTasksRequest::getStatus() const {
  return status_;
}

void ListTasksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

