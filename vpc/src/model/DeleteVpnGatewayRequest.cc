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

#include <alibabacloud/vpc/model/DeleteVpnGatewayRequest.h>

using AlibabaCloud::Vpc::Model::DeleteVpnGatewayRequest;

DeleteVpnGatewayRequest::DeleteVpnGatewayRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteVpnGateway")
{}

DeleteVpnGatewayRequest::~DeleteVpnGatewayRequest()
{}

long DeleteVpnGatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteVpnGatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteVpnGatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteVpnGatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DeleteVpnGatewayRequest::getRegionId()const
{
	return regionId_;
}

void DeleteVpnGatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string DeleteVpnGatewayRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteVpnGatewayRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string DeleteVpnGatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteVpnGatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DeleteVpnGatewayRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void DeleteVpnGatewayRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setCoreParameter("VpnGatewayId", std::to_string(vpnGatewayId));
}

long DeleteVpnGatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteVpnGatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

