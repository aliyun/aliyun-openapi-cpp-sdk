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

#include <alibabacloud/ecs/model/PurchaseReservedInstancesOfferingRequest.h>

using AlibabaCloud::Ecs::Model::PurchaseReservedInstancesOfferingRequest;

PurchaseReservedInstancesOfferingRequest::PurchaseReservedInstancesOfferingRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "PurchaseReservedInstancesOffering")
{
	setMethod(HttpRequest::Method::Post);
}

PurchaseReservedInstancesOfferingRequest::~PurchaseReservedInstancesOfferingRequest()
{}

long PurchaseReservedInstancesOfferingRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PurchaseReservedInstancesOfferingRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PurchaseReservedInstancesOfferingRequest::getClientToken()const
{
	return clientToken_;
}

void PurchaseReservedInstancesOfferingRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string PurchaseReservedInstancesOfferingRequest::getDescription()const
{
	return description_;
}

void PurchaseReservedInstancesOfferingRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string PurchaseReservedInstancesOfferingRequest::getPlatform()const
{
	return platform_;
}

void PurchaseReservedInstancesOfferingRequest::setPlatform(const std::string& platform)
{
	platform_ = platform;
	setParameter("Platform", platform);
}

std::string PurchaseReservedInstancesOfferingRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void PurchaseReservedInstancesOfferingRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string PurchaseReservedInstancesOfferingRequest::getRegionId()const
{
	return regionId_;
}

void PurchaseReservedInstancesOfferingRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string PurchaseReservedInstancesOfferingRequest::getScope()const
{
	return scope_;
}

void PurchaseReservedInstancesOfferingRequest::setScope(const std::string& scope)
{
	scope_ = scope;
	setParameter("Scope", scope);
}

std::string PurchaseReservedInstancesOfferingRequest::getInstanceType()const
{
	return instanceType_;
}

void PurchaseReservedInstancesOfferingRequest::setInstanceType(const std::string& instanceType)
{
	instanceType_ = instanceType;
	setParameter("InstanceType", instanceType);
}

int PurchaseReservedInstancesOfferingRequest::getPeriod()const
{
	return period_;
}

void PurchaseReservedInstancesOfferingRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string PurchaseReservedInstancesOfferingRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PurchaseReservedInstancesOfferingRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PurchaseReservedInstancesOfferingRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PurchaseReservedInstancesOfferingRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long PurchaseReservedInstancesOfferingRequest::getOwnerId()const
{
	return ownerId_;
}

void PurchaseReservedInstancesOfferingRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string PurchaseReservedInstancesOfferingRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void PurchaseReservedInstancesOfferingRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string PurchaseReservedInstancesOfferingRequest::getOfferingType()const
{
	return offeringType_;
}

void PurchaseReservedInstancesOfferingRequest::setOfferingType(const std::string& offeringType)
{
	offeringType_ = offeringType;
	setParameter("OfferingType", offeringType);
}

std::string PurchaseReservedInstancesOfferingRequest::getZoneId()const
{
	return zoneId_;
}

void PurchaseReservedInstancesOfferingRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string PurchaseReservedInstancesOfferingRequest::getReservedInstanceName()const
{
	return reservedInstanceName_;
}

void PurchaseReservedInstancesOfferingRequest::setReservedInstanceName(const std::string& reservedInstanceName)
{
	reservedInstanceName_ = reservedInstanceName;
	setParameter("ReservedInstanceName", reservedInstanceName);
}

int PurchaseReservedInstancesOfferingRequest::getInstanceAmount()const
{
	return instanceAmount_;
}

void PurchaseReservedInstancesOfferingRequest::setInstanceAmount(int instanceAmount)
{
	instanceAmount_ = instanceAmount;
	setParameter("InstanceAmount", std::to_string(instanceAmount));
}

