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

#include <alibabacloud/viapi-regen/model/ListTrainTasksRequest.h>

using AlibabaCloud::Viapi_regen::Model::ListTrainTasksRequest;

ListTrainTasksRequest::ListTrainTasksRequest()
    : RpcServiceRequest("viapi-regen", "2021-11-19", "ListTrainTasks") {
  setMethod(HttpRequest::Method::Post);
}

ListTrainTasksRequest::~ListTrainTasksRequest() {}

long ListTrainTasksRequest::getPageSize() const {
  return pageSize_;
}

void ListTrainTasksRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setBodyParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListTrainTasksRequest::getCurrentPage() const {
  return currentPage_;
}

void ListTrainTasksRequest::setCurrentPage(long currentPage) {
  currentPage_ = currentPage;
  setBodyParameter(std::string("CurrentPage"), std::to_string(currentPage));
}

std::string ListTrainTasksRequest::getStatus() const {
  return status_;
}

void ListTrainTasksRequest::setStatus(const std::string &status) {
  status_ = status;
  setBodyParameter(std::string("Status"), status);
}

long ListTrainTasksRequest::getWorkspaceId() const {
  return workspaceId_;
}

void ListTrainTasksRequest::setWorkspaceId(long workspaceId) {
  workspaceId_ = workspaceId;
  setBodyParameter(std::string("WorkspaceId"), std::to_string(workspaceId));
}

