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

#include <alibabacloud/csas/model/ListUserPrivateAccessPoliciesRequest.h>

using AlibabaCloud::Csas::Model::ListUserPrivateAccessPoliciesRequest;

ListUserPrivateAccessPoliciesRequest::ListUserPrivateAccessPoliciesRequest()
    : RpcServiceRequest("csas", "2023-01-20", "ListUserPrivateAccessPolicies") {
  setMethod(HttpRequest::Method::Get);
}

ListUserPrivateAccessPoliciesRequest::~ListUserPrivateAccessPoliciesRequest() {}

int ListUserPrivateAccessPoliciesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListUserPrivateAccessPoliciesRequest::setCurrentPage(int currentPage) {
  currentPage_ = currentPage;
  setParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListUserPrivateAccessPoliciesRequest::getSaseUserId() const {
  return saseUserId_;
}

void ListUserPrivateAccessPoliciesRequest::setSaseUserId(const std::string &saseUserId) {
  saseUserId_ = saseUserId;
  setParameter(std::string("SaseUserId"), saseUserId);
}

int ListUserPrivateAccessPoliciesRequest::getPageSize() const {
  return pageSize_;
}

void ListUserPrivateAccessPoliciesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListUserPrivateAccessPoliciesRequest::getName() const {
  return name_;
}

void ListUserPrivateAccessPoliciesRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

