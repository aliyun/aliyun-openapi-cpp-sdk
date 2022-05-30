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

#include <alibabacloud/dataworks-public/model/ListBaselineConfigsRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListBaselineConfigsRequest;

ListBaselineConfigsRequest::ListBaselineConfigsRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListBaselineConfigs") {
  setMethod(HttpRequest::Method::Post);
}

ListBaselineConfigsRequest::~ListBaselineConfigsRequest() {}

std::string ListBaselineConfigsRequest::getOwner() const {
  return owner_;
}

void ListBaselineConfigsRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setBodyParameter(std::string("Owner"), owner);
}

std::string ListBaselineConfigsRequest::getSearchText() const {
  return searchText_;
}

void ListBaselineConfigsRequest::setSearchText(const std::string &searchText) {
  searchText_ = searchText;
  setBodyParameter(std::string("SearchText"), searchText);
}

bool ListBaselineConfigsRequest::getUseflag() const {
  return useflag_;
}

void ListBaselineConfigsRequest::setUseflag(bool useflag) {
  useflag_ = useflag;
  setBodyParameter(std::string("Useflag"), useflag ? "true" : "false");
}

std::string ListBaselineConfigsRequest::getPriority() const {
  return priority_;
}

void ListBaselineConfigsRequest::setPriority(const std::string &priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), priority);
}

int ListBaselineConfigsRequest::getPageNumber() const {
  return pageNumber_;
}

void ListBaselineConfigsRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setBodyParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

int ListBaselineConfigsRequest::getPageSize() const {
  return pageSize_;
}

void ListBaselineConfigsRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListBaselineConfigsRequest::getProjectId() const {
  return projectId_;
}

void ListBaselineConfigsRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string ListBaselineConfigsRequest::getBaselineTypes() const {
  return baselineTypes_;
}

void ListBaselineConfigsRequest::setBaselineTypes(const std::string &baselineTypes) {
  baselineTypes_ = baselineTypes;
  setBodyParameter(std::string("BaselineTypes"), baselineTypes);
}

