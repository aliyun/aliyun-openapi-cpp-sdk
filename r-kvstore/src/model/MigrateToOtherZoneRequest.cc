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

#include <alibabacloud/r-kvstore/model/MigrateToOtherZoneRequest.h>

using AlibabaCloud::R_kvstore::Model::MigrateToOtherZoneRequest;

MigrateToOtherZoneRequest::MigrateToOtherZoneRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "MigrateToOtherZone")
{}

MigrateToOtherZoneRequest::~MigrateToOtherZoneRequest()
{}

std::string MigrateToOtherZoneRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void MigrateToOtherZoneRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

long MigrateToOtherZoneRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MigrateToOtherZoneRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MigrateToOtherZoneRequest::getSecurityToken()const
{
	return securityToken_;
}

void MigrateToOtherZoneRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string MigrateToOtherZoneRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void MigrateToOtherZoneRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string MigrateToOtherZoneRequest::getRegionId()const
{
	return regionId_;
}

void MigrateToOtherZoneRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string MigrateToOtherZoneRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void MigrateToOtherZoneRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", effectiveTime);
}

std::string MigrateToOtherZoneRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void MigrateToOtherZoneRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string MigrateToOtherZoneRequest::getZoneId()const
{
	return zoneId_;
}

void MigrateToOtherZoneRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string MigrateToOtherZoneRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void MigrateToOtherZoneRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

long MigrateToOtherZoneRequest::getOwnerId()const
{
	return ownerId_;
}

void MigrateToOtherZoneRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string MigrateToOtherZoneRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MigrateToOtherZoneRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

