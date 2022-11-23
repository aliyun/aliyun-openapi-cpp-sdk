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

#include <alibabacloud/dms-enterprise/model/ListUserPermissionsRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListUserPermissionsRequest;

ListUserPermissionsRequest::ListUserPermissionsRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListUserPermissions") {
  setMethod(HttpRequest::Method::Post);
}

ListUserPermissionsRequest::~ListUserPermissionsRequest() {}

std::string ListUserPermissionsRequest::getSearchKey() const {
  return searchKey_;
}

void ListUserPermissionsRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string ListUserPermissionsRequest::getUserId() const {
  return userId_;
}

void ListUserPermissionsRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

long ListUserPermissionsRequest::getTid() const {
  return tid_;
}

void ListUserPermissionsRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListUserPermissionsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListUserPermissionsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListUserPermissionsRequest::getEnvType() const {
  return envType_;
}

void ListUserPermissionsRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

int ListUserPermissionsRequest::getPageSize() const {
  return pageSize_;
}

void ListUserPermissionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListUserPermissionsRequest::getPermType() const {
  return permType_;
}

void ListUserPermissionsRequest::setPermType(const std::string &permType) {
  permType_ = permType;
  setParameter(std::string("PermType"), permType);
}

std::string ListUserPermissionsRequest::getDatabaseName() const {
  return databaseName_;
}

void ListUserPermissionsRequest::setDatabaseName(const std::string &databaseName) {
  databaseName_ = databaseName;
  setParameter(std::string("DatabaseName"), databaseName);
}

std::string ListUserPermissionsRequest::getDbType() const {
  return dbType_;
}

void ListUserPermissionsRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setParameter(std::string("DbType"), dbType);
}

bool ListUserPermissionsRequest::getLogic() const {
  return logic_;
}

void ListUserPermissionsRequest::setLogic(bool logic) {
  logic_ = logic;
  setParameter(std::string("Logic"), logic ? "true" : "false");
}

