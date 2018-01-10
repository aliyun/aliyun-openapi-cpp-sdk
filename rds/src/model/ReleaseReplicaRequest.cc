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

#include <alibabacloud/rds/model/ReleaseReplicaRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ReleaseReplicaRequest::ReleaseReplicaRequest() :
	RdsRequest("ReleaseReplica")
{}

ReleaseReplicaRequest::~ReleaseReplicaRequest()
{}

long ReleaseReplicaRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ReleaseReplicaRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ReleaseReplicaRequest::getSecurityToken()const
{
	return securityToken_;
}

void ReleaseReplicaRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ReleaseReplicaRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ReleaseReplicaRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ReleaseReplicaRequest::getRegionId()const
{
	return regionId_;
}

void ReleaseReplicaRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ReleaseReplicaRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ReleaseReplicaRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ReleaseReplicaRequest::getReplicaId()const
{
	return replicaId_;
}

void ReleaseReplicaRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setParameter("ReplicaId", replicaId);
}

long ReleaseReplicaRequest::getOwnerId()const
{
	return ownerId_;
}

void ReleaseReplicaRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ReleaseReplicaRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ReleaseReplicaRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

