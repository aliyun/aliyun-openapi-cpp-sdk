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

#include <alibabacloud/datalake/model/ListFunctionNamesRequest.h>

using AlibabaCloud::DataLake::Model::ListFunctionNamesRequest;

ListFunctionNamesRequest::ListFunctionNamesRequest()
    : RoaServiceRequest("datalake", "2020-07-10") {
  setResourcePath("/api/metastore/catalogs/databases/functions/names"};
  setMethod(HttpRequest::Method::Get);
}

ListFunctionNamesRequest::~ListFunctionNamesRequest() {}

std::string ListFunctionNamesRequest::getCatalogId() const {
  return catalogId_;
}

void ListFunctionNamesRequest::setCatalogId(const std::string &catalogId) {
  catalogId_ = catalogId;
  setParameter(std::string("CatalogId"), catalogId);
}

std::string ListFunctionNamesRequest::getFunctionNamePattern() const {
  return functionNamePattern_;
}

void ListFunctionNamesRequest::setFunctionNamePattern(const std::string &functionNamePattern) {
  functionNamePattern_ = functionNamePattern;
  setParameter(std::string("FunctionNamePattern"), functionNamePattern);
}

std::string ListFunctionNamesRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListFunctionNamesRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string ListFunctionNamesRequest::getDatabaseName() const {
  return databaseName_;
}

void ListFunctionNamesRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

int ListFunctionNamesRequest::getPageSize() const {
  return pageSize_;
}

void ListFunctionNamesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

