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

#include <alibabacloud/rds/model/PreCheckCreateOrderForDeferRequest.h>

using AlibabaCloud::Rds::Model::PreCheckCreateOrderForDeferRequest;

PreCheckCreateOrderForDeferRequest::PreCheckCreateOrderForDeferRequest() :
	RpcServiceRequest("rds", "2014-08-15", "PreCheckCreateOrderForDefer")
{}

PreCheckCreateOrderForDeferRequest::~PreCheckCreateOrderForDeferRequest()
{}

long PreCheckCreateOrderForDeferRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PreCheckCreateOrderForDeferRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int PreCheckCreateOrderForDeferRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void PreCheckCreateOrderForDeferRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setCoreParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string PreCheckCreateOrderForDeferRequest::getClientToken()const
{
	return clientToken_;
}

void PreCheckCreateOrderForDeferRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string PreCheckCreateOrderForDeferRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PreCheckCreateOrderForDeferRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

bool PreCheckCreateOrderForDeferRequest::getRenewChange()const
{
	return renewChange_;
}

void PreCheckCreateOrderForDeferRequest::setRenewChange(bool renewChange)
{
	renewChange_ = renewChange;
	setCoreParameter("RenewChange", renewChange ? "true" : "false");
}

std::string PreCheckCreateOrderForDeferRequest::getRegionId()const
{
	return regionId_;
}

void PreCheckCreateOrderForDeferRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string PreCheckCreateOrderForDeferRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void PreCheckCreateOrderForDeferRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string PreCheckCreateOrderForDeferRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void PreCheckCreateOrderForDeferRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setCoreParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string PreCheckCreateOrderForDeferRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void PreCheckCreateOrderForDeferRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

bool PreCheckCreateOrderForDeferRequest::getAutoPay()const
{
	return autoPay_;
}

void PreCheckCreateOrderForDeferRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string PreCheckCreateOrderForDeferRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PreCheckCreateOrderForDeferRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PreCheckCreateOrderForDeferRequest::getResource()const
{
	return resource_;
}

void PreCheckCreateOrderForDeferRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setCoreParameter("Resource", resource);
}

std::string PreCheckCreateOrderForDeferRequest::getCommodityCode()const
{
	return commodityCode_;
}

void PreCheckCreateOrderForDeferRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setCoreParameter("CommodityCode", commodityCode);
}

long PreCheckCreateOrderForDeferRequest::getOwnerId()const
{
	return ownerId_;
}

void PreCheckCreateOrderForDeferRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string PreCheckCreateOrderForDeferRequest::getUsedTime()const
{
	return usedTime_;
}

void PreCheckCreateOrderForDeferRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
}

std::string PreCheckCreateOrderForDeferRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void PreCheckCreateOrderForDeferRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

std::string PreCheckCreateOrderForDeferRequest::getTimeType()const
{
	return timeType_;
}

void PreCheckCreateOrderForDeferRequest::setTimeType(const std::string& timeType)
{
	timeType_ = timeType;
	setCoreParameter("TimeType", timeType);
}

std::string PreCheckCreateOrderForDeferRequest::getPayType()const
{
	return payType_;
}

void PreCheckCreateOrderForDeferRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

