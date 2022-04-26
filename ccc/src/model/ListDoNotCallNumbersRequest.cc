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

#include <alibabacloud/ccc/model/ListDoNotCallNumbersRequest.h>

using AlibabaCloud::CCC::Model::ListDoNotCallNumbersRequest;

ListDoNotCallNumbersRequest::ListDoNotCallNumbersRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListDoNotCallNumbers") {
  setMethod(HttpRequest::Method::Post);
}

ListDoNotCallNumbersRequest::~ListDoNotCallNumbersRequest() {}

int ListDoNotCallNumbersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDoNotCallNumbersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListDoNotCallNumbersRequest::getSearchPattern() const {
  return searchPattern_;
}

void ListDoNotCallNumbersRequest::setSearchPattern(const std::string &searchPattern) {
  searchPattern_ = searchPattern;
  setParameter(std::string("SearchPattern"), searchPattern);
}

std::string ListDoNotCallNumbersRequest::getInstanceId() const {
  return instanceId_;
}

void ListDoNotCallNumbersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

std::string ListDoNotCallNumbersRequest::getScope() const {
  return scope_;
}

void ListDoNotCallNumbersRequest::setScope(const std::string &scope) {
  scope_ = scope;
  setParameter(std::string("Scope"), scope);
}

int ListDoNotCallNumbersRequest::getPageSize() const {
  return pageSize_;
}

void ListDoNotCallNumbersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

