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

#include <alibabacloud/rds/model/PreCheckCreateOrderForDegradeRequest.h>

using AlibabaCloud::Rds::Model::PreCheckCreateOrderForDegradeRequest;

PreCheckCreateOrderForDegradeRequest::PreCheckCreateOrderForDegradeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "PreCheckCreateOrderForDegrade")
{}

PreCheckCreateOrderForDegradeRequest::~PreCheckCreateOrderForDegradeRequest()
{}

long PreCheckCreateOrderForDegradeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PreCheckCreateOrderForDegradeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int PreCheckCreateOrderForDegradeRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void PreCheckCreateOrderForDegradeRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setCoreParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string PreCheckCreateOrderForDegradeRequest::getClientToken()const
{
	return clientToken_;
}

void PreCheckCreateOrderForDegradeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string PreCheckCreateOrderForDegradeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PreCheckCreateOrderForDegradeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PreCheckCreateOrderForDegradeRequest::getRegionId()const
{
	return regionId_;
}

void PreCheckCreateOrderForDegradeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string PreCheckCreateOrderForDegradeRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void PreCheckCreateOrderForDegradeRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", effectiveTime);
}

std::string PreCheckCreateOrderForDegradeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void PreCheckCreateOrderForDegradeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string PreCheckCreateOrderForDegradeRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void PreCheckCreateOrderForDegradeRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

bool PreCheckCreateOrderForDegradeRequest::getAutoPay()const
{
	return autoPay_;
}

void PreCheckCreateOrderForDegradeRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string PreCheckCreateOrderForDegradeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PreCheckCreateOrderForDegradeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PreCheckCreateOrderForDegradeRequest::getResource()const
{
	return resource_;
}

void PreCheckCreateOrderForDegradeRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setCoreParameter("Resource", resource);
}

std::string PreCheckCreateOrderForDegradeRequest::getCommodityCode()const
{
	return commodityCode_;
}

void PreCheckCreateOrderForDegradeRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setCoreParameter("CommodityCode", commodityCode);
}

long PreCheckCreateOrderForDegradeRequest::getOwnerId()const
{
	return ownerId_;
}

void PreCheckCreateOrderForDegradeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string PreCheckCreateOrderForDegradeRequest::getUsedTime()const
{
	return usedTime_;
}

void PreCheckCreateOrderForDegradeRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
}

std::string PreCheckCreateOrderForDegradeRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void PreCheckCreateOrderForDegradeRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

std::string PreCheckCreateOrderForDegradeRequest::getPromotionCode()const
{
	return promotionCode_;
}

void PreCheckCreateOrderForDegradeRequest::setPromotionCode(const std::string& promotionCode)
{
	promotionCode_ = promotionCode;
	setCoreParameter("PromotionCode", promotionCode);
}

std::string PreCheckCreateOrderForDegradeRequest::getZoneId()const
{
	return zoneId_;
}

void PreCheckCreateOrderForDegradeRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string PreCheckCreateOrderForDegradeRequest::getTimeType()const
{
	return timeType_;
}

void PreCheckCreateOrderForDegradeRequest::setTimeType(const std::string& timeType)
{
	timeType_ = timeType;
	setCoreParameter("TimeType", timeType);
}

std::string PreCheckCreateOrderForDegradeRequest::getPayType()const
{
	return payType_;
}

void PreCheckCreateOrderForDegradeRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

