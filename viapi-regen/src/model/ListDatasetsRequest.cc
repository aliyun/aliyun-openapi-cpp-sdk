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

#include <alibabacloud/viapi-regen/model/ListDatasetsRequest.h>

using AlibabaCloud::Viapi_regen::Model::ListDatasetsRequest;

ListDatasetsRequest::ListDatasetsRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "ListDatasets") {
  setMethod(HttpRequest::Method::Post);
}

ListDatasetsRequest::~ListDatasetsRequest() {}

long ListDatasetsRequest::getPageSize() const {
  return pageSize_;
}

void ListDatasetsRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListDatasetsRequest::getCurrentPage() const {
  return currentPage_;
}

void ListDatasetsRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

long ListDatasetsRequest::getWorkspaceId() const {
  return workspaceId_;
}

void ListDatasetsRequest::setWorkspaceId(long workspaceId) {
  workspaceId_ = workspaceId;
  setBodyParameter(std::string("WorkspaceId"), std::to_string(workspaceId));
}

