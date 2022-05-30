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

#include <alibabacloud/dataworks-public/model/ListDataServicePublishedApisRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListDataServicePublishedApisRequest;

ListDataServicePublishedApisRequest::ListDataServicePublishedApisRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListDataServicePublishedApis") {
  setMethod(HttpRequest::Method::Post);
}

ListDataServicePublishedApisRequest::~ListDataServicePublishedApisRequest() {}

std::string ListDataServicePublishedApisRequest::getApiNameKeyword() const {
  return apiNameKeyword_;
}

void ListDataServicePublishedApisRequest::setApiNameKeyword(const std::string &apiNameKeyword) {
  apiNameKeyword_ = apiNameKeyword;
  setBodyParameter(std::string("ApiNameKeyword"), apiNameKeyword);
}

std::string ListDataServicePublishedApisRequest::getApiPathKeyword() const {
  return apiPathKeyword_;
}

void ListDataServicePublishedApisRequest::setApiPathKeyword(const std::string &apiPathKeyword) {
  apiPathKeyword_ = apiPathKeyword;
  setBodyParameter(std::string("ApiPathKeyword"), apiPathKeyword);
}

std::string ListDataServicePublishedApisRequest::getCreatorId() const {
  return creatorId_;
}

void ListDataServicePublishedApisRequest::setCreatorId(const std::string &creatorId) {
  creatorId_ = creatorId;
  setBodyParameter(std::string("CreatorId"), creatorId);
}

int ListDataServicePublishedApisRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDataServicePublishedApisRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListDataServicePublishedApisRequest::getPageSize() const {
  return pageSize_;
}

void ListDataServicePublishedApisRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListDataServicePublishedApisRequest::getTenantId() const {
  return tenantId_;
}

void ListDataServicePublishedApisRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

long ListDataServicePublishedApisRequest::getProjectId() const {
  return projectId_;
}

void ListDataServicePublishedApisRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

