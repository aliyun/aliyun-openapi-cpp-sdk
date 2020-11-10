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

#include <alibabacloud/rds/model/DescribeAvailableClassesRequest.h>

using AlibabaCloud::Rds::Model::DescribeAvailableClassesRequest;

DescribeAvailableClassesRequest::DescribeAvailableClassesRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribeAvailableClasses")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeAvailableClassesRequest::~DescribeAvailableClassesRequest()
{}

std::string DescribeAvailableClassesRequest::getDBInstanceName()const
{
	return dBInstanceName_;
}

void DescribeAvailableClassesRequest::setDBInstanceName(const std::string& dBInstanceName)
{
	dBInstanceName_ = dBInstanceName;
	setParameter("DBInstanceName", dBInstanceName);
}

long DescribeAvailableClassesRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeAvailableClassesRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeAvailableClassesRequest::getEngineVersion()const
{
	return engineVersion_;
}

void DescribeAvailableClassesRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string DescribeAvailableClassesRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeAvailableClassesRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeAvailableClassesRequest::getRegionId()const
{
	return regionId_;
}

void DescribeAvailableClassesRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeAvailableClassesRequest::getEngine()const
{
	return engine_;
}

void DescribeAvailableClassesRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string DescribeAvailableClassesRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribeAvailableClassesRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribeAvailableClassesRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void DescribeAvailableClassesRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string DescribeAvailableClassesRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void DescribeAvailableClassesRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::string DescribeAvailableClassesRequest::getDispenseMode()const
{
	return dispenseMode_;
}

void DescribeAvailableClassesRequest::setDispenseMode(const std::string& dispenseMode)
{
	dispenseMode_ = dispenseMode;
	setParameter("DispenseMode", dispenseMode);
}

std::string DescribeAvailableClassesRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeAvailableClassesRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeAvailableClassesRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeAvailableClassesRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribeAvailableClassesRequest::getCommodityCode()const
{
	return commodityCode_;
}

void DescribeAvailableClassesRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setParameter("CommodityCode", commodityCode);
}

long DescribeAvailableClassesRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeAvailableClassesRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DescribeAvailableClassesRequest::getEvaluateResource()const
{
	return evaluateResource_;
}

void DescribeAvailableClassesRequest::setEvaluateResource(bool evaluateResource)
{
	evaluateResource_ = evaluateResource;
	setParameter("EvaluateResource", evaluateResource ? "true" : "false");
}

std::string DescribeAvailableClassesRequest::getZoneId()const
{
	return zoneId_;
}

void DescribeAvailableClassesRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribeAvailableClassesRequest::getCategory()const
{
	return category_;
}

void DescribeAvailableClassesRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

std::string DescribeAvailableClassesRequest::getOrderType()const
{
	return orderType_;
}

void DescribeAvailableClassesRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

