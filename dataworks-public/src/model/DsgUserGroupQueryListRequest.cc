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

#include <alibabacloud/dataworks-public/model/DsgUserGroupQueryListRequest.h>

using AlibabaCloud::Dataworks_public::Model::DsgUserGroupQueryListRequest;

DsgUserGroupQueryListRequest::DsgUserGroupQueryListRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "DsgUserGroupQueryList") {
  setMethod(HttpRequest::Method::Get);
}

DsgUserGroupQueryListRequest::~DsgUserGroupQueryListRequest() {}

std::string DsgUserGroupQueryListRequest::getOwner() const {
  return owner_;
}

void DsgUserGroupQueryListRequest::setOwner(const std::string &owner) {
  owner_ = owner;
  setParameter(std::string("Owner"), owner);
}

std::string DsgUserGroupQueryListRequest::getProjectName() const {
  return projectName_;
}

void DsgUserGroupQueryListRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

int DsgUserGroupQueryListRequest::getPageSize() const {
  return pageSize_;
}

void DsgUserGroupQueryListRequest::setPageSize(int pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

std::string DsgUserGroupQueryListRequest::getName() const {
  return name_;
}

void DsgUserGroupQueryListRequest::setName(const std::string &name) {
  name_ = name;
  setParameter(std::string("Name"), name);
}

int DsgUserGroupQueryListRequest::getPageNumber() const {
  return pageNumber_;
}

void DsgUserGroupQueryListRequest::setPageNumber(int pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

