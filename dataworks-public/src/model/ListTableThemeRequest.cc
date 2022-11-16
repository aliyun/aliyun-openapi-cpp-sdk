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

#include <alibabacloud/dataworks-public/model/ListTableThemeRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListTableThemeRequest;

ListTableThemeRequest::ListTableThemeRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListTableTheme") {
  setMethod(HttpRequest::Method::Get);
}

ListTableThemeRequest::~ListTableThemeRequest() {}

int ListTableThemeRequest::getPageNum() const {
  return pageNum_;
}

void ListTableThemeRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

long ListTableThemeRequest::getParentId() const {
  return parentId_;
}

void ListTableThemeRequest::setParentId(long parentId) {
  parentId_ = parentId;
  setParameter(std::string("ParentId"), std::to_string(parentId));
}

int ListTableThemeRequest::getPageSize() const {
  return pageSize_;
}

void ListTableThemeRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListTableThemeRequest::getProjectId() const {
  return projectId_;
}

void ListTableThemeRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

