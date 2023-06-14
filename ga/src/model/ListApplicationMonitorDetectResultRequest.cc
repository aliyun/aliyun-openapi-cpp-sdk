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

#include <alibabacloud/ga/model/ListApplicationMonitorDetectResultRequest.h>

using AlibabaCloud::Ga::Model::ListApplicationMonitorDetectResultRequest;

ListApplicationMonitorDetectResultRequest::ListApplicationMonitorDetectResultRequest()
    : RpcServiceRequest("ga", "2019-11-20", "ListApplicationMonitorDetectResult") {
  setMethod(HttpRequest::Method::Post);
}

ListApplicationMonitorDetectResultRequest::~ListApplicationMonitorDetectResultRequest() {}

long ListApplicationMonitorDetectResultRequest::getEndTime() const {
  return endTime_;
}

void ListApplicationMonitorDetectResultRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

long ListApplicationMonitorDetectResultRequest::getBeginTime() const {
  return beginTime_;
}

void ListApplicationMonitorDetectResultRequest::setBeginTime(long beginTime) {
  beginTime_ = beginTime;
  setParameter(std::string("BeginTime"), std::to_string(beginTime));
}

int ListApplicationMonitorDetectResultRequest::getPageNumber() const {
  return pageNumber_;
}

void ListApplicationMonitorDetectResultRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListApplicationMonitorDetectResultRequest::getRegionId() const {
  return regionId_;
}

void ListApplicationMonitorDetectResultRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

int ListApplicationMonitorDetectResultRequest::getPageSize() const {
  return pageSize_;
}

void ListApplicationMonitorDetectResultRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListApplicationMonitorDetectResultRequest::getTaskId() const {
  return taskId_;
}

void ListApplicationMonitorDetectResultRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

