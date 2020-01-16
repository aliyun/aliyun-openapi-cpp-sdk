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

#include <alibabacloud/r-kvstore/model/CreateUserClusterHostRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateUserClusterHostRequest;

CreateUserClusterHostRequest::CreateUserClusterHostRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateUserClusterHost")
{
	setMethod(HttpRequest::Method::Post);
}

CreateUserClusterHostRequest::~CreateUserClusterHostRequest()
{}

long CreateUserClusterHostRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateUserClusterHostRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateUserClusterHostRequest::getCouponNo()const
{
	return couponNo_;
}

void CreateUserClusterHostRequest::setCouponNo(const std::string& couponNo)
{
	couponNo_ = couponNo;
	setCoreParameter("CouponNo", couponNo);
}

std::string CreateUserClusterHostRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateUserClusterHostRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateUserClusterHostRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateUserClusterHostRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string CreateUserClusterHostRequest::getRegionId()const
{
	return regionId_;
}

void CreateUserClusterHostRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateUserClusterHostRequest::getEngine()const
{
	return engine_;
}

void CreateUserClusterHostRequest::setEngine(const std::string& engine)
{
	engine_ = engine;
	setCoreParameter("Engine", engine);
}

int CreateUserClusterHostRequest::getOrderPeriod()const
{
	return orderPeriod_;
}

void CreateUserClusterHostRequest::setOrderPeriod(int orderPeriod)
{
	orderPeriod_ = orderPeriod;
	setCoreParameter("OrderPeriod", std::to_string(orderPeriod));
}

std::string CreateUserClusterHostRequest::getBusinessInfo()const
{
	return businessInfo_;
}

void CreateUserClusterHostRequest::setBusinessInfo(const std::string& businessInfo)
{
	businessInfo_ = businessInfo;
	setCoreParameter("BusinessInfo", businessInfo);
}

std::string CreateUserClusterHostRequest::getAgentId()const
{
	return agentId_;
}

void CreateUserClusterHostRequest::setAgentId(const std::string& agentId)
{
	agentId_ = agentId;
	setCoreParameter("AgentId", agentId);
}

std::string CreateUserClusterHostRequest::getHostClass()const
{
	return hostClass_;
}

void CreateUserClusterHostRequest::setHostClass(const std::string& hostClass)
{
	hostClass_ = hostClass;
	setCoreParameter("HostClass", hostClass);
}

bool CreateUserClusterHostRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateUserClusterHostRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateUserClusterHostRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateUserClusterHostRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateUserClusterHostRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateUserClusterHostRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int CreateUserClusterHostRequest::getOrderNum()const
{
	return orderNum_;
}

void CreateUserClusterHostRequest::setOrderNum(int orderNum)
{
	orderNum_ = orderNum;
	setCoreParameter("OrderNum", std::to_string(orderNum));
}

std::string CreateUserClusterHostRequest::getClusterId()const
{
	return clusterId_;
}

void CreateUserClusterHostRequest::setClusterId(const std::string& clusterId)
{
	clusterId_ = clusterId;
	setCoreParameter("ClusterId", clusterId);
}

long CreateUserClusterHostRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateUserClusterHostRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool CreateUserClusterHostRequest::getAutoRenew()const
{
	return autoRenew_;
}

void CreateUserClusterHostRequest::setAutoRenew(bool autoRenew)
{
	autoRenew_ = autoRenew;
	setCoreParameter("AutoRenew", autoRenew ? "true" : "false");
}

std::string CreateUserClusterHostRequest::getZoneId()const
{
	return zoneId_;
}

void CreateUserClusterHostRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

std::string CreateUserClusterHostRequest::getChargeType()const
{
	return chargeType_;
}

void CreateUserClusterHostRequest::setChargeType(const std::string& chargeType)
{
	chargeType_ = chargeType;
	setCoreParameter("ChargeType", chargeType);
}

