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

#include <alibabacloud/datalake/model/ListDatabasesRequest.h>

using AlibabaCloud::DataLake::Model::ListDatabasesRequest;

ListDatabasesRequest::ListDatabasesRequest()
    : RoaServiceRequest("datalake", "2020-07-10") {
  setResourcePath("/api/metastore/catalogs/databases/list"};
  setMethod(HttpRequest::Method::Get);
}

ListDatabasesRequest::~ListDatabasesRequest() {}

std::string ListDatabasesRequest::getCatalogId() const {
  return catalogId_;
}

void ListDatabasesRequest::setCatalogId(const std::string &catalogId) {
  catalogId_ = catalogId;
  setParameter(std::string("CatalogId"), catalogId);
}

std::string ListDatabasesRequest::getNextPageToken() const {
  return nextPageToken_;
}

void ListDatabasesRequest::setNextPageToken(const std::string &nextPageToken) {
  nextPageToken_ = nextPageToken;
  setParameter(std::string("NextPageToken"), nextPageToken);
}

int ListDatabasesRequest::getPageSize() const {
  return pageSize_;
}

void ListDatabasesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDatabasesRequest::getNamePattern() const {
  return namePattern_;
}

void ListDatabasesRequest::setNamePattern(const std::string &namePattern) {
  namePattern_ = namePattern;
  setParameter(std::string("NamePattern"), namePattern);
}

