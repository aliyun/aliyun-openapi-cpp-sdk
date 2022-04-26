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

#include <alibabacloud/ccc/model/ListPersonalNumbersOfUserRequest.h>

using AlibabaCloud::CCC::Model::ListPersonalNumbersOfUserRequest;

ListPersonalNumbersOfUserRequest::ListPersonalNumbersOfUserRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListPersonalNumbersOfUser") {
  setMethod(HttpRequest::Method::Post);
}

ListPersonalNumbersOfUserRequest::~ListPersonalNumbersOfUserRequest() {}

std::string ListPersonalNumbersOfUserRequest::getUserId() const {
  return userId_;
}

void ListPersonalNumbersOfUserRequest::setUserId(const std::string &userId) {
  userId_ = userId;
  setParameter(std::string("UserId"), userId);
}

int ListPersonalNumbersOfUserRequest::getPageNumber() const {
  return pageNumber_;
}

void ListPersonalNumbersOfUserRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool ListPersonalNumbersOfUserRequest::getIsMember() const {
  return isMember_;
}

void ListPersonalNumbersOfUserRequest::setIsMember(bool isMember) {
  isMember_ = isMember;
  setParameter(std::string("IsMember"), isMember ? "true" : "false");
}

std::string ListPersonalNumbersOfUserRequest::getSearchPattern() const {
  return searchPattern_;
}

void ListPersonalNumbersOfUserRequest::setSearchPattern(const std::string &searchPattern) {
  searchPattern_ = searchPattern;
  setParameter(std::string("SearchPattern"), searchPattern);
}

std::string ListPersonalNumbersOfUserRequest::getInstanceId() const {
  return instanceId_;
}

void ListPersonalNumbersOfUserRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListPersonalNumbersOfUserRequest::getPageSize() const {
  return pageSize_;
}

void ListPersonalNumbersOfUserRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

