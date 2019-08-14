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

#include <alibabacloud/vpc/model/CreateGlobalAccelerationInstanceRequest.h>

using AlibabaCloud::Vpc::Model::CreateGlobalAccelerationInstanceRequest;

CreateGlobalAccelerationInstanceRequest::CreateGlobalAccelerationInstanceRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateGlobalAccelerationInstance")
{}

CreateGlobalAccelerationInstanceRequest::~CreateGlobalAccelerationInstanceRequest()
{}

long CreateGlobalAccelerationInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateGlobalAccelerationInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateGlobalAccelerationInstanceRequest::getBandwidthType()const
{
	return bandwidthType_;
}

void CreateGlobalAccelerationInstanceRequest::setBandwidthType(const std::string& bandwidthType)
{
	bandwidthType_ = bandwidthType;
	setCoreParameter("BandwidthType", bandwidthType);
}

std::string CreateGlobalAccelerationInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateGlobalAccelerationInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateGlobalAccelerationInstanceRequest::getServiceLocation()const
{
	return serviceLocation_;
}

void CreateGlobalAccelerationInstanceRequest::setServiceLocation(const std::string& serviceLocation)
{
	serviceLocation_ = serviceLocation;
	setCoreParameter("ServiceLocation", serviceLocation);
}

std::string CreateGlobalAccelerationInstanceRequest::getBandwidth()const
{
	return bandwidth_;
}

void CreateGlobalAccelerationInstanceRequest::setBandwidth(const std::string& bandwidth)
{
	bandwidth_ = bandwidth;
	setCoreParameter("Bandwidth", bandwidth);
}

std::string CreateGlobalAccelerationInstanceRequest::getClientToken()const
{
	return clientToken_;
}

void CreateGlobalAccelerationInstanceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateGlobalAccelerationInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateGlobalAccelerationInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateGlobalAccelerationInstanceRequest::getDescription()const
{
	return description_;
}

void CreateGlobalAccelerationInstanceRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long CreateGlobalAccelerationInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateGlobalAccelerationInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateGlobalAccelerationInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateGlobalAccelerationInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateGlobalAccelerationInstanceRequest::getInternetChargeType()const
{
	return internetChargeType_;
}

void CreateGlobalAccelerationInstanceRequest::setInternetChargeType(const std::string& internetChargeType)
{
	internetChargeType_ = internetChargeType;
	setCoreParameter("InternetChargeType", internetChargeType);
}

std::string CreateGlobalAccelerationInstanceRequest::getName()const
{
	return name_;
}

void CreateGlobalAccelerationInstanceRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

