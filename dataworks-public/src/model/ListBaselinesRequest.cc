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

#include <alibabacloud/dataworks-public/model/ListBaselinesRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListBaselinesRequest;

ListBaselinesRequest::ListBaselinesRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListBaselines") {
  setMethod(HttpRequest::Method::Post);
}

ListBaselinesRequest::~ListBaselinesRequest() {}

std::string ListBaselinesRequest::getOwner() const {
  return owner_;
}

void ListBaselinesRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

std::string ListBaselinesRequest::getSearchText() const {
  return searchText_;
}

void ListBaselinesRequest::setSearchText(const std::string &searchText) {
  searchText_ = searchText;
  setBodyParameter(std::string("SearchText"), searchText);
}

std::string ListBaselinesRequest::getPriority() const {
  return priority_;
}

void ListBaselinesRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), priority);
}

int ListBaselinesRequest::getPageNumber() const {
  return pageNumber_;
}

void ListBaselinesRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

bool ListBaselinesRequest::getEnable() const {
  return enable_;
}

void ListBaselinesRequest::setEnable(bool enable) {
  enable_ = enable;
  setBodyParameter(std::string("Enable"), enable ? "true" : "false");
}

int ListBaselinesRequest::getPageSize() const {
  return pageSize_;
}

void ListBaselinesRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListBaselinesRequest::getProjectId() const {
  return projectId_;
}

void ListBaselinesRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string ListBaselinesRequest::getBaselineTypes() const {
  return baselineTypes_;
}

void ListBaselinesRequest::setBaselineTypes(const std::string &baselineTypes) {
  baselineTypes_ = baselineTypes;
  setBodyParameter(std::string("BaselineTypes"), baselineTypes);
}

