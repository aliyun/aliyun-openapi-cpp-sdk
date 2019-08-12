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

#include <alibabacloud/rds/model/ModifyDBInstanceTDERequest.h>

using AlibabaCloud::Rds::Model::ModifyDBInstanceTDERequest;

ModifyDBInstanceTDERequest::ModifyDBInstanceTDERequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceTDE")
{}

ModifyDBInstanceTDERequest::~ModifyDBInstanceTDERequest()
{}

long ModifyDBInstanceTDERequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceTDERequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyDBInstanceTDERequest::getDBName()const
{
	return dBName_;
}

void ModifyDBInstanceTDERequest::setDBName(const std::string& dBName)
{
	dBName_ = dBName;
	setCoreParameter("DBName", std::to_string(dBName));
}

std::string ModifyDBInstanceTDERequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceTDERequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyDBInstanceTDERequest::getRoleArn()const
{
	return roleArn_;
}

void ModifyDBInstanceTDERequest::setRoleArn(const std::string& roleArn)
{
	roleArn_ = roleArn;
	setCoreParameter("RoleArn", std::to_string(roleArn));
}

std::string ModifyDBInstanceTDERequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceTDERequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyDBInstanceTDERequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceTDERequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string ModifyDBInstanceTDERequest::getEncryptionKey()const
{
	return encryptionKey_;
}

void ModifyDBInstanceTDERequest::setEncryptionKey(const std::string& encryptionKey)
{
	encryptionKey_ = encryptionKey;
	setCoreParameter("EncryptionKey", std::to_string(encryptionKey));
}

long ModifyDBInstanceTDERequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceTDERequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyDBInstanceTDERequest::getTDEStatus()const
{
	return tDEStatus_;
}

void ModifyDBInstanceTDERequest::setTDEStatus(const std::string& tDEStatus)
{
	tDEStatus_ = tDEStatus;
	setCoreParameter("TDEStatus", std::to_string(tDEStatus));
}

std::string ModifyDBInstanceTDERequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceTDERequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

