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

#include <alibabacloud/vpc/model/ModifySslVpnServerRequest.h>

using AlibabaCloud::Vpc::Model::ModifySslVpnServerRequest;

ModifySslVpnServerRequest::ModifySslVpnServerRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifySslVpnServer")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySslVpnServerRequest::~ModifySslVpnServerRequest()
{}

long ModifySslVpnServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySslVpnServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySslVpnServerRequest::getClientToken()const
{
	return clientToken_;
}

void ModifySslVpnServerRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ModifySslVpnServerRequest::getSslVpnServerId()const
{
	return sslVpnServerId_;
}

void ModifySslVpnServerRequest::setSslVpnServerId(const std::string& sslVpnServerId)
{
	sslVpnServerId_ = sslVpnServerId;
	setParameter("SslVpnServerId", sslVpnServerId);
}

std::string ModifySslVpnServerRequest::getLocalSubnet()const
{
	return localSubnet_;
}

void ModifySslVpnServerRequest::setLocalSubnet(const std::string& localSubnet)
{
	localSubnet_ = localSubnet;
	setParameter("LocalSubnet", localSubnet);
}

std::string ModifySslVpnServerRequest::getRegionId()const
{
	return regionId_;
}

void ModifySslVpnServerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool ModifySslVpnServerRequest::getEnableMultiFactorAuth()const
{
	return enableMultiFactorAuth_;
}

void ModifySslVpnServerRequest::setEnableMultiFactorAuth(bool enableMultiFactorAuth)
{
	enableMultiFactorAuth_ = enableMultiFactorAuth;
	setParameter("EnableMultiFactorAuth", enableMultiFactorAuth ? "true" : "false");
}

std::string ModifySslVpnServerRequest::getIDaaSInstanceId()const
{
	return iDaaSInstanceId_;
}

void ModifySslVpnServerRequest::setIDaaSInstanceId(const std::string& iDaaSInstanceId)
{
	iDaaSInstanceId_ = iDaaSInstanceId;
	setParameter("IDaaSInstanceId", iDaaSInstanceId);
}

std::string ModifySslVpnServerRequest::getCipher()const
{
	return cipher_;
}

void ModifySslVpnServerRequest::setCipher(const std::string& cipher)
{
	cipher_ = cipher;
	setParameter("Cipher", cipher);
}

std::string ModifySslVpnServerRequest::getClientIpPool()const
{
	return clientIpPool_;
}

void ModifySslVpnServerRequest::setClientIpPool(const std::string& clientIpPool)
{
	clientIpPool_ = clientIpPool;
	setParameter("ClientIpPool", clientIpPool);
}

std::string ModifySslVpnServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySslVpnServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

bool ModifySslVpnServerRequest::getCompress()const
{
	return compress_;
}

void ModifySslVpnServerRequest::setCompress(bool compress)
{
	compress_ = compress;
	setParameter("Compress", compress ? "true" : "false");
}

std::string ModifySslVpnServerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySslVpnServerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifySslVpnServerRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySslVpnServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

int ModifySslVpnServerRequest::getPort()const
{
	return port_;
}

void ModifySslVpnServerRequest::setPort(int port)
{
	port_ = port;
	setParameter("Port", std::to_string(port));
}

std::string ModifySslVpnServerRequest::getProto()const
{
	return proto_;
}

void ModifySslVpnServerRequest::setProto(const std::string& proto)
{
	proto_ = proto;
	setParameter("Proto", proto);
}

std::string ModifySslVpnServerRequest::getName()const
{
	return name_;
}

void ModifySslVpnServerRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

