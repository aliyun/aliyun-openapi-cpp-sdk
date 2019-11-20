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

#include <alibabacloud/vpc/model/PublishVpnRouteEntryRequest.h>

using AlibabaCloud::Vpc::Model::PublishVpnRouteEntryRequest;

PublishVpnRouteEntryRequest::PublishVpnRouteEntryRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "PublishVpnRouteEntry")
{
	setMethod(HttpRequest::Method::Post);
}

PublishVpnRouteEntryRequest::~PublishVpnRouteEntryRequest()
{}

long PublishVpnRouteEntryRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void PublishVpnRouteEntryRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string PublishVpnRouteEntryRequest::getClientToken()const
{
	return clientToken_;
}

void PublishVpnRouteEntryRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string PublishVpnRouteEntryRequest::getRouteType()const
{
	return routeType_;
}

void PublishVpnRouteEntryRequest::setRouteType(const std::string& routeType)
{
	routeType_ = routeType;
	setCoreParameter("RouteType", routeType);
}

bool PublishVpnRouteEntryRequest::getPublishVpc()const
{
	return publishVpc_;
}

void PublishVpnRouteEntryRequest::setPublishVpc(bool publishVpc)
{
	publishVpc_ = publishVpc;
	setCoreParameter("PublishVpc", publishVpc ? "true" : "false");
}

std::string PublishVpnRouteEntryRequest::getRegionId()const
{
	return regionId_;
}

void PublishVpnRouteEntryRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string PublishVpnRouteEntryRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void PublishVpnRouteEntryRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string PublishVpnRouteEntryRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void PublishVpnRouteEntryRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string PublishVpnRouteEntryRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void PublishVpnRouteEntryRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setCoreParameter("VpnGatewayId", vpnGatewayId);
}

long PublishVpnRouteEntryRequest::getOwnerId()const
{
	return ownerId_;
}

void PublishVpnRouteEntryRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string PublishVpnRouteEntryRequest::getRouteDest()const
{
	return routeDest_;
}

void PublishVpnRouteEntryRequest::setRouteDest(const std::string& routeDest)
{
	routeDest_ = routeDest;
	setCoreParameter("RouteDest", routeDest);
}

std::string PublishVpnRouteEntryRequest::getNextHop()const
{
	return nextHop_;
}

void PublishVpnRouteEntryRequest::setNextHop(const std::string& nextHop)
{
	nextHop_ = nextHop;
	setCoreParameter("NextHop", nextHop);
}

