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

#include <alibabacloud/rds/model/MigrateToOtherZoneRequest.h>

using AlibabaCloud::Rds::Model::MigrateToOtherZoneRequest;

MigrateToOtherZoneRequest::MigrateToOtherZoneRequest() :
	RpcServiceRequest("rds", "2014-08-15", "MigrateToOtherZone")
{}

MigrateToOtherZoneRequest::~MigrateToOtherZoneRequest()
{}

long MigrateToOtherZoneRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MigrateToOtherZoneRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string MigrateToOtherZoneRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void MigrateToOtherZoneRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string MigrateToOtherZoneRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void MigrateToOtherZoneRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string MigrateToOtherZoneRequest::getZoneIdSlave1()const
{
	return zoneIdSlave1_;
}

void MigrateToOtherZoneRequest::setZoneIdSlave1(const std::string& zoneIdSlave1)
{
	zoneIdSlave1_ = zoneIdSlave1;
	setCoreParameter("ZoneIdSlave1", std::to_string(zoneIdSlave1));
}

std::string MigrateToOtherZoneRequest::getZoneIdSlave2()const
{
	return zoneIdSlave2_;
}

void MigrateToOtherZoneRequest::setZoneIdSlave2(const std::string& zoneIdSlave2)
{
	zoneIdSlave2_ = zoneIdSlave2;
	setCoreParameter("ZoneIdSlave2", std::to_string(zoneIdSlave2));
}

long MigrateToOtherZoneRequest::getOwnerId()const
{
	return ownerId_;
}

void MigrateToOtherZoneRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string MigrateToOtherZoneRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MigrateToOtherZoneRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string MigrateToOtherZoneRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void MigrateToOtherZoneRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

std::string MigrateToOtherZoneRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void MigrateToOtherZoneRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", std::to_string(effectiveTime));
}

std::string MigrateToOtherZoneRequest::getVPCId()const
{
	return vPCId_;
}

void MigrateToOtherZoneRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", std::to_string(vPCId));
}

std::string MigrateToOtherZoneRequest::getZoneId()const
{
	return zoneId_;
}

void MigrateToOtherZoneRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string MigrateToOtherZoneRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void MigrateToOtherZoneRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string MigrateToOtherZoneRequest::getCategory()const
{
	return category_;
}

void MigrateToOtherZoneRequest::setCategory(const std::string& category)
{
	category_ = category;
	setCoreParameter("Category", std::to_string(category));
}

