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

#include <alibabacloud/devops-rdc/model/GetTaskDetailActivityRequest.h>

using AlibabaCloud::Devops_rdc::Model::GetTaskDetailActivityRequest;

GetTaskDetailActivityRequest::GetTaskDetailActivityRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "GetTaskDetailActivity") {
  setMethod(HttpRequest::Method::Post);
}

GetTaskDetailActivityRequest::~GetTaskDetailActivityRequest() {}

std::string GetTaskDetailActivityRequest::getProjectId() const {
  return projectId_;
}

void GetTaskDetailActivityRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

std::string GetTaskDetailActivityRequest::getOrgId() const {
  return orgId_;
}

void GetTaskDetailActivityRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

std::string GetTaskDetailActivityRequest::getTaskId() const {
  return taskId_;
}

void GetTaskDetailActivityRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setBodyParameter(std::string("TaskId"), taskId);
}

