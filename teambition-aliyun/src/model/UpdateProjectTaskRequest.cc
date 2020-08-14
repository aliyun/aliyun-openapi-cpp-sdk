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

#include <alibabacloud/teambition-aliyun/model/UpdateProjectTaskRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::UpdateProjectTaskRequest;

UpdateProjectTaskRequest::UpdateProjectTaskRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "UpdateProjectTask")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateProjectTaskRequest::~UpdateProjectTaskRequest()
{}

std::string UpdateProjectTaskRequest::getNote()const
{
	return note_;
}

void UpdateProjectTaskRequest::setNote(const std::string& note)
{
	note_ = note;
	setBodyParameter("Note", note);
}

std::string UpdateProjectTaskRequest::getVisible()const
{
	return visible_;
}

void UpdateProjectTaskRequest::setVisible(const std::string& visible)
{
	visible_ = visible;
	setBodyParameter("Visible", visible);
}

std::string UpdateProjectTaskRequest::getExecutorId()const
{
	return executorId_;
}

void UpdateProjectTaskRequest::setExecutorId(const std::string& executorId)
{
	executorId_ = executorId;
	setBodyParameter("ExecutorId", executorId);
}

std::string UpdateProjectTaskRequest::getTaskFlowStatusId()const
{
	return taskFlowStatusId_;
}

void UpdateProjectTaskRequest::setTaskFlowStatusId(const std::string& taskFlowStatusId)
{
	taskFlowStatusId_ = taskFlowStatusId;
	setBodyParameter("TaskFlowStatusId", taskFlowStatusId);
}

std::string UpdateProjectTaskRequest::getScenarioFiieldConfigId()const
{
	return scenarioFiieldConfigId_;
}

void UpdateProjectTaskRequest::setScenarioFiieldConfigId(const std::string& scenarioFiieldConfigId)
{
	scenarioFiieldConfigId_ = scenarioFiieldConfigId;
	setBodyParameter("ScenarioFiieldConfigId", scenarioFiieldConfigId);
}

std::string UpdateProjectTaskRequest::getStartDate()const
{
	return startDate_;
}

void UpdateProjectTaskRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setBodyParameter("StartDate", startDate);
}

int UpdateProjectTaskRequest::getPriority()const
{
	return priority_;
}

void UpdateProjectTaskRequest::setPriority(int priority)
{
	priority_ = priority;
	setBodyParameter("Priority", std::to_string(priority));
}

std::string UpdateProjectTaskRequest::getParentTaskId()const
{
	return parentTaskId_;
}

void UpdateProjectTaskRequest::setParentTaskId(const std::string& parentTaskId)
{
	parentTaskId_ = parentTaskId;
	setBodyParameter("ParentTaskId", parentTaskId);
}

std::string UpdateProjectTaskRequest::getOrgId()const
{
	return orgId_;
}

void UpdateProjectTaskRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

std::string UpdateProjectTaskRequest::getContent()const
{
	return content_;
}

void UpdateProjectTaskRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

std::string UpdateProjectTaskRequest::getSprintId()const
{
	return sprintId_;
}

void UpdateProjectTaskRequest::setSprintId(const std::string& sprintId)
{
	sprintId_ = sprintId;
	setBodyParameter("SprintId", sprintId);
}

std::string UpdateProjectTaskRequest::getDueDate()const
{
	return dueDate_;
}

void UpdateProjectTaskRequest::setDueDate(const std::string& dueDate)
{
	dueDate_ = dueDate;
	setBodyParameter("DueDate", dueDate);
}

std::string UpdateProjectTaskRequest::getProjectId()const
{
	return projectId_;
}

void UpdateProjectTaskRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::string UpdateProjectTaskRequest::getTaskId()const
{
	return taskId_;
}

void UpdateProjectTaskRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setBodyParameter("TaskId", taskId);
}

