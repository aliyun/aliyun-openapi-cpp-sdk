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

#include <alibabacloud/dataworks-public/model/ListDISyncTasksRequest.h>

using AlibabaCloud::Dataworks_public::Model::ListDISyncTasksRequest;

ListDISyncTasksRequest::ListDISyncTasksRequest() :
	RpcServiceRequest("dataworks-public", "2020-05-18", "ListDISyncTasks")
{
	setMethod(HttpRequest::Method::Post);
}

ListDISyncTasksRequest::~ListDISyncTasksRequest()
{}

std::string ListDISyncTasksRequest::getTaskType()const
{
	return taskType_;
}

void ListDISyncTasksRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setParameter("TaskType", taskType);
}

long ListDISyncTasksRequest::getPageSize()const
{
	return pageSize_;
}

void ListDISyncTasksRequest::setPageSize(long pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long ListDISyncTasksRequest::getProjectId()const
{
	return projectId_;
}

void ListDISyncTasksRequest::setProjectId(long projectId)
{
	projectId_ = projectId;
	setParameter("ProjectId", std::to_string(projectId));
}

long ListDISyncTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void ListDISyncTasksRequest::setPageNumber(long pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

