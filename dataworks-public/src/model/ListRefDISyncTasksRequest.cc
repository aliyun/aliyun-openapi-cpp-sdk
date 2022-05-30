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

#include <alibabacloud/dataworks-public/model/ListRefDISyncTasksRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListRefDISyncTasksRequest;

ListRefDISyncTasksRequest::ListRefDISyncTasksRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "ListRefDISyncTasks") {
  setMethod(HttpRequest::Method::Post);
}

ListRefDISyncTasksRequest::~ListRefDISyncTasksRequest() {}

std::string ListRefDISyncTasksRequest::getTaskType() const {
  return taskType_;
}

void ListRefDISyncTasksRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string ListRefDISyncTasksRequest::getDatasourceName() const {
  return datasourceName_;
}

void ListRefDISyncTasksRequest::setDatasourceName(const std::string &datasourceName) {
  datasourceName_ = datasourceName;
  setParameter(std::string("DatasourceName"), datasourceName);
}

long ListRefDISyncTasksRequest::getPageNumber() const {
  return pageNumber_;
}

void ListRefDISyncTasksRequest::setPageNumber(long pageNumber) {
  pageNumber_ = pageNumber;
  setParameter(std::string("PageNumber"), std::to_string(pageNumber));
}

long ListRefDISyncTasksRequest::getPageSize() const {
  return pageSize_;
}

void ListRefDISyncTasksRequest::setPageSize(long pageSize) {
  pageSize_ = pageSize;
  setParameter(std::string("PageSize"), std::to_string(pageSize));
}

long ListRefDISyncTasksRequest::getProjectId() const {
  return projectId_;
}

void ListRefDISyncTasksRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

std::string ListRefDISyncTasksRequest::getRefType() const {
  return refType_;
}

void ListRefDISyncTasksRequest::setRefType(const std::string &refType) {
  refType_ = refType;
  setParameter(std::string("RefType"), refType);
}

