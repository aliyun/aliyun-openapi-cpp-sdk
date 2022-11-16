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

#include <alibabacloud/dataworks-public/model/ListDataServiceGroupsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListDataServiceGroupsRequest;

ListDataServiceGroupsRequest::ListDataServiceGroupsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListDataServiceGroups") {
  setMethod(HttpRequest::Method::Post);
}

ListDataServiceGroupsRequest::~ListDataServiceGroupsRequest() {}

std::string ListDataServiceGroupsRequest::getGroupNameKeyword() const {
  return groupNameKeyword_;
}

void ListDataServiceGroupsRequest::setGroupNameKeyword(const std::string &groupNameKeyword) {
  groupNameKeyword_ = groupNameKeyword;
  setBodyParameter(std::string("GroupNameKeyword"), groupNameKeyword);
}

int ListDataServiceGroupsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDataServiceGroupsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListDataServiceGroupsRequest::getPageSize() const {
  return pageSize_;
}

void ListDataServiceGroupsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListDataServiceGroupsRequest::getTenantId() const {
  return tenantId_;
}

void ListDataServiceGroupsRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

long ListDataServiceGroupsRequest::getProjectId() const {
  return projectId_;
}

void ListDataServiceGroupsRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

