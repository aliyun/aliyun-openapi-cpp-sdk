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

#include <alibabacloud/vpc/model/ModifyRouteEntryRequest.h>

using AlibabaCloud::Vpc::Model::ModifyRouteEntryRequest;

ModifyRouteEntryRequest::ModifyRouteEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyRouteEntry")
{}

ModifyRouteEntryRequest::~ModifyRouteEntryRequest()
{}

std::string ModifyRouteEntryRequest::getRouteEntryName()const
{
	return routeEntryName_;
}

void ModifyRouteEntryRequest::setRouteEntryName(const std::string& routeEntryName)
{
	routeEntryName_ = routeEntryName;
	setCoreParameter("RouteEntryName", std::to_string(routeEntryName));
}

std::string ModifyRouteEntryRequest::getRegionId()const
{
	return regionId_;
}

void ModifyRouteEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyRouteEntryRequest::getRouteEntryId()const
{
	return routeEntryId_;
}

void ModifyRouteEntryRequest::setRouteEntryId(const std::string& routeEntryId)
{
	routeEntryId_ = routeEntryId;
	setCoreParameter("RouteEntryId", std::to_string(routeEntryId));
}

std::string ModifyRouteEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyRouteEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyRouteEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyRouteEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long ModifyRouteEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyRouteEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

