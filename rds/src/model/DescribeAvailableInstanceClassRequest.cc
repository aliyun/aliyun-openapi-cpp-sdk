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
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAvailableInstanceClassRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAvailableInstanceClassRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAvailableInstanceClassRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAvailableInstanceClassRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAvailableInstanceClassRequest::getEngineVersion()const
{
	return engineVersion_;
}

void DescribeAvailableInstanceClassRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

long DescribeAvailableInstanceClassRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAvailableInstanceClassRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeAvailableInstanceClassRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAvailableInstanceClassRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAvailableInstanceClassRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAvailableInstanceClassRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeAvailableInstanceClassRequest::getEngine()const
{
	return engine_;
}

void DescribeAvailableInstanceClassRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string DescribeAvailableInstanceClassRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeAvailableInstanceClassRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribeAvailableInstanceClassRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeAvailableInstanceClassRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeAvailableInstanceClassRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeAvailableInstanceClassRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::string DescribeAvailableInstanceClassRequest::getOrderType()const
{
	return orderType_;
}

void DescribeAvailableInstanceClassRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

