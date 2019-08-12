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

#include <alibabacloud/ecs/model/ModifyInstanceChargeTypeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyInstanceChargeTypeRequest;

ModifyInstanceChargeTypeRequest::ModifyInstanceChargeTypeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyInstanceChargeType")
{}

ModifyInstanceChargeTypeRequest::~ModifyInstanceChargeTypeRequest()
{}

bool ModifyInstanceChargeTypeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyInstanceChargeTypeRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

int ModifyInstanceChargeTypeRequest::getPeriod()const
{
	return period_;
}

void ModifyInstanceChargeTypeRequest::setPeriod(int period)
{
	period_ = period;
	setCoreParameter("Period", std::to_string(period));
}

bool ModifyInstanceChargeTypeRequest::getDryRun()const
{
	return dryRun_;
}

void ModifyInstanceChargeTypeRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setCoreParameter("DryRun", dryRun ? "true" : "false");
}

bool ModifyInstanceChargeTypeRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyInstanceChargeTypeRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

bool ModifyInstanceChargeTypeRequest::getIncludeDataDisks()const
{
	return includeDataDisks_;
}

void ModifyInstanceChargeTypeRequest::setIncludeDataDisks(bool includeDataDisks)
{
	includeDataDisks_ = includeDataDisks;
	setCoreParameter("IncludeDataDisks", includeDataDisks ? "true" : "false");
}

std::string ModifyInstanceChargeTypeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyInstanceChargeTypeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyInstanceChargeTypeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyInstanceChargeTypeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyInstanceChargeTypeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyInstanceChargeTypeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

bool ModifyInstanceChargeTypeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyInstanceChargeTypeRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

std::string ModifyInstanceChargeTypeRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ModifyInstanceChargeTypeRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

std::string ModifyInstanceChargeTypeRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void ModifyInstanceChargeTypeRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setCoreParameter("PeriodUnit", periodUnit);
}

std::string ModifyInstanceChargeTypeRequest::getInstanceIds()const
{
	return instanceIds_;
}

void ModifyInstanceChargeTypeRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", instanceIds);
}

std::string ModifyInstanceChargeTypeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyInstanceChargeTypeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool ModifyInstanceChargeTypeRequest::getIsDetailFee()const
{
	return isDetailFee_;
}

void ModifyInstanceChargeTypeRequest::setIsDetailFee(bool isDetailFee)
{
	isDetailFee_ = isDetailFee;
	setCoreParameter("IsDetailFee", isDetailFee ? "true" : "false");
}

std::string ModifyInstanceChargeTypeRequest::getInstanceChargeType()const
{
	return instanceChargeType_;
}

void ModifyInstanceChargeTypeRequest::setInstanceChargeType(const std::string& instanceChargeType)
{
	instanceChargeType_ = instanceChargeType;
	setCoreParameter("InstanceChargeType", instanceChargeType);
}

