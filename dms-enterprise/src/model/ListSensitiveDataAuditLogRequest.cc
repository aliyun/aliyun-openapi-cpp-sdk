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

#include <alibabacloud/dms-enterprise/model/ListSensitiveDataAuditLogRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListSensitiveDataAuditLogRequest;

ListSensitiveDataAuditLogRequest::ListSensitiveDataAuditLogRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListSensitiveDataAuditLog") {
  setMethod(HttpRequest::Method::Post);
}

ListSensitiveDataAuditLogRequest::~ListSensitiveDataAuditLogRequest() {}

std::string ListSensitiveDataAuditLogRequest::getOpUserName() const {
  return opUserName_;
}

void ListSensitiveDataAuditLogRequest::setOpUserName(const std::string &opUserName) {
  opUserName_ = opUserName;
  setParameter(std::string("OpUserName"), opUserName);
}

std::string ListSensitiveDataAuditLogRequest::getStartTime() const {
  return startTime_;
}

void ListSensitiveDataAuditLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int ListSensitiveDataAuditLogRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSensitiveDataAuditLogRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListSensitiveDataAuditLogRequest::getTid() const {
  return tid_;
}

void ListSensitiveDataAuditLogRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListSensitiveDataAuditLogRequest::getPageSize() const {
  return pageSize_;
}

void ListSensitiveDataAuditLogRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSensitiveDataAuditLogRequest::getModuleName() const {
  return moduleName_;
}

void ListSensitiveDataAuditLogRequest::setModuleName(const std::string &moduleName) {
  moduleName_ = moduleName;
  setParameter(std::string("ModuleName"), moduleName);
}

std::string ListSensitiveDataAuditLogRequest::getTableName() const {
  return tableName_;
}

void ListSensitiveDataAuditLogRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string ListSensitiveDataAuditLogRequest::getEndTime() const {
  return endTime_;
}

void ListSensitiveDataAuditLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

std::string ListSensitiveDataAuditLogRequest::getColumnName() const {
  return columnName_;
}

void ListSensitiveDataAuditLogRequest::setColumnName(const std::string &columnName) {
  columnName_ = columnName;
  setParameter(std::string("ColumnName"), columnName);
}

std::string ListSensitiveDataAuditLogRequest::getDbName() const {
  return dbName_;
}

void ListSensitiveDataAuditLogRequest::setDbName(const std::string &dbName) {
  dbName_ = dbName;
  setParameter(std::string("DbName"), dbName);
}

