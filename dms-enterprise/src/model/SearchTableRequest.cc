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

#include <alibabacloud/dms-enterprise/model/SearchTableRequest.h>

using AlibabaCloud::Dms_enterprise::Model::SearchTableRequest;

SearchTableRequest::SearchTableRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "SearchTable") {
  setMethod(HttpRequest::Method::Post);
}

SearchTableRequest::~SearchTableRequest() {}

bool SearchTableRequest::getReturnGuid() const {
  return returnGuid_;
}

void SearchTableRequest::setReturnGuid(bool returnGuid) {
  returnGuid_ = returnGuid;
  setParameter(std::string("ReturnGuid"), returnGuid ? "true" : "false");
}

std::string SearchTableRequest::getSearchKey() const {
  return searchKey_;
}

void SearchTableRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

std::string SearchTableRequest::getSearchRange() const {
  return searchRange_;
}

void SearchTableRequest::setSearchRange(const std::string &searchRange) {
  searchRange_ = searchRange;
  setParameter(std::string("SearchRange"), searchRange);
}

long SearchTableRequest::getTid() const {
  return tid_;
}

void SearchTableRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int SearchTableRequest::getPageNumber() const {
  return pageNumber_;
}

void SearchTableRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string SearchTableRequest::getSearchTarget() const {
  return searchTarget_;
}

void SearchTableRequest::setSearchTarget(const std::string &searchTarget) {
  searchTarget_ = searchTarget;
  setParameter(std::string("SearchTarget"), searchTarget);
}

int SearchTableRequest::getPageSize() const {
  return pageSize_;
}

void SearchTableRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string SearchTableRequest::getEnvType() const {
  return envType_;
}

void SearchTableRequest::setEnvType(const std::string &envType) {
  envType_ = envType;
  setParameter(std::string("EnvType"), envType);
}

std::string SearchTableRequest::getDbType() const {
  return dbType_;
}

void SearchTableRequest::setDbType(const std::string &dbType) {
  dbType_ = dbType;
  setParameter(std::string("DbType"), dbType);
}

