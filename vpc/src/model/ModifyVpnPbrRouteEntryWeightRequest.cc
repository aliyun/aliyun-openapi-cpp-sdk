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

#include <alibabacloud/vpc/model/ModifyVpnPbrRouteEntryWeightRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVpnPbrRouteEntryWeightRequest;

ModifyVpnPbrRouteEntryWeightRequest::ModifyVpnPbrRouteEntryWeightRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyVpnPbrRouteEntryWeight")
{}

ModifyVpnPbrRouteEntryWeightRequest::~ModifyVpnPbrRouteEntryWeightRequest()
{}

std::string ModifyVpnPbrRouteEntryWeightRequest::getRouteSource()const
{
	return routeSource_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setRouteSource(const std::string& routeSource)
{
	routeSource_ = routeSource;
	setCoreParameter("RouteSource", routeSource);
}

long ModifyVpnPbrRouteEntryWeightRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyVpnPbrRouteEntryWeightRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyVpnPbrRouteEntryWeightRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyVpnPbrRouteEntryWeightRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int ModifyVpnPbrRouteEntryWeightRequest::getWeight()const
{
	return weight_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setWeight(int weight)
{
	weight_ = weight;
	setCoreParameter("Weight", std::to_string(weight));
}

std::string ModifyVpnPbrRouteEntryWeightRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setCoreParameter("VpnGatewayId", vpnGatewayId);
}

long ModifyVpnPbrRouteEntryWeightRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

int ModifyVpnPbrRouteEntryWeightRequest::getNewWeight()const
{
	return newWeight_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setNewWeight(int newWeight)
{
	newWeight_ = newWeight;
	setCoreParameter("NewWeight", std::to_string(newWeight));
}

std::string ModifyVpnPbrRouteEntryWeightRequest::getRouteDest()const
{
	return routeDest_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setRouteDest(const std::string& routeDest)
{
	routeDest_ = routeDest;
	setCoreParameter("RouteDest", routeDest);
}

std::string ModifyVpnPbrRouteEntryWeightRequest::getNextHop()const
{
	return nextHop_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setNextHop(const std::string& nextHop)
{
	nextHop_ = nextHop;
	setCoreParameter("NextHop", nextHop);
}

std::string ModifyVpnPbrRouteEntryWeightRequest::getRegionId()const
{
	return regionId_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyVpnPbrRouteEntryWeightRequest::getOverlayMode()const
{
	return overlayMode_;
}

void ModifyVpnPbrRouteEntryWeightRequest::setOverlayMode(const std::string& overlayMode)
{
	overlayMode_ = overlayMode;
	setCoreParameter("OverlayMode", overlayMode);
}

