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

#include <alibabacloud/devops-rdc/model/CreateDevopsProjectTaskRequest.h>

using AlibabaCloud::Devops_rdc::Model::CreateDevopsProjectTaskRequest;

CreateDevopsProjectTaskRequest::CreateDevopsProjectTaskRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "CreateDevopsProjectTask") {
  setMethod(HttpRequest::Method::Post);
}

CreateDevopsProjectTaskRequest::~CreateDevopsProjectTaskRequest() {}

std::string CreateDevopsProjectTaskRequest::getNote() const {
  return note_;
}

void CreateDevopsProjectTaskRequest::setNote(const std::string &note) {
  note_ = note;
  setBodyParameter(std::string("Note"), note);
}

std::string CreateDevopsProjectTaskRequest::getVisible() const {
  return visible_;
}

void CreateDevopsProjectTaskRequest::setVisible(const std::string &visible) {
  visible_ = visible;
  setBodyParameter(std::string("Visible"), visible);
}

std::string CreateDevopsProjectTaskRequest::getExecutorId() const {
  return executorId_;
}

void CreateDevopsProjectTaskRequest::setExecutorId(const std::string &executorId) {
  executorId_ = executorId;
  setBodyParameter(std::string("ExecutorId"), executorId);
}

std::string CreateDevopsProjectTaskRequest::getTaskFlowStatusId() const {
  return taskFlowStatusId_;
}

void CreateDevopsProjectTaskRequest::setTaskFlowStatusId(const std::string &taskFlowStatusId) {
  taskFlowStatusId_ = taskFlowStatusId;
  setBodyParameter(std::string("TaskFlowStatusId"), taskFlowStatusId);
}

std::string CreateDevopsProjectTaskRequest::getStartDate() const {
  return startDate_;
}

void CreateDevopsProjectTaskRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setBodyParameter(std::string("StartDate"), startDate);
}

int CreateDevopsProjectTaskRequest::getPriority() const {
  return priority_;
}

void CreateDevopsProjectTaskRequest::setPriority(int priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

std::string CreateDevopsProjectTaskRequest::getParentTaskId() const {
  return parentTaskId_;
}

void CreateDevopsProjectTaskRequest::setParentTaskId(const std::string &parentTaskId) {
  parentTaskId_ = parentTaskId;
  setBodyParameter(std::string("ParentTaskId"), parentTaskId);
}

std::string CreateDevopsProjectTaskRequest::getOrgId() const {
  return orgId_;
}

void CreateDevopsProjectTaskRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

std::string CreateDevopsProjectTaskRequest::getContent() const {
  return content_;
}

void CreateDevopsProjectTaskRequest::setContent(const std::string &content) {
  content_ = content;
  setBodyParameter(std::string("Content"), content);
}

std::string CreateDevopsProjectTaskRequest::getSprintId() const {
  return sprintId_;
}

void CreateDevopsProjectTaskRequest::setSprintId(const std::string &sprintId) {
  sprintId_ = sprintId;
  setBodyParameter(std::string("SprintId"), sprintId);
}

std::string CreateDevopsProjectTaskRequest::getDueDate() const {
  return dueDate_;
}

void CreateDevopsProjectTaskRequest::setDueDate(const std::string &dueDate) {
  dueDate_ = dueDate;
  setBodyParameter(std::string("DueDate"), dueDate);
}

std::string CreateDevopsProjectTaskRequest::getScenarioFieldConfigId() const {
  return scenarioFieldConfigId_;
}

void CreateDevopsProjectTaskRequest::setScenarioFieldConfigId(const std::string &scenarioFieldConfigId) {
  scenarioFieldConfigId_ = scenarioFieldConfigId;
  setBodyParameter(std::string("ScenarioFieldConfigId"), scenarioFieldConfigId);
}

std::string CreateDevopsProjectTaskRequest::getProjectId() const {
  return projectId_;
}

void CreateDevopsProjectTaskRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

std::string CreateDevopsProjectTaskRequest::getTaskListId() const {
  return taskListId_;
}

void CreateDevopsProjectTaskRequest::setTaskListId(const std::string &taskListId) {
  taskListId_ = taskListId;
  setBodyParameter(std::string("TaskListId"), taskListId);
}

