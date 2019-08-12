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

#include <alibabacloud/r-kvstore/model/ModifyBackupPolicyRequest.h>

using AlibabaCloud::R_kvstore::Model::ModifyBackupPolicyRequest;

ModifyBackupPolicyRequest::ModifyBackupPolicyRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "ModifyBackupPolicy")
{}

ModifyBackupPolicyRequest::~ModifyBackupPolicyRequest()
{}

std::string ModifyBackupPolicyRequest::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

void ModifyBackupPolicyRequest::setPreferredBackupTime(const std::string& preferredBackupTime)
{
	preferredBackupTime_ = preferredBackupTime;
	setCoreParameter("PreferredBackupTime", preferredBackupTime);
}

std::string ModifyBackupPolicyRequest::getPreferredBackupPeriod()const
{
	return preferredBackupPeriod_;
}

void ModifyBackupPolicyRequest::setPreferredBackupPeriod(const std::string& preferredBackupPeriod)
{
	preferredBackupPeriod_ = preferredBackupPeriod;
	setCoreParameter("PreferredBackupPeriod", preferredBackupPeriod);
}

long ModifyBackupPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyBackupPolicyRequest::getInstanceId()const
{
	return instanceId_;
}

void ModifyBackupPolicyRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string ModifyBackupPolicyRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyBackupPolicyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyBackupPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyBackupPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyBackupPolicyRequest::getRegionId()const
{
	return regionId_;
}

void ModifyBackupPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyBackupPolicyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyBackupPolicyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyBackupPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyBackupPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyBackupPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyBackupPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

