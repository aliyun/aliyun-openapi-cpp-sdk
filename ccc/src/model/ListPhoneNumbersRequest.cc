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

#include <alibabacloud/ccc/model/ListPhoneNumbersRequest.h>

using AlibabaCloud::CCC::Model::ListPhoneNumbersRequest;

ListPhoneNumbersRequest::ListPhoneNumbersRequest()
    : RpcServiceRequest("ccc", "2020-07-01", "ListPhoneNumbers") {
  setMethod(HttpRequest::Method::Post);
}

ListPhoneNumbersRequest::~ListPhoneNumbersRequest() {}

std::string ListPhoneNumbersRequest::getUsage() const {
  return usage_;
}

void ListPhoneNumbersRequest::setUsage(const std::string &usage) {
  usage_ = usage;
  setParameter(std::string("Usage"), usage);
}

bool ListPhoneNumbersRequest::getActive() const {
  return active_;
}

void ListPhoneNumbersRequest::setActive(bool active) {
  active_ = active;
  setParameter(std::string("Active"), active ? "true" : "false");
}

int ListPhoneNumbersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListPhoneNumbersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListPhoneNumbersRequest::getSearchPattern() const {
  return searchPattern_;
}

void ListPhoneNumbersRequest::setSearchPattern(const std::string &searchPattern) {
  searchPattern_ = searchPattern;
  setParameter(std::string("SearchPattern"), searchPattern);
}

std::string ListPhoneNumbersRequest::getInstanceId() const {
  return instanceId_;
}

void ListPhoneNumbersRequest::setInstanceId(const std::string &instanceId) {
  instanceId_ = instanceId;
  setParameter(std::string("InstanceId"), instanceId);
}

int ListPhoneNumbersRequest::getPageSize() const {
  return pageSize_;
}

void ListPhoneNumbersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

