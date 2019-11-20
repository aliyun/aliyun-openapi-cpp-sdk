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

#include <alibabacloud/dds/model/ModifyDBInstanceNetExpireTimeRequest.h>

using AlibabaCloud::Dds::Model::ModifyDBInstanceNetExpireTimeRequest;

ModifyDBInstanceNetExpireTimeRequest::ModifyDBInstanceNetExpireTimeRequest() :
	RpcServiceRequest("dds", "2015-12-01", "ModifyDBInstanceNetExpireTime")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDBInstanceNetExpireTimeRequest::~ModifyDBInstanceNetExpireTimeRequest()
{}

long ModifyDBInstanceNetExpireTimeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceNetExpireTimeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceNetExpireTimeRequest::getConnectionString()const
{
	return connectionString_;
}

void ModifyDBInstanceNetExpireTimeRequest::setConnectionString(const std::string& connectionString)
{
	connectionString_ = connectionString;
	setCoreParameter("ConnectionString", connectionString);
}

int ModifyDBInstanceNetExpireTimeRequest::getClassicExpendExpiredDays()const
{
	return classicExpendExpiredDays_;
}

void ModifyDBInstanceNetExpireTimeRequest::setClassicExpendExpiredDays(int classicExpendExpiredDays)
{
	classicExpendExpiredDays_ = classicExpendExpiredDays;
	setCoreParameter("ClassicExpendExpiredDays", std::to_string(classicExpendExpiredDays));
}

std::string ModifyDBInstanceNetExpireTimeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceNetExpireTimeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBInstanceNetExpireTimeRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDBInstanceNetExpireTimeRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ModifyDBInstanceNetExpireTimeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceNetExpireTimeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDBInstanceNetExpireTimeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceNetExpireTimeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceNetExpireTimeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceNetExpireTimeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyDBInstanceNetExpireTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceNetExpireTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

