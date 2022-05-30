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

#include <alibabacloud/dataworks-public/model/ListHistoryTasksForResourceGroupRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListHistoryTasksForResourceGroupRequest;

ListHistoryTasksForResourceGroupRequest::ListHistoryTasksForResourceGroupRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListHistoryTasksForResourceGroup") {
  setMethod(HttpRequest::Method::Post);
}

ListHistoryTasksForResourceGroupRequest::~ListHistoryTasksForResourceGroupRequest() {}

std::string ListHistoryTasksForResourceGroupRequest::getProjectEnv() const {
  return projectEnv_;
}

void ListHistoryTasksForResourceGroupRequest::setProjectEnv(const std::string &projectEnv) {
  projectEnv_ = projectEnv;
  setBodyParameter(std::string("ProjectEnv"), projectEnv);
}

int ListHistoryTasksForResourceGroupRequest::getPageSize() const {
  return pageSize_;
}

void ListHistoryTasksForResourceGroupRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListHistoryTasksForResourceGroupRequest::getEndTime() const {
  return endTime_;
}

void ListHistoryTasksForResourceGroupRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setBodyParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ListHistoryTasksForResourceGroupRequest::getResourceGroupIdentifier() const {
  return resourceGroupIdentifier_;
}

void ListHistoryTasksForResourceGroupRequest::setResourceGroupIdentifier(const std::string &resourceGroupIdentifier) {
  resourceGroupIdentifier_ = resourceGroupIdentifier;
  setBodyParameter(std::string("ResourceGroupIdentifier"), resourceGroupIdentifier);
}

long ListHistoryTasksForResourceGroupRequest::getStartTime() const {
  return startTime_;
}

void ListHistoryTasksForResourceGroupRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setBodyParameter(std::string("StartTime"), std::to_string(startTime));
}

int ListHistoryTasksForResourceGroupRequest::getPageNumber() const {
  return pageNumber_;
}

void ListHistoryTasksForResourceGroupRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

