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

#include <alibabacloud/dds/model/CreateBackupRequest.h>

using AlibabaCloud::Dds::Model::CreateBackupRequest;

CreateBackupRequest::CreateBackupRequest() :
	RpcServiceRequest("dds", "2015-12-01", "CreateBackup")
{}

CreateBackupRequest::~CreateBackupRequest()
{}

std::string CreateBackupRequest::getBackupMethod()const
{
	return backupMethod_;
}

void CreateBackupRequest::setBackupMethod(const std::string& backupMethod)
{
	backupMethod_ = backupMethod;
	setCoreParameter("BackupMethod", std::to_string(backupMethod));
}

long CreateBackupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBackupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateBackupRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateBackupRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CreateBackupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateBackupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateBackupRequest::getRegionId()const
{
	return regionId_;
}

void CreateBackupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateBackupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateBackupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CreateBackupRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void CreateBackupRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

long CreateBackupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateBackupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateBackupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateBackupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

