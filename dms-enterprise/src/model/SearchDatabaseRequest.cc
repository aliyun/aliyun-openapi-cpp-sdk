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

#include <alibabacloud/dms-enterprise/model/SearchDatabaseRequest.h>

using AlibabaCloud::Dms_enterprise::Model::SearchDatabaseRequest;

SearchDatabaseRequest::SearchDatabaseRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "SearchDatabase") {
  setMethod(HttpRequest::Method::Post);
}

SearchDatabaseRequest::~SearchDatabaseRequest() {}

std::string SearchDatabaseRequest::getSearchKey() const {
  return searchKey_;
}

void SearchDatabaseRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string SearchDatabaseRequest::getSearchRange() const {
  return searchRange_;
}

void SearchDatabaseRequest::setSearchRange(const std::string &searchRange) {
  searchRange_ = searchRange;
  setParameter(std::string("SearchRange"), searchRange);
}

long SearchDatabaseRequest::getTid() const {
  return tid_;
}

void SearchDatabaseRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int SearchDatabaseRequest::getPageNumber() const {
  return pageNumber_;
}

void SearchDatabaseRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string SearchDatabaseRequest::getSearchTarget() const {
  return searchTarget_;
}

void SearchDatabaseRequest::setSearchTarget(const std::string &searchTarget) {
  searchTarget_ = searchTarget;
  setParameter(std::string("SearchTarget"), searchTarget);
}

int SearchDatabaseRequest::getPageSize() const {
  return pageSize_;
}

void SearchDatabaseRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchDatabaseRequest::getEnvType() const {
  return envType_;
}

void SearchDatabaseRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

std::string SearchDatabaseRequest::getDbType() const {
  return dbType_;
}

void SearchDatabaseRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setParameter(std::string("DbType"), dbType);
}

