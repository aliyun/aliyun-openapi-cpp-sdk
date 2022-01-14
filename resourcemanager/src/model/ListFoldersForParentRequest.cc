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

#include <alibabacloud/resourcemanager/model/ListFoldersForParentRequest.h>

using AlibabaCloud::ResourceManager::Model::ListFoldersForParentRequest;

ListFoldersForParentRequest::ListFoldersForParentRequest()
    : RpcServiceRequest("resourcemanager", "2020-03-31", "ListFoldersForParent") {
  setMethod(HttpRequest::Method::Post);
}

ListFoldersForParentRequest::~ListFoldersForParentRequest() {}

std::string ListFoldersForParentRequest::getQueryKeyword() const {
  return queryKeyword_;
}

void ListFoldersForParentRequest::setQueryKeyword(const std::string &queryKeyword) {
  queryKeyword_ = queryKeyword;
  setParameter(std::string("QueryKeyword"), queryKeyword);
}

int ListFoldersForParentRequest::getPageNumber() const {
  return pageNumber_;
}

void ListFoldersForParentRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

std::string ListFoldersForParentRequest::getParentFolderId() const {
  return parentFolderId_;
}

void ListFoldersForParentRequest::setParentFolderId(const std::string &parentFolderId) {
  parentFolderId_ = parentFolderId;
  setParameter(std::string("ParentFolderId"), parentFolderId);
}

int ListFoldersForParentRequest::getPageSize() const {
  return pageSize_;
}

void ListFoldersForParentRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

