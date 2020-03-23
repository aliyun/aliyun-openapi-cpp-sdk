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

#include <alibabacloud/rds/model/DescribePriceRequest.h>

using AlibabaCloud::Rds::Model::DescribePriceRequest;

DescribePriceRequest::DescribePriceRequest() :
	RpcServiceRequest("rds", "2014-08-15", "DescribePrice")
{
	setMethod(HttpRequest::Method::Post);
}

DescribePriceRequest::~DescribePriceRequest()
{}

long DescribePriceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribePriceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int DescribePriceRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void DescribePriceRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string DescribePriceRequest::getClientToken()const
{
	return clientToken_;
}

void DescribePriceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DescribePriceRequest::getEngineVersion()const
{
	return engineVersion_;
}

void DescribePriceRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

std::string DescribePriceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribePriceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribePriceRequest::getRegionId()const
{
	return regionId_;
}

void DescribePriceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribePriceRequest::getEngine()const
{
	return engine_;
}

void DescribePriceRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string DescribePriceRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void DescribePriceRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string DescribePriceRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void DescribePriceRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setParameter("DBInstanceStorageType", dBInstanceStorageType);
}

int DescribePriceRequest::getQuantity()const
{
	return quantity_;
}

void DescribePriceRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setParameter("Quantity", std::to_string(quantity));
}

std::string DescribePriceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribePriceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribePriceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribePriceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DescribePriceRequest::getCommodityCode()const
{
	return commodityCode_;
}

void DescribePriceRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setParameter("CommodityCode", commodityCode);
}

long DescribePriceRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribePriceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int DescribePriceRequest::getUsedTime()const
{
	return usedTime_;
}

void DescribePriceRequest::setUsedTime(int usedTime)
{
	usedTime_ = usedTime;
	setParameter("UsedTime", std::to_string(usedTime));
}

std::string DescribePriceRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void DescribePriceRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

int DescribePriceRequest::getInstanceUsedType()const
{
	return instanceUsedType_;
}

void DescribePriceRequest::setInstanceUsedType(int instanceUsedType)
{
	instanceUsedType_ = instanceUsedType;
	setParameter("InstanceUsedType", std::to_string(instanceUsedType));
}

std::string DescribePriceRequest::getZoneId()const
{
	return zoneId_;
}

void DescribePriceRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string DescribePriceRequest::getTimeType()const
{
	return timeType_;
}

void DescribePriceRequest::setTimeType(const std::string& timeType)
{
	timeType_ = timeType;
	setParameter("TimeType", timeType);
}

std::string DescribePriceRequest::getPayType()const
{
	return payType_;
}

void DescribePriceRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string DescribePriceRequest::getOrderType()const
{
	return orderType_;
}

void DescribePriceRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

