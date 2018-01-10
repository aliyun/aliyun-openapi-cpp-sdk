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

#include <alibabacloud/rds/model/ModifyGuardDomainModeRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifyGuardDomainModeRequest::ModifyGuardDomainModeRequest() :
	RdsRequest("ModifyGuardDomainMode")
{}

ModifyGuardDomainModeRequest::~ModifyGuardDomainModeRequest()
{}

std::string ModifyGuardDomainModeRequest::getDomainMode()const
{
	return domainMode_;
}

void ModifyGuardDomainModeRequest::setDomainMode(const std::string& domainMode)
{
	domainMode_ = domainMode;
	setParameter("DomainMode", domainMode);
}

long ModifyGuardDomainModeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyGuardDomainModeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyGuardDomainModeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyGuardDomainModeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyGuardDomainModeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyGuardDomainModeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyGuardDomainModeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyGuardDomainModeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyGuardDomainModeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyGuardDomainModeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyGuardDomainModeRequest::getReplicaId()const
{
	return replicaId_;
}

void ModifyGuardDomainModeRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setParameter("ReplicaId", replicaId);
}

long ModifyGuardDomainModeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyGuardDomainModeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyGuardDomainModeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyGuardDomainModeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

