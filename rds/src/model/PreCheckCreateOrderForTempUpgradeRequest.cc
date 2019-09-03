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

#include <alibabacloud/rds/model/PreCheckCreateOrderForTempUpgradeRequest.h>

using AlibabaCloud::Rds::Model::PreCheckCreateOrderForTempUpgradeRequest;

PreCheckCreateOrderForTempUpgradeRequest::PreCheckCreateOrderForTempUpgradeRequest() :
	RpcServiceRequest("rds", "2014-08-15", "PreCheckCreateOrderForTempUpgrade")
{}

PreCheckCreateOrderForTempUpgradeRequest::~PreCheckCreateOrderForTempUpgradeRequest()
{}

long PreCheckCreateOrderForTempUpgradeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int PreCheckCreateOrderForTempUpgradeRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setCoreParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getNodeType()const
{
	return nodeType_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setNodeType(const std::string& nodeType)
{
	nodeType_ = nodeType;
	setCoreParameter("NodeType", nodeType);
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getClientToken()const
{
	return clientToken_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getRegionId()const
{
	return regionId_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", effectiveTime);
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setCoreParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

bool PreCheckCreateOrderForTempUpgradeRequest::getAutoPay()const
{
	return autoPay_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getResource()const
{
	return resource_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setCoreParameter("Resource", resource);
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getCommodityCode()const
{
	return commodityCode_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setCoreParameter("CommodityCode", commodityCode);
}

long PreCheckCreateOrderForTempUpgradeRequest::getOwnerId()const
{
	return ownerId_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getUsedTime()const
{
	return usedTime_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
}

std::string PreCheckCreateOrderForTempUpgradeRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void PreCheckCreateOrderForTempUpgradeRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

