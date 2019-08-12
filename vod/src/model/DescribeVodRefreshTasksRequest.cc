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

#include <alibabacloud/vod/model/DescribeVodRefreshTasksRequest.h>

using AlibabaCloud::Vod::Model::DescribeVodRefreshTasksRequest;

DescribeVodRefreshTasksRequest::DescribeVodRefreshTasksRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeVodRefreshTasks")
{}

DescribeVodRefreshTasksRequest::~DescribeVodRefreshTasksRequest()
{}

std::string DescribeVodRefreshTasksRequest::getObjectPath()const
{
	return objectPath_;
}

void DescribeVodRefreshTasksRequest::setObjectPath(const std::string& objectPath)
{
	objectPath_ = objectPath;
	setCoreParameter("ObjectPath", objectPath);
}

std::string DescribeVodRefreshTasksRequest::getDomainName()const
{
	return domainName_;
}

void DescribeVodRefreshTasksRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeVodRefreshTasksRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVodRefreshTasksRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

std::string DescribeVodRefreshTasksRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVodRefreshTasksRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

long DescribeVodRefreshTasksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVodRefreshTasksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int DescribeVodRefreshTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVodRefreshTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVodRefreshTasksRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeVodRefreshTasksRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeVodRefreshTasksRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVodRefreshTasksRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

int DescribeVodRefreshTasksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVodRefreshTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVodRefreshTasksRequest::getObjectType()const
{
	return objectType_;
}

void DescribeVodRefreshTasksRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setCoreParameter("ObjectType", objectType);
}

std::string DescribeVodRefreshTasksRequest::getTaskId()const
{
	return taskId_;
}

void DescribeVodRefreshTasksRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string DescribeVodRefreshTasksRequest::getStatus()const
{
	return status_;
}

void DescribeVodRefreshTasksRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

