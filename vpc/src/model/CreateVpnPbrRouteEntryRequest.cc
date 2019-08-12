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

#include <alibabacloud/vpc/model/CreateVpnPbrRouteEntryRequest.h>

using AlibabaCloud::Vpc::Model::CreateVpnPbrRouteEntryRequest;

CreateVpnPbrRouteEntryRequest::CreateVpnPbrRouteEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateVpnPbrRouteEntry")
{}

CreateVpnPbrRouteEntryRequest::~CreateVpnPbrRouteEntryRequest()
{}

std::string CreateVpnPbrRouteEntryRequest::getRouteSource()const
{
	return routeSource_;
}

void CreateVpnPbrRouteEntryRequest::setRouteSource(const std::string& routeSource)
{
	routeSource_ = routeSource;
	setCoreParameter("RouteSource", std::to_string(routeSource));
}

long CreateVpnPbrRouteEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateVpnPbrRouteEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateVpnPbrRouteEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateVpnPbrRouteEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateVpnPbrRouteEntryRequest::getClientToken()const
{
	return clientToken_;
}

void CreateVpnPbrRouteEntryRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string CreateVpnPbrRouteEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateVpnPbrRouteEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

int CreateVpnPbrRouteEntryRequest::getWeight()const
{
	return weight_;
}

void CreateVpnPbrRouteEntryRequest::setWeight(int weight)
{
	weight_ = weight;
	setCoreParameter("Weight", weight);
}

std::string CreateVpnPbrRouteEntryRequest::getDescription()const
{
	return description_;
}

void CreateVpnPbrRouteEntryRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateVpnPbrRouteEntryRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void CreateVpnPbrRouteEntryRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setCoreParameter("VpnGatewayId", std::to_string(vpnGatewayId));
}

long CreateVpnPbrRouteEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateVpnPbrRouteEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateVpnPbrRouteEntryRequest::getRouteDest()const
{
	return routeDest_;
}

void CreateVpnPbrRouteEntryRequest::setRouteDest(const std::string& routeDest)
{
	routeDest_ = routeDest;
	setCoreParameter("RouteDest", std::to_string(routeDest));
}

std::string CreateVpnPbrRouteEntryRequest::getNextHop()const
{
	return nextHop_;
}

void CreateVpnPbrRouteEntryRequest::setNextHop(const std::string& nextHop)
{
	nextHop_ = nextHop;
	setCoreParameter("NextHop", std::to_string(nextHop));
}

bool CreateVpnPbrRouteEntryRequest::getPublishVpc()const
{
	return publishVpc_;
}

void CreateVpnPbrRouteEntryRequest::setPublishVpc(bool publishVpc)
{
	publishVpc_ = publishVpc;
	setCoreParameter("PublishVpc", publishVpc ? "true" : "false");
}

std::string CreateVpnPbrRouteEntryRequest::getRegionId()const
{
	return regionId_;
}

void CreateVpnPbrRouteEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateVpnPbrRouteEntryRequest::getOverlayMode()const
{
	return overlayMode_;
}

void CreateVpnPbrRouteEntryRequest::setOverlayMode(const std::string& overlayMode)
{
	overlayMode_ = overlayMode;
	setCoreParameter("OverlayMode", std::to_string(overlayMode));
}

