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

#include <alibabacloud/dms-enterprise/model/ListInstanceLoginAuditLogRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListInstanceLoginAuditLogRequest;

ListInstanceLoginAuditLogRequest::ListInstanceLoginAuditLogRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListInstanceLoginAuditLog") {
  setMethod(HttpRequest::Method::Post);
}

ListInstanceLoginAuditLogRequest::~ListInstanceLoginAuditLogRequest() {}

std::string ListInstanceLoginAuditLogRequest::getSearchName() const {
  return searchName_;
}

void ListInstanceLoginAuditLogRequest::setSearchName(const std::string &searchName) {
  searchName_ = searchName;
  setParameter(std::string("SearchName"), searchName);
}

std::string ListInstanceLoginAuditLogRequest::getOpUserName() const {
  return opUserName_;
}

void ListInstanceLoginAuditLogRequest::setOpUserName(const std::string &opUserName) {
  opUserName_ = opUserName;
  setParameter(std::string("OpUserName"), opUserName);
}

std::string ListInstanceLoginAuditLogRequest::getStartTime() const {
  return startTime_;
}

void ListInstanceLoginAuditLogRequest::setStartTime(const std::string &startTime) {
  startTime_ = startTime;
  setParameter(std::string("StartTime"), startTime);
}

int ListInstanceLoginAuditLogRequest::getPageNumber() const {
  return pageNumber_;
}

void ListInstanceLoginAuditLogRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListInstanceLoginAuditLogRequest::getTid() const {
  return tid_;
}

void ListInstanceLoginAuditLogRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListInstanceLoginAuditLogRequest::getPageSize() const {
  return pageSize_;
}

void ListInstanceLoginAuditLogRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListInstanceLoginAuditLogRequest::getEndTime() const {
  return endTime_;
}

void ListInstanceLoginAuditLogRequest::setEndTime(const std::string &endTime) {
  endTime_ = endTime;
  setParameter(std::string("EndTime"), endTime);
}

