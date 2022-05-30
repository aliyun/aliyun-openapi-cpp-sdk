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

#include <alibabacloud/dataworks-public/model/GetMetaColumnLineageRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaColumnLineageRequest;

GetMetaColumnLineageRequest::GetMetaColumnLineageRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaColumnLineage") {
  setMethod(HttpRequest::Method::Post);
}

GetMetaColumnLineageRequest::~GetMetaColumnLineageRequest() {}

std::string GetMetaColumnLineageRequest::getDataSourceType() const {
  return dataSourceType_;
}

void GetMetaColumnLineageRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string GetMetaColumnLineageRequest::getClusterId() const {
  return clusterId_;
}

void GetMetaColumnLineageRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int GetMetaColumnLineageRequest::getPageNum() const {
  return pageNum_;
}

void GetMetaColumnLineageRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string GetMetaColumnLineageRequest::getColumnName() const {
  return columnName_;
}

void GetMetaColumnLineageRequest::setColumnName(const std::string &columnName) {
  columnName_ = columnName;
  setParameter(std::string("ColumnName"), columnName);
}

std::string GetMetaColumnLineageRequest::getColumnGuid() const {
  return columnGuid_;
}

void GetMetaColumnLineageRequest::setColumnGuid(const std::string &columnGuid) {
  columnGuid_ = columnGuid;
  setParameter(std::string("ColumnGuid"), columnGuid);
}

std::string GetMetaColumnLineageRequest::getDatabaseName() const {
  return databaseName_;
}

void GetMetaColumnLineageRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

int GetMetaColumnLineageRequest::getPageSize() const {
  return pageSize_;
}

void GetMetaColumnLineageRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetMetaColumnLineageRequest::getTableName() const {
  return tableName_;
}

void GetMetaColumnLineageRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

std::string GetMetaColumnLineageRequest::getDirection() const {
  return direction_;
}

void GetMetaColumnLineageRequest::setDirection(const std::string &direction) {
  direction_ = direction;
  setParameter(std::string("Direction"), direction);
}

