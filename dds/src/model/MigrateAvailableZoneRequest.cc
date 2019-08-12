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

#include <alibabacloud/dds/model/MigrateAvailableZoneRequest.h>

using AlibabaCloud::Dds::Model::MigrateAvailableZoneRequest;

MigrateAvailableZoneRequest::MigrateAvailableZoneRequest() :
	RpcServiceRequest("dds", "2015-12-01", "MigrateAvailableZone")
{}

MigrateAvailableZoneRequest::~MigrateAvailableZoneRequest()
{}

std::string MigrateAvailableZoneRequest::getVswitch()const
{
	return vswitch_;
}

void MigrateAvailableZoneRequest::setVswitch(const std::string& vswitch)
{
	vswitch_ = vswitch;
	setCoreParameter("Vswitch", std::to_string(vswitch));
}

long MigrateAvailableZoneRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MigrateAvailableZoneRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string MigrateAvailableZoneRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void MigrateAvailableZoneRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string MigrateAvailableZoneRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void MigrateAvailableZoneRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", std::to_string(effectiveTime));
}

std::string MigrateAvailableZoneRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void MigrateAvailableZoneRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string MigrateAvailableZoneRequest::getZoneId()const
{
	return zoneId_;
}

void MigrateAvailableZoneRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string MigrateAvailableZoneRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void MigrateAvailableZoneRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

long MigrateAvailableZoneRequest::getOwnerId()const
{
	return ownerId_;
}

void MigrateAvailableZoneRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string MigrateAvailableZoneRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MigrateAvailableZoneRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

