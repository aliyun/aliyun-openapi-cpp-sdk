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

#include <alibabacloud/ecs/model/ModifyDemandRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDemandRequest;

ModifyDemandRequest::ModifyDemandRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyDemand")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDemandRequest::~ModifyDemandRequest()
{}

long ModifyDemandRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDemandRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDemandRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyDemandRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyDemandRequest::getStartTime()const
{
	return startTime_;
}

void ModifyDemandRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

std::string ModifyDemandRequest::getDemandDescription()const
{
	return demandDescription_;
}

void ModifyDemandRequest::setDemandDescription(const std::string& demandDescription)
{
	demandDescription_ = demandDescription;
	setParameter("DemandDescription", demandDescription);
}

std::string ModifyDemandRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDemandRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyDemandRequest::getInstanceType()const
{
	return instanceType_;
}

void ModifyDemandRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

std::string ModifyDemandRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void ModifyDemandRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setParameter("InstanceChargeType", instanceChargeType);
}

std::string ModifyDemandRequest::getDemandName()const
{
	return demandName_;
}

void ModifyDemandRequest::setDemandName(const std::string& demandName)
{
	demandName_ = demandName;
	setParameter("DemandName", demandName);
}

int ModifyDemandRequest::getAmount()const
{
	return amount_;
}

void ModifyDemandRequest::setAmount(int amount)
{
	amount_ = amount;
	setParameter("Amount", std::to_string(amount));
}

int ModifyDemandRequest::getPeriod()const
{
	return period_;
}

void ModifyDemandRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string ModifyDemandRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDemandRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDemandRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDemandRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDemandRequest::getEndTime()const
{
	return endTime_;
}

void ModifyDemandRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setParameter("EndTime", endTime);
}

long ModifyDemandRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDemandRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyDemandRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void ModifyDemandRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string ModifyDemandRequest::getDemandId()const
{
	return demandId_;
}

void ModifyDemandRequest::setDemandId(const std::string& demandId)
{
	demandId_ = demandId;
	setParameter("DemandId", demandId);
}

std::string ModifyDemandRequest::getZoneId()const
{
	return zoneId_;
}

void ModifyDemandRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

