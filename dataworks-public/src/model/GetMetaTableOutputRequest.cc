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

#include <alibabacloud/dataworks-public/model/GetMetaTableOutputRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaTableOutputRequest;

GetMetaTableOutputRequest::GetMetaTableOutputRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaTableOutput") {
  setMethod(HttpRequest::Method::Post);
}

GetMetaTableOutputRequest::~GetMetaTableOutputRequest() {}

std::string GetMetaTableOutputRequest::getStartDate() const {
  return startDate_;
}

void GetMetaTableOutputRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setParameter(std::string("StartDate"), startDate);
}

int GetMetaTableOutputRequest::getPageNumber() const {
  return pageNumber_;
}

void GetMetaTableOutputRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetMetaTableOutputRequest::getEndDate() const {
  return endDate_;
}

void GetMetaTableOutputRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setParameter(std::string("EndDate"), endDate);
}

std::string GetMetaTableOutputRequest::getTableGuid() const {
  return tableGuid_;
}

void GetMetaTableOutputRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

int GetMetaTableOutputRequest::getPageSize() const {
  return pageSize_;
}

void GetMetaTableOutputRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetMetaTableOutputRequest::getTaskId() const {
  return taskId_;
}

void GetMetaTableOutputRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

