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

#include <alibabacloud/r-kvstore/model/RestoreInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::RestoreInstanceRequest;

RestoreInstanceRequest::RestoreInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "RestoreInstance")
{}

RestoreInstanceRequest::~RestoreInstanceRequest()
{}

long RestoreInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestoreInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RestoreInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestoreInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string RestoreInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void RestoreInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RestoreInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RestoreInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RestoreInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RestoreInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string RestoreInstanceRequest::getBackupId()const
{
	return backupId_;
}

void RestoreInstanceRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", backupId);
}

long RestoreInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RestoreInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RestoreInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void RestoreInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

