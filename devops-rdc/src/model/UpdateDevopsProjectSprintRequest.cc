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

#include <alibabacloud/devops-rdc/model/UpdateDevopsProjectSprintRequest.h>

using AlibabaCloud::Devops_rdc::Model::UpdateDevopsProjectSprintRequest;

UpdateDevopsProjectSprintRequest::UpdateDevopsProjectSprintRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "UpdateDevopsProjectSprint") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDevopsProjectSprintRequest::~UpdateDevopsProjectSprintRequest() {}

std::string UpdateDevopsProjectSprintRequest::getExecutorId() const {
  return executorId_;
}

void UpdateDevopsProjectSprintRequest::setExecutorId(const std::string &executorId) {
  executorId_ = executorId;
  setBodyParameter(std::string("ExecutorId"), executorId);
}

std::string UpdateDevopsProjectSprintRequest::getDescription() const {
  return description_;
}

void UpdateDevopsProjectSprintRequest::setDescription(const std::string &description) {
  description_ = description;
  setBodyParameter(std::string("Description"), description);
}

std::string UpdateDevopsProjectSprintRequest::getStartDate() const {
  return startDate_;
}

void UpdateDevopsProjectSprintRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setBodyParameter(std::string("StartDate"), startDate);
}

std::string UpdateDevopsProjectSprintRequest::getOrgId() const {
  return orgId_;
}

void UpdateDevopsProjectSprintRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

std::string UpdateDevopsProjectSprintRequest::getSprintId() const {
  return sprintId_;
}

void UpdateDevopsProjectSprintRequest::setSprintId(const std::string &sprintId) {
  sprintId_ = sprintId;
  setBodyParameter(std::string("SprintId"), sprintId);
}

std::string UpdateDevopsProjectSprintRequest::getDueDate() const {
  return dueDate_;
}

void UpdateDevopsProjectSprintRequest::setDueDate(const std::string &dueDate) {
  dueDate_ = dueDate;
  setBodyParameter(std::string("DueDate"), dueDate);
}

std::string UpdateDevopsProjectSprintRequest::getName() const {
  return name_;
}

void UpdateDevopsProjectSprintRequest::setName(const std::string &name) {
  name_ = name;
  setBodyParameter(std::string("Name"), name);
}

std::string UpdateDevopsProjectSprintRequest::getProjectId() const {
  return projectId_;
}

void UpdateDevopsProjectSprintRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

