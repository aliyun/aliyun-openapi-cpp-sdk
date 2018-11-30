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

#include <alibabacloud/vod/model/DescribeRefreshTasksRequest.h>

using AlibabaCloud::Vod::Model::DescribeRefreshTasksRequest;

DescribeRefreshTasksRequest::DescribeRefreshTasksRequest() :
	RpcServiceRequest("vod", "2017-03-21", "DescribeRefreshTasks")
{}

DescribeRefreshTasksRequest::~DescribeRefreshTasksRequest()
{}

std::string DescribeRefreshTasksRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeRefreshTasksRequest::setResourceOwnerId(const std::string& resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeRefreshTasksRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeRefreshTasksRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeRefreshTasksRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeRefreshTasksRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeRefreshTasksRequest::getObjectPath()const
{
	return objectPath_;
}

void DescribeRefreshTasksRequest::setObjectPath(const std::string& objectPath)
{
	objectPath_ = objectPath;
	setParameter("ObjectPath", objectPath);
}

std::string DescribeRefreshTasksRequest::getDomainName()const
{
	return domainName_;
}

void DescribeRefreshTasksRequest::setDomainName(const std::string& domainName)
{
	domainName_ = domainName;
	setParameter("DomainName", domainName);
}

std::string DescribeRefreshTasksRequest::getEndTime()const
{
	return endTime_;
}

void DescribeRefreshTasksRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeRefreshTasksRequest::getStartTime()const
{
	return startTime_;
}

void DescribeRefreshTasksRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string DescribeRefreshTasksRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeRefreshTasksRequest::setOwnerId(const std::string& ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", ownerId);
}

int DescribeRefreshTasksRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeRefreshTasksRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeRefreshTasksRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeRefreshTasksRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

int DescribeRefreshTasksRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeRefreshTasksRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeRefreshTasksRequest::getObjectType()const
{
	return objectType_;
}

void DescribeRefreshTasksRequest::setObjectType(const std::string& objectType)
{
	objectType_ = objectType;
	setParameter("ObjectType", objectType);
}

std::string DescribeRefreshTasksRequest::getTaskId()const
{
	return taskId_;
}

void DescribeRefreshTasksRequest::setTaskId(const std::string& taskId)
{
	taskId_ = taskId;
	setParameter("TaskId", taskId);
}

std::string DescribeRefreshTasksRequest::getStatus()const
{
	return status_;
}

void DescribeRefreshTasksRequest::setStatus(const std::string& status)
{
	status_ = status;
	setParameter("Status", status);
}

