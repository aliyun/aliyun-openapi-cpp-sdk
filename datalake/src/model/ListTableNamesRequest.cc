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

#include <alibabacloud/datalake/model/ListTableNamesRequest.h>

using AlibabaCloud::DataLake::Model::ListTableNamesRequest;

ListTableNamesRequest::ListTableNamesRequest()
    : RoaServiceRequest("datalake", "2020-07-10") {
  setResourcePath("/api/metastore/catalogs/databases/tables/names"};
  setMethod(HttpRequest::Method::Get);
}

ListTableNamesRequest::~ListTableNamesRequest() {}

std::string ListTableNamesRequest::getTableType() const {
  return tableType_;
}

void ListTableNamesRequest::setTableType(const std::string &tableType) {
  tableType_ = tableType;
  setParameter(std::string("TableType"), tableType);
}

std::string ListTableNamesRequest::getCatalogId() const {
  return catalogId_;
}

void ListTableNamesRequest::setCatalogId(const std::string &catalogId) {
  catalogId_ = catalogId;
  setParameter(std::string("CatalogId"), catalogId);
}

std::string ListTableNamesRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListTableNamesRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string ListTableNamesRequest::getDatabaseName() const {
  return databaseName_;
}

void ListTableNamesRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

int ListTableNamesRequest::getPageSize() const {
  return pageSize_;
}

void ListTableNamesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTableNamesRequest::getTableNamePattern() const {
  return tableNamePattern_;
}

void ListTableNamesRequest::setTableNamePattern(const std::string &tableNamePattern) {
  tableNamePattern_ = tableNamePattern;
  setParameter(std::string("TableNamePattern"), tableNamePattern);
}

