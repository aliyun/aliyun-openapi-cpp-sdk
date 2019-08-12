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

#include <alibabacloud/dds/model/ModifyReplicaModeRequest.h>

using AlibabaCloud::Dds::Model::ModifyReplicaModeRequest;

ModifyReplicaModeRequest::ModifyReplicaModeRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyReplicaMode")
{}

ModifyReplicaModeRequest::~ModifyReplicaModeRequest()
{}

std::string ModifyReplicaModeRequest::getDomainMode()const
{
	return domainMode_;
}

void ModifyReplicaModeRequest::setDomainMode(const std::string& domainMode)
{
	domainMode_ = domainMode;
	setCoreParameter("DomainMode", std::to_string(domainMode));
}

long ModifyReplicaModeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyReplicaModeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyReplicaModeRequest::getPrimaryInstanceId()const
{
	return primaryInstanceId_;
}

void ModifyReplicaModeRequest::setPrimaryInstanceId(const std::string& primaryInstanceId)
{
	primaryInstanceId_ = primaryInstanceId;
	setCoreParameter("PrimaryInstanceId", std::to_string(primaryInstanceId));
}

std::string ModifyReplicaModeRequest::getReplicaMode()const
{
	return replicaMode_;
}

void ModifyReplicaModeRequest::setReplicaMode(const std::string& replicaMode)
{
	replicaMode_ = replicaMode;
	setCoreParameter("ReplicaMode", std::to_string(replicaMode));
}

std::string ModifyReplicaModeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyReplicaModeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyReplicaModeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyReplicaModeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyReplicaModeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyReplicaModeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyReplicaModeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyReplicaModeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyReplicaModeRequest::getReplicaId()const
{
	return replicaId_;
}

void ModifyReplicaModeRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", std::to_string(replicaId));
}

long ModifyReplicaModeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyReplicaModeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyReplicaModeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyReplicaModeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

