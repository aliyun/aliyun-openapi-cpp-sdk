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

#include <alibabacloud/ecs/model/ModifyDedicatedHostsChargeTypeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDedicatedHostsChargeTypeRequest;

ModifyDedicatedHostsChargeTypeRequest::ModifyDedicatedHostsChargeTypeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyDedicatedHostsChargeType")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDedicatedHostsChargeTypeRequest::~ModifyDedicatedHostsChargeTypeRequest()
{}

std::string ModifyDedicatedHostsChargeTypeRequest::getDedicatedHostIds()const
{
	return dedicatedHostIds_;
}

void ModifyDedicatedHostsChargeTypeRequest::setDedicatedHostIds(const std::string& dedicatedHostIds)
{
	dedicatedHostIds_ = dedicatedHostIds;
	setParameter("DedicatedHostIds", dedicatedHostIds);
}

long ModifyDedicatedHostsChargeTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDedicatedHostsChargeTypeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDedicatedHostsChargeTypeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyDedicatedHostsChargeTypeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyDedicatedHostsChargeTypeRequest::getDedicatedHostChargeType()const
{
	return dedicatedHostChargeType_;
}

void ModifyDedicatedHostsChargeTypeRequest::setDedicatedHostChargeType(const std::string& dedicatedHostChargeType)
{
	dedicatedHostChargeType_ = dedicatedHostChargeType;
	setParameter("DedicatedHostChargeType", dedicatedHostChargeType);
}

std::string ModifyDedicatedHostsChargeTypeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDedicatedHostsChargeTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int ModifyDedicatedHostsChargeTypeRequest::getPeriod()const
{
	return period_;
}

void ModifyDedicatedHostsChargeTypeRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

bool ModifyDedicatedHostsChargeTypeRequest::getDryRun()const
{
	return dryRun_;
}

void ModifyDedicatedHostsChargeTypeRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

bool ModifyDedicatedHostsChargeTypeRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyDedicatedHostsChargeTypeRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setParameter("AutoPay", autoPay ? "true" : "false");
}

std::string ModifyDedicatedHostsChargeTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDedicatedHostsChargeTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDedicatedHostsChargeTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDedicatedHostsChargeTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDedicatedHostsChargeTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDedicatedHostsChargeTypeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyDedicatedHostsChargeTypeRequest::getDetailFee()const
{
	return detailFee_;
}

void ModifyDedicatedHostsChargeTypeRequest::setDetailFee(bool detailFee)
{
	detailFee_ = detailFee;
	setParameter("DetailFee", detailFee ? "true" : "false");
}

std::string ModifyDedicatedHostsChargeTypeRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void ModifyDedicatedHostsChargeTypeRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

