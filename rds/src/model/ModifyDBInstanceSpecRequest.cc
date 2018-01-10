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

#include <alibabacloud/rds/model/ModifyDBInstanceSpecRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

ModifyDBInstanceSpecRequest::ModifyDBInstanceSpecRequest() :
	RdsRequest("ModifyDBInstanceSpec")
{}

ModifyDBInstanceSpecRequest::~ModifyDBInstanceSpecRequest()
{}

long ModifyDBInstanceSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBInstanceSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int ModifyDBInstanceSpecRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void ModifyDBInstanceSpecRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string ModifyDBInstanceSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBInstanceSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDBInstanceSpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyDBInstanceSpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyDBInstanceSpecRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void ModifyDBInstanceSpecRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setParameter("EffectiveTime", effectiveTime);
}

std::string ModifyDBInstanceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDBInstanceSpecRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceSpecRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

long ModifyDBInstanceSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBInstanceSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDBInstanceSpecRequest::getPayType()const
{
	return payType_;
}

void ModifyDBInstanceSpecRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string ModifyDBInstanceSpecRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBInstanceSpecRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyDBInstanceSpecRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void ModifyDBInstanceSpecRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

