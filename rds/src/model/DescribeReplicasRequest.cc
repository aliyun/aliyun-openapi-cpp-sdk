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

#include <alibabacloud/rds/model/DescribeReplicasRequest.h>

using AlibabaCloud::Rds::Model::DescribeReplicasRequest;

DescribeReplicasRequest::DescribeReplicasRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeReplicas")
{}

DescribeReplicasRequest::~DescribeReplicasRequest()
{}

long DescribeReplicasRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeReplicasRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeReplicasRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeReplicasRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeReplicasRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeReplicasRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeReplicasRequest::getRegionId()const
{
	return regionId_;
}

void DescribeReplicasRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeReplicasRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeReplicasRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeReplicasRequest::getReplicaId()const
{
	return replicaId_;
}

void DescribeReplicasRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setParameter("ReplicaId", replicaId);
}

int DescribeReplicasRequest::getPageSize()const
{
	return pageSize_;
}

void DescribeReplicasRequest::setPageSize(int pageSize)
{
	pageSize_ = pageSize;
	setParameter("PageSize", std::to_string(pageSize));
}

long DescribeReplicasRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeReplicasRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribeReplicasRequest::getPageNumber()const
{
	return pageNumber_;
}

void DescribeReplicasRequest::setPageNumber(int pageNumber)
{
	pageNumber_ = pageNumber;
	setParameter("PageNumber", std::to_string(pageNumber));
}

std::string DescribeReplicasRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeReplicasRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

