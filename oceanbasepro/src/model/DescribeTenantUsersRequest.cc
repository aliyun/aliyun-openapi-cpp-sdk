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

#include <alibabacloud/oceanbasepro/model/DescribeTenantUsersRequest.h>

using AlibabaCloud::OceanBasePro::Model::DescribeTenantUsersRequest;

DescribeTenantUsersRequest::DescribeTenantUsersRequest()
    : RpcServiceRequest("oceanbasepro", "2019-09-01", "DescribeTenantUsers") {
  setMethod(HttpRequest::Method::Post);
}

DescribeTenantUsersRequest::~DescribeTenantUsersRequest() {}

std::string DescribeTenantUsersRequest::getSearchKey() const {
  return searchKey_;
}

void DescribeTenantUsersRequest::setSearchKey(const std::string &searchKey) {
  searchKey_ = searchKey;
  setBodyParameter(std::string("SearchKey"), searchKey);
}

int DescribeTenantUsersRequest::getPageNumber() const {
  return pageNumber_;
}

void DescribeTenantUsersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string DescribeTenantUsersRequest::getTenantId() const {
  return tenantId_;
}

void DescribeTenantUsersRequest::setTenantId(const std::string &tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), tenantId);
}

int DescribeTenantUsersRequest::getPageSize() const {
  return pageSize_;
}

void DescribeTenantUsersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DescribeTenantUsersRequest::getUserName() const {
  return userName_;
}

void DescribeTenantUsersRequest::setUserName(const std::string &userName) {
  userName_ = userName;
  setBodyParameter(std::string("UserName"), userName);
}

