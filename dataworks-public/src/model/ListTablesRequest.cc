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

#include <alibabacloud/dataworks-public/model/ListTablesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListTablesRequest;

ListTablesRequest::ListTablesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListTables") {
  setMethod(HttpRequest::Method::Post);
}

ListTablesRequest::~ListTablesRequest() {}

std::string ListTablesRequest::getDataSourceType() const {
  return dataSourceType_;
}

void ListTablesRequest::setDataSourceType(const std::string &dataSourceType) {
  dataSourceType_ = dataSourceType;
  setParameter(std::string("DataSourceType"), dataSourceType);
}

std::string ListTablesRequest::getNextToken() const {
  return nextToken_;
}

void ListTablesRequest::setNextToken(const std::string &nextToken) {
  nextToken_ = nextToken;
  setParameter(std::string("NextToken"), nextToken);
}

int ListTablesRequest::getPageSize() const {
  return pageSize_;
}

void ListTablesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

