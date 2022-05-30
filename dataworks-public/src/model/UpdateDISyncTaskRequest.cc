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

#include <alibabacloud/dataworks-public/model/UpdateDISyncTaskRequest.h>

using AlibabaCloud::Dataworks_public::Model::UpdateDISyncTaskRequest;

UpdateDISyncTaskRequest::UpdateDISyncTaskRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "UpdateDISyncTask") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDISyncTaskRequest::~UpdateDISyncTaskRequest() {}

std::string UpdateDISyncTaskRequest::getTaskType() const {
  return taskType_;
}

void UpdateDISyncTaskRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string UpdateDISyncTaskRequest::getTaskParam() const {
  return taskParam_;
}

void UpdateDISyncTaskRequest::setTaskParam(const std::string &taskParam) {
  taskParam_ = taskParam;
  setParameter(std::string("TaskParam"), taskParam);
}

std::string UpdateDISyncTaskRequest::getTaskContent() const {
  return taskContent_;
}

void UpdateDISyncTaskRequest::setTaskContent(const std::string &taskContent) {
  taskContent_ = taskContent;
  setParameter(std::string("TaskContent"), taskContent);
}

long UpdateDISyncTaskRequest::getProjectId() const {
  return projectId_;
}

void UpdateDISyncTaskRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

long UpdateDISyncTaskRequest::getFileId() const {
  return fileId_;
}

void UpdateDISyncTaskRequest::setFileId(long fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), std::to_string(fileId));
}

