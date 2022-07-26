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

#include <alibabacloud/oos/model/ListTaskExecutionsRequest.h>

using AlibabaCloud::Oos::Model::ListTaskExecutionsRequest;

ListTaskExecutionsRequest::ListTaskExecutionsRequest()
    : RpcServiceRequest("oos", "2019-06-01", "ListTaskExecutions") {
  setMethod(HttpRequest::Method::Post);
}

ListTaskExecutionsRequest::~ListTaskExecutionsRequest() {}

std::string ListTaskExecutionsRequest::getTaskName() const {
  return taskName_;
}

void ListTaskExecutionsRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

bool ListTaskExecutionsRequest::getIncludeChildTaskExecution() const {
  return includeChildTaskExecution_;
}

void ListTaskExecutionsRequest::setIncludeChildTaskExecution(bool includeChildTaskExecution) {
  includeChildTaskExecution_ = includeChildTaskExecution;
  setParameter(std::string("IncludeChildTaskExecution"), includeChildTaskExecution ? "true" : "false");
}

std::string ListTaskExecutionsRequest::getExecutionId() const {
  return executionId_;
}

void ListTaskExecutionsRequest::setExecutionId(const std::string &executionId) {
  executionId_ = executionId;
  setParameter(std::string("ExecutionId"), executionId);
}

std::string ListTaskExecutionsRequest::getParentTaskExecutionId() const {
  return parentTaskExecutionId_;
}

void ListTaskExecutionsRequest::setParentTaskExecutionId(const std::string &parentTaskExecutionId) {
  parentTaskExecutionId_ = parentTaskExecutionId;
  setParameter(std::string("ParentTaskExecutionId"), parentTaskExecutionId);
}

std::string ListTaskExecutionsRequest::getRegionId() const {
  return regionId_;
}

void ListTaskExecutionsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

std::string ListTaskExecutionsRequest::getNextToken() const {
  return nextToken_;
}

void ListTaskExecutionsRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

std::string ListTaskExecutionsRequest::getEndDateBefore() const {
  return endDateBefore_;
}

void ListTaskExecutionsRequest::setEndDateBefore(const std::string &endDateBefore) {
  endDateBefore_ = endDateBefore;
  setParameter(std::string("EndDateBefore"), endDateBefore);
}

std::string ListTaskExecutionsRequest::getSortOrder() const {
  return sortOrder_;
}

void ListTaskExecutionsRequest::setSortOrder(const std::string &sortOrder) {
  sortOrder_ = sortOrder;
  setParameter(std::string("SortOrder"), sortOrder);
}

std::string ListTaskExecutionsRequest::getStartDateAfter() const {
  return startDateAfter_;
}

void ListTaskExecutionsRequest::setStartDateAfter(const std::string &startDateAfter) {
  startDateAfter_ = startDateAfter;
  setParameter(std::string("StartDateAfter"), startDateAfter);
}

std::string ListTaskExecutionsRequest::getStartDateBefore() const {
  return startDateBefore_;
}

void ListTaskExecutionsRequest::setStartDateBefore(const std::string &startDateBefore) {
  startDateBefore_ = startDateBefore;
  setParameter(std::string("StartDateBefore"), startDateBefore);
}

std::string ListTaskExecutionsRequest::getEndDateAfter() const {
  return endDateAfter_;
}

void ListTaskExecutionsRequest::setEndDateAfter(const std::string &endDateAfter) {
  endDateAfter_ = endDateAfter;
  setParameter(std::string("EndDateAfter"), endDateAfter);
}

int ListTaskExecutionsRequest::getMaxResults() const {
  return maxResults_;
}

void ListTaskExecutionsRequest::setMaxResults(int maxResults) {
  maxResults_ = maxResults;
  setParameter(std::string("MaxResults"), std::to_string(maxResults));
}

std::string ListTaskExecutionsRequest::getTaskExecutionId() const {
  return taskExecutionId_;
}

void ListTaskExecutionsRequest::setTaskExecutionId(const std::string &taskExecutionId) {
  taskExecutionId_ = taskExecutionId;
  setParameter(std::string("TaskExecutionId"), taskExecutionId);
}

std::string ListTaskExecutionsRequest::getSortField() const {
  return sortField_;
}

void ListTaskExecutionsRequest::setSortField(const std::string &sortField) {
  sortField_ = sortField;
  setParameter(std::string("SortField"), sortField);
}

std::string ListTaskExecutionsRequest::getTaskAction() const {
  return taskAction_;
}

void ListTaskExecutionsRequest::setTaskAction(const std::string &taskAction) {
  taskAction_ = taskAction;
  setParameter(std::string("TaskAction"), taskAction);
}

std::string ListTaskExecutionsRequest::getStatus() const {
  return status_;
}

void ListTaskExecutionsRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("Status"), status);
}

