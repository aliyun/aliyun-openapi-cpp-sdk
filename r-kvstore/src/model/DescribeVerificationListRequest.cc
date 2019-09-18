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

#include <alibabacloud/r-kvstore/model/DescribeVerificationListRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeVerificationListRequest;

DescribeVerificationListRequest::DescribeVerificationListRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeVerificationList")
{}

DescribeVerificationListRequest::~DescribeVerificationListRequest()
{}

long DescribeVerificationListRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeVerificationListRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeVerificationListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVerificationListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

int DescribeVerificationListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVerificationListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setCoreParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVerificationListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVerificationListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string DescribeVerificationListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVerificationListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeVerificationListRequest::getReplicaId()const
{
	return replicaId_;
}

void DescribeVerificationListRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", replicaId);
}

int DescribeVerificationListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVerificationListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setCoreParameter("PageSize", std::to_string(pageSize));
}

std::string DescribeVerificationListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVerificationListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVerificationListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVerificationListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeVerificationListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVerificationListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long DescribeVerificationListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVerificationListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

