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

#include <alibabacloud/dms-enterprise/model/ListAuthorizedInstancesForUserRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListAuthorizedInstancesForUserRequest;

ListAuthorizedInstancesForUserRequest::ListAuthorizedInstancesForUserRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListAuthorizedInstancesForUser") {
  setMethod(HttpRequest::Method::Post);
}

ListAuthorizedInstancesForUserRequest::~ListAuthorizedInstancesForUserRequest() {}

std::string ListAuthorizedInstancesForUserRequest::getSearchKey() const {
  return searchKey_;
}

void ListAuthorizedInstancesForUserRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string ListAuthorizedInstancesForUserRequest::getUserId() const {
  return userId_;
}

void ListAuthorizedInstancesForUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

std::string ListAuthorizedInstancesForUserRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAuthorizedInstancesForUserRequest::setPageNumber(const std::string &pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), pageNumber);
}

long ListAuthorizedInstancesForUserRequest::getTid() const {
  return tid_;
}

void ListAuthorizedInstancesForUserRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

std::string ListAuthorizedInstancesForUserRequest::getEnvType() const {
  return envType_;
}

void ListAuthorizedInstancesForUserRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

std::string ListAuthorizedInstancesForUserRequest::getPageSize() const {
  return pageSize_;
}

void ListAuthorizedInstancesForUserRequest::setPageSize(const std::string &pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), pageSize);
}

std::string ListAuthorizedInstancesForUserRequest::getDbType() const {
  return dbType_;
}

void ListAuthorizedInstancesForUserRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setParameter(std::string("DbType"), dbType);
}

