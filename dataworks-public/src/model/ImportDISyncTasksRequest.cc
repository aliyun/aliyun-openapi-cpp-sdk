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

#include <alibabacloud/dataworks-public/model/ImportDISyncTasksRequest.h>

using AlibabaCloud::Dataworks_public::Model::ImportDISyncTasksRequest;

ImportDISyncTasksRequest::ImportDISyncTasksRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ImportDISyncTasks")
{
	setMethod(HttpRequest::Method::Post);
}

ImportDISyncTasksRequest::~ImportDISyncTasksRequest()
{}

std::string ImportDISyncTasksRequest::getTaskType()const
{
	return taskType_;
}

void ImportDISyncTasksRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setParameter("TaskType", taskType);
}

std::string ImportDISyncTasksRequest::getTaskParam()const
{
	return taskParam_;
}

void ImportDISyncTasksRequest::setTaskParam(const std::string& taskParam)
{
	taskParam_ = taskParam;
	setParameter("TaskParam", taskParam);
}

std::string ImportDISyncTasksRequest::getBody()const
{
	return body_;
}

void ImportDISyncTasksRequest::setBody(const std::string& body)
{
	body_ = body;
	setBodyParameter("Body", body);
}

long ImportDISyncTasksRequest::getProjectId()const
{
	return projectId_;
}

void ImportDISyncTasksRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

