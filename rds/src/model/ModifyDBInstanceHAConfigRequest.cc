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

#include <alibabacloud/rds/model/ModifyDBInstanceHAConfigRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifyDBInstanceHAConfigRequest::ModifyDBInstanceHAConfigRequest() :
	RdsRequest("ModifyDBInstanceHAConfig")
{}

ModifyDBInstanceHAConfigRequest::~ModifyDBInstanceHAConfigRequest()
{}

long ModifyDBInstanceHAConfigRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceHAConfigRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceHAConfigRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceHAConfigRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceHAConfigRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceHAConfigRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDBInstanceHAConfigRequest::getSyncMode()const
{
	return syncMode_;
}

void ModifyDBInstanceHAConfigRequest::setSyncMode(const std::string& syncMode)
{
	syncMode_ = syncMode;
	setParameter("SyncMode", syncMode);
}

std::string ModifyDBInstanceHAConfigRequest::getDbInstanceId()const
{
	return dbInstanceId_;
}

void ModifyDBInstanceHAConfigRequest::setDbInstanceId(const std::string& dbInstanceId)
{
	dbInstanceId_ = dbInstanceId;
	setParameter("DbInstanceId", dbInstanceId);
}

long ModifyDBInstanceHAConfigRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceHAConfigRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBInstanceHAConfigRequest::getHAMode()const
{
	return hAMode_;
}

void ModifyDBInstanceHAConfigRequest::setHAMode(const std::string& hAMode)
{
	hAMode_ = hAMode;
	setParameter("HAMode", hAMode);
}

std::string ModifyDBInstanceHAConfigRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceHAConfigRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

