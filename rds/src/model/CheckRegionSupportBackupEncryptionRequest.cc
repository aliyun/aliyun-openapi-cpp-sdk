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

#include <alibabacloud/rds/model/CheckRegionSupportBackupEncryptionRequest.h>

using AlibabaCloud::Rds::Model::CheckRegionSupportBackupEncryptionRequest;

CheckRegionSupportBackupEncryptionRequest::CheckRegionSupportBackupEncryptionRequest() :
	RpcServiceRequest("rds", "2014-08-15", "CheckRegionSupportBackupEncryption")
{
	setMethod(HttpRequest::Method::Post);
}

CheckRegionSupportBackupEncryptionRequest::~CheckRegionSupportBackupEncryptionRequest()
{}

long CheckRegionSupportBackupEncryptionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CheckRegionSupportBackupEncryptionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CheckRegionSupportBackupEncryptionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CheckRegionSupportBackupEncryptionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

long CheckRegionSupportBackupEncryptionRequest::getOwnerId()const
{
	return ownerId_;
}

void CheckRegionSupportBackupEncryptionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CheckRegionSupportBackupEncryptionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CheckRegionSupportBackupEncryptionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CheckRegionSupportBackupEncryptionRequest::getRegionId()const
{
	return regionId_;
}

void CheckRegionSupportBackupEncryptionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CheckRegionSupportBackupEncryptionRequest::getDBInstanceID()const
{
	return dBInstanceID_;
}

void CheckRegionSupportBackupEncryptionRequest::setDBInstanceID(const std::string& dBInstanceID)
{
	dBInstanceID_ = dBInstanceID;
	setParameter("DBInstanceID", dBInstanceID);
}

