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

#include <alibabacloud/viapi-regen/model/ListServicesRequest.h>

using AlibabaCloud::Viapi_regen::Model::ListServicesRequest;

ListServicesRequest::ListServicesRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "ListServices") {
  setMethod(HttpRequest::Method::Post);
}

ListServicesRequest::~ListServicesRequest() {}

long ListServicesRequest::getPageSize() const {
  return pageSize_;
}

void ListServicesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListServicesRequest::getId() const {
  return id_;
}

void ListServicesRequest::setId(long id) {
  id_ = id;
  setBodyParameter(std::string("Id"), std::to_string(id));
}

long ListServicesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListServicesRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long ListServicesRequest::getName() const {
  return name_;
}

void ListServicesRequest::setName(long name) {
  name_ = name;
  setBodyParameter(std::string("Name"), std::to_string(name));
}

long ListServicesRequest::getWorkspaceId() const {
  return workspaceId_;
}

void ListServicesRequest::setWorkspaceId(long workspaceId) {
  workspaceId_ = workspaceId;
  setBodyParameter(std::string("WorkspaceId"), std::to_string(workspaceId));
}

