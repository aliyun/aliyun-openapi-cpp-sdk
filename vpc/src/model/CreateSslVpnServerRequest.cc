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

#include <alibabacloud/vpc/model/CreateSslVpnServerRequest.h>

using AlibabaCloud::Vpc::Model::CreateSslVpnServerRequest;

CreateSslVpnServerRequest::CreateSslVpnServerRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateSslVpnServer")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSslVpnServerRequest::~CreateSslVpnServerRequest()
{}

long CreateSslVpnServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSslVpnServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateSslVpnServerRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSslVpnServerRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateSslVpnServerRequest::getLocalSubnet()const
{
	return localSubnet_;
}

void CreateSslVpnServerRequest::setLocalSubnet(const std::string& localSubnet)
{
	localSubnet_ = localSubnet;
	setParameter("LocalSubnet", localSubnet);
}

std::string CreateSslVpnServerRequest::getRegionId()const
{
	return regionId_;
}

void CreateSslVpnServerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateSslVpnServerRequest::getEnableMultiFactorAuth()const
{
	return enableMultiFactorAuth_;
}

void CreateSslVpnServerRequest::setEnableMultiFactorAuth(bool enableMultiFactorAuth)
{
	enableMultiFactorAuth_ = enableMultiFactorAuth;
	setParameter("EnableMultiFactorAuth", enableMultiFactorAuth ? "true" : "false");
}

std::string CreateSslVpnServerRequest::getIDaaSInstanceId()const
{
	return iDaaSInstanceId_;
}

void CreateSslVpnServerRequest::setIDaaSInstanceId(const std::string& iDaaSInstanceId)
{
	iDaaSInstanceId_ = iDaaSInstanceId;
	setParameter("IDaaSInstanceId", iDaaSInstanceId);
}

std::string CreateSslVpnServerRequest::getCipher()const
{
	return cipher_;
}

void CreateSslVpnServerRequest::setCipher(const std::string& cipher)
{
	cipher_ = cipher;
	setParameter("Cipher", cipher);
}

std::string CreateSslVpnServerRequest::getClientIpPool()const
{
	return clientIpPool_;
}

void CreateSslVpnServerRequest::setClientIpPool(const std::string& clientIpPool)
{
	clientIpPool_ = clientIpPool;
	setParameter("ClientIpPool", clientIpPool);
}

std::string CreateSslVpnServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSslVpnServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

bool CreateSslVpnServerRequest::getCompress()const
{
	return compress_;
}

void CreateSslVpnServerRequest::setCompress(bool compress)
{
	compress_ = compress;
	setParameter("Compress", compress ? "true" : "false");
}

std::string CreateSslVpnServerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSslVpnServerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateSslVpnServerRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void CreateSslVpnServerRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setParameter("VpnGatewayId", vpnGatewayId);
}

long CreateSslVpnServerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSslVpnServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int CreateSslVpnServerRequest::getPort()const
{
	return port_;
}

void CreateSslVpnServerRequest::setPort(int port)
{
	port_ = port;
	setParameter("Port", std::to_string(port));
}

std::string CreateSslVpnServerRequest::getProto()const
{
	return proto_;
}

void CreateSslVpnServerRequest::setProto(const std::string& proto)
{
	proto_ = proto;
	setParameter("Proto", proto);
}

std::string CreateSslVpnServerRequest::getName()const
{
	return name_;
}

void CreateSslVpnServerRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

