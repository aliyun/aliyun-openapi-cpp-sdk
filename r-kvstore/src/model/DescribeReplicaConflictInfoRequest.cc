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

#include <alibabacloud/r-kvstore/model/DescribeReplicaConflictInfoRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeReplicaConflictInfoRequest;

DescribeReplicaConflictInfoRequest::DescribeReplicaConflictInfoRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeReplicaConflictInfo")
{}

DescribeReplicaConflictInfoRequest::~DescribeReplicaConflictInfoRequest()
{}

long DescribeReplicaConflictInfoRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeReplicaConflictInfoRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeReplicaConflictInfoRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeReplicaConflictInfoRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeReplicaConflictInfoRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeReplicaConflictInfoRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeReplicaConflictInfoRequest::getEndTime()const
{
	return endTime_;
}

void DescribeReplicaConflictInfoRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", std::to_string(endTime));
}

std::string DescribeReplicaConflictInfoRequest::getStartTime()const
{
	return startTime_;
}

void DescribeReplicaConflictInfoRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", std::to_string(startTime));
}

long DescribeReplicaConflictInfoRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeReplicaConflictInfoRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int DescribeReplicaConflictInfoRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeReplicaConflictInfoRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", pageNumber);
}

std::string DescribeReplicaConflictInfoRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeReplicaConflictInfoRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeReplicaConflictInfoRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeReplicaConflictInfoRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string DescribeReplicaConflictInfoRequest::getRegionId()const
{
	return regionId_;
}

void DescribeReplicaConflictInfoRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeReplicaConflictInfoRequest::getReplicaId()const
{
	return replicaId_;
}

void DescribeReplicaConflictInfoRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", std::to_string(replicaId));
}

int DescribeReplicaConflictInfoRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeReplicaConflictInfoRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", pageSize);
}

