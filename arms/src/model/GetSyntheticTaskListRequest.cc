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

#include <alibabacloud/arms/model/GetSyntheticTaskListRequest.h>

using AlibabaCloud::ARMS::Model::GetSyntheticTaskListRequest;

GetSyntheticTaskListRequest::GetSyntheticTaskListRequest()
    : RpcServiceRequest("arms", "2019-08-08", "GetSyntheticTaskList") {
  setMethod(HttpRequest::Method::Post);
}

GetSyntheticTaskListRequest::~GetSyntheticTaskListRequest() {}

std::string GetSyntheticTaskListRequest::getTaskType() const {
  return taskType_;
}

void GetSyntheticTaskListRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string GetSyntheticTaskListRequest::getTaskName() const {
  return taskName_;
}

void GetSyntheticTaskListRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

long GetSyntheticTaskListRequest::getPageNum() const {
  return pageNum_;
}

void GetSyntheticTaskListRequest::setPageNum(long pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string GetSyntheticTaskListRequest::getUrl() const {
  return url_;
}

void GetSyntheticTaskListRequest::setUrl(const std::string &url) {
  url_ = url;
  setParameter(std::string("Url"), url);
}

std::string GetSyntheticTaskListRequest::getTaskStatus() const {
  return taskStatus_;
}

void GetSyntheticTaskListRequest::setTaskStatus(const std::string &taskStatus) {
  taskStatus_ = taskStatus;
  setParameter(std::string("TaskStatus"), taskStatus);
}

std::string GetSyntheticTaskListRequest::getRegionId() const {
  return regionId_;
}

void GetSyntheticTaskListRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetSyntheticTaskListRequest::getPageSize() const {
  return pageSize_;
}

void GetSyntheticTaskListRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetSyntheticTaskListRequest::getOrder() const {
  return order_;
}

void GetSyntheticTaskListRequest::setOrder(const std::string &order) {
  order_ = order;
  setParameter(std::string("Order"), order);
}

std::string GetSyntheticTaskListRequest::getDirection() const {
  return direction_;
}

void GetSyntheticTaskListRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

