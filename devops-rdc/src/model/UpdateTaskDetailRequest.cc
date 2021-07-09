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

#include <alibabacloud/devops-rdc/model/UpdateTaskDetailRequest.h>

using AlibabaCloud::Devops_rdc::Model::UpdateTaskDetailRequest;

UpdateTaskDetailRequest::UpdateTaskDetailRequest()
    : RpcServiceRequest("devops-rdc", "2020-03-03", "UpdateTaskDetail") {
  setMethod(HttpRequest::Method::Post);
}

UpdateTaskDetailRequest::~UpdateTaskDetailRequest() {}

std::string UpdateTaskDetailRequest::getNote() const {
  return note_;
}

void UpdateTaskDetailRequest::setNote(const std::string &note) {
  note_ = note;
  setBodyParameter(std::string("Note"), note);
}

std::string UpdateTaskDetailRequest::getExecutorId() const {
  return executorId_;
}

void UpdateTaskDetailRequest::setExecutorId(const std::string &executorId) {
  executorId_ = executorId;
  setBodyParameter(std::string("ExecutorId"), executorId);
}

std::string UpdateTaskDetailRequest::getStartDate() const {
  return startDate_;
}

void UpdateTaskDetailRequest::setStartDate(const std::string &startDate) {
  startDate_ = startDate;
  setBodyParameter(std::string("StartDate"), startDate);
}

std::string UpdateTaskDetailRequest::getDelInvolvers() const {
  return delInvolvers_;
}

void UpdateTaskDetailRequest::setDelInvolvers(const std::string &delInvolvers) {
  delInvolvers_ = delInvolvers;
  setBodyParameter(std::string("DelInvolvers"), delInvolvers);
}

std::string UpdateTaskDetailRequest::getContent() const {
  return content_;
}

void UpdateTaskDetailRequest::setContent(const std::string &content) {
  content_ = content;
  setBodyParameter(std::string("Content"), content);
}

std::string UpdateTaskDetailRequest::getSprintId() const {
  return sprintId_;
}

void UpdateTaskDetailRequest::setSprintId(const std::string &sprintId) {
  sprintId_ = sprintId;
  setBodyParameter(std::string("SprintId"), sprintId);
}

std::string UpdateTaskDetailRequest::getCustomFieldId() const {
  return customFieldId_;
}

void UpdateTaskDetailRequest::setCustomFieldId(const std::string &customFieldId) {
  customFieldId_ = customFieldId;
  setBodyParameter(std::string("CustomFieldId"), customFieldId);
}

std::string UpdateTaskDetailRequest::getProjectId() const {
  return projectId_;
}

void UpdateTaskDetailRequest::setProjectId(const std::string &projectId) {
  projectId_ = projectId;
  setBodyParameter(std::string("ProjectId"), projectId);
}

std::string UpdateTaskDetailRequest::getTaskId() const {
  return taskId_;
}

void UpdateTaskDetailRequest::setTaskId(const std::string &taskId) {
  taskId_ = taskId;
  setBodyParameter(std::string("TaskId"), taskId);
}

std::string UpdateTaskDetailRequest::getTaskFlowStatusId() const {
  return taskFlowStatusId_;
}

void UpdateTaskDetailRequest::setTaskFlowStatusId(const std::string &taskFlowStatusId) {
  taskFlowStatusId_ = taskFlowStatusId;
  setBodyParameter(std::string("TaskFlowStatusId"), taskFlowStatusId);
}

std::string UpdateTaskDetailRequest::getTagIds() const {
  return tagIds_;
}

void UpdateTaskDetailRequest::setTagIds(const std::string &tagIds) {
  tagIds_ = tagIds;
  setBodyParameter(std::string("TagIds"), tagIds);
}

std::string UpdateTaskDetailRequest::getAddInvolvers() const {
  return addInvolvers_;
}

void UpdateTaskDetailRequest::setAddInvolvers(const std::string &addInvolvers) {
  addInvolvers_ = addInvolvers;
  setBodyParameter(std::string("AddInvolvers"), addInvolvers);
}

long UpdateTaskDetailRequest::getPriority() const {
  return priority_;
}

void UpdateTaskDetailRequest::setPriority(long priority) {
  priority_ = priority;
  setBodyParameter(std::string("Priority"), std::to_string(priority));
}

std::string UpdateTaskDetailRequest::getOrgId() const {
  return orgId_;
}

void UpdateTaskDetailRequest::setOrgId(const std::string &orgId) {
  orgId_ = orgId;
  setBodyParameter(std::string("OrgId"), orgId);
}

std::string UpdateTaskDetailRequest::getDueDate() const {
  return dueDate_;
}

void UpdateTaskDetailRequest::setDueDate(const std::string &dueDate) {
  dueDate_ = dueDate;
  setBodyParameter(std::string("DueDate"), dueDate);
}

long UpdateTaskDetailRequest::getWorkTimes() const {
  return workTimes_;
}

void UpdateTaskDetailRequest::setWorkTimes(long workTimes) {
  workTimes_ = workTimes;
  setBodyParameter(std::string("WorkTimes"), std::to_string(workTimes));
}

std::string UpdateTaskDetailRequest::getStoryPoint() const {
  return storyPoint_;
}

void UpdateTaskDetailRequest::setStoryPoint(const std::string &storyPoint) {
  storyPoint_ = storyPoint;
  setBodyParameter(std::string("StoryPoint"), storyPoint);
}

std::string UpdateTaskDetailRequest::getCustomFieldValues() const {
  return customFieldValues_;
}

void UpdateTaskDetailRequest::setCustomFieldValues(const std::string &customFieldValues) {
  customFieldValues_ = customFieldValues;
  setBodyParameter(std::string("CustomFieldValues"), customFieldValues);
}

