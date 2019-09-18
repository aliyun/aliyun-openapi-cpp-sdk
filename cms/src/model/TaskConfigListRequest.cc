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

#include <alibabacloud/cms/model/TaskConfigListRequest.h>

using AlibabaCloud::Cms::Model::TaskConfigListRequest;

TaskConfigListRequest::TaskConfigListRequest() :
	RpcServiceRequest("cms", "2018-03-08", "TaskConfigList")
{}

TaskConfigListRequest::~TaskConfigListRequest()
{}

long TaskConfigListRequest::getGroupId()const
{
	return groupId_;
}

void TaskConfigListRequest::setGroupId(long groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

std::string TaskConfigListRequest::getTaskName()const
{
	return taskName_;
}

void TaskConfigListRequest::setTaskName(const std::string& taskName)
{
	taskName_ = taskName;
	setCoreParameter("TaskName", taskName);
}

int TaskConfigListRequest::getPageNumber()const
{
	return pageNumber_;
}

void TaskConfigListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

int TaskConfigListRequest::getPageSize()const
{
	return pageSize_;
}

void TaskConfigListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

long TaskConfigListRequest::getId()const
{
	return id_;
}

void TaskConfigListRequest::setId(long id)
{
	id_ = id;
	setCoreParameter("Id", std::to_string(id));
}

