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

#include <alibabacloud/rds/model/CreateStaticVerificationRequest.h>

using AlibabaCloud::Rds::Model::CreateStaticVerificationRequest;

CreateStaticVerificationRequest::CreateStaticVerificationRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CreateStaticVerification")
{}

CreateStaticVerificationRequest::~CreateStaticVerificationRequest()
{}

long CreateStaticVerificationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateStaticVerificationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateStaticVerificationRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateStaticVerificationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateStaticVerificationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateStaticVerificationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateStaticVerificationRequest::getRegionId()const
{
	return regionId_;
}

void CreateStaticVerificationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateStaticVerificationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateStaticVerificationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateStaticVerificationRequest::getReplicaId()const
{
	return replicaId_;
}

void CreateStaticVerificationRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setParameter("ReplicaId", replicaId);
}

std::string CreateStaticVerificationRequest::getDestinationInstanceId()const
{
	return destinationInstanceId_;
}

void CreateStaticVerificationRequest::setDestinationInstanceId(const std::string& destinationInstanceId)
{
	destinationInstanceId_ = destinationInstanceId;
	setParameter("DestinationInstanceId", destinationInstanceId);
}

std::string CreateStaticVerificationRequest::getSourceInstanceId()const
{
	return sourceInstanceId_;
}

void CreateStaticVerificationRequest::setSourceInstanceId(const std::string& sourceInstanceId)
{
	sourceInstanceId_ = sourceInstanceId;
	setParameter("SourceInstanceId", sourceInstanceId);
}

long CreateStaticVerificationRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateStaticVerificationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateStaticVerificationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateStaticVerificationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

