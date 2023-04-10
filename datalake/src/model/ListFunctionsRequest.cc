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

#include <alibabacloud/datalake/model/ListFunctionsRequest.h>

using AlibabaCloud::DataLake::Model::ListFunctionsRequest;

ListFunctionsRequest::ListFunctionsRequest()
    : RoaServiceRequest("datalake", "2020-07-10") {
  setResourcePath("/api/metastore/catalogs/databases/functions/list"};
  setMethod(HttpRequest::Method::Get);
}

ListFunctionsRequest::~ListFunctionsRequest() {}

std::string ListFunctionsRequest::getCatalogId() const {
  return catalogId_;
}

void ListFunctionsRequest::setCatalogId(const std::string &catalogId) {
  catalogId_ = catalogId;
  setParameter(std::string("CatalogId"), catalogId);
}

std::string ListFunctionsRequest::getFunctionNamePattern() const {
  return functionNamePattern_;
}

void ListFunctionsRequest::setFunctionNamePattern(const std::string &functionNamePattern) {
  functionNamePattern_ = functionNamePattern;
  setParameter(std::string("FunctionNamePattern"), functionNamePattern);
}

std::string ListFunctionsRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListFunctionsRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

std::string ListFunctionsRequest::getDatabaseName() const {
  return databaseName_;
}

void ListFunctionsRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

int ListFunctionsRequest::getPageSize() const {
  return pageSize_;
}

void ListFunctionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

