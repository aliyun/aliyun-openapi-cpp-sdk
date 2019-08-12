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

#include <alibabacloud/rds/model/ModifyInstanceCrossBackupPolicyRequest.h>

using AlibabaCloud::Rds::Model::ModifyInstanceCrossBackupPolicyRequest;

ModifyInstanceCrossBackupPolicyRequest::ModifyInstanceCrossBackupPolicyRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyInstanceCrossBackupPolicy")
{}

ModifyInstanceCrossBackupPolicyRequest::~ModifyInstanceCrossBackupPolicyRequest()
{}

long ModifyInstanceCrossBackupPolicyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceCrossBackupPolicyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

int ModifyInstanceCrossBackupPolicyRequest::getRetentType()const
{
	return retentType_;
}

void ModifyInstanceCrossBackupPolicyRequest::setRetentType(int retentType)
{
	retentType_ = retentType;
	setCoreParameter("RetentType", retentType);
}

std::string ModifyInstanceCrossBackupPolicyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceCrossBackupPolicyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getCrossBackupType()const
{
	return crossBackupType_;
}

void ModifyInstanceCrossBackupPolicyRequest::setCrossBackupType(const std::string& crossBackupType)
{
	crossBackupType_ = crossBackupType;
	setCoreParameter("CrossBackupType", std::to_string(crossBackupType));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getLogBackupEnabled()const
{
	return logBackupEnabled_;
}

void ModifyInstanceCrossBackupPolicyRequest::setLogBackupEnabled(const std::string& logBackupEnabled)
{
	logBackupEnabled_ = logBackupEnabled;
	setCoreParameter("LogBackupEnabled", std::to_string(logBackupEnabled));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getBackupEnabled()const
{
	return backupEnabled_;
}

void ModifyInstanceCrossBackupPolicyRequest::setBackupEnabled(const std::string& backupEnabled)
{
	backupEnabled_ = backupEnabled;
	setCoreParameter("BackupEnabled", std::to_string(backupEnabled));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getRelService()const
{
	return relService_;
}

void ModifyInstanceCrossBackupPolicyRequest::setRelService(const std::string& relService)
{
	relService_ = relService;
	setCoreParameter("RelService", std::to_string(relService));
}

long ModifyInstanceCrossBackupPolicyRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceCrossBackupPolicyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyInstanceCrossBackupPolicyRequest::getCrossBackupRegion()const
{
	return crossBackupRegion_;
}

void ModifyInstanceCrossBackupPolicyRequest::setCrossBackupRegion(const std::string& crossBackupRegion)
{
	crossBackupRegion_ = crossBackupRegion;
	setCoreParameter("CrossBackupRegion", std::to_string(crossBackupRegion));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getStorageType()const
{
	return storageType_;
}

void ModifyInstanceCrossBackupPolicyRequest::setStorageType(const std::string& storageType)
{
	storageType_ = storageType;
	setCoreParameter("StorageType", std::to_string(storageType));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyInstanceCrossBackupPolicyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getEndpoint()const
{
	return endpoint_;
}

void ModifyInstanceCrossBackupPolicyRequest::setEndpoint(const std::string& endpoint)
{
	endpoint_ = endpoint;
	setCoreParameter("Endpoint", std::to_string(endpoint));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceCrossBackupPolicyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getStorageOwner()const
{
	return storageOwner_;
}

void ModifyInstanceCrossBackupPolicyRequest::setStorageOwner(const std::string& storageOwner)
{
	storageOwner_ = storageOwner;
	setCoreParameter("StorageOwner", std::to_string(storageOwner));
}

std::string ModifyInstanceCrossBackupPolicyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyInstanceCrossBackupPolicyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

int ModifyInstanceCrossBackupPolicyRequest::getRetention()const
{
	return retention_;
}

void ModifyInstanceCrossBackupPolicyRequest::setRetention(int retention)
{
	retention_ = retention;
	setCoreParameter("Retention", retention);
}

