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

#include <alibabacloud/dds/model/CheckRecoveryConditionRequest.h>

using AlibabaCloud::Dds::Model::CheckRecoveryConditionRequest;

CheckRecoveryConditionRequest::CheckRecoveryConditionRequest() :
	RpcServiceRequest("dds", "2015-12-01", "CheckRecoveryCondition")
{}

CheckRecoveryConditionRequest::~CheckRecoveryConditionRequest()
{}

long CheckRecoveryConditionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CheckRecoveryConditionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CheckRecoveryConditionRequest::getRestoreTime()const
{
	return restoreTime_;
}

void CheckRecoveryConditionRequest::setRestoreTime(const std::string& restoreTime)
{
	restoreTime_ = restoreTime;
	setCoreParameter("RestoreTime", std::to_string(restoreTime));
}

std::string CheckRecoveryConditionRequest::getDatabaseNames()const
{
	return databaseNames_;
}

void CheckRecoveryConditionRequest::setDatabaseNames(const std::string& databaseNames)
{
	databaseNames_ = databaseNames;
	setCoreParameter("DatabaseNames", std::to_string(databaseNames));
}

std::string CheckRecoveryConditionRequest::getSecurityToken()const
{
	return securityToken_;
}

void CheckRecoveryConditionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string CheckRecoveryConditionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CheckRecoveryConditionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CheckRecoveryConditionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CheckRecoveryConditionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CheckRecoveryConditionRequest::getBackupId()const
{
	return backupId_;
}

void CheckRecoveryConditionRequest::setBackupId(const std::string& backupId)
{
	backupId_ = backupId;
	setCoreParameter("BackupId", std::to_string(backupId));
}

std::string CheckRecoveryConditionRequest::getSourceDBInstance()const
{
	return sourceDBInstance_;
}

void CheckRecoveryConditionRequest::setSourceDBInstance(const std::string& sourceDBInstance)
{
	sourceDBInstance_ = sourceDBInstance;
	setCoreParameter("SourceDBInstance", std::to_string(sourceDBInstance));
}

long CheckRecoveryConditionRequest::getOwnerId()const
{
	return ownerId_;
}

void CheckRecoveryConditionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CheckRecoveryConditionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckRecoveryConditionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

