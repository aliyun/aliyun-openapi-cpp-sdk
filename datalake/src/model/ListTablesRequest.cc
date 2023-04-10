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

#include <alibabacloud/datalake/model/ListTablesRequest.h>

using AlibabaCloud::DataLake::Model::ListTablesRequest;

ListTablesRequest::ListTablesRequest()
    : RoaServiceRequest("datalake", "2020-07-10") {
  setResourcePath("/api/metastore/databases/tables/list"};
  setMethod(HttpRequest::Method::Get);
}

ListTablesRequest::~ListTablesRequest() {}

std::string ListTablesRequest::getTableType() const {
  return tableType_;
}

void ListTablesRequest::setTableType(const std::string &tableType) {
  tableType_ = tableType;
  setParameter(std::string("TableType"), tableType);
}

std::string ListTablesRequest::getCatalogId() const {
  return catalogId_;
}

void ListTablesRequest::setCatalogId(const std::string &catalogId) {
  catalogId_ = catalogId;
  setParameter(std::string("CatalogId"), catalogId);
}

std::string ListTablesRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListTablesRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string ListTablesRequest::getDatabaseName() const {
  return databaseName_;
}

void ListTablesRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

int ListTablesRequest::getPageSize() const {
  return pageSize_;
}

void ListTablesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTablesRequest::getTableNamePattern() const {
  return tableNamePattern_;
}

void ListTablesRequest::setTableNamePattern(const std::string &tableNamePattern) {
  tableNamePattern_ = tableNamePattern;
  setParameter(std::string("TableNamePattern"), tableNamePattern);
}

