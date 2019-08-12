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

#include <alibabacloud/dds/model/DescribeActiveOperationTaskRequest.h>

using AlibabaCloud::Dds::Model::DescribeActiveOperationTaskRequest;

DescribeActiveOperationTaskRequest::DescribeActiveOperationTaskRequest() :
	RpcServiceRequest("dds", "2015-12-01", "DescribeActiveOperationTask")
{}

DescribeActiveOperationTaskRequest::~DescribeActiveOperationTaskRequest()
{}

long DescribeActiveOperationTaskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeActiveOperationTaskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeActiveOperationTaskRequest::getTaskType()const
{
	return taskType_;
}

void DescribeActiveOperationTaskRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setCoreParameter("TaskType", taskType);
}

std::string DescribeActiveOperationTaskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeActiveOperationTaskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeActiveOperationTaskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeActiveOperationTaskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeActiveOperationTaskRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeActiveOperationTaskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeActiveOperationTaskRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeActiveOperationTaskRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeActiveOperationTaskRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeActiveOperationTaskRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

int DescribeActiveOperationTaskRequest::getIsHistory()const
{
	return isHistory_;
}

void DescribeActiveOperationTaskRequest::setIsHistory(int isHistory)
{
	isHistory_ = isHistory;
	setCoreParameter("IsHistory", isHistory);
}

std::string DescribeActiveOperationTaskRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeActiveOperationTaskRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeActiveOperationTaskRequest::getRegionId()const
{
	return regionId_;
}

void DescribeActiveOperationTaskRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int DescribeActiveOperationTaskRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeActiveOperationTaskRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

std::string DescribeActiveOperationTaskRequest::getRegion()const
{
	return region_;
}

void DescribeActiveOperationTaskRequest::setRegion(const std::string& region)
{
	region_ = region;
	setCoreParameter("Region", region);
}

