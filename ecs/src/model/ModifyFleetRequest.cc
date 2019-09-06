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

#include <alibabacloud/ecs/model/ModifyFleetRequest.h>

using AlibabaCloud::Ecs::Model::ModifyFleetRequest;

ModifyFleetRequest::ModifyFleetRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyFleet")
{}

ModifyFleetRequest::~ModifyFleetRequest()
{}

long ModifyFleetRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyFleetRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ModifyFleetRequest::getTerminateInstancesWithExpiration()const
{
	return terminateInstancesWithExpiration_;
}

void ModifyFleetRequest::setTerminateInstancesWithExpiration(bool terminateInstancesWithExpiration)
{
	terminateInstancesWithExpiration_ = terminateInstancesWithExpiration;
	setCoreParameter("TerminateInstancesWithExpiration", terminateInstancesWithExpiration ? "true" : "false");
}

std::string ModifyFleetRequest::getOnDemandTargetCapacity()const
{
	return onDemandTargetCapacity_;
}

void ModifyFleetRequest::setOnDemandTargetCapacity(const std::string& onDemandTargetCapacity)
{
	onDemandTargetCapacity_ = onDemandTargetCapacity;
	setCoreParameter("OnDemandTargetCapacity", onDemandTargetCapacity);
}

std::string ModifyFleetRequest::getRegionId()const
{
	return regionId_;
}

void ModifyFleetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyFleetRequest::getDefaultTargetCapacityType()const
{
	return defaultTargetCapacityType_;
}

void ModifyFleetRequest::setDefaultTargetCapacityType(const std::string& defaultTargetCapacityType)
{
	defaultTargetCapacityType_ = defaultTargetCapacityType;
	setCoreParameter("DefaultTargetCapacityType", defaultTargetCapacityType);
}

std::string ModifyFleetRequest::getExcessCapacityTerminationPolicy()const
{
	return excessCapacityTerminationPolicy_;
}

void ModifyFleetRequest::setExcessCapacityTerminationPolicy(const std::string& excessCapacityTerminationPolicy)
{
	excessCapacityTerminationPolicy_ = excessCapacityTerminationPolicy;
	setCoreParameter("ExcessCapacityTerminationPolicy", excessCapacityTerminationPolicy);
}

std::string ModifyFleetRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyFleetRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyFleetRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyFleetRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyFleetRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyFleetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyFleetRequest::getFleetId()const
{
	return fleetId_;
}

void ModifyFleetRequest::setFleetId(const std::string& fleetId)
{
	fleetId_ = fleetId;
	setCoreParameter("FleetId", fleetId);
}

std::string ModifyFleetRequest::getTotalTargetCapacity()const
{
	return totalTargetCapacity_;
}

void ModifyFleetRequest::setTotalTargetCapacity(const std::string& totalTargetCapacity)
{
	totalTargetCapacity_ = totalTargetCapacity;
	setCoreParameter("TotalTargetCapacity", totalTargetCapacity);
}

std::string ModifyFleetRequest::getSpotTargetCapacity()const
{
	return spotTargetCapacity_;
}

void ModifyFleetRequest::setSpotTargetCapacity(const std::string& spotTargetCapacity)
{
	spotTargetCapacity_ = spotTargetCapacity;
	setCoreParameter("SpotTargetCapacity", spotTargetCapacity);
}

float ModifyFleetRequest::getMaxSpotPrice()const
{
	return maxSpotPrice_;
}

void ModifyFleetRequest::setMaxSpotPrice(float maxSpotPrice)
{
	maxSpotPrice_ = maxSpotPrice;
	setCoreParameter("MaxSpotPrice", std::to_string(maxSpotPrice));
}

