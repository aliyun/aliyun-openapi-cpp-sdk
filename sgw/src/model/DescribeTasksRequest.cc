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

#include <alibabacloud/sgw/model/DescribeTasksRequest.h>

using AlibabaCloud::Sgw::Model::DescribeTasksRequest;

DescribeTasksRequest::DescribeTasksRequest() :
	RpcServiceRequest("sgw", "2018-05-11", "DescribeTasks")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeTasksRequest::~DescribeTasksRequest()
{}

std::string DescribeTasksRequest::getTargetId()const
{
	return targetId_;
}

void DescribeTasksRequest::setTargetId(const std::string& targetId)
{
	targetId_ = targetId;
	setParameter("TargetId", targetId);
}

int DescribeTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeTasksRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeTasksRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

int DescribeTasksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeTasksRequest::getTaskId()const
{
	return taskId_;
}

void DescribeTasksRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

