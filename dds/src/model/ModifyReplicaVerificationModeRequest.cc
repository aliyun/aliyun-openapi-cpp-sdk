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

#include <alibabacloud/dds/model/ModifyReplicaVerificationModeRequest.h>

using AlibabaCloud::Dds::Model::ModifyReplicaVerificationModeRequest;

ModifyReplicaVerificationModeRequest::ModifyReplicaVerificationModeRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyReplicaVerificationMode")
{}

ModifyReplicaVerificationModeRequest::~ModifyReplicaVerificationModeRequest()
{}

long ModifyReplicaVerificationModeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyReplicaVerificationModeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyReplicaVerificationModeRequest::getVerificationMode()const
{
	return verificationMode_;
}

void ModifyReplicaVerificationModeRequest::setVerificationMode(const std::string& verificationMode)
{
	verificationMode_ = verificationMode;
	setCoreParameter("VerificationMode", verificationMode);
}

std::string ModifyReplicaVerificationModeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyReplicaVerificationModeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyReplicaVerificationModeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyReplicaVerificationModeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyReplicaVerificationModeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyReplicaVerificationModeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyReplicaVerificationModeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyReplicaVerificationModeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyReplicaVerificationModeRequest::getReplicaId()const
{
	return replicaId_;
}

void ModifyReplicaVerificationModeRequest::setReplicaId(const std::string& replicaId)
{
	replicaId_ = replicaId;
	setCoreParameter("ReplicaId", replicaId);
}

long ModifyReplicaVerificationModeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyReplicaVerificationModeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyReplicaVerificationModeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyReplicaVerificationModeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

