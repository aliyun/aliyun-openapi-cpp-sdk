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

#include <alibabacloud/scdn/model/DescribeScdnRefreshTasksRequest.h>

using AlibabaCloud::Scdn::Model::DescribeScdnRefreshTasksRequest;

DescribeScdnRefreshTasksRequest::DescribeScdnRefreshTasksRequest() :
	RpcServiceRequest("scdn", "2017-11-15", "DescribeScdnRefreshTasks")
{}

DescribeScdnRefreshTasksRequest::~DescribeScdnRefreshTasksRequest()
{}

std::string DescribeScdnRefreshTasksRequest::getObjectPath()const
{
	return objectPath_;
}

void DescribeScdnRefreshTasksRequest::setObjectPath(const std::string& objectPath)
{
	objectPath_ = objectPath;
	setCoreParameter("ObjectPath", std::to_string(objectPath));
}

std::string DescribeScdnRefreshTasksRequest::getDomainName()const
{
	return domainName_;
}

void DescribeScdnRefreshTasksRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", std::to_string(domainName));
}

std::string DescribeScdnRefreshTasksRequest::getEndTime()const
{
	return endTime_;
}

void DescribeScdnRefreshTasksRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeScdnRefreshTasksRequest::getStartTime()const
{
	return startTime_;
}

void DescribeScdnRefreshTasksRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeScdnRefreshTasksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeScdnRefreshTasksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeScdnRefreshTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeScdnRefreshTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeScdnRefreshTasksRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeScdnRefreshTasksRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", std::to_string(resourceGroupId));
}

std::string DescribeScdnRefreshTasksRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeScdnRefreshTasksRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

int DescribeScdnRefreshTasksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeScdnRefreshTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeScdnRefreshTasksRequest::getObjectType()const
{
	return objectType_;
}

void DescribeScdnRefreshTasksRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setCoreParameter("ObjectType", std::to_string(objectType));
}

std::string DescribeScdnRefreshTasksRequest::getTaskId()const
{
	return taskId_;
}

void DescribeScdnRefreshTasksRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", std::to_string(taskId));
}

std::string DescribeScdnRefreshTasksRequest::getStatus()const
{
	return status_;
}

void DescribeScdnRefreshTasksRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", std::to_string(status));
}

