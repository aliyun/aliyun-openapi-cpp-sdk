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

#include <alibabacloud/rds/model/DescribeAvailableInstanceClassRequest.h>

using AlibabaCloud::Rds::Model::DescribeAvailableInstanceClassRequest;

DescribeAvailableInstanceClassRequest::DescribeAvailableInstanceClassRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeAvailableInstanceClass")
{}

DescribeAvailableInstanceClassRequest::~DescribeAvailableInstanceClassRequest()
{}

long DescribeAvailableInstanceClassRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAvailableInstanceClassRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DescribeAvailableInstanceClassRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAvailableInstanceClassRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DescribeAvailableInstanceClassRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAvailableInstanceClassRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DescribeAvailableInstanceClassRequest::getEngineVersion()const
{
	return engineVersion_;
}

void DescribeAvailableInstanceClassRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", std::to_string(engineVersion));
}

long DescribeAvailableInstanceClassRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAvailableInstanceClassRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DescribeAvailableInstanceClassRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAvailableInstanceClassRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

std::string DescribeAvailableInstanceClassRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAvailableInstanceClassRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DescribeAvailableInstanceClassRequest::getEngine()const
{
	return engine_;
}

void DescribeAvailableInstanceClassRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", std::to_string(engine));
}

std::string DescribeAvailableInstanceClassRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeAvailableInstanceClassRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", std::to_string(zoneId));
}

std::string DescribeAvailableInstanceClassRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeAvailableInstanceClassRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", std::to_string(dBInstanceId));
}

std::string DescribeAvailableInstanceClassRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeAvailableInstanceClassRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", std::to_string(instanceChargeType));
}

std::string DescribeAvailableInstanceClassRequest::getOrderType()const
{
	return orderType_;
}

void DescribeAvailableInstanceClassRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setCoreParameter("OrderType", std::to_string(orderType));
}

