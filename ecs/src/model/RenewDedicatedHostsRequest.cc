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

#include <alibabacloud/ecs/model/RenewDedicatedHostsRequest.h>

using AlibabaCloud::Ecs::Model::RenewDedicatedHostsRequest;

RenewDedicatedHostsRequest::RenewDedicatedHostsRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "RenewDedicatedHosts")
{
	setMethod(HttpRequest::Method::Post);
}

RenewDedicatedHostsRequest::~RenewDedicatedHostsRequest()
{}

std::string RenewDedicatedHostsRequest::getDedicatedHostIds()const
{
	return dedicatedHostIds_;
}

void RenewDedicatedHostsRequest::setDedicatedHostIds(const std::string& dedicatedHostIds)
{
	dedicatedHostIds_ = dedicatedHostIds;
	setParameter("DedicatedHostIds", dedicatedHostIds);
}

long RenewDedicatedHostsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RenewDedicatedHostsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RenewDedicatedHostsRequest::getClientToken()const
{
	return clientToken_;
}

void RenewDedicatedHostsRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string RenewDedicatedHostsRequest::getRegionId()const
{
	return regionId_;
}

void RenewDedicatedHostsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

int RenewDedicatedHostsRequest::getPeriod()const
{
	return period_;
}

void RenewDedicatedHostsRequest::setPeriod(int period)
{
	period_ = period;
	setParameter("Period", std::to_string(period));
}

std::string RenewDedicatedHostsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RenewDedicatedHostsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RenewDedicatedHostsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RenewDedicatedHostsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long RenewDedicatedHostsRequest::getOwnerId()const
{
	return ownerId_;
}

void RenewDedicatedHostsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string RenewDedicatedHostsRequest::getPeriodUnit()const
{
	return periodUnit_;
}

void RenewDedicatedHostsRequest::setPeriodUnit(const std::string& periodUnit)
{
	periodUnit_ = periodUnit;
	setParameter("PeriodUnit", periodUnit);
}

