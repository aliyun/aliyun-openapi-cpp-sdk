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

#include <alibabacloud/teambition-aliyun/model/CreateProjectSprintRequest.h>

using AlibabaCloud::Teambition_aliyun::Model::CreateProjectSprintRequest;

CreateProjectSprintRequest::CreateProjectSprintRequest() :
	RpcServiceRequest("teambition-aliyun", "2020-02-26", "CreateProjectSprint")
{
	setMethod(HttpRequest::Method::Post);
}

CreateProjectSprintRequest::~CreateProjectSprintRequest()
{}

std::string CreateProjectSprintRequest::getExecutorId()const
{
	return executorId_;
}

void CreateProjectSprintRequest::setExecutorId(const std::string& executorId)
{
	executorId_ = executorId;
	setBodyParameter("ExecutorId", executorId);
}

std::string CreateProjectSprintRequest::getDescription()const
{
	return description_;
}

void CreateProjectSprintRequest::setDescription(const std::string& description)
{
	description_ = description;
	setBodyParameter("Description", description);
}

std::string CreateProjectSprintRequest::getStartDate()const
{
	return startDate_;
}

void CreateProjectSprintRequest::setStartDate(const std::string& startDate)
{
	startDate_ = startDate;
	setBodyParameter("StartDate", startDate);
}

std::string CreateProjectSprintRequest::getOrgId()const
{
	return orgId_;
}

void CreateProjectSprintRequest::setOrgId(const std::string& orgId)
{
	orgId_ = orgId;
	setBodyParameter("OrgId", orgId);
}

std::string CreateProjectSprintRequest::getDueDate()const
{
	return dueDate_;
}

void CreateProjectSprintRequest::setDueDate(const std::string& dueDate)
{
	dueDate_ = dueDate;
	setBodyParameter("DueDate", dueDate);
}

std::string CreateProjectSprintRequest::getName()const
{
	return name_;
}

void CreateProjectSprintRequest::setName(const std::string& name)
{
	name_ = name;
	setBodyParameter("Name", name);
}

std::string CreateProjectSprintRequest::getProjectId()const
{
	return projectId_;
}

void CreateProjectSprintRequest::setProjectId(const std::string& projectId)
{
	projectId_ = projectId;
	setBodyParameter("ProjectId", projectId);
}

