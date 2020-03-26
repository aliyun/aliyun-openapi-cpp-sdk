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
{
	setMethod(HttpRequest::Method::Post);
}

ModifyVpnConnectionAttributeRequest::~ModifyVpnConnectionAttributeRequest()
{}

std::string ModifyVpnConnectionAttributeRequest::getIkeConfig()const
{
	return ikeConfig_;
}

void ModifyVpnConnectionAttributeRequest::setIkeConfig(const std::string& ikeConfig)
{
	ikeConfig_ = ikeConfig;
	setParameter("IkeConfig", ikeConfig);
}

long ModifyVpnConnectionAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyVpnConnectionAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ModifyVpnConnectionAttributeRequest::getAutoConfigRoute()const
{
	return autoConfigRoute_;
}

void ModifyVpnConnectionAttributeRequest::setAutoConfigRoute(bool autoConfigRoute)
{
	autoConfigRoute_ = autoConfigRoute;
	setParameter("AutoConfigRoute", autoConfigRoute ? "true" : "false");
}

std::string ModifyVpnConnectionAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyVpnConnectionAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifyVpnConnectionAttributeRequest::getIpsecConfig()const
{
	return ipsecConfig_;
}

void ModifyVpnConnectionAttributeRequest::setIpsecConfig(const std::string& ipsecConfig)
{
	ipsecConfig_ = ipsecConfig;
	setParameter("IpsecConfig", ipsecConfig);
}

std::string ModifyVpnConnectionAttributeRequest::getHealthCheckConfig()const
{
	return healthCheckConfig_;
}

void ModifyVpnConnectionAttributeRequest::setHealthCheckConfig(const std::string& healthCheckConfig)
{
	healthCheckConfig_ = healthCheckConfig;
	setParameter("HealthCheckConfig", healthCheckConfig);
}

std::string ModifyVpnConnectionAttributeRequest::getLocalSubnet()const
{
	return localSubnet_;
}

void ModifyVpnConnectionAttributeRequest::setLocalSubnet(const std::string& localSubnet)
{
	localSubnet_ = localSubnet;
	setParameter("LocalSubnet", localSubnet);
}

std::string ModifyVpnConnectionAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyVpnConnectionAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifyVpnConnectionAttributeRequest::getRemoteSubnet()const
{
	return remoteSubnet_;
}

void ModifyVpnConnectionAttributeRequest::setRemoteSubnet(const std::string& remoteSubnet)
{
	remoteSubnet_ = remoteSubnet;
	setParameter("RemoteSubnet", remoteSubnet);
}

bool ModifyVpnConnectionAttributeRequest::getEffectImmediately()const
{
	return effectImmediately_;
}

void ModifyVpnConnectionAttributeRequest::setEffectImmediately(bool effectImmediately)
{
	effectImmediately_ = effectImmediately;
	setParameter("EffectImmediately", effectImmediately ? "true" : "false");
}

std::string ModifyVpnConnectionAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyVpnConnectionAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyVpnConnectionAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyVpnConnectionAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyVpnConnectionAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyVpnConnectionAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool ModifyVpnConnectionAttributeRequest::getEnableDpd()const
{
	return enableDpd_;
}

void ModifyVpnConnectionAttributeRequest::setEnableDpd(bool enableDpd)
{
	enableDpd_ = enableDpd;
	setParameter("EnableDpd", enableDpd ? "true" : "false");
}

std::string ModifyVpnConnectionAttributeRequest::getVpnConnectionId()const
{
	return vpnConnectionId_;
}

void ModifyVpnConnectionAttributeRequest::setVpnConnectionId(const std::string& vpnConnectionId)
{
	vpnConnectionId_ = vpnConnectionId;
	setParameter("VpnConnectionId", vpnConnectionId);
}

std::string ModifyVpnConnectionAttributeRequest::getName()const
{
	return name_;
}

void ModifyVpnConnectionAttributeRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

bool ModifyVpnConnectionAttributeRequest::getEnableNatTraversal()const
{
	return enableNatTraversal_;
}

void ModifyVpnConnectionAttributeRequest::setEnableNatTraversal(bool enableNatTraversal)
{
	enableNatTraversal_ = enableNatTraversal;
	setParameter("EnableNatTraversal", enableNatTraversal ? "true" : "false");
}

