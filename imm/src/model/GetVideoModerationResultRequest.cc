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

#include <alibabacloud/imm/model/GetVideoModerationResultRequest.h>

using AlibabaCloud::Imm::Model::GetVideoModerationResultRequest;

GetVideoModerationResultRequest::GetVideoModerationResultRequest()
    : RpcServiceRequest("imm", "2020-09-30", "GetVideoModerationResult") {
  setMethod(HttpRequest::Method::Post);
}

GetVideoModerationResultRequest::~GetVideoModerationResultRequest() {}

std::string GetVideoModerationResultRequest::getTaskId() const {
  return taskId_;
}

void GetVideoModerationResultRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setParameter(std::string("TaskId"), taskId);
}

std::string GetVideoModerationResultRequest::getProjectName() const {
  return projectName_;
}

void GetVideoModerationResultRequest::setProjectName(const std::string &projectName) {
  projectName_ = projectName;
  setParameter(std::string("ProjectName"), projectName);
}

std::string GetVideoModerationResultRequest::getTaskType() const {
  return taskType_;
}

void GetVideoModerationResultRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

