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

#include <alibabacloud/dms-enterprise/model/ListAuthorizedDatabasesForUserRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListAuthorizedDatabasesForUserRequest;

ListAuthorizedDatabasesForUserRequest::ListAuthorizedDatabasesForUserRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListAuthorizedDatabasesForUser") {
  setMethod(HttpRequest::Method::Post);
}

ListAuthorizedDatabasesForUserRequest::~ListAuthorizedDatabasesForUserRequest() {}

std::string ListAuthorizedDatabasesForUserRequest::getSearchKey() const {
  return searchKey_;
}

void ListAuthorizedDatabasesForUserRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string ListAuthorizedDatabasesForUserRequest::getUserId() const {
  return userId_;
}

void ListAuthorizedDatabasesForUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string ListAuthorizedDatabasesForUserRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAuthorizedDatabasesForUserRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

long ListAuthorizedDatabasesForUserRequest::getTid() const {
  return tid_;
}

void ListAuthorizedDatabasesForUserRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ListAuthorizedDatabasesForUserRequest::getEnvType() const {
  return envType_;
}

void ListAuthorizedDatabasesForUserRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

std::string ListAuthorizedDatabasesForUserRequest::getPageSize() const {
  return pageSize_;
}

void ListAuthorizedDatabasesForUserRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListAuthorizedDatabasesForUserRequest::getDbType() const {
  return dbType_;
}

void ListAuthorizedDatabasesForUserRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setParameter(std::string("DbType"), dbType);
}

bool ListAuthorizedDatabasesForUserRequest::getLogic() const {
  return logic_;
}

void ListAuthorizedDatabasesForUserRequest::setLogic(bool logic) {
  logic_ = logic;
  setParameter(std::string("Logic"), logic ? "true" : "false");
}

