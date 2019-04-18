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

#include <alibabacloud/dds/model/RestoreDBInstanceRequest.h>

using AlibabaCloud::Dds::Model::RestoreDBInstanceRequest;

RestoreDBInstanceRequest::RestoreDBInstanceRequest() :
	RpcServiceRequest("dds", "2015-12-01", "RestoreDBInstance")
{}

RestoreDBInstanceRequest::~RestoreDBInstanceRequest()
{}

long RestoreDBInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestoreDBInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RestoreDBInstanceRequest::getSecurityToken()const
{
	return securityToken_;
}

void RestoreDBInstanceRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string RestoreDBInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RestoreDBInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RestoreDBInstanceRequest::getRegionId()const
{
	return regionId_;
}

void RestoreDBInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RestoreDBInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RestoreDBInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int RestoreDBInstanceRequest::getBackupId()const
{
	return backupId_;
}

void RestoreDBInstanceRequest::setBackupId(int backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", std::to_string(backupId));
}

std::string RestoreDBInstanceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void RestoreDBInstanceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long RestoreDBInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void RestoreDBInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RestoreDBInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestoreDBInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

