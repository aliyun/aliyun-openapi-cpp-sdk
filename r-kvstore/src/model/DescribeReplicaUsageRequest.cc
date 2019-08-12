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

#include <alibabacloud/r-kvstore/model/DescribeReplicaUsageRequest.h>

using AlibabaCloud::R_kvstore::Model::DescribeReplicaUsageRequest;

DescribeReplicaUsageRequest::DescribeReplicaUsageRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "DescribeReplicaUsage")
{}

DescribeReplicaUsageRequest::~DescribeReplicaUsageRequest()
{}

long DescribeReplicaUsageRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeReplicaUsageRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeReplicaUsageRequest::getSourceDBInstanceId()const
{
	return sourceDBInstanceId_;
}

void DescribeReplicaUsageRequest::setSourceDBInstanceId(const std::string& sourceDBInstanceId)
{
	sourceDBInstanceId_ = sourceDBInstanceId;
	setCoreParameter("SourceDBInstanceId", sourceDBInstanceId);
}

std::string DescribeReplicaUsageRequest::getDestinationDBInstanceId()const
{
	return destinationDBInstanceId_;
}

void DescribeReplicaUsageRequest::setDestinationDBInstanceId(const std::string& destinationDBInstanceId)
{
	destinationDBInstanceId_ = destinationDBInstanceId;
	setCoreParameter("DestinationDBInstanceId", destinationDBInstanceId);
}

std::string DescribeReplicaUsageRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeReplicaUsageRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string DescribeReplicaUsageRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeReplicaUsageRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeReplicaUsageRequest::getRegionId()const
{
	return regionId_;
}

void DescribeReplicaUsageRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DescribeReplicaUsageRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeReplicaUsageRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DescribeReplicaUsageRequest::getReplicaId()const
{
	return replicaId_;
}

void DescribeReplicaUsageRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", replicaId);
}

long DescribeReplicaUsageRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeReplicaUsageRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeReplicaUsageRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeReplicaUsageRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

