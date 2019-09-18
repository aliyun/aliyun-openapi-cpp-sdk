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

#include <alibabacloud/dcdn/model/DescribeDcdnRefreshTasksRequest.h>

using AlibabaCloud::Dcdn::Model::DescribeDcdnRefreshTasksRequest;

DescribeDcdnRefreshTasksRequest::DescribeDcdnRefreshTasksRequest() :
	RpcServiceRequest("dcdn", "2018-01-15", "DescribeDcdnRefreshTasks")
{}

DescribeDcdnRefreshTasksRequest::~DescribeDcdnRefreshTasksRequest()
{}

std::string DescribeDcdnRefreshTasksRequest::getObjectPath()const
{
	return objectPath_;
}

void DescribeDcdnRefreshTasksRequest::setObjectPath(const std::string& objectPath)
{
	objectPath_ = objectPath;
	setCoreParameter("ObjectPath", objectPath);
}

std::string DescribeDcdnRefreshTasksRequest::getStartTime()const
{
	return startTime_;
}

void DescribeDcdnRefreshTasksRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int DescribeDcdnRefreshTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeDcdnRefreshTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeDcdnRefreshTasksRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void DescribeDcdnRefreshTasksRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string DescribeDcdnRefreshTasksRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeDcdnRefreshTasksRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

int DescribeDcdnRefreshTasksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeDcdnRefreshTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeDcdnRefreshTasksRequest::getObjectType()const
{
	return objectType_;
}

void DescribeDcdnRefreshTasksRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setCoreParameter("ObjectType", objectType);
}

std::string DescribeDcdnRefreshTasksRequest::getTaskId()const
{
	return taskId_;
}

void DescribeDcdnRefreshTasksRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setCoreParameter("TaskId", taskId);
}

std::string DescribeDcdnRefreshTasksRequest::getDomainName()const
{
	return domainName_;
}

void DescribeDcdnRefreshTasksRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setCoreParameter("DomainName", domainName);
}

std::string DescribeDcdnRefreshTasksRequest::getEndTime()const
{
	return endTime_;
}

void DescribeDcdnRefreshTasksRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeDcdnRefreshTasksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeDcdnRefreshTasksRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeDcdnRefreshTasksRequest::getStatus()const
{
	return status_;
}

void DescribeDcdnRefreshTasksRequest::setStatus(const std::string& status)
{
	status_ = status;
	setCoreParameter("Status", status);
}

