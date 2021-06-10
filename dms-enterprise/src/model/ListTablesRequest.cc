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

#include <alibabacloud/dms-enterprise/model/ListTablesRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListTablesRequest;

ListTablesRequest::ListTablesRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListTables") {
  setMethod(HttpRequest::Method::Post);
}

ListTablesRequest::~ListTablesRequest() {}

std::string ListTablesRequest::getSearchName() const {
  return searchName_;
}

void ListTablesRequest::setSearchName(const std::string &searchName) {
  searchName_ = searchName;
  setParameter(std::string("SearchName"), searchName);
}

bool ListTablesRequest::getReturnGuid() const {
  return returnGuid_;
}

void ListTablesRequest::setReturnGuid(bool returnGuid) {
  returnGuid_ = returnGuid;
  setParameter(std::string("ReturnGuid"), returnGuid ? "true" : "false");
}

long ListTablesRequest::getTid() const {
  return tid_;
}

void ListTablesRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListTablesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListTablesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListTablesRequest::getPageSize() const {
  return pageSize_;
}

void ListTablesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListTablesRequest::getDatabaseId() const {
  return databaseId_;
}

void ListTablesRequest::setDatabaseId(const std::string &databaseId) {
  databaseId_ = databaseId;
  setParameter(std::string("DatabaseId"), databaseId);
}

