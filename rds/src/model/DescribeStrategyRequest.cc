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

#include <alibabacloud/rds/model/DescribeStrategyRequest.h>

using AlibabaCloud::Rds::Model::DescribeStrategyRequest;

DescribeStrategyRequest::DescribeStrategyRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeStrategy")
{}

DescribeStrategyRequest::~DescribeStrategyRequest()
{}

long DescribeStrategyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeStrategyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeStrategyRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeStrategyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeStrategyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeStrategyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeStrategyRequest::getRegionId()const
{
	return regionId_;
}

void DescribeStrategyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeStrategyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeStrategyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeStrategyRequest::getReplicaId()const
{
	return replicaId_;
}

void DescribeStrategyRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setParameter("ReplicaId", replicaId);
}

long DescribeStrategyRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeStrategyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeStrategyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeStrategyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

