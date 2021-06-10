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

#include <alibabacloud/dms-enterprise/model/ListLogicTablesRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListLogicTablesRequest;

ListLogicTablesRequest::ListLogicTablesRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListLogicTables") {
  setMethod(HttpRequest::Method::Post);
}

ListLogicTablesRequest::~ListLogicTablesRequest() {}

std::string ListLogicTablesRequest::getSearchName() const {
  return searchName_;
}

void ListLogicTablesRequest::setSearchName(const std::string &searchName) {
  searchName_ = searchName;
  setParameter(std::string("SearchName"), searchName);
}

bool ListLogicTablesRequest::getReturnGuid() const {
  return returnGuid_;
}

void ListLogicTablesRequest::setReturnGuid(bool returnGuid) {
  returnGuid_ = returnGuid;
  setParameter(std::string("ReturnGuid"), returnGuid ? "true" : "false");
}

long ListLogicTablesRequest::getTid() const {
  return tid_;
}

void ListLogicTablesRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListLogicTablesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListLogicTablesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListLogicTablesRequest::getPageSize() const {
  return pageSize_;
}

void ListLogicTablesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListLogicTablesRequest::getDatabaseId() const {
  return databaseId_;
}

void ListLogicTablesRequest::setDatabaseId(const std::string &databaseId) {
  databaseId_ = databaseId;
  setParameter(std::string("DatabaseId"), databaseId);
}

