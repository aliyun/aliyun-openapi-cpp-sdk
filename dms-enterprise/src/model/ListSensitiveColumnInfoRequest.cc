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

#include <alibabacloud/dms-enterprise/model/ListSensitiveColumnInfoRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListSensitiveColumnInfoRequest;

ListSensitiveColumnInfoRequest::ListSensitiveColumnInfoRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListSensitiveColumnInfo") {
  setMethod(HttpRequest::Method::Post);
}

ListSensitiveColumnInfoRequest::~ListSensitiveColumnInfoRequest() {}

int ListSensitiveColumnInfoRequest::getPageNumber() const {
  return pageNumber_;
}

void ListSensitiveColumnInfoRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListSensitiveColumnInfoRequest::getTid() const {
  return tid_;
}

void ListSensitiveColumnInfoRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListSensitiveColumnInfoRequest::getPageSize() const {
  return pageSize_;
}

void ListSensitiveColumnInfoRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListSensitiveColumnInfoRequest::getTableName() const {
  return tableName_;
}

void ListSensitiveColumnInfoRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string ListSensitiveColumnInfoRequest::getSchemaName() const {
  return schemaName_;
}

void ListSensitiveColumnInfoRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string ListSensitiveColumnInfoRequest::getColumnName() const {
  return columnName_;
}

void ListSensitiveColumnInfoRequest::setColumnName(const std::string &columnName) {
  columnName_ = columnName;
  setParameter(std::string("ColumnName"), columnName);
}

int ListSensitiveColumnInfoRequest::getInstanceId() const {
  return instanceId_;
}

void ListSensitiveColumnInfoRequest::setInstanceId(int instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), std::to_string(instanceId));
}

