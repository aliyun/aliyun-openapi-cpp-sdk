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

#include <alibabacloud/dataworks-public/model/StartDISyncInstanceRequest.h>

using AlibabaCloud::Dataworks_public::Model::StartDISyncInstanceRequest;

StartDISyncInstanceRequest::StartDISyncInstanceRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "StartDISyncInstance") {
  setMethod(HttpRequest::Method::Post);
}

StartDISyncInstanceRequest::~StartDISyncInstanceRequest() {}

std::string StartDISyncInstanceRequest::getTaskType() const {
  return taskType_;
}

void StartDISyncInstanceRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

std::string StartDISyncInstanceRequest::getStartParam() const {
  return startParam_;
}

void StartDISyncInstanceRequest::setStartParam(const std::string &startParam) {
  startParam_ = startParam;
  setParameter(std::string("StartParam"), startParam);
}

long StartDISyncInstanceRequest::getProjectId() const {
  return projectId_;
}

void StartDISyncInstanceRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

long StartDISyncInstanceRequest::getFileId() const {
  return fileId_;
}

void StartDISyncInstanceRequest::setFileId(long fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), std::to_string(fileId));
}

