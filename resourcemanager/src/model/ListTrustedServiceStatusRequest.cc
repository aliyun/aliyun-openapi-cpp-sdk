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

#include <alibabacloud/resourcemanager/model/ListTrustedServiceStatusRequest.h>

using AlibabaCloud::ResourceManager::Model::ListTrustedServiceStatusRequest;

ListTrustedServiceStatusRequest::ListTrustedServiceStatusRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "ListTrustedServiceStatus") {
  setMethod(HttpRequest::Method::Post);
}

ListTrustedServiceStatusRequest::~ListTrustedServiceStatusRequest() {}

std::string ListTrustedServiceStatusRequest::getAdminAccountId() const {
  return adminAccountId_;
}

void ListTrustedServiceStatusRequest::setAdminAccountId(const std::string &adminAccountId) {
  adminAccountId_ = adminAccountId;
  setParameter(std::string("AdminAccountId"), adminAccountId);
}

int ListTrustedServiceStatusRequest::getPageNumber() const {
  return pageNumber_;
}

void ListTrustedServiceStatusRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListTrustedServiceStatusRequest::getPageSize() const {
  return pageSize_;
}

void ListTrustedServiceStatusRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

