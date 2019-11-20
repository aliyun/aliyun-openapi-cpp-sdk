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

#include <alibabacloud/dds/model/ModifyBackupPolicyRequest.h>

using AlibabaCloud::Dds::Model::ModifyBackupPolicyRequest;

ModifyBackupPolicyRequest::ModifyBackupPolicyRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyBackupPolicy")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyBackupPolicyRequest::~ModifyBackupPolicyRequest()
{}

long ModifyBackupPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
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

std::string ModifyBackupPolicyRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyBackupPolicyRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyBackupPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyBackupPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
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

std::string ModifyBackupPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyBackupPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
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
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyBackupPolicyRequest::getPreferredBackupTime()const
{
	return preferredBackupTime_;
}

void ModifyBackupPolicyRequest::setPreferredBackupTime(const std::string& preferredBackupTime)
{
	preferredBackupTime_ = preferredBackupTime;
	setCoreParameter("PreferredBackupTime", preferredBackupTime);
}

