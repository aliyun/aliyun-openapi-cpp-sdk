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

#include <alibabacloud/rds/model/ModifyDBInstanceMaintainTimeRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifyDBInstanceMaintainTimeRequest::ModifyDBInstanceMaintainTimeRequest() :
	RdsRequest("ModifyDBInstanceMaintainTime")
{}

ModifyDBInstanceMaintainTimeRequest::~ModifyDBInstanceMaintainTimeRequest()
{}

std::string ModifyDBInstanceMaintainTimeRequest::getMaintainTime()const
{
	return maintainTime_;
}

void ModifyDBInstanceMaintainTimeRequest::setMaintainTime(const std::string& maintainTime)
{
	maintainTime_ = maintainTime;
	setParameter("MaintainTime", maintainTime);
}

long ModifyDBInstanceMaintainTimeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceMaintainTimeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDBInstanceMaintainTimeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceMaintainTimeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceMaintainTimeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyDBInstanceMaintainTimeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyDBInstanceMaintainTimeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceMaintainTimeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDBInstanceMaintainTimeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceMaintainTimeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long ModifyDBInstanceMaintainTimeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceMaintainTimeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBInstanceMaintainTimeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceMaintainTimeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

