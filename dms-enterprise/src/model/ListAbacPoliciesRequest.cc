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

#include <alibabacloud/dms-enterprise/model/ListAbacPoliciesRequest.h>

using AlibabaCloud::Dms_enterprise::Model::ListAbacPoliciesRequest;

ListAbacPoliciesRequest::ListAbacPoliciesRequest()
    : RpcServiceRequest("dms-enterprise", "2018-11-01", "ListAbacPolicies") {
  setMethod(HttpRequest::Method::Post);
}

ListAbacPoliciesRequest::~ListAbacPoliciesRequest() {}

std::string ListAbacPoliciesRequest::getSearchKey() const {
  return searchKey_;
}

void ListAbacPoliciesRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setParameter(std::string("SearchKey"), searchKey);
}

long ListAbacPoliciesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListAbacPoliciesRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListAbacPoliciesRequest::getTid() const {
  return tid_;
}

void ListAbacPoliciesRequest::setTid(long tid) {
  tid_ = tid;
  setParameter(std::string("Tid"), std::to_string(tid));
}

long ListAbacPoliciesRequest::getPageSize() const {
  return pageSize_;
}

void ListAbacPoliciesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

