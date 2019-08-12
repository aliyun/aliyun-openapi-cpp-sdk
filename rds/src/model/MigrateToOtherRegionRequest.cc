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

#include <alibabacloud/rds/model/MigrateToOtherRegionRequest.h>

using AlibabaCloud::Rds::Model::MigrateToOtherRegionRequest;

MigrateToOtherRegionRequest::MigrateToOtherRegionRequest() :
	RpcServiceRequest("rds", "2014-08-15", "MigrateToOtherRegion")
{}

MigrateToOtherRegionRequest::~MigrateToOtherRegionRequest()
{}

long MigrateToOtherRegionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MigrateToOtherRegionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string MigrateToOtherRegionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void MigrateToOtherRegionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string MigrateToOtherRegionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void MigrateToOtherRegionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string MigrateToOtherRegionRequest::getTargetVSwitchId()const
{
	return targetVSwitchId_;
}

void MigrateToOtherRegionRequest::setTargetVSwitchId(const std::string& targetVSwitchId)
{
	targetVSwitchId_ = targetVSwitchId;
	setCoreParameter("TargetVSwitchId", std::to_string(targetVSwitchId));
}

long MigrateToOtherRegionRequest::getOwnerId()const
{
	return ownerId_;
}

void MigrateToOtherRegionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string MigrateToOtherRegionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MigrateToOtherRegionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string MigrateToOtherRegionRequest::getTargetVpcId()const
{
	return targetVpcId_;
}

void MigrateToOtherRegionRequest::setTargetVpcId(const std::string& targetVpcId)
{
	targetVpcId_ = targetVpcId;
	setCoreParameter("TargetVpcId", std::to_string(targetVpcId));
}

std::string MigrateToOtherRegionRequest::getTargetZoneId()const
{
	return targetZoneId_;
}

void MigrateToOtherRegionRequest::setTargetZoneId(const std::string& targetZoneId)
{
	targetZoneId_ = targetZoneId;
	setCoreParameter("TargetZoneId", std::to_string(targetZoneId));
}

std::string MigrateToOtherRegionRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void MigrateToOtherRegionRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", std::to_string(effectiveTime));
}

std::string MigrateToOtherRegionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void MigrateToOtherRegionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string MigrateToOtherRegionRequest::getTargetRegionId()const
{
	return targetRegionId_;
}

void MigrateToOtherRegionRequest::setTargetRegionId(const std::string& targetRegionId)
{
	targetRegionId_ = targetRegionId;
	setCoreParameter("TargetRegionId", std::to_string(targetRegionId));
}

std::string MigrateToOtherRegionRequest::getSwitchTime()const
{
	return switchTime_;
}

void MigrateToOtherRegionRequest::setSwitchTime(const std::string& switchTime)
{
	switchTime_ = switchTime;
	setCoreParameter("SwitchTime", std::to_string(switchTime));
}

