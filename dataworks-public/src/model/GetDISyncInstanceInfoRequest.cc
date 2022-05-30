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

#include <alibabacloud/dataworks-public/model/GetDISyncInstanceInfoRequest.h>

using AlibabaCloud::Dataworks_public::Model::GetDISyncInstanceInfoRequest;

GetDISyncInstanceInfoRequest::GetDISyncInstanceInfoRequest()
    : RpcServiceRequest("dataworks-public", "2020-05-18", "GetDISyncInstanceInfo") {
  setMethod(HttpRequest::Method::Post);
}

GetDISyncInstanceInfoRequest::~GetDISyncInstanceInfoRequest() {}

std::string GetDISyncInstanceInfoRequest::getTaskType() const {
  return taskType_;
}

void GetDISyncInstanceInfoRequest::setTaskType(const std::string &taskType) {
  taskType_ = taskType;
  setParameter(std::string("TaskType"), taskType);
}

long GetDISyncInstanceInfoRequest::getProjectId() const {
  return projectId_;
}

void GetDISyncInstanceInfoRequest::setProjectId(long projectId) {
  projectId_ = projectId;
  setParameter(std::string("ProjectId"), std::to_string(projectId));
}

long GetDISyncInstanceInfoRequest::getFileId() const {
  return fileId_;
}

void GetDISyncInstanceInfoRequest::setFileId(long fileId) {
  fileId_ = fileId;
  setParameter(std::string("FileId"), std::to_string(fileId));
}

