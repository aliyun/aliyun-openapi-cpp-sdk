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

#include <alibabacloud/rds/model/PreCheckCreateOrderForModifyRequest.h>

using AlibabaCloud::Rds::Model::PreCheckCreateOrderForModifyRequest;

PreCheckCreateOrderForModifyRequest::PreCheckCreateOrderForModifyRequest() :
	RpcServiceRequest("rds", "2014-08-15", "PreCheckCreateOrderForModify")
{}

PreCheckCreateOrderForModifyRequest::~PreCheckCreateOrderForModifyRequest()
{}

long PreCheckCreateOrderForModifyRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PreCheckCreateOrderForModifyRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

int PreCheckCreateOrderForModifyRequest::getDBInstanceStorage()const
{
	return dBInstanceStorage_;
}

void PreCheckCreateOrderForModifyRequest::setDBInstanceStorage(int dBInstanceStorage)
{
	dBInstanceStorage_ = dBInstanceStorage;
	setCoreParameter("DBInstanceStorage", std::to_string(dBInstanceStorage));
}

std::string PreCheckCreateOrderForModifyRequest::getNodeType()const
{
	return nodeType_;
}

void PreCheckCreateOrderForModifyRequest::setNodeType(const std::string& nodeType)
{
	nodeType_ = nodeType;
	setCoreParameter("NodeType", nodeType);
}

std::string PreCheckCreateOrderForModifyRequest::getClientToken()const
{
	return clientToken_;
}

void PreCheckCreateOrderForModifyRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string PreCheckCreateOrderForModifyRequest::getEngineVersion()const
{
	return engineVersion_;
}

void PreCheckCreateOrderForModifyRequest::setEngineVersion(const std::string& engineVersion)
{
	engineVersion_ = engineVersion;
	setCoreParameter("EngineVersion", engineVersion);
}

std::string PreCheckCreateOrderForModifyRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PreCheckCreateOrderForModifyRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PreCheckCreateOrderForModifyRequest::getRegionId()const
{
	return regionId_;
}

void PreCheckCreateOrderForModifyRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string PreCheckCreateOrderForModifyRequest::getEffectiveTime()const
{
	return effectiveTime_;
}

void PreCheckCreateOrderForModifyRequest::setEffectiveTime(const std::string& effectiveTime)
{
	effectiveTime_ = effectiveTime;
	setCoreParameter("EffectiveTime", effectiveTime);
}

std::string PreCheckCreateOrderForModifyRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void PreCheckCreateOrderForModifyRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string PreCheckCreateOrderForModifyRequest::getSwitchTime()const
{
	return switchTime_;
}

void PreCheckCreateOrderForModifyRequest::setSwitchTime(const std::string& switchTime)
{
	switchTime_ = switchTime;
	setCoreParameter("SwitchTime", switchTime);
}

std::string PreCheckCreateOrderForModifyRequest::getDBInstanceStorageType()const
{
	return dBInstanceStorageType_;
}

void PreCheckCreateOrderForModifyRequest::setDBInstanceStorageType(const std::string& dBInstanceStorageType)
{
	dBInstanceStorageType_ = dBInstanceStorageType;
	setCoreParameter("DBInstanceStorageType", dBInstanceStorageType);
}

std::string PreCheckCreateOrderForModifyRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void PreCheckCreateOrderForModifyRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

bool PreCheckCreateOrderForModifyRequest::getAutoPay()const
{
	return autoPay_;
}

void PreCheckCreateOrderForModifyRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string PreCheckCreateOrderForModifyRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PreCheckCreateOrderForModifyRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PreCheckCreateOrderForModifyRequest::getResource()const
{
	return resource_;
}

void PreCheckCreateOrderForModifyRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setCoreParameter("Resource", resource);
}

std::string PreCheckCreateOrderForModifyRequest::getCommodityCode()const
{
	return commodityCode_;
}

void PreCheckCreateOrderForModifyRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setCoreParameter("CommodityCode", commodityCode);
}

long PreCheckCreateOrderForModifyRequest::getOwnerId()const
{
	return ownerId_;
}

void PreCheckCreateOrderForModifyRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string PreCheckCreateOrderForModifyRequest::getUsedTime()const
{
	return usedTime_;
}

void PreCheckCreateOrderForModifyRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
}

std::string PreCheckCreateOrderForModifyRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void PreCheckCreateOrderForModifyRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

std::string PreCheckCreateOrderForModifyRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void PreCheckCreateOrderForModifyRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

std::string PreCheckCreateOrderForModifyRequest::getPromotionCode()const
{
	return promotionCode_;
}

void PreCheckCreateOrderForModifyRequest::setPromotionCode(const std::string& promotionCode)
{
	promotionCode_ = promotionCode;
	setCoreParameter("PromotionCode", promotionCode);
}

std::string PreCheckCreateOrderForModifyRequest::getVpcId()const
{
	return vpcId_;
}

void PreCheckCreateOrderForModifyRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string PreCheckCreateOrderForModifyRequest::getZoneId()const
{
	return zoneId_;
}

void PreCheckCreateOrderForModifyRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string PreCheckCreateOrderForModifyRequest::getTimeType()const
{
	return timeType_;
}

void PreCheckCreateOrderForModifyRequest::setTimeType(const std::string& timeType)
{
	timeType_ = timeType;
	setCoreParameter("TimeType", timeType);
}

std::string PreCheckCreateOrderForModifyRequest::getPayType()const
{
	return payType_;
}

void PreCheckCreateOrderForModifyRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

std::string PreCheckCreateOrderForModifyRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void PreCheckCreateOrderForModifyRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", instanceNetworkType);
}

