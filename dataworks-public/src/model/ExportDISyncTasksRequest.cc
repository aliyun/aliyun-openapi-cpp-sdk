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

#include <alibabacloud/dataworks-public/model/ExportDISyncTasksRequest.h>

using AlibabaCloud::Dataworks_public::Model::ExportDISyncTasksRequest;

ExportDISyncTasksRequest::ExportDISyncTasksRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ExportDISyncTasks")
{
	setMethod(HttpRequest::Method::Post);
}

ExportDISyncTasksRequest::~ExportDISyncTasksRequest()
{}

std::string ExportDISyncTasksRequest::getTaskType()const
{
	return taskType_;
}

void ExportDISyncTasksRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setParameter("TaskType", taskType);
}

std::string ExportDISyncTasksRequest::getTaskParam()const
{
	return taskParam_;
}

void ExportDISyncTasksRequest::setTaskParam(const std::string& taskParam)
{
	taskParam_ = taskParam;
	setParameter("TaskParam", taskParam);
}

long ExportDISyncTasksRequest::getProjectId()const
{
	return projectId_;
}

void ExportDISyncTasksRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

