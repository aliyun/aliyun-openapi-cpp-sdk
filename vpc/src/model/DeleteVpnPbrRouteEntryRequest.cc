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

#include <alibabacloud/vpc/model/DeleteVpnPbrRouteEntryRequest.h>

using AlibabaCloud::Vpc::Model::DeleteVpnPbrRouteEntryRequest;

DeleteVpnPbrRouteEntryRequest::DeleteVpnPbrRouteEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteVpnPbrRouteEntry")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteVpnPbrRouteEntryRequest::~DeleteVpnPbrRouteEntryRequest()
{}

std::string DeleteVpnPbrRouteEntryRequest::getRouteSource()const
{
	return routeSource_;
}

void DeleteVpnPbrRouteEntryRequest::setRouteSource(const std::string& routeSource)
{
	routeSource_ = routeSource;
	setCoreParameter("RouteSource", routeSource);
}

long DeleteVpnPbrRouteEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteVpnPbrRouteEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteVpnPbrRouteEntryRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteVpnPbrRouteEntryRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteVpnPbrRouteEntryRequest::getRegionId()const
{
	return regionId_;
}

void DeleteVpnPbrRouteEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteVpnPbrRouteEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteVpnPbrRouteEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteVpnPbrRouteEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteVpnPbrRouteEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int DeleteVpnPbrRouteEntryRequest::getWeight()const
{
	return weight_;
}

void DeleteVpnPbrRouteEntryRequest::setWeight(int weight)
{
	weight_ = weight;
	setCoreParameter("Weight", std::to_string(weight));
}

std::string DeleteVpnPbrRouteEntryRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void DeleteVpnPbrRouteEntryRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setCoreParameter("VpnGatewayId", vpnGatewayId);
}

long DeleteVpnPbrRouteEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteVpnPbrRouteEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteVpnPbrRouteEntryRequest::getRouteDest()const
{
	return routeDest_;
}

void DeleteVpnPbrRouteEntryRequest::setRouteDest(const std::string& routeDest)
{
	routeDest_ = routeDest;
	setCoreParameter("RouteDest", routeDest);
}

std::string DeleteVpnPbrRouteEntryRequest::getNextHop()const
{
	return nextHop_;
}

void DeleteVpnPbrRouteEntryRequest::setNextHop(const std::string& nextHop)
{
	nextHop_ = nextHop;
	setCoreParameter("NextHop", nextHop);
}

std::string DeleteVpnPbrRouteEntryRequest::getOverlayMode()const
{
	return overlayMode_;
}

void DeleteVpnPbrRouteEntryRequest::setOverlayMode(const std::string& overlayMode)
{
	overlayMode_ = overlayMode;
	setCoreParameter("OverlayMode", overlayMode);
}

