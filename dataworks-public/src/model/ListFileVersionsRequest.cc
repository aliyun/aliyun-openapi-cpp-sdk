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

#include <alibabacloud/dataworks-public/model/ListFileVersionsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListFileVersionsRequest;

ListFileVersionsRequest::ListFileVersionsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListFileVersions") {
  setMethod(HttpRequest::Method::Post);
}

ListFileVersionsRequest::~ListFileVersionsRequest() {}

std::string ListFileVersionsRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void ListFileVersionsRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

int ListFileVersionsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListFileVersionsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListFileVersionsRequest::getPageSize() const {
  return pageSize_;
}

void ListFileVersionsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListFileVersionsRequest::getProjectId() const {
  return projectId_;
}

void ListFileVersionsRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

long ListFileVersionsRequest::getFileId() const {
  return fileId_;
}

void ListFileVersionsRequest::setFileId(long fileId) {
  fileId_ = fileId;
  setBodyParameter(std::string("FileId"), std::to_string(fileId));
}

