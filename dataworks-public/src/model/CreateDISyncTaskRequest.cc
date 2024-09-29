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

#include <alibabacloud/dataworks-public/model/CreateDISyncTaskRequest.h>

using AlibabaCloud::Dataworks_public::Model::CreateDISyncTaskRequest;

CreateDISyncTaskRequest::CreateDISyncTaskRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "CreateDISyncTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateDISyncTaskRequest::~CreateDISyncTaskRequest() {}

std::string CreateDISyncTaskRequest::getTaskType() const {
  return taskType_;
}

void CreateDISyncTaskRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string CreateDISyncTaskRequest::getClientToken() const {
  return clientToken_;
}

void CreateDISyncTaskRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string CreateDISyncTaskRequest::getTaskParam() const {
  return taskParam_;
}

void CreateDISyncTaskRequest::setTaskParam(const std::string &taskParam) {
  taskParam_ = taskParam;
  setParameter(std::string("TaskParam"), taskParam);
}

std::string CreateDISyncTaskRequest::getTaskName() const {
  return taskName_;
}

void CreateDISyncTaskRequest::setTaskName(const std::string &taskName) {
  taskName_ = taskName;
  setParameter(std::string("TaskName"), taskName);
}

std::string CreateDISyncTaskRequest::getTaskContent() const {
  return taskContent_;
}

void CreateDISyncTaskRequest::setTaskContent(const std::string &taskContent) {
  taskContent_ = taskContent;
  setBodyParameter(std::string("TaskContent"), taskContent);
}

long CreateDISyncTaskRequest::getProjectId() const {
  return projectId_;
}

void CreateDISyncTaskRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

