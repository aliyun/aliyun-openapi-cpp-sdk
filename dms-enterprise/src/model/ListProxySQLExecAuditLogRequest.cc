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

#include <alibabacloud/dms-enterprise/model/ListProxySQLExecAuditLogRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListProxySQLExecAuditLogRequest;

ListProxySQLExecAuditLogRequest::ListProxySQLExecAuditLogRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListProxySQLExecAuditLog") {
  setMethod(HttpRequest::Method::Post);
}

ListProxySQLExecAuditLogRequest::~ListProxySQLExecAuditLogRequest() {}

std::string ListProxySQLExecAuditLogRequest::getSearchName() const {
  return searchName_;
}

void ListProxySQLExecAuditLogRequest::setSearchName(const std::string &searchName) {
  searchName_ = searchName;
  setParameter(std::string("SearchName"), searchName);
}

std::string ListProxySQLExecAuditLogRequest::getOpUserName() const {
  return opUserName_;
}

void ListProxySQLExecAuditLogRequest::setOpUserName(const std::string &opUserName) {
  opUserName_ = opUserName;
  setParameter(std::string("OpUserName"), opUserName);
}

long ListProxySQLExecAuditLogRequest::getStartTime() const {
  return startTime_;
}

void ListProxySQLExecAuditLogRequest::setStartTime(long startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), std::to_string(startTime));
}

int ListProxySQLExecAuditLogRequest::getPageNumber() const {
  return pageNumber_;
}

void ListProxySQLExecAuditLogRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListProxySQLExecAuditLogRequest::getTid() const {
  return tid_;
}

void ListProxySQLExecAuditLogRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListProxySQLExecAuditLogRequest::getPageSize() const {
  return pageSize_;
}

void ListProxySQLExecAuditLogRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListProxySQLExecAuditLogRequest::getSQLType() const {
  return sQLType_;
}

void ListProxySQLExecAuditLogRequest::setSQLType(const std::string &sQLType) {
  sQLType_ = sQLType;
  setParameter(std::string("SQLType"), sQLType);
}

long ListProxySQLExecAuditLogRequest::getEndTime() const {
  return endTime_;
}

void ListProxySQLExecAuditLogRequest::setEndTime(long endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), std::to_string(endTime));
}

std::string ListProxySQLExecAuditLogRequest::getExecState() const {
  return execState_;
}

void ListProxySQLExecAuditLogRequest::setExecState(const std::string &execState) {
  execState_ = execState;
  setParameter(std::string("ExecState"), execState);
}

