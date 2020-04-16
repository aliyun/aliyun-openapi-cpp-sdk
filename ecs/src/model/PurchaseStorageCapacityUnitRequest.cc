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

#include <alibabacloud/ecs/model/PurchaseStorageCapacityUnitRequest.h>

using AlibabaCloud::Ecs::Model::PurchaseStorageCapacityUnitRequest;

PurchaseStorageCapacityUnitRequest::PurchaseStorageCapacityUnitRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "PurchaseStorageCapacityUnit")
{
	setMethod(HttpRequest::Method::Post);
}

PurchaseStorageCapacityUnitRequest::~PurchaseStorageCapacityUnitRequest()
{}

long PurchaseStorageCapacityUnitRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PurchaseStorageCapacityUnitRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PurchaseStorageCapacityUnitRequest::getClientToken()const
{
	return clientToken_;
}

void PurchaseStorageCapacityUnitRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string PurchaseStorageCapacityUnitRequest::getDescription()const
{
	return description_;
}

void PurchaseStorageCapacityUnitRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string PurchaseStorageCapacityUnitRequest::getStartTime()const
{
	return startTime_;
}

void PurchaseStorageCapacityUnitRequest::setStartTime(const std::string& startTime)
{
	startTime_ = startTime;
	setParameter("StartTime", startTime);
}

int PurchaseStorageCapacityUnitRequest::getCapacity()const
{
	return capacity_;
}

void PurchaseStorageCapacityUnitRequest::setCapacity(int capacity)
{
	capacity_ = capacity;
	setParameter("Capacity", std::to_string(capacity));
}

std::string PurchaseStorageCapacityUnitRequest::getRegionId()const
{
	return regionId_;
}

void PurchaseStorageCapacityUnitRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int PurchaseStorageCapacityUnitRequest::getPeriod()const
{
	return period_;
}

void PurchaseStorageCapacityUnitRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

int PurchaseStorageCapacityUnitRequest::getAmount()const
{
	return amount_;
}

void PurchaseStorageCapacityUnitRequest::setAmount(int amount)
{
	amount_ = amount;
	setParameter("Amount", std::to_string(amount));
}

std::string PurchaseStorageCapacityUnitRequest::getFromApp()const
{
	return fromApp_;
}

void PurchaseStorageCapacityUnitRequest::setFromApp(const std::string& fromApp)
{
	fromApp_ = fromApp;
	setParameter("FromApp", fromApp);
}

std::string PurchaseStorageCapacityUnitRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PurchaseStorageCapacityUnitRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PurchaseStorageCapacityUnitRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PurchaseStorageCapacityUnitRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long PurchaseStorageCapacityUnitRequest::getOwnerId()const
{
	return ownerId_;
}

void PurchaseStorageCapacityUnitRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string PurchaseStorageCapacityUnitRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void PurchaseStorageCapacityUnitRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string PurchaseStorageCapacityUnitRequest::getName()const
{
	return name_;
}

void PurchaseStorageCapacityUnitRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

