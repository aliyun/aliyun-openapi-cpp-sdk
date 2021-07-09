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

#include <alibabacloud/devops-rdc/model/UpdateDevopsProjectTaskRequest.h>

using AlibabaCloud::Devops_rdc::Model::UpdateDevopsProjectTaskRequest;

UpdateDevopsProjectTaskRequest::UpdateDevopsProjectTaskRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "UpdateDevopsProjectTask") {
  setMethod(HttpRequest::Method::Post);
}

UpdateDevopsProjectTaskRequest::~UpdateDevopsProjectTaskRequest() {}

std::string UpdateDevopsProjectTaskRequest::getNote() const {
  return note_;
}

void UpdateDevopsProjectTaskRequest::setNote(const std::string &note) {
  note_ = note;
  setBodyParameter(std::string("Note"), note);
}

std::string UpdateDevopsProjectTaskRequest::getVisible() const {
  return visible_;
}

void UpdateDevopsProjectTaskRequest::setVisible(const std::string &visible) {
  visible_ = visible;
  setBodyParameter(std::string("Visible"), visible);
}

std::string UpdateDevopsProjectTaskRequest::getExecutorId() const {
  return executorId_;
}

void UpdateDevopsProjectTaskRequest::setExecutorId(const std::string &executorId) {
  executorId_ = executorId;
  setBodyParameter(std::string("ExecutorId"), executorId);
}

std::string UpdateDevopsProjectTaskRequest::getTaskFlowStatusId() const {
  return taskFlowStatusId_;
}

void UpdateDevopsProjectTaskRequest::setTaskFlowStatusId(const std::string &taskFlowStatusId) {
  taskFlowStatusId_ = taskFlowStatusId;
  setBodyParameter(std::string("TaskFlowStatusId"), taskFlowStatusId);
}

std::string UpdateDevopsProjectTaskRequest::getScenarioFiieldConfigId() const {
  return scenarioFiieldConfigId_;
}

void UpdateDevopsProjectTaskRequest::setScenarioFiieldConfigId(const std::string &scenarioFiieldConfigId) {
  scenarioFiieldConfigId_ = scenarioFiieldConfigId;
  setBodyParameter(std::string("ScenarioFiieldConfigId"), scenarioFiieldConfigId);
}

std::string UpdateDevopsProjectTaskRequest::getStartDate() const {
  return startDate_;
}

void UpdateDevopsProjectTaskRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setBodyParameter(std::string("StartDate"), startDate);
}

int UpdateDevopsProjectTaskRequest::getPriority() const {
  return priority_;
}

void UpdateDevopsProjectTaskRequest::setPriority(int priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

std::string UpdateDevopsProjectTaskRequest::getParentTaskId() const {
  return parentTaskId_;
}

void UpdateDevopsProjectTaskRequest::setParentTaskId(const std::string &parentTaskId) {
  parentTaskId_ = parentTaskId;
  setBodyParameter(std::string("ParentTaskId"), parentTaskId);
}

std::string UpdateDevopsProjectTaskRequest::getOrgId() const {
  return orgId_;
}

void UpdateDevopsProjectTaskRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

std::string UpdateDevopsProjectTaskRequest::getContent() const {
  return content_;
}

void UpdateDevopsProjectTaskRequest::setContent(const std::string &content) {
  content_ = content;
  setBodyParameter(std::string("Content"), content);
}

std::string UpdateDevopsProjectTaskRequest::getSprintId() const {
  return sprintId_;
}

void UpdateDevopsProjectTaskRequest::setSprintId(const std::string &sprintId) {
  sprintId_ = sprintId;
  setBodyParameter(std::string("SprintId"), sprintId);
}

std::string UpdateDevopsProjectTaskRequest::getDueDate() const {
  return dueDate_;
}

void UpdateDevopsProjectTaskRequest::setDueDate(const std::string &dueDate) {
  dueDate_ = dueDate;
  setBodyParameter(std::string("DueDate"), dueDate);
}

std::string UpdateDevopsProjectTaskRequest::getProjectId() const {
  return projectId_;
}

void UpdateDevopsProjectTaskRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

std::string UpdateDevopsProjectTaskRequest::getTaskId() const {
  return taskId_;
}

void UpdateDevopsProjectTaskRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setBodyParameter(std::string("TaskId"), taskId);
}

