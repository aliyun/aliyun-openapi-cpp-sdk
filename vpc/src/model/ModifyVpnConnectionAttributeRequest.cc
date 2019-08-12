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

#include <alibabacloud/vpc/model/ModifyVpnConnectionAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVpnConnectionAttributeRequest;

ModifyVpnConnectionAttributeRequest::ModifyVpnConnectionAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyVpnConnectionAttribute")
{}

ModifyVpnConnectionAttributeRequest::~ModifyVpnConnectionAttributeRequest()
{}

std::string ModifyVpnConnectionAttributeRequest::getIkeConfig()const
{
	return ikeConfig_;
}

void ModifyVpnConnectionAttributeRequest::setIkeConfig(const std::string& ikeConfig)
{
	ikeConfig_ = ikeConfig;
	setCoreParameter("IkeConfig", std::to_string(ikeConfig));
}

long ModifyVpnConnectionAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyVpnConnectionAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyVpnConnectionAttributeRequest::getRemoteSubnet()const
{
	return remoteSubnet_;
}

void ModifyVpnConnectionAttributeRequest::setRemoteSubnet(const std::string& remoteSubnet)
{
	remoteSubnet_ = remoteSubnet;
	setCoreParameter("RemoteSubnet", std::to_string(remoteSubnet));
}

bool ModifyVpnConnectionAttributeRequest::getEffectImmediately()const
{
	return effectImmediately_;
}

void ModifyVpnConnectionAttributeRequest::setEffectImmediately(bool effectImmediately)
{
	effectImmediately_ = effectImmediately;
	setCoreParameter("EffectImmediately", effectImmediately ? "true" : "false");
}

bool ModifyVpnConnectionAttributeRequest::getAutoConfigRoute()const
{
	return autoConfigRoute_;
}

void ModifyVpnConnectionAttributeRequest::setAutoConfigRoute(bool autoConfigRoute)
{
	autoConfigRoute_ = autoConfigRoute;
	setCoreParameter("AutoConfigRoute", autoConfigRoute ? "true" : "false");
}

std::string ModifyVpnConnectionAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyVpnConnectionAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyVpnConnectionAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyVpnConnectionAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string ModifyVpnConnectionAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyVpnConnectionAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyVpnConnectionAttributeRequest::getIpsecConfig()const
{
	return ipsecConfig_;
}

void ModifyVpnConnectionAttributeRequest::setIpsecConfig(const std::string& ipsecConfig)
{
	ipsecConfig_ = ipsecConfig;
	setCoreParameter("IpsecConfig", std::to_string(ipsecConfig));
}

long ModifyVpnConnectionAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyVpnConnectionAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyVpnConnectionAttributeRequest::getHealthCheckConfig()const
{
	return healthCheckConfig_;
}

void ModifyVpnConnectionAttributeRequest::setHealthCheckConfig(const std::string& healthCheckConfig)
{
	healthCheckConfig_ = healthCheckConfig;
	setCoreParameter("HealthCheckConfig", std::to_string(healthCheckConfig));
}

std::string ModifyVpnConnectionAttributeRequest::getLocalSubnet()const
{
	return localSubnet_;
}

void ModifyVpnConnectionAttributeRequest::setLocalSubnet(const std::string& localSubnet)
{
	localSubnet_ = localSubnet;
	setCoreParameter("LocalSubnet", std::to_string(localSubnet));
}

std::string ModifyVpnConnectionAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyVpnConnectionAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyVpnConnectionAttributeRequest::getVpnConnectionId()const
{
	return vpnConnectionId_;
}

void ModifyVpnConnectionAttributeRequest::setVpnConnectionId(const std::string& vpnConnectionId)
{
	vpnConnectionId_ = vpnConnectionId;
	setCoreParameter("VpnConnectionId", std::to_string(vpnConnectionId));
}

std::string ModifyVpnConnectionAttributeRequest::getName()const
{
	return name_;
}

void ModifyVpnConnectionAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

