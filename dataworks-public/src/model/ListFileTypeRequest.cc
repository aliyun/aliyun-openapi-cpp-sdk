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

#include <alibabacloud/dataworks-public/model/ListFileTypeRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListFileTypeRequest;

ListFileTypeRequest::ListFileTypeRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListFileType") {
  setMethod(HttpRequest::Method::Post);
}

ListFileTypeRequest::~ListFileTypeRequest() {}

int ListFileTypeRequest::getPageSize() const {
  return pageSize_;
}

void ListFileTypeRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string ListFileTypeRequest::getKeyword() const {
  return keyword_;
}

void ListFileTypeRequest::setKeyword(const std::string &keyword) {
  keyword_ = keyword;
  setBodyParameter(std::string("Keyword"), keyword);
}

std::string ListFileTypeRequest::getLocale() const {
  return locale_;
}

void ListFileTypeRequest::setLocale(const std::string &locale) {
  locale_ = locale;
  setBodyParameter(std::string("Locale"), locale);
}

long ListFileTypeRequest::getProjectId() const {
  return projectId_;
}

void ListFileTypeRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string ListFileTypeRequest::getProjectIdentifier() const {
  return projectIdentifier_;
}

void ListFileTypeRequest::setProjectIdentifier(const std::string &projectIdentifier) {
  projectIdentifier_ = projectIdentifier;
  setBodyParameter(std::string("ProjectIdentifier"), projectIdentifier);
}

int ListFileTypeRequest::getPageNumber() const {
  return pageNumber_;
}

void ListFileTypeRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

