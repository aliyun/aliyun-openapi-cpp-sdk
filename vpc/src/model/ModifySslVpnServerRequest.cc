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
{}

ModifySslVpnServerRequest::~ModifySslVpnServerRequest()
{}

std::string ModifySslVpnServerRequest::getCipher()const
{
	return cipher_;
}

void ModifySslVpnServerRequest::setCipher(const std::string& cipher)
{
	cipher_ = cipher;
	setCoreParameter("Cipher", std::to_string(cipher));
}

long ModifySslVpnServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySslVpnServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifySslVpnServerRequest::getClientIpPool()const
{
	return clientIpPool_;
}

void ModifySslVpnServerRequest::setClientIpPool(const std::string& clientIpPool)
{
	clientIpPool_ = clientIpPool;
	setCoreParameter("ClientIpPool", std::to_string(clientIpPool));
}

std::string ModifySslVpnServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySslVpnServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifySslVpnServerRequest::getClientToken()const
{
	return clientToken_;
}

void ModifySslVpnServerRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

bool ModifySslVpnServerRequest::getCompress()const
{
	return compress_;
}

void ModifySslVpnServerRequest::setCompress(bool compress)
{
	compress_ = compress;
	setCoreParameter("Compress", compress ? "true" : "false");
}

std::string ModifySslVpnServerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySslVpnServerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long ModifySslVpnServerRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySslVpnServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifySslVpnServerRequest::getSslVpnServerId()const
{
	return sslVpnServerId_;
}

void ModifySslVpnServerRequest::setSslVpnServerId(const std::string& sslVpnServerId)
{
	sslVpnServerId_ = sslVpnServerId;
	setCoreParameter("SslVpnServerId", std::to_string(sslVpnServerId));
}

std::string ModifySslVpnServerRequest::getLocalSubnet()const
{
	return localSubnet_;
}

void ModifySslVpnServerRequest::setLocalSubnet(const std::string& localSubnet)
{
	localSubnet_ = localSubnet;
	setCoreParameter("LocalSubnet", std::to_string(localSubnet));
}

std::string ModifySslVpnServerRequest::getRegionId()const
{
	return regionId_;
}

void ModifySslVpnServerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

int ModifySslVpnServerRequest::getPort()const
{
	return port_;
}

void ModifySslVpnServerRequest::setPort(int port)
{
	port_ = port;
	setCoreParameter("Port", port);
}

std::string ModifySslVpnServerRequest::getProto()const
{
	return proto_;
}

void ModifySslVpnServerRequest::setProto(const std::string& proto)
{
	proto_ = proto;
	setCoreParameter("Proto", std::to_string(proto));
}

std::string ModifySslVpnServerRequest::getName()const
{
	return name_;
}

void ModifySslVpnServerRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

