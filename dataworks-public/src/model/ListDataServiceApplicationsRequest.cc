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

#include <alibabacloud/dataworks-public/model/ListDataServiceApplicationsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListDataServiceApplicationsRequest;

ListDataServiceApplicationsRequest::ListDataServiceApplicationsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListDataServiceApplications") {
  setMethod(HttpRequest::Method::Post);
}

ListDataServiceApplicationsRequest::~ListDataServiceApplicationsRequest() {}

int ListDataServiceApplicationsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDataServiceApplicationsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListDataServiceApplicationsRequest::getPageSize() const {
  return pageSize_;
}

void ListDataServiceApplicationsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListDataServiceApplicationsRequest::getTenantId() const {
  return tenantId_;
}

void ListDataServiceApplicationsRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

std::string ListDataServiceApplicationsRequest::getProjectIdList() const {
  return projectIdList_;
}

void ListDataServiceApplicationsRequest::setProjectIdList(const std::string &projectIdList) {
  projectIdList_ = projectIdList;
  setBodyParameter(std::string("ProjectIdList"), projectIdList);
}

