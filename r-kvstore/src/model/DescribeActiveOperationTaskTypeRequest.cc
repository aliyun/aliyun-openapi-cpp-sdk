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

#include <alibabacloud/r-kvstore/model/DescribeActiveOperationTaskTypeRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeActiveOperationTaskTypeRequest;

DescribeActiveOperationTaskTypeRequest::DescribeActiveOperationTaskTypeRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeActiveOperationTaskType")
{}

DescribeActiveOperationTaskTypeRequest::~DescribeActiveOperationTaskTypeRequest()
{}

long DescribeActiveOperationTaskTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeActiveOperationTaskTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribeActiveOperationTaskTypeRequest::getIsHistory()const
{
	return isHistory_;
}

void DescribeActiveOperationTaskTypeRequest::setIsHistory(int isHistory)
{
	isHistory_ = isHistory;
	setCoreParameter("IsHistory", std::to_string(isHistory));
}

std::string DescribeActiveOperationTaskTypeRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeActiveOperationTaskTypeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeActiveOperationTaskTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeActiveOperationTaskTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeActiveOperationTaskTypeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeActiveOperationTaskTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeActiveOperationTaskTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeActiveOperationTaskTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DescribeActiveOperationTaskTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeActiveOperationTaskTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeActiveOperationTaskTypeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeActiveOperationTaskTypeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

