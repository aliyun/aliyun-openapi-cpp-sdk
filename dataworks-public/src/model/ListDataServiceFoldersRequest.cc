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

#include <alibabacloud/dataworks-public/model/ListDataServiceFoldersRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListDataServiceFoldersRequest;

ListDataServiceFoldersRequest::ListDataServiceFoldersRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListDataServiceFolders") {
  setMethod(HttpRequest::Method::Post);
}

ListDataServiceFoldersRequest::~ListDataServiceFoldersRequest() {}

std::string ListDataServiceFoldersRequest::getFolderNameKeyword() const {
  return folderNameKeyword_;
}

void ListDataServiceFoldersRequest::setFolderNameKeyword(const std::string &folderNameKeyword) {
  folderNameKeyword_ = folderNameKeyword;
  setBodyParameter(std::string("FolderNameKeyword"), folderNameKeyword);
}

std::string ListDataServiceFoldersRequest::getGroupId() const {
  return groupId_;
}

void ListDataServiceFoldersRequest::setGroupId(const std::string &groupId) {
  groupId_ = groupId;
  setBodyParameter(std::string("GroupId"), groupId);
}

int ListDataServiceFoldersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListDataServiceFoldersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListDataServiceFoldersRequest::getPageSize() const {
  return pageSize_;
}

void ListDataServiceFoldersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListDataServiceFoldersRequest::getTenantId() const {
  return tenantId_;
}

void ListDataServiceFoldersRequest::setTenantId(long tenantId) {
  tenantId_ = tenantId;
  setBodyParameter(std::string("TenantId"), std::to_string(tenantId));
}

long ListDataServiceFoldersRequest::getProjectId() const {
  return projectId_;
}

void ListDataServiceFoldersRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

