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

#include <alibabacloud/dms-enterprise/model/ListAuthorityTemplateRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListAuthorityTemplateRequest;

ListAuthorityTemplateRequest::ListAuthorityTemplateRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListAuthorityTemplate") {
  setMethod(HttpRequest::Method::Post);
}

ListAuthorityTemplateRequest::~ListAuthorityTemplateRequest() {}

std::string ListAuthorityTemplateRequest::getSearchKey() const {
  return searchKey_;
}

void ListAuthorityTemplateRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

int ListAuthorityTemplateRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAuthorityTemplateRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListAuthorityTemplateRequest::getTid() const {
  return tid_;
}

void ListAuthorityTemplateRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

int ListAuthorityTemplateRequest::getPageSize() const {
  return pageSize_;
}

void ListAuthorityTemplateRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

