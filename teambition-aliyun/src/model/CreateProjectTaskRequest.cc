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

#include <alibabacloud/teambition-aliyun/model/CreateProjectTaskRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::CreateProjectTaskRequest;

CreateProjectTaskRequest::CreateProjectTaskRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "CreateProjectTask")
{
	setMethod(HttpRequest::Method::Post);
}

CreateProjectTaskRequest::~CreateProjectTaskRequest()
{}

std::string CreateProjectTaskRequest::getNote()const
{
	return note_;
}

void CreateProjectTaskRequest::setNote(const std::string& note)
{
	note_ = note;
	setBodyParameter("Note", note);
}

std::string CreateProjectTaskRequest::getVisible()const
{
	return visible_;
}

void CreateProjectTaskRequest::setVisible(const std::string& visible)
{
	visible_ = visible;
	setBodyParameter("Visible", visible);
}

std::string CreateProjectTaskRequest::getExecutorId()const
{
	return executorId_;
}

void CreateProjectTaskRequest::setExecutorId(const std::string& executorId)
{
	executorId_ = executorId;
	setBodyParameter("ExecutorId", executorId);
}

std::string CreateProjectTaskRequest::getTaskFlowStatusId()const
{
	return taskFlowStatusId_;
}

void CreateProjectTaskRequest::setTaskFlowStatusId(const std::string& taskFlowStatusId)
{
	taskFlowStatusId_ = taskFlowStatusId;
	setBodyParameter("TaskFlowStatusId", taskFlowStatusId);
}

std::string CreateProjectTaskRequest::getStartDate()const
{
	return startDate_;
}

void CreateProjectTaskRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setBodyParameter("StartDate", startDate);
}

int CreateProjectTaskRequest::getPriority()const
{
	return priority_;
}

void CreateProjectTaskRequest::setPriority(int priority)
{
	priority_ = priority;
	setBodyParameter("Priority", std::to_string(priority));
}

std::string CreateProjectTaskRequest::getParentTaskId()const
{
	return parentTaskId_;
}

void CreateProjectTaskRequest::setParentTaskId(const std::string& parentTaskId)
{
	parentTaskId_ = parentTaskId;
	setBodyParameter("ParentTaskId", parentTaskId);
}

std::string CreateProjectTaskRequest::getOrgId()const
{
	return orgId_;
}

void CreateProjectTaskRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

std::string CreateProjectTaskRequest::getContent()const
{
	return content_;
}

void CreateProjectTaskRequest::setContent(const std::string& content)
{
	content_ = content;
	setBodyParameter("Content", content);
}

std::string CreateProjectTaskRequest::getSprintId()const
{
	return sprintId_;
}

void CreateProjectTaskRequest::setSprintId(const std::string& sprintId)
{
	sprintId_ = sprintId;
	setBodyParameter("SprintId", sprintId);
}

std::string CreateProjectTaskRequest::getDueDate()const
{
	return dueDate_;
}

void CreateProjectTaskRequest::setDueDate(const std::string& dueDate)
{
	dueDate_ = dueDate;
	setBodyParameter("DueDate", dueDate);
}

std::string CreateProjectTaskRequest::getScenarioFieldConfigId()const
{
	return scenarioFieldConfigId_;
}

void CreateProjectTaskRequest::setScenarioFieldConfigId(const std::string& scenarioFieldConfigId)
{
	scenarioFieldConfigId_ = scenarioFieldConfigId;
	setBodyParameter("ScenarioFieldConfigId", scenarioFieldConfigId);
}

std::string CreateProjectTaskRequest::getProjectId()const
{
	return projectId_;
}

void CreateProjectTaskRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

std::string CreateProjectTaskRequest::getTaskListId()const
{
	return taskListId_;
}

void CreateProjectTaskRequest::setTaskListId(const std::string& taskListId)
{
	taskListId_ = taskListId;
	setBodyParameter("TaskListId", taskListId);
}

