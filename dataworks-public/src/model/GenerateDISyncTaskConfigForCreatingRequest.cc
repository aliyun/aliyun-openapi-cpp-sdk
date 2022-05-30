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

#include <alibabacloud/dataworks-public/model/GenerateDISyncTaskConfigForCreatingRequest.h>

using AlibabaCloud::Dataworks_public::Model::GenerateDISyncTaskConfigForCreatingRequest;

GenerateDISyncTaskConfigForCreatingRequest::GenerateDISyncTaskConfigForCreatingRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GenerateDISyncTaskConfigForCreating") {
  setMethod(HttpRequest::Method::Post);
}

GenerateDISyncTaskConfigForCreatingRequest::~GenerateDISyncTaskConfigForCreatingRequest() {}

std::string GenerateDISyncTaskConfigForCreatingRequest::getTaskType() const {
  return taskType_;
}

void GenerateDISyncTaskConfigForCreatingRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string GenerateDISyncTaskConfigForCreatingRequest::getClientToken() const {
  return clientToken_;
}

void GenerateDISyncTaskConfigForCreatingRequest::setClientToken(const std::string &clientToken) {
  clientToken_ = clientToken;
  setParameter(std::string("ClientToken"), clientToken);
}

std::string GenerateDISyncTaskConfigForCreatingRequest::getTaskParam() const {
  return taskParam_;
}

void GenerateDISyncTaskConfigForCreatingRequest::setTaskParam(const std::string &taskParam) {
  taskParam_ = taskParam;
  setParameter(std::string("TaskParam"), taskParam);
}

long GenerateDISyncTaskConfigForCreatingRequest::getProjectId() const {
  return projectId_;
}

void GenerateDISyncTaskConfigForCreatingRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

