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

#include <alibabacloud/dms-enterprise/model/ListDatabaseUserPermssionsRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListDatabaseUserPermssionsRequest;

ListDatabaseUserPermssionsRequest::ListDatabaseUserPermssionsRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListDatabaseUserPermssions") {
  setMethod(HttpRequest::Method::Post);
}

ListDatabaseUserPermssionsRequest::~ListDatabaseUserPermssionsRequest() {}

long ListDatabaseUserPermssionsRequest::getTid() const {
  return tid_;
}

void ListDatabaseUserPermssionsRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListDatabaseUserPermssionsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDatabaseUserPermssionsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListDatabaseUserPermssionsRequest::getPageSize() const {
  return pageSize_;
}

void ListDatabaseUserPermssionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListDatabaseUserPermssionsRequest::getPermType() const {
  return permType_;
}

void ListDatabaseUserPermssionsRequest::setPermType(const std::string &permType) {
  permType_ = permType;
  setParameter(std::string("PermType"), permType);
}

std::string ListDatabaseUserPermssionsRequest::getDbId() const {
  return dbId_;
}

void ListDatabaseUserPermssionsRequest::setDbId(const std::string &dbId) {
  dbId_ = dbId;
  setParameter(std::string("DbId"), dbId);
}

bool ListDatabaseUserPermssionsRequest::getLogic() const {
  return logic_;
}

void ListDatabaseUserPermssionsRequest::setLogic(bool logic) {
  logic_ = logic;
  setParameter(std::string("Logic"), logic ? "true" : "false");
}

std::string ListDatabaseUserPermssionsRequest::getUserName() const {
  return userName_;
}

void ListDatabaseUserPermssionsRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setParameter(std::string("UserName"), userName);
}

