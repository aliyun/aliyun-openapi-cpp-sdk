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

#include <alibabacloud/vpc/model/CreateRouterInterfaceRequest.h>

using AlibabaCloud::Vpc::Model::CreateRouterInterfaceRequest;

CreateRouterInterfaceRequest::CreateRouterInterfaceRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateRouterInterface")
{}

CreateRouterInterfaceRequest::~CreateRouterInterfaceRequest()
{}

std::string CreateRouterInterfaceRequest::getAccessPointId()const
{
	return accessPointId_;
}

void CreateRouterInterfaceRequest::setAccessPointId(const std::string& accessPointId)
{
	accessPointId_ = accessPointId;
	setCoreParameter("AccessPointId", std::to_string(accessPointId));
}

std::string CreateRouterInterfaceRequest::getOppositeRouterId()const
{
	return oppositeRouterId_;
}

void CreateRouterInterfaceRequest::setOppositeRouterId(const std::string& oppositeRouterId)
{
	oppositeRouterId_ = oppositeRouterId;
	setCoreParameter("OppositeRouterId", std::to_string(oppositeRouterId));
}

std::string CreateRouterInterfaceRequest::getOppositeAccessPointId()const
{
	return oppositeAccessPointId_;
}

void CreateRouterInterfaceRequest::setOppositeAccessPointId(const std::string& oppositeAccessPointId)
{
	oppositeAccessPointId_ = oppositeAccessPointId;
	setCoreParameter("OppositeAccessPointId", std::to_string(oppositeAccessPointId));
}

long CreateRouterInterfaceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateRouterInterfaceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateRouterInterfaceRequest::getRole()const
{
	return role_;
}

void CreateRouterInterfaceRequest::setRole(const std::string& role)
{
	role_ = role;
	setCoreParameter("Role", std::to_string(role));
}

std::string CreateRouterInterfaceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateRouterInterfaceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string CreateRouterInterfaceRequest::getHealthCheckTargetIp()const
{
	return healthCheckTargetIp_;
}

void CreateRouterInterfaceRequest::setHealthCheckTargetIp(const std::string& healthCheckTargetIp)
{
	healthCheckTargetIp_ = healthCheckTargetIp;
	setCoreParameter("HealthCheckTargetIp", std::to_string(healthCheckTargetIp));
}

std::string CreateRouterInterfaceRequest::getDescription()const
{
	return description_;
}

void CreateRouterInterfaceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateRouterInterfaceRequest::getSpec()const
{
	return spec_;
}

void CreateRouterInterfaceRequest::setSpec(const std::string& spec)
{
	spec_ = spec;
	setCoreParameter("Spec", std::to_string(spec));
}

std::string CreateRouterInterfaceRequest::getRegionId()const
{
	return regionId_;
}

void CreateRouterInterfaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateRouterInterfaceRequest::getOppositeInterfaceId()const
{
	return oppositeInterfaceId_;
}

void CreateRouterInterfaceRequest::setOppositeInterfaceId(const std::string& oppositeInterfaceId)
{
	oppositeInterfaceId_ = oppositeInterfaceId;
	setCoreParameter("OppositeInterfaceId", std::to_string(oppositeInterfaceId));
}

std::string CreateRouterInterfaceRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateRouterInterfaceRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", std::to_string(instanceChargeType));
}

int CreateRouterInterfaceRequest::getPeriod()const
{
	return period_;
}

void CreateRouterInterfaceRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", period);
}

bool CreateRouterInterfaceRequest::getAutoPay()const
{
	return autoPay_;
}

void CreateRouterInterfaceRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string CreateRouterInterfaceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateRouterInterfaceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateRouterInterfaceRequest::getOppositeRegionId()const
{
	return oppositeRegionId_;
}

void CreateRouterInterfaceRequest::setOppositeRegionId(const std::string& oppositeRegionId)
{
	oppositeRegionId_ = oppositeRegionId;
	setCoreParameter("OppositeRegionId", std::to_string(oppositeRegionId));
}

std::string CreateRouterInterfaceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateRouterInterfaceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long CreateRouterInterfaceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateRouterInterfaceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateRouterInterfaceRequest::getOppositeInterfaceOwnerId()const
{
	return oppositeInterfaceOwnerId_;
}

void CreateRouterInterfaceRequest::setOppositeInterfaceOwnerId(const std::string& oppositeInterfaceOwnerId)
{
	oppositeInterfaceOwnerId_ = oppositeInterfaceOwnerId;
	setCoreParameter("OppositeInterfaceOwnerId", std::to_string(oppositeInterfaceOwnerId));
}

std::string CreateRouterInterfaceRequest::getRouterType()const
{
	return routerType_;
}

void CreateRouterInterfaceRequest::setRouterType(const std::string& routerType)
{
	routerType_ = routerType;
	setCoreParameter("RouterType", std::to_string(routerType));
}

std::string CreateRouterInterfaceRequest::getHealthCheckSourceIp()const
{
	return healthCheckSourceIp_;
}

void CreateRouterInterfaceRequest::setHealthCheckSourceIp(const std::string& healthCheckSourceIp)
{
	healthCheckSourceIp_ = healthCheckSourceIp;
	setCoreParameter("HealthCheckSourceIp", std::to_string(healthCheckSourceIp));
}

std::string CreateRouterInterfaceRequest::getRouterId()const
{
	return routerId_;
}

void CreateRouterInterfaceRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setCoreParameter("RouterId", std::to_string(routerId));
}

std::string CreateRouterInterfaceRequest::getOppositeRouterType()const
{
	return oppositeRouterType_;
}

void CreateRouterInterfaceRequest::setOppositeRouterType(const std::string& oppositeRouterType)
{
	oppositeRouterType_ = oppositeRouterType;
	setCoreParameter("OppositeRouterType", std::to_string(oppositeRouterType));
}

std::string CreateRouterInterfaceRequest::getName()const
{
	return name_;
}

void CreateRouterInterfaceRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string CreateRouterInterfaceRequest::getPricingCycle()const
{
	return pricingCycle_;
}

void CreateRouterInterfaceRequest::setPricingCycle(const std::string& pricingCycle)
{
	pricingCycle_ = pricingCycle;
	setCoreParameter("PricingCycle", std::to_string(pricingCycle));
}

