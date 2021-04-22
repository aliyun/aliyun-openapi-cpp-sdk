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

#include <alibabacloud/ecs/model/CreateDedicatedBlockStorageClusterRequest.h>

using AlibabaCloud::Ecs::Model::CreateDedicatedBlockStorageClusterRequest;

CreateDedicatedBlockStorageClusterRequest::CreateDedicatedBlockStorageClusterRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateDedicatedBlockStorageCluster")
{
	setMethod(HttpRequest::Method::Post);
}

CreateDedicatedBlockStorageClusterRequest::~CreateDedicatedBlockStorageClusterRequest()
{}

long CreateDedicatedBlockStorageClusterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateDedicatedBlockStorageClusterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateDedicatedBlockStorageClusterRequest::getDedicatedBlockStorageClusterName()const
{
	return dedicatedBlockStorageClusterName_;
}

void CreateDedicatedBlockStorageClusterRequest::setDedicatedBlockStorageClusterName(const std::string& dedicatedBlockStorageClusterName)
{
	dedicatedBlockStorageClusterName_ = dedicatedBlockStorageClusterName;
	setParameter("DedicatedBlockStorageClusterName", dedicatedBlockStorageClusterName);
}

std::string CreateDedicatedBlockStorageClusterRequest::getClientToken()const
{
	return clientToken_;
}

void CreateDedicatedBlockStorageClusterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateDedicatedBlockStorageClusterRequest::getDescription()const
{
	return description_;
}

void CreateDedicatedBlockStorageClusterRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int CreateDedicatedBlockStorageClusterRequest::getCapacity()const
{
	return capacity_;
}

void CreateDedicatedBlockStorageClusterRequest::setCapacity(int capacity)
{
	capacity_ = capacity;
	setParameter("Capacity", std::to_string(capacity));
}

std::string CreateDedicatedBlockStorageClusterRequest::getRegionId()const
{
	return regionId_;
}

void CreateDedicatedBlockStorageClusterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int CreateDedicatedBlockStorageClusterRequest::getPeriod()const
{
	return period_;
}

void CreateDedicatedBlockStorageClusterRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string CreateDedicatedBlockStorageClusterRequest::getFromApp()const
{
	return fromApp_;
}

void CreateDedicatedBlockStorageClusterRequest::setFromApp(const std::string& fromApp)
{
	fromApp_ = fromApp;
	setParameter("FromApp", fromApp);
}

std::string CreateDedicatedBlockStorageClusterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateDedicatedBlockStorageClusterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateDedicatedBlockStorageClusterRequest::getPerformanceLevel()const
{
	return performanceLevel_;
}

void CreateDedicatedBlockStorageClusterRequest::setPerformanceLevel(const std::string& performanceLevel)
{
	performanceLevel_ = performanceLevel;
	setParameter("PerformanceLevel", performanceLevel);
}

std::string CreateDedicatedBlockStorageClusterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateDedicatedBlockStorageClusterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateDedicatedBlockStorageClusterRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateDedicatedBlockStorageClusterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateDedicatedBlockStorageClusterRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void CreateDedicatedBlockStorageClusterRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

std::string CreateDedicatedBlockStorageClusterRequest::getZoneId()const
{
	return zoneId_;
}

void CreateDedicatedBlockStorageClusterRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

std::string CreateDedicatedBlockStorageClusterRequest::getCategory()const
{
	return category_;
}

void CreateDedicatedBlockStorageClusterRequest::setCategory(const std::string& category)
{
	category_ = category;
	setParameter("Category", category);
}

