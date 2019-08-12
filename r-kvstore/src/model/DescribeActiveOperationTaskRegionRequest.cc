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

#include <alibabacloud/r-kvstore/model/DescribeActiveOperationTaskRegionRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeActiveOperationTaskRegionRequest;

DescribeActiveOperationTaskRegionRequest::DescribeActiveOperationTaskRegionRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeActiveOperationTaskRegion")
{}

DescribeActiveOperationTaskRegionRequest::~DescribeActiveOperationTaskRegionRequest()
{}

long DescribeActiveOperationTaskRegionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeActiveOperationTaskRegionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int DescribeActiveOperationTaskRegionRequest::getIsHistory()const
{
	return isHistory_;
}

void DescribeActiveOperationTaskRegionRequest::setIsHistory(int isHistory)
{
	isHistory_ = isHistory;
	setCoreParameter("IsHistory", isHistory);
}

std::string DescribeActiveOperationTaskRegionRequest::getTaskType()const
{
	return taskType_;
}

void DescribeActiveOperationTaskRegionRequest::setTaskType(const std::string& taskType)
{
	taskType_ = taskType;
	setCoreParameter("TaskType", std::to_string(taskType));
}

std::string DescribeActiveOperationTaskRegionRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeActiveOperationTaskRegionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeActiveOperationTaskRegionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeActiveOperationTaskRegionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeActiveOperationTaskRegionRequest::getRegionId()const
{
	return regionId_;
}

void DescribeActiveOperationTaskRegionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeActiveOperationTaskRegionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeActiveOperationTaskRegionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long DescribeActiveOperationTaskRegionRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeActiveOperationTaskRegionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeActiveOperationTaskRegionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeActiveOperationTaskRegionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

