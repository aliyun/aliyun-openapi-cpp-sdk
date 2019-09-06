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

#include <alibabacloud/ecs/model/ModifyDedicatedHostAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDedicatedHostAttributeRequest;

ModifyDedicatedHostAttributeRequest::ModifyDedicatedHostAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyDedicatedHostAttribute")
{}

ModifyDedicatedHostAttributeRequest::~ModifyDedicatedHostAttributeRequest()
{}

long ModifyDedicatedHostAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDedicatedHostAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDedicatedHostAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyDedicatedHostAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

std::string ModifyDedicatedHostAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDedicatedHostAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyDedicatedHostAttributeRequest::getActionOnMaintenance()const
{
	return actionOnMaintenance_;
}

void ModifyDedicatedHostAttributeRequest::setActionOnMaintenance(const std::string& actionOnMaintenance)
{
	actionOnMaintenance_ = actionOnMaintenance;
	setCoreParameter("ActionOnMaintenance", actionOnMaintenance);
}

std::string ModifyDedicatedHostAttributeRequest::getDedicatedHostName()const
{
	return dedicatedHostName_;
}

void ModifyDedicatedHostAttributeRequest::setDedicatedHostName(const std::string& dedicatedHostName)
{
	dedicatedHostName_ = dedicatedHostName;
	setCoreParameter("DedicatedHostName", dedicatedHostName);
}

std::string ModifyDedicatedHostAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDedicatedHostAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDedicatedHostAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDedicatedHostAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyDedicatedHostAttributeRequest::getDedicatedHostId()const
{
	return dedicatedHostId_;
}

void ModifyDedicatedHostAttributeRequest::setDedicatedHostId(const std::string& dedicatedHostId)
{
	dedicatedHostId_ = dedicatedHostId;
	setCoreParameter("DedicatedHostId", dedicatedHostId);
}

long ModifyDedicatedHostAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDedicatedHostAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int ModifyDedicatedHostAttributeRequest::getNetworkAttributesSlbUdpTimeout()const
{
	return networkAttributesSlbUdpTimeout_;
}

void ModifyDedicatedHostAttributeRequest::setNetworkAttributesSlbUdpTimeout(int networkAttributesSlbUdpTimeout)
{
	networkAttributesSlbUdpTimeout_ = networkAttributesSlbUdpTimeout;
	setCoreParameter("NetworkAttributesSlbUdpTimeout", std::to_string(networkAttributesSlbUdpTimeout));
}

std::string ModifyDedicatedHostAttributeRequest::getAutoPlacement()const
{
	return autoPlacement_;
}

void ModifyDedicatedHostAttributeRequest::setAutoPlacement(const std::string& autoPlacement)
{
	autoPlacement_ = autoPlacement;
	setCoreParameter("AutoPlacement", autoPlacement);
}

int ModifyDedicatedHostAttributeRequest::getNetworkAttributesUdpTimeout()const
{
	return networkAttributesUdpTimeout_;
}

void ModifyDedicatedHostAttributeRequest::setNetworkAttributesUdpTimeout(int networkAttributesUdpTimeout)
{
	networkAttributesUdpTimeout_ = networkAttributesUdpTimeout;
	setCoreParameter("NetworkAttributesUdpTimeout", std::to_string(networkAttributesUdpTimeout));
}

