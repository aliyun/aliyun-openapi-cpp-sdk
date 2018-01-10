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

#include <alibabacloud/rds/model/QueryPriceForBuyRequest.h>

using namespace AlibabaCloud::Rds;
using namespace AlibabaCloud::Rds::Model;

QueryPriceForBuyRequest::QueryPriceForBuyRequest() :
	RdsRequest("QueryPriceForBuy")
{}

QueryPriceForBuyRequest::~QueryPriceForBuyRequest()
{}

long QueryPriceForBuyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void QueryPriceForBuyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int QueryPriceForBuyRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void QueryPriceForBuyRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

int QueryPriceForBuyRequest::getQuantity()const
{
	return quantity_;
}

void QueryPriceForBuyRequest::setQuantity(int quantity)
{
	quantity_ = quantity;
	setParameter("Quantity", std::to_string(quantity));
}

std::string QueryPriceForBuyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void QueryPriceForBuyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string QueryPriceForBuyRequest::getClientToken()const
{
	return clientToken_;
}

void QueryPriceForBuyRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string QueryPriceForBuyRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void QueryPriceForBuyRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string QueryPriceForBuyRequest::getCommodityCode()const
{
	return commodityCode_;
}

void QueryPriceForBuyRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setParameter("CommodityCode", commodityCode);
}

std::string QueryPriceForBuyRequest::getEngineVersion()const
{
	return engineVersion_;
}

void QueryPriceForBuyRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setParameter("EngineVersion", engineVersion);
}

long QueryPriceForBuyRequest::getOwnerId()const
{
	return ownerId_;
}

void QueryPriceForBuyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string QueryPriceForBuyRequest::getUsedTime()const
{
	return usedTime_;
}

void QueryPriceForBuyRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setParameter("UsedTime", usedTime);
}

std::string QueryPriceForBuyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void QueryPriceForBuyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string QueryPriceForBuyRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void QueryPriceForBuyRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setParameter("DBInstanceClass", dBInstanceClass);
}

int QueryPriceForBuyRequest::getInstanceUsedType()const
{
	return instanceUsedType_;
}

void QueryPriceForBuyRequest::setInstanceUsedType(int instanceUsedType)
{
	instanceUsedType_ = instanceUsedType;
	setParameter("InstanceUsedType", std::to_string(instanceUsedType));
}

std::string QueryPriceForBuyRequest::getRegionId()const
{
	return regionId_;
}

void QueryPriceForBuyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string QueryPriceForBuyRequest::getEngine()const
{
	return engine_;
}

void QueryPriceForBuyRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setParameter("Engine", engine);
}

std::string QueryPriceForBuyRequest::getZoneId()const
{
	return zoneId_;
}

void QueryPriceForBuyRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string QueryPriceForBuyRequest::getTimeType()const
{
	return timeType_;
}

void QueryPriceForBuyRequest::setTimeType(const std::string& timeType)
{
	timeType_ = timeType;
	setParameter("TimeType", timeType);
}

std::string QueryPriceForBuyRequest::getPayType()const
{
	return payType_;
}

void QueryPriceForBuyRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setParameter("PayType", payType);
}

std::string QueryPriceForBuyRequest::getOrderType()const
{
	return orderType_;
}

void QueryPriceForBuyRequest::setOrderType(const std::string& orderType)
{
	orderType_ = orderType;
	setParameter("OrderType", orderType);
}

