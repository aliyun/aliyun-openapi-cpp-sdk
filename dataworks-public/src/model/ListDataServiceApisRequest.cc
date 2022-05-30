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

#include <alibabacloud/dataworks-public/model/ListDataServiceApisRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListDataServiceApisRequest;

ListDataServiceApisRequest::ListDataServiceApisRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListDataServiceApis") {
  setMethod(HttpRequest::Method::Post);
}

ListDataServiceApisRequest::~ListDataServiceApisRequest() {}

std::string ListDataServiceApisRequest::getApiNameKeyword() const {
  return apiNameKeyword_;
}

void ListDataServiceApisRequest::setApiNameKeyword(const std::string &apiNameKeyword) {
  apiNameKeyword_ = apiNameKeyword;
  setBodyParameter(std::string("ApiNameKeyword"), apiNameKeyword);
}

std::string ListDataServiceApisRequest::getApiPathKeyword() const {
  return apiPathKeyword_;
}

void ListDataServiceApisRequest::setApiPathKeyword(const std::string &apiPathKeyword) {
  apiPathKeyword_ = apiPathKeyword;
  setBodyParameter(std::string("ApiPathKeyword"), apiPathKeyword);
}

std::string ListDataServiceApisRequest::getCreatorId() const {
  return creatorId_;
}

void ListDataServiceApisRequest::setCreatorId(const std::string &creatorId) {
  creatorId_ = creatorId;
  setBodyParameter(std::string("CreatorId"), creatorId);
}

int ListDataServiceApisRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDataServiceApisRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListDataServiceApisRequest::getPageSize() const {
  return pageSize_;
}

void ListDataServiceApisRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListDataServiceApisRequest::getTenantId() const {
  return tenantId_;
}

void ListDataServiceApisRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

long ListDataServiceApisRequest::getProjectId() const {
  return projectId_;
}

void ListDataServiceApisRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

