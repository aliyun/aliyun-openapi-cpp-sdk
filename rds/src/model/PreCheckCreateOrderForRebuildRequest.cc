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

#include <alibabacloud/rds/model/PreCheckCreateOrderForRebuildRequest.h>

using AlibabaCloud::Rds::Model::PreCheckCreateOrderForRebuildRequest;

PreCheckCreateOrderForRebuildRequest::PreCheckCreateOrderForRebuildRequest() :
	RpcServiceRequest("rds", "2014-08-15", "PreCheckCreateOrderForRebuild")
{}

PreCheckCreateOrderForRebuildRequest::~PreCheckCreateOrderForRebuildRequest()
{}

long PreCheckCreateOrderForRebuildRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PreCheckCreateOrderForRebuildRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PreCheckCreateOrderForRebuildRequest::getClientToken()const
{
	return clientToken_;
}

void PreCheckCreateOrderForRebuildRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string PreCheckCreateOrderForRebuildRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void PreCheckCreateOrderForRebuildRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string PreCheckCreateOrderForRebuildRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void PreCheckCreateOrderForRebuildRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setCoreParameter("ResourceGroupId", resourceGroupId);
}

std::string PreCheckCreateOrderForRebuildRequest::getRegionId()const
{
	return regionId_;
}

void PreCheckCreateOrderForRebuildRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string PreCheckCreateOrderForRebuildRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void PreCheckCreateOrderForRebuildRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setCoreParameter("DBInstanceId", dBInstanceId);
}

std::string PreCheckCreateOrderForRebuildRequest::getDBInstanceDescription()const
{
	return dBInstanceDescription_;
}

void PreCheckCreateOrderForRebuildRequest::setDBInstanceDescription(const std::string& dBInstanceDescription)
{
	dBInstanceDescription_ = dBInstanceDescription;
	setCoreParameter("DBInstanceDescription", dBInstanceDescription);
}

std::string PreCheckCreateOrderForRebuildRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void PreCheckCreateOrderForRebuildRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

std::string PreCheckCreateOrderForRebuildRequest::getAgentId()const
{
	return agentId_;
}

void PreCheckCreateOrderForRebuildRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setCoreParameter("AgentId", agentId);
}

bool PreCheckCreateOrderForRebuildRequest::getAutoPay()const
{
	return autoPay_;
}

void PreCheckCreateOrderForRebuildRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string PreCheckCreateOrderForRebuildRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PreCheckCreateOrderForRebuildRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PreCheckCreateOrderForRebuildRequest::getResource()const
{
	return resource_;
}

void PreCheckCreateOrderForRebuildRequest::setResource(const std::string& resource)
{
	resource_ = resource;
	setCoreParameter("Resource", resource);
}

std::string PreCheckCreateOrderForRebuildRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PreCheckCreateOrderForRebuildRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string PreCheckCreateOrderForRebuildRequest::getCommodityCode()const
{
	return commodityCode_;
}

void PreCheckCreateOrderForRebuildRequest::setCommodityCode(const std::string& commodityCode)
{
	commodityCode_ = commodityCode;
	setCoreParameter("CommodityCode", commodityCode);
}

long PreCheckCreateOrderForRebuildRequest::getOwnerId()const
{
	return ownerId_;
}

void PreCheckCreateOrderForRebuildRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string PreCheckCreateOrderForRebuildRequest::getUsedTime()const
{
	return usedTime_;
}

void PreCheckCreateOrderForRebuildRequest::setUsedTime(const std::string& usedTime)
{
	usedTime_ = usedTime;
	setCoreParameter("UsedTime", usedTime);
}

std::string PreCheckCreateOrderForRebuildRequest::getDBInstanceClass()const
{
	return dBInstanceClass_;
}

void PreCheckCreateOrderForRebuildRequest::setDBInstanceClass(const std::string& dBInstanceClass)
{
	dBInstanceClass_ = dBInstanceClass;
	setCoreParameter("DBInstanceClass", dBInstanceClass);
}

std::string PreCheckCreateOrderForRebuildRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void PreCheckCreateOrderForRebuildRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", vSwitchId);
}

bool PreCheckCreateOrderForRebuildRequest::getRebuildInstanceFlag()const
{
	return rebuildInstanceFlag_;
}

void PreCheckCreateOrderForRebuildRequest::setRebuildInstanceFlag(bool rebuildInstanceFlag)
{
	rebuildInstanceFlag_ = rebuildInstanceFlag;
	setCoreParameter("RebuildInstanceFlag", rebuildInstanceFlag ? "true" : "false");
}

std::string PreCheckCreateOrderForRebuildRequest::getAutoRenew()const
{
	return autoRenew_;
}

void PreCheckCreateOrderForRebuildRequest::setAutoRenew(const std::string& autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew);
}

std::string PreCheckCreateOrderForRebuildRequest::getPromotionCode()const
{
	return promotionCode_;
}

void PreCheckCreateOrderForRebuildRequest::setPromotionCode(const std::string& promotionCode)
{
	promotionCode_ = promotionCode;
	setCoreParameter("PromotionCode", promotionCode);
}

std::string PreCheckCreateOrderForRebuildRequest::getVPCId()const
{
	return vPCId_;
}

void PreCheckCreateOrderForRebuildRequest::setVPCId(const std::string& vPCId)
{
	vPCId_ = vPCId;
	setCoreParameter("VPCId", vPCId);
}

std::string PreCheckCreateOrderForRebuildRequest::getZoneId()const
{
	return zoneId_;
}

void PreCheckCreateOrderForRebuildRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string PreCheckCreateOrderForRebuildRequest::getTimeType()const
{
	return timeType_;
}

void PreCheckCreateOrderForRebuildRequest::setTimeType(const std::string& timeType)
{
	timeType_ = timeType;
	setCoreParameter("TimeType", timeType);
}

std::string PreCheckCreateOrderForRebuildRequest::getPayType()const
{
	return payType_;
}

void PreCheckCreateOrderForRebuildRequest::setPayType(const std::string& payType)
{
	payType_ = payType;
	setCoreParameter("PayType", payType);
}

std::string PreCheckCreateOrderForRebuildRequest::getInstanceNetworkType()const
{
	return instanceNetworkType_;
}

void PreCheckCreateOrderForRebuildRequest::setInstanceNetworkType(const std::string& instanceNetworkType)
{
	instanceNetworkType_ = instanceNetworkType;
	setCoreParameter("InstanceNetworkType", instanceNetworkType);
}

