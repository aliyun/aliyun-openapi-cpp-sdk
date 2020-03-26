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

#include <alibabacloud/vpc/model/CreateVpnConnectionRequest.h>

using AlibabaCloud::Vpc::Model::CreateVpnConnectionRequest;

CreateVpnConnectionRequest::CreateVpnConnectionRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateVpnConnection")
{
	setMethod(HttpRequest::Method::Post);
}

CreateVpnConnectionRequest::~CreateVpnConnectionRequest()
{}

std::string CreateVpnConnectionRequest::getIkeConfig()const
{
	return ikeConfig_;
}

void CreateVpnConnectionRequest::setIkeConfig(const std::string& ikeConfig)
{
	ikeConfig_ = ikeConfig;
	setParameter("IkeConfig", ikeConfig);
}

long CreateVpnConnectionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateVpnConnectionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool CreateVpnConnectionRequest::getAutoConfigRoute()const
{
	return autoConfigRoute_;
}

void CreateVpnConnectionRequest::setAutoConfigRoute(bool autoConfigRoute)
{
	autoConfigRoute_ = autoConfigRoute;
	setParameter("AutoConfigRoute", autoConfigRoute ? "true" : "false");
}

std::string CreateVpnConnectionRequest::getClientToken()const
{
	return clientToken_;
}

void CreateVpnConnectionRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateVpnConnectionRequest::getIpsecConfig()const
{
	return ipsecConfig_;
}

void CreateVpnConnectionRequest::setIpsecConfig(const std::string& ipsecConfig)
{
	ipsecConfig_ = ipsecConfig;
	setParameter("IpsecConfig", ipsecConfig);
}

std::string CreateVpnConnectionRequest::getHealthCheckConfig()const
{
	return healthCheckConfig_;
}

void CreateVpnConnectionRequest::setHealthCheckConfig(const std::string& healthCheckConfig)
{
	healthCheckConfig_ = healthCheckConfig;
	setParameter("HealthCheckConfig", healthCheckConfig);
}

std::string CreateVpnConnectionRequest::getCustomerGatewayId()const
{
	return customerGatewayId_;
}

void CreateVpnConnectionRequest::setCustomerGatewayId(const std::string& customerGatewayId)
{
	customerGatewayId_ = customerGatewayId;
	setParameter("CustomerGatewayId", customerGatewayId);
}

std::string CreateVpnConnectionRequest::getLocalSubnet()const
{
	return localSubnet_;
}

void CreateVpnConnectionRequest::setLocalSubnet(const std::string& localSubnet)
{
	localSubnet_ = localSubnet;
	setParameter("LocalSubnet", localSubnet);
}

std::string CreateVpnConnectionRequest::getRegionId()const
{
	return regionId_;
}

void CreateVpnConnectionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateVpnConnectionRequest::getRemoteSubnet()const
{
	return remoteSubnet_;
}

void CreateVpnConnectionRequest::setRemoteSubnet(const std::string& remoteSubnet)
{
	remoteSubnet_ = remoteSubnet;
	setParameter("RemoteSubnet", remoteSubnet);
}

bool CreateVpnConnectionRequest::getEffectImmediately()const
{
	return effectImmediately_;
}

void CreateVpnConnectionRequest::setEffectImmediately(bool effectImmediately)
{
	effectImmediately_ = effectImmediately;
	setParameter("EffectImmediately", effectImmediately ? "true" : "false");
}

std::string CreateVpnConnectionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateVpnConnectionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateVpnConnectionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateVpnConnectionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateVpnConnectionRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void CreateVpnConnectionRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setParameter("VpnGatewayId", vpnGatewayId);
}

long CreateVpnConnectionRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateVpnConnectionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool CreateVpnConnectionRequest::getEnableDpd()const
{
	return enableDpd_;
}

void CreateVpnConnectionRequest::setEnableDpd(bool enableDpd)
{
	enableDpd_ = enableDpd;
	setParameter("EnableDpd", enableDpd ? "true" : "false");
}

std::string CreateVpnConnectionRequest::getName()const
{
	return name_;
}

void CreateVpnConnectionRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

bool CreateVpnConnectionRequest::getEnableNatTraversal()const
{
	return enableNatTraversal_;
}

void CreateVpnConnectionRequest::setEnableNatTraversal(bool enableNatTraversal)
{
	enableNatTraversal_ = enableNatTraversal;
	setParameter("EnableNatTraversal", enableNatTraversal ? "true" : "false");
}

