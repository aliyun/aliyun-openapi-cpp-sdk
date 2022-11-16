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

#include <alibabacloud/dataworks-public/model/ListTableLevelRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListTableLevelRequest;

ListTableLevelRequest::ListTableLevelRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListTableLevel") {
  setMethod(HttpRequest::Method::Get);
}

ListTableLevelRequest::~ListTableLevelRequest() {}

int ListTableLevelRequest::getLevelType() const {
  return levelType_;
}

void ListTableLevelRequest::setLevelType(int levelType) {
  levelType_ = levelType;
  setParameter(std::string("LevelType"), std::to_string(levelType));
}

int ListTableLevelRequest::getPageNum() const {
  return pageNum_;
}

void ListTableLevelRequest::setPageNum(int pageNum) {
  pageNum_ = pageNum;
  setParameter(std::string("PageNum"), std::to_string(pageNum));
}

int ListTableLevelRequest::getPageSize() const {
  return pageSize_;
}

void ListTableLevelRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListTableLevelRequest::getProjectId() const {
  return projectId_;
}

void ListTableLevelRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

