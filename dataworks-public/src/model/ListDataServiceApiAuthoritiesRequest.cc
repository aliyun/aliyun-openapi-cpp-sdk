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

#include <alibabacloud/dataworks-public/model/ListDataServiceApiAuthoritiesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListDataServiceApiAuthoritiesRequest;

ListDataServiceApiAuthoritiesRequest::ListDataServiceApiAuthoritiesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListDataServiceApiAuthorities") {
  setMethod(HttpRequest::Method::Post);
}

ListDataServiceApiAuthoritiesRequest::~ListDataServiceApiAuthoritiesRequest() {}

std::string ListDataServiceApiAuthoritiesRequest::getApiNameKeyword() const {
  return apiNameKeyword_;
}

void ListDataServiceApiAuthoritiesRequest::setApiNameKeyword(const std::string &apiNameKeyword) {
  apiNameKeyword_ = apiNameKeyword;
  setBodyParameter(std::string("ApiNameKeyword"), apiNameKeyword);
}

int ListDataServiceApiAuthoritiesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDataServiceApiAuthoritiesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListDataServiceApiAuthoritiesRequest::getPageSize() const {
  return pageSize_;
}

void ListDataServiceApiAuthoritiesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListDataServiceApiAuthoritiesRequest::getTenantId() const {
  return tenantId_;
}

void ListDataServiceApiAuthoritiesRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

long ListDataServiceApiAuthoritiesRequest::getProjectId() const {
  return projectId_;
}

void ListDataServiceApiAuthoritiesRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

