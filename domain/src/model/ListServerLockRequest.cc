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

#include <alibabacloud/domain/model/ListServerLockRequest.h>

using AlibabaCloud::Domain::Model::ListServerLockRequest;

ListServerLockRequest::ListServerLockRequest()
    : RpcServiceRequest("domain", "2018-01-29", "ListServerLock") {
  setMethod(HttpRequest::Method::Post);
}

ListServerLockRequest::~ListServerLockRequest() {}

std::string ListServerLockRequest::getLockProductId() const {
  return lockProductId_;
}

void ListServerLockRequest::setLockProductId(const std::string &lockProductId) {
  lockProductId_ = lockProductId;
  setParameter(std::string("LockProductId"), lockProductId);
}

long ListServerLockRequest::getEndExpireDate() const {
  return endExpireDate_;
}

void ListServerLockRequest::setEndExpireDate(long endExpireDate) {
  endExpireDate_ = endExpireDate;
  setParameter(std::string("EndExpireDate"), std::to_string(endExpireDate));
}

int ListServerLockRequest::getPageNum() const {
  return pageNum_;
}

void ListServerLockRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

long ListServerLockRequest::getBeginStartDate() const {
  return beginStartDate_;
}

void ListServerLockRequest::setBeginStartDate(long beginStartDate) {
  beginStartDate_ = beginStartDate;
  setParameter(std::string("BeginStartDate"), std::to_string(beginStartDate));
}

std::string ListServerLockRequest::getOrderByType() const {
  return orderByType_;
}

void ListServerLockRequest::setOrderByType(const std::string &orderByType) {
  orderByType_ = orderByType;
  setParameter(std::string("OrderByType"), orderByType);
}

int ListServerLockRequest::getServerLockStatus() const {
  return serverLockStatus_;
}

void ListServerLockRequest::setServerLockStatus(int serverLockStatus) {
  serverLockStatus_ = serverLockStatus;
  setParameter(std::string("ServerLockStatus"), std::to_string(serverLockStatus));
}

long ListServerLockRequest::getStartExpireDate() const {
  return startExpireDate_;
}

void ListServerLockRequest::setStartExpireDate(long startExpireDate) {
  startExpireDate_ = startExpireDate;
  setParameter(std::string("StartExpireDate"), std::to_string(startExpireDate));
}

int ListServerLockRequest::getPageSize() const {
  return pageSize_;
}

void ListServerLockRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListServerLockRequest::getLang() const {
  return lang_;
}

void ListServerLockRequest::setLang(const std::string &lang) {
  lang_ = lang;
  setParameter(std::string("Lang"), lang);
}

std::string ListServerLockRequest::getDomainName() const {
  return domainName_;
}

void ListServerLockRequest::setDomainName(const std::string &domainName) {
  domainName_ = domainName;
  setParameter(std::string("DomainName"), domainName);
}

std::string ListServerLockRequest::getOrderBy() const {
  return orderBy_;
}

void ListServerLockRequest::setOrderBy(const std::string &orderBy) {
  orderBy_ = orderBy;
  setParameter(std::string("OrderBy"), orderBy);
}

long ListServerLockRequest::getEndStartDate() const {
  return endStartDate_;
}

void ListServerLockRequest::setEndStartDate(long endStartDate) {
  endStartDate_ = endStartDate;
  setParameter(std::string("EndStartDate"), std::to_string(endStartDate));
}

std::string ListServerLockRequest::getUserClientIp() const {
  return userClientIp_;
}

void ListServerLockRequest::setUserClientIp(const std::string &userClientIp) {
  userClientIp_ = userClientIp;
  setParameter(std::string("UserClientIp"), userClientIp);
}

