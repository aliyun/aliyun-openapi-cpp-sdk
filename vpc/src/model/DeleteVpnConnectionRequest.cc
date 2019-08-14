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

#include <alibabacloud/vpc/model/DeleteVpnConnectionRequest.h>

using AlibabaCloud::Vpc::Model::DeleteVpnConnectionRequest;

DeleteVpnConnectionRequest::DeleteVpnConnectionRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteVpnConnection")
{}

DeleteVpnConnectionRequest::~DeleteVpnConnectionRequest()
{}

long DeleteVpnConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteVpnConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteVpnConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteVpnConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteVpnConnectionRequest::getRegionId()const
{
	return regionId_;
}

void DeleteVpnConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteVpnConnectionRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteVpnConnectionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteVpnConnectionRequest::getVpnConnectionId()const
{
	return vpnConnectionId_;
}

void DeleteVpnConnectionRequest::setVpnConnectionId(const std::string& vpnConnectionId)
{
	vpnConnectionId_ = vpnConnectionId;
	setCoreParameter("VpnConnectionId", vpnConnectionId);
}

std::string DeleteVpnConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteVpnConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteVpnConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteVpnConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

