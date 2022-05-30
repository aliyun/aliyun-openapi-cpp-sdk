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

#include <alibabacloud/dataworks-public/model/GenerateDISyncTaskConfigForUpdatingRequest.h>

using AlibabaCloud::Dataworks_public::Model::GenerateDISyncTaskConfigForUpdatingRequest;

GenerateDISyncTaskConfigForUpdatingRequest::GenerateDISyncTaskConfigForUpdatingRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GenerateDISyncTaskConfigForUpdating") {
  setMethod(HttpRequest::Method::Post);
}

GenerateDISyncTaskConfigForUpdatingRequest::~GenerateDISyncTaskConfigForUpdatingRequest() {}

std::string GenerateDISyncTaskConfigForUpdatingRequest::getTaskType() const {
  return taskType_;
}

void GenerateDISyncTaskConfigForUpdatingRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string GenerateDISyncTaskConfigForUpdatingRequest::getClientToken() const {
  return clientToken_;
}

void GenerateDISyncTaskConfigForUpdatingRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GenerateDISyncTaskConfigForUpdatingRequest::getTaskParam() const {
  return taskParam_;
}

void GenerateDISyncTaskConfigForUpdatingRequest::setTaskParam(const std::string &taskParam) {
  taskParam_ = taskParam;
  setParameter(std::string("TaskParam"), taskParam);
}

long GenerateDISyncTaskConfigForUpdatingRequest::getProjectId() const {
  return projectId_;
}

void GenerateDISyncTaskConfigForUpdatingRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

long GenerateDISyncTaskConfigForUpdatingRequest::getTaskId() const {
  return taskId_;
}

void GenerateDISyncTaskConfigForUpdatingRequest::setTaskId(long taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), std::to_string(taskId));
}

