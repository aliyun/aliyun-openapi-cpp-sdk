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

#include <alibabacloud/dataworks-public/model/GetMetaTableChangeLogRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaTableChangeLogRequest;

GetMetaTableChangeLogRequest::GetMetaTableChangeLogRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaTableChangeLog") {
  setMethod(HttpRequest::Method::Post);
}

GetMetaTableChangeLogRequest::~GetMetaTableChangeLogRequest() {}

std::string GetMetaTableChangeLogRequest::getStartDate() const {
  return startDate_;
}

void GetMetaTableChangeLogRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setBodyParameter(std::string("StartDate"), startDate);
}

int GetMetaTableChangeLogRequest::getPageNumber() const {
  return pageNumber_;
}

void GetMetaTableChangeLogRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetMetaTableChangeLogRequest::getEndDate() const {
  return endDate_;
}

void GetMetaTableChangeLogRequest::setEndDate(const std::string &endDate) {
  endDate_ = endDate;
  setBodyParameter(std::string("EndDate"), endDate);
}

std::string GetMetaTableChangeLogRequest::getTableGuid() const {
  return tableGuid_;
}

void GetMetaTableChangeLogRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setBodyParameter(std::string("TableGuid"), tableGuid);
}

std::string GetMetaTableChangeLogRequest::getChangeType() const {
  return changeType_;
}

void GetMetaTableChangeLogRequest::setChangeType(const std::string &changeType) {
  changeType_ = changeType;
  setBodyParameter(std::string("ChangeType"), changeType);
}

int GetMetaTableChangeLogRequest::getPageSize() const {
  return pageSize_;
}

void GetMetaTableChangeLogRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetMetaTableChangeLogRequest::getObjectType() const {
  return objectType_;
}

void GetMetaTableChangeLogRequest::setObjectType(const std::string &objectType) {
  objectType_ = objectType;
  setBodyParameter(std::string("ObjectType"), objectType);
}

