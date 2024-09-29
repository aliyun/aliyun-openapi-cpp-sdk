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

#include <alibabacloud/dataworks-public/model/ListFoldersRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListFoldersRequest;

ListFoldersRequest::ListFoldersRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListFolders") {
  setMethod(HttpRequest::Method::Post);
}

ListFoldersRequest::~ListFoldersRequest() {}

std::string ListFoldersRequest::getParentFolderPath() const {
  return parentFolderPath_;
}

void ListFoldersRequest::setParentFolderPath(const std::string &parentFolderPath) {
  parentFolderPath_ = parentFolderPath;
  setBodyParameter(std::string("ParentFolderPath"), parentFolderPath);
}

std::string ListFoldersRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void ListFoldersRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

int ListFoldersRequest::getPageNumber() const {
  return pageNumber_;
}

void ListFoldersRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListFoldersRequest::getPageSize() const {
  return pageSize_;
}

void ListFoldersRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListFoldersRequest::getProjectId() const {
  return projectId_;
}

void ListFoldersRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

