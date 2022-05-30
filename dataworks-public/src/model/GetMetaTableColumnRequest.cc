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

#include <alibabacloud/dataworks-public/model/GetMetaTableColumnRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetMetaTableColumnRequest;

GetMetaTableColumnRequest::GetMetaTableColumnRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetMetaTableColumn") {
  setMethod(HttpRequest::Method::Get);
}

GetMetaTableColumnRequest::~GetMetaTableColumnRequest() {}

std::string GetMetaTableColumnRequest::getDataSourceType() const {
  return dataSourceType_;
}

void GetMetaTableColumnRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string GetMetaTableColumnRequest::getClusterId() const {
  return clusterId_;
}

void GetMetaTableColumnRequest::setClusterId(const std::string &clusterId) {
  clusterId_ = clusterId;
  setParameter(std::string("ClusterId"), clusterId);
}

int GetMetaTableColumnRequest::getPageNum() const {
  return pageNum_;
}

void GetMetaTableColumnRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

std::string GetMetaTableColumnRequest::getTableGuid() const {
  return tableGuid_;
}

void GetMetaTableColumnRequest::setTableGuid(const std::string &tableGuid) {
  tableGuid_ = tableGuid;
  setParameter(std::string("TableGuid"), tableGuid);
}

std::string GetMetaTableColumnRequest::getDatabaseName() const {
  return databaseName_;
}

void GetMetaTableColumnRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

int GetMetaTableColumnRequest::getPageSize() const {
  return pageSize_;
}

void GetMetaTableColumnRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string GetMetaTableColumnRequest::getTableName() const {
  return tableName_;
}

void GetMetaTableColumnRequest::setTableName(const std::string &tableName) {
  tableName_ = tableName;
  setParameter(std::string("TableName"), tableName);
}

