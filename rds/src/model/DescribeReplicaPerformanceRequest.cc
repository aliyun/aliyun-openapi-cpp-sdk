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

#include <alibabacloud/rds/model/DescribeReplicaPerformanceRequest.h>

using AlibabaCloud::Rds::Model::DescribeReplicaPerformanceRequest;

DescribeReplicaPerformanceRequest::DescribeReplicaPerformanceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeReplicaPerformance")
{}

DescribeReplicaPerformanceRequest::~DescribeReplicaPerformanceRequest()
{}

long DescribeReplicaPerformanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeReplicaPerformanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeReplicaPerformanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeReplicaPerformanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeReplicaPerformanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeReplicaPerformanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeReplicaPerformanceRequest::getEndTime()const
{
	return endTime_;
}

void DescribeReplicaPerformanceRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

std::string DescribeReplicaPerformanceRequest::getStartTime()const
{
	return startTime_;
}

void DescribeReplicaPerformanceRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

long DescribeReplicaPerformanceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeReplicaPerformanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeReplicaPerformanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeReplicaPerformanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeReplicaPerformanceRequest::getSourceDBInstanceId()const
{
	return sourceDBInstanceId_;
}

void DescribeReplicaPerformanceRequest::setSourceDBInstanceId(const std::string& sourceDBInstanceId)
{
	sourceDBInstanceId_ = sourceDBInstanceId;
	setParameter("SourceDBInstanceId", sourceDBInstanceId);
}

std::string DescribeReplicaPerformanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void DescribeReplicaPerformanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string DescribeReplicaPerformanceRequest::getRegionId()const
{
	return regionId_;
}

void DescribeReplicaPerformanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeReplicaPerformanceRequest::getReplicaId()const
{
	return replicaId_;
}

void DescribeReplicaPerformanceRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setParameter("ReplicaId", replicaId);
}

std::string DescribeReplicaPerformanceRequest::getKey()const
{
	return key_;
}

void DescribeReplicaPerformanceRequest::setKey(const std::string& key)
{
	key_ = key;
	setParameter("Key", key);
}

