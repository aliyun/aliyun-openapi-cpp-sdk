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

#include <alibabacloud/viapi-regen/model/ListWorkspacesRequest.h>

using AlibabaCloud::Viapi_regen::Model::ListWorkspacesRequest;

ListWorkspacesRequest::ListWorkspacesRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "ListWorkspaces") {
  setMethod(HttpRequest::Method::Post);
}

ListWorkspacesRequest::~ListWorkspacesRequest() {}

long ListWorkspacesRequest::getPageSize() const {
  return pageSize_;
}

void ListWorkspacesRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListWorkspacesRequest::getCurrentPage() const {
  return currentPage_;
}

void ListWorkspacesRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListWorkspacesRequest::getName() const {
  return name_;
}

void ListWorkspacesRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

