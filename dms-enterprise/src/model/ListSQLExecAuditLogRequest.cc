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

#include <alibabacloud/dms-enterprise/model/ListSQLExecAuditLogRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListSQLExecAuditLogRequest;

ListSQLExecAuditLogRequest::ListSQLExecAuditLogRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListSQLExecAuditLog") {
  setMethod(HttpRequest::Method::Post);
}

ListSQLExecAuditLogRequest::~ListSQLExecAuditLogRequest() {}

std::string ListSQLExecAuditLogRequest::getSearchName() const {
  return searchName_;
}

void ListSQLExecAuditLogRequest::setSearchName(const std::string &searchName) {
  searchName_ = searchName;
  setParameter(std::string("SearchName"), searchName);
}

std::string ListSQLExecAuditLogRequest::getOpUserName() const {
  return opUserName_;
}

void ListSQLExecAuditLogRequest::setOpUserName(const std::string &opUserName) {
  opUserName_ = opUserName;
  setParameter(std::string("OpUserName"), opUserName);
}

std::string ListSQLExecAuditLogRequest::getStartTime() const {
  return startTime_;
}

void ListSQLExecAuditLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int ListSQLExecAuditLogRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSQLExecAuditLogRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListSQLExecAuditLogRequest::getTid() const {
  return tid_;
}

void ListSQLExecAuditLogRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListSQLExecAuditLogRequest::getPageSize() const {
  return pageSize_;
}

void ListSQLExecAuditLogRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSQLExecAuditLogRequest::getSqlType() const {
  return sqlType_;
}

void ListSQLExecAuditLogRequest::setSqlType(const std::string &sqlType) {
  sqlType_ = sqlType;
  setParameter(std::string("SqlType"), sqlType);
}

std::string ListSQLExecAuditLogRequest::getEndTime() const {
  return endTime_;
}

void ListSQLExecAuditLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ListSQLExecAuditLogRequest::getExecState() const {
  return execState_;
}

void ListSQLExecAuditLogRequest::setExecState(const std::string &execState) {
  execState_ = execState;
  setParameter(std::string("ExecState"), execState);
}

