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

#include <alibabacloud/ecs/model/CreateDemandRequest.h>

using AlibabaCloud::Ecs::Model::CreateDemandRequest;

CreateDemandRequest::CreateDemandRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateDemand")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDemandRequest::~CreateDemandRequest()
{}

long CreateDemandRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDemandRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDemandRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDemandRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateDemandRequest::getStartTime()const
{
	return startTime_;
}

void CreateDemandRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setCoreParameter("StartTime", startTime);
}

std::string CreateDemandRequest::getDemandDescription()const
{
	return demandDescription_;
}

void CreateDemandRequest::setDemandDescription(const std::string& demandDescription)
{
	demandDescription_ = demandDescription;
	setCoreParameter("DemandDescription", demandDescription);
}

std::string CreateDemandRequest::getRegionId()const
{
	return regionId_;
}

void CreateDemandRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateDemandRequest::getInstanceType()const
{
	return instanceType_;
}

void CreateDemandRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setCoreParameter("InstanceType", instanceType);
}

std::string CreateDemandRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void CreateDemandRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

std::string CreateDemandRequest::getDemandName()const
{
	return demandName_;
}

void CreateDemandRequest::setDemandName(const std::string& demandName)
{
	demandName_ = demandName;
	setCoreParameter("DemandName", demandName);
}

int CreateDemandRequest::getAmount()const
{
	return amount_;
}

void CreateDemandRequest::setAmount(int amount)
{
	amount_ = amount;
	setCoreParameter("Amount", std::to_string(amount));
}

int CreateDemandRequest::getPeriod()const
{
	return period_;
}

void CreateDemandRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

std::string CreateDemandRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDemandRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDemandRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDemandRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateDemandRequest::getEndTime()const
{
	return endTime_;
}

void CreateDemandRequest::setEndTime(const std::string& endTime)
{
	endTime_ = endTime;
	setCoreParameter("EndTime", endTime);
}

long CreateDemandRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDemandRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDemandRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateDemandRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

std::string CreateDemandRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDemandRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setCoreParameter("ZoneId", zoneId);
}

