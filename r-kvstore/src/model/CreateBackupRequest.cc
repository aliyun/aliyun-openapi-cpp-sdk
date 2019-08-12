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

#include <alibabacloud/r-kvstore/model/CreateBackupRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateBackupRequest;

CreateBackupRequest::CreateBackupRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateBackup")
{}

CreateBackupRequest::~CreateBackupRequest()
{}

long CreateBackupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBackupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateBackupRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateBackupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string CreateBackupRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateBackupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateBackupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateBackupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateBackupRequest::getRegionId()const
{
	return regionId_;
}

void CreateBackupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateBackupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateBackupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateBackupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateBackupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateBackupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateBackupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

