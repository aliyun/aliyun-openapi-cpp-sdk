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

#include <alibabacloud/opensearch/model/ListFunctionTasksRequest.h>

using AlibabaCloud::OpenSearch::Model::ListFunctionTasksRequest;

ListFunctionTasksRequest::ListFunctionTasksRequest()
    : RoaServiceRequest("opensearch", "2017-12-25") {
  setResourcePath("/v4/openapi/app-groups/[appGroupIdentity]/functions/[functionName]/instances/[instanceName]/tasks"};
  setMethod(HttpRequest::Method::Get);
}

ListFunctionTasksRequest::~ListFunctionTasksRequest() {}

std::string ListFunctionTasksRequest::getInstanceName() const {
  return instanceName_;
}

void ListFunctionTasksRequest::setInstanceName(const std::string &instanceName) {
  instanceName_ = instanceName;
  setParameter(std::string("instanceName"), instanceName);
}

std::string ListFunctionTasksRequest::getFunctionName() const {
  return functionName_;
}

void ListFunctionTasksRequest::setFunctionName(const std::string &functionName) {
  functionName_ = functionName;
  setParameter(std::string("functionName"), functionName);
}

int ListFunctionTasksRequest::getPageSize() const {
  return pageSize_;
}

void ListFunctionTasksRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("pageSize"), std::to_string(pageSize));
}

long ListFunctionTasksRequest::getEndTime() const {
  return endTime_;
}

void ListFunctionTasksRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("endTime"), std::to_string(endTime));
}

long ListFunctionTasksRequest::getStartTime() const {
  return startTime_;
}

void ListFunctionTasksRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("startTime"), std::to_string(startTime));
}

std::string ListFunctionTasksRequest::getAppGroupIdentity() const {
  return appGroupIdentity_;
}

void ListFunctionTasksRequest::setAppGroupIdentity(const std::string &appGroupIdentity) {
  appGroupIdentity_ = appGroupIdentity;
  setParameter(std::string("appGroupIdentity"), appGroupIdentity);
}

int ListFunctionTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void ListFunctionTasksRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("pageNumber"), std::to_string(pageNumber));
}

std::string ListFunctionTasksRequest::getStatus() const {
  return status_;
}

void ListFunctionTasksRequest::setStatus(const std::string &status) {
  status_ = status;
  setParameter(std::string("status"), status);
}

