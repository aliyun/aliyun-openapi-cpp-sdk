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

#include <alibabacloud/ccc/model/ListRamUsersRequest.h>

using AlibabaCloud::CCC::Model::ListRamUsersRequest;

ListRamUsersRequest::ListRamUsersRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListRamUsers") {
  setMethod(HttpRequest::Method::Post);
}

ListRamUsersRequest::~ListRamUsersRequest() {}

int ListRamUsersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListRamUsersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListRamUsersRequest::getSearchPattern() const {
  return searchPattern_;
}

void ListRamUsersRequest::setSearchPattern(const std::string &searchPattern) {
  searchPattern_ = searchPattern;
  setParameter(std::string("SearchPattern"), searchPattern);
}

std::string ListRamUsersRequest::getInstanceId() const {
  return instanceId_;
}

void ListRamUsersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListRamUsersRequest::getPageSize() const {
  return pageSize_;
}

void ListRamUsersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

