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

#include <alibabacloud/teambition-aliyun/model/UpdateProjectSprintRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::UpdateProjectSprintRequest;

UpdateProjectSprintRequest::UpdateProjectSprintRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "UpdateProjectSprint")
{
	setMethod(HttpRequest::Method::Post);
}

UpdateProjectSprintRequest::~UpdateProjectSprintRequest()
{}

std::string UpdateProjectSprintRequest::getExecutorId()const
{
	return executorId_;
}

void UpdateProjectSprintRequest::setExecutorId(const std::string& executorId)
{
	executorId_ = executorId;
	setBodyParameter("ExecutorId", executorId);
}

std::string UpdateProjectSprintRequest::getDescription()const
{
	return description_;
}

void UpdateProjectSprintRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string UpdateProjectSprintRequest::getStartDate()const
{
	return startDate_;
}

void UpdateProjectSprintRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setBodyParameter("StartDate", startDate);
}

std::string UpdateProjectSprintRequest::getOrgId()const
{
	return orgId_;
}

void UpdateProjectSprintRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

std::string UpdateProjectSprintRequest::getSprintId()const
{
	return sprintId_;
}

void UpdateProjectSprintRequest::setSprintId(const std::string& sprintId)
{
	sprintId_ = sprintId;
	setBodyParameter("SprintId", sprintId);
}

std::string UpdateProjectSprintRequest::getDueDate()const
{
	return dueDate_;
}

void UpdateProjectSprintRequest::setDueDate(const std::string& dueDate)
{
	dueDate_ = dueDate;
	setBodyParameter("DueDate", dueDate);
}

std::string UpdateProjectSprintRequest::getName()const
{
	return name_;
}

void UpdateProjectSprintRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string UpdateProjectSprintRequest::getProjectId()const
{
	return projectId_;
}

void UpdateProjectSprintRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

