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

#include <alibabacloud/rds/model/DescribeVerificationListRequest.h>

using AlibabaCloud::Rds::Model::DescribeVerificationListRequest;

DescribeVerificationListRequest::DescribeVerificationListRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeVerificationList")
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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeVerificationListRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeVerificationListRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeVerificationListRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeVerificationListRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeVerificationListRequest::getEndTime()const
{
	return endTime_;
}

void DescribeVerificationListRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeVerificationListRequest::getStartTime()const
{
	return startTime_;
}

void DescribeVerificationListRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeVerificationListRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeVerificationListRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeVerificationListRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeVerificationListRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeVerificationListRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeVerificationListRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeVerificationListRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeVerificationListRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeVerificationListRequest::getRegionId()const
{
	return regionId_;
}

void DescribeVerificationListRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeVerificationListRequest::getReplicaId()const
{
	return replicaId_;
}

void DescribeVerificationListRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setParameter("ReplicaId", replicaId);
}

int DescribeVerificationListRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeVerificationListRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

