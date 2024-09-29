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

#include <alibabacloud/dataworks-public/model/ListBusinessRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListBusinessRequest;

ListBusinessRequest::ListBusinessRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListBusiness") {
  setMethod(HttpRequest::Method::Post);
}

ListBusinessRequest::~ListBusinessRequest() {}

std::string ListBusinessRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void ListBusinessRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

int ListBusinessRequest::getPageNumber() const {
  return pageNumber_;
}

void ListBusinessRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListBusinessRequest::getPageSize() const {
  return pageSize_;
}

void ListBusinessRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListBusinessRequest::getKeyword() const {
  return keyword_;
}

void ListBusinessRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setBodyParameter(std::string("Keyword"), keyword);
}

long ListBusinessRequest::getProjectId() const {
  return projectId_;
}

void ListBusinessRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

