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

#include <alibabacloud/ons/model/OnsDLQMessagePageQueryByGroupIdRequest.h>

using AlibabaCloud::Ons::Model::OnsDLQMessagePageQueryByGroupIdRequest;

OnsDLQMessagePageQueryByGroupIdRequest::OnsDLQMessagePageQueryByGroupIdRequest() :
	RpcServiceRequest("ons", "2019-02-14", "OnsDLQMessagePageQueryByGroupId")
{}

OnsDLQMessagePageQueryByGroupIdRequest::~OnsDLQMessagePageQueryByGroupIdRequest()
{}

std::string OnsDLQMessagePageQueryByGroupIdRequest::getInstanceId()const
{
	return instanceId_;
}

void OnsDLQMessagePageQueryByGroupIdRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string OnsDLQMessagePageQueryByGroupIdRequest::getGroupId()const
{
	return groupId_;
}

void OnsDLQMessagePageQueryByGroupIdRequest::setGroupId(const std::string& groupId)
{
	groupId_ = groupId;
	setCoreParameter("GroupId", std::to_string(groupId));
}

int OnsDLQMessagePageQueryByGroupIdRequest::getPageSize()const
{
	return pageSize_;
}

void OnsDLQMessagePageQueryByGroupIdRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

long OnsDLQMessagePageQueryByGroupIdRequest::getEndTime()const
{
	return endTime_;
}

void OnsDLQMessagePageQueryByGroupIdRequest::setEndTime(long endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long OnsDLQMessagePageQueryByGroupIdRequest::getBeginTime()const
{
	return beginTime_;
}

void OnsDLQMessagePageQueryByGroupIdRequest::setBeginTime(long beginTime)
{
	beginTime_ = beginTime;
	setCoreParameter("BeginTime", beginTime);
}

int OnsDLQMessagePageQueryByGroupIdRequest::getCurrentPage()const
{
	return currentPage_;
}

void OnsDLQMessagePageQueryByGroupIdRequest::setCurrentPage(int currentPage)
{
	currentPage_ = currentPage;
	setCoreParameter("CurrentPage", currentPage);
}

std::string OnsDLQMessagePageQueryByGroupIdRequest::getTaskId()const
{
	return taskId_;
}

void OnsDLQMessagePageQueryByGroupIdRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

