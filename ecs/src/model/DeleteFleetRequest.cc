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

#include <alibabacloud/ecs/model/DeleteFleetRequest.h>

using AlibabaCloud::Ecs::Model::DeleteFleetRequest;

DeleteFleetRequest::DeleteFleetRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteFleet")
{}

DeleteFleetRequest::~DeleteFleetRequest()
{}

long DeleteFleetRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteFleetRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteFleetRequest::getRegionId()const
{
	return regionId_;
}

void DeleteFleetRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

bool DeleteFleetRequest::getTerminateInstances()const
{
	return terminateInstances_;
}

void DeleteFleetRequest::setTerminateInstances(bool terminateInstances)
{
	terminateInstances_ = terminateInstances;
	setCoreParameter("TerminateInstances", terminateInstances ? "true" : "false");
}

std::string DeleteFleetRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteFleetRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteFleetRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteFleetRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteFleetRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteFleetRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteFleetRequest::getFleetId()const
{
	return fleetId_;
}

void DeleteFleetRequest::setFleetId(const std::string& fleetId)
{
	fleetId_ = fleetId;
	setCoreParameter("FleetId", fleetId);
}

