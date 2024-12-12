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

#include <alibabacloud/dms-enterprise/model/ListAuthorizedUsersForDatabaseRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListAuthorizedUsersForDatabaseRequest;

ListAuthorizedUsersForDatabaseRequest::ListAuthorizedUsersForDatabaseRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListAuthorizedUsersForDatabase") {
  setMethod(HttpRequest::Method::Post);
}

ListAuthorizedUsersForDatabaseRequest::~ListAuthorizedUsersForDatabaseRequest() {}

std::string ListAuthorizedUsersForDatabaseRequest::getSearchKey() const {
  return searchKey_;
}

void ListAuthorizedUsersForDatabaseRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string ListAuthorizedUsersForDatabaseRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAuthorizedUsersForDatabaseRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

long ListAuthorizedUsersForDatabaseRequest::getTid() const {
  return tid_;
}

void ListAuthorizedUsersForDatabaseRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ListAuthorizedUsersForDatabaseRequest::getPageSize() const {
  return pageSize_;
}

void ListAuthorizedUsersForDatabaseRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListAuthorizedUsersForDatabaseRequest::getDbId() const {
  return dbId_;
}

void ListAuthorizedUsersForDatabaseRequest::setDbId(const std::string &dbId) {
  dbId_ = dbId;
  setParameter(std::string("DbId"), dbId);
}

bool ListAuthorizedUsersForDatabaseRequest::getLogic() const {
  return logic_;
}

void ListAuthorizedUsersForDatabaseRequest::setLogic(bool logic) {
  logic_ = logic;
  setParameter(std::string("Logic"), logic ? "true" : "false");
}

