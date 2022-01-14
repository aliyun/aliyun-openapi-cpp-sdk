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

#include <alibabacloud/resourcemanager/model/ListPoliciesRequest.h>

using AlibabaCloud::ResourceManager::Model::ListPoliciesRequest;

ListPoliciesRequest::ListPoliciesRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "ListPolicies") {
  setMethod(HttpRequest::Method::Post);
}

ListPoliciesRequest::~ListPoliciesRequest() {}

std::string ListPoliciesRequest::getPolicyType() const {
  return policyType_;
}

void ListPoliciesRequest::setPolicyType(const std::string &policyType) {
  policyType_ = policyType;
  setParameter(std::string("PolicyType"), policyType);
}

std::string ListPoliciesRequest::getLanguage() const {
  return language_;
}

void ListPoliciesRequest::setLanguage(const std::string &language) {
  language_ = language;
  setParameter(std::string("Language"), language);
}

int ListPoliciesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListPoliciesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListPoliciesRequest::getPageSize() const {
  return pageSize_;
}

void ListPoliciesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

