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

#include <alibabacloud/ecs/model/AddIpRangeRequest.h>

using AlibabaCloud::Ecs::Model::AddIpRangeRequest;

AddIpRangeRequest::AddIpRangeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AddIpRange")
{}

AddIpRangeRequest::~AddIpRangeRequest()
{}

std::string AddIpRangeRequest::getIpAddress()const
{
	return ipAddress_;
}

void AddIpRangeRequest::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
	setParameter("IpAddress", ipAddress);
}

long AddIpRangeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddIpRangeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddIpRangeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddIpRangeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddIpRangeRequest::getRegionId()const
{
	return regionId_;
}

void AddIpRangeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AddIpRangeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddIpRangeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AddIpRangeRequest::getZoneId()const
{
	return zoneId_;
}

void AddIpRangeRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

long AddIpRangeRequest::getOwnerId()const
{
	return ownerId_;
}

void AddIpRangeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

