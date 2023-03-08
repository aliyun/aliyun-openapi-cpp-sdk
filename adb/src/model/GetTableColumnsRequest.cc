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

#include <alibabacloud/adb/model/GetTableColumnsRequest.h>

using AlibabaCloud::Adb::Model::GetTableColumnsRequest;

GetTableColumnsRequest::GetTableColumnsRequest()
    : RpcServiceRequest("adb", "2021-12-01", "GetTableColumns") {
  setMethod(HttpRequest::Method::Post);
}

GetTableColumnsRequest::~GetTableColumnsRequest() {}

std::string GetTableColumnsRequest::getSchemaName() const {
  return schemaName_;
}

void GetTableColumnsRequest::setSchemaName(const std::string &schemaName) {
  schemaName_ = schemaName;
  setParameter(std::string("SchemaName"), schemaName);
}

std::string GetTableColumnsRequest::getDBClusterId() const {
  return dBClusterId_;
}

void GetTableColumnsRequest::setDBClusterId(const std::string &dBClusterId) {
  dBClusterId_ = dBClusterId;
  setParameter(std::string("DBClusterId"), dBClusterId);
}

std::string GetTableColumnsRequest::getColumnName() const {
  return columnName_;
}

void GetTableColumnsRequest::setColumnName(const std::string &columnName) {
  columnName_ = columnName;
  setParameter(std::string("ColumnName"), columnName);
}

long GetTableColumnsRequest::getPageNumber() const {
  return pageNumber_;
}

void GetTableColumnsRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string GetTableColumnsRequest::getRegionId() const {
  return regionId_;
}

void GetTableColumnsRequest::setRegionId(const std::string &regionId) {
  regionId_ = regionId;
  setParameter(std::string("RegionId"), regionId);
}

long GetTableColumnsRequest::getPageSize() const {
  return pageSize_;
}

void GetTableColumnsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetTableColumnsRequest::getTableName() const {
  return tableName_;
}

void GetTableColumnsRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

