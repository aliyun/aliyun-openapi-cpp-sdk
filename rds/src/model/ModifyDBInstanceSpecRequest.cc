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

using AlibabaCloud::Rds::Model::ModifyDBInstanceSpecRequest;

ModifyDBInstanceSpecRequest::ModifyDBInstanceSpecRequest() :
	RpcServiceRequest("rds", "2014-08-15", "ModifyDBInstanceSpec")
{
	setMethod(HttpRequest::Method::Post);
}

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

std::string ModifyDBInstanceSpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyDBInstanceSpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyDBInstanceSpecRequest::getEngineVersion()const
{
	return engineVersion_;
}

void ModifyDBInstanceSpecRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
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

std::string ModifyDBInstanceSpecRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void ModifyDBInstanceSpecRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
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

std::string ModifyDBInstanceSpecRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifyDBInstanceSpecRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string ModifyDBInstanceSpecRequest::getSwitchTime()const
{
	return switchTime_;
}

void ModifyDBInstanceSpecRequest::setSwitchTime(const std::string& switchTime)
{
	switchTime_ = switchTime;
	setParameter("SwitchTime", switchTime);
}

std::string ModifyDBInstanceSpecRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void ModifyDBInstanceSpecRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string ModifyDBInstanceSpecRequest::getSourceBiz()const
{
	return sourceBiz_;
}

void ModifyDBInstanceSpecRequest::setSourceBiz(const std::string& sourceBiz)
{
	sourceBiz_ = sourceBiz;
	setParameter("SourceBiz", sourceBiz);
}

std::string ModifyDBInstanceSpecRequest::getDedicatedHostGroupId()const
{
	return dedicatedHostGroupId_;
}

void ModifyDBInstanceSpecRequest::setDedicatedHostGroupId(const std::string& dedicatedHostGroupId)
{
	dedicatedHostGroupId_ = dedicatedHostGroupId;
	setParameter("DedicatedHostGroupId", dedicatedHostGroupId);
}

std::string ModifyDBInstanceSpecRequest::getDirection()const
{
	return direction_;
}

void ModifyDBInstanceSpecRequest::setDirection(const std::string& direction)
{
	direction_ = direction;
	setParameter("Direction", direction);
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

std::string ModifyDBInstanceSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBInstanceSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
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

long ModifyDBInstanceSpecRequest::getUsedTime()const
{
	return usedTime_;
}

void ModifyDBInstanceSpecRequest::setUsedTime(long usedTime)
{
	usedTime_ = usedTime;
	setParameter("UsedTime", std::to_string(usedTime));
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

std::string ModifyDBInstanceSpecRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyDBInstanceSpecRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
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

