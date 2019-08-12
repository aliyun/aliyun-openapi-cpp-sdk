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

#include <alibabacloud/dds/model/ModifyReplicaRecoveryModeRequest.h>

using AlibabaCloud::Dds::Model::ModifyReplicaRecoveryModeRequest;

ModifyReplicaRecoveryModeRequest::ModifyReplicaRecoveryModeRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyReplicaRecoveryMode")
{}

ModifyReplicaRecoveryModeRequest::~ModifyReplicaRecoveryModeRequest()
{}

long ModifyReplicaRecoveryModeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyReplicaRecoveryModeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyReplicaRecoveryModeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyReplicaRecoveryModeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyReplicaRecoveryModeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyReplicaRecoveryModeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyReplicaRecoveryModeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyReplicaRecoveryModeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyReplicaRecoveryModeRequest::getRecoveryMode()const
{
	return recoveryMode_;
}

void ModifyReplicaRecoveryModeRequest::setRecoveryMode(const std::string& recoveryMode)
{
	recoveryMode_ = recoveryMode;
	setCoreParameter("RecoveryMode", std::to_string(recoveryMode));
}

std::string ModifyReplicaRecoveryModeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyReplicaRecoveryModeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyReplicaRecoveryModeRequest::getReplicaId()const
{
	return replicaId_;
}

void ModifyReplicaRecoveryModeRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", std::to_string(replicaId));
}

long ModifyReplicaRecoveryModeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyReplicaRecoveryModeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyReplicaRecoveryModeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyReplicaRecoveryModeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

