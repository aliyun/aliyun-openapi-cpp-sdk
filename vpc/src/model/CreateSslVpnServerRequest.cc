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
{}

CreateSslVpnServerRequest::~CreateSslVpnServerRequest()
{}

std::string CreateSslVpnServerRequest::getCipher()const
{
	return cipher_;
}

void CreateSslVpnServerRequest::setCipher(const std::string& cipher)
{
	cipher_ = cipher;
	setCoreParameter("Cipher", cipher);
}

long CreateSslVpnServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSslVpnServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateSslVpnServerRequest::getClientIpPool()const
{
	return clientIpPool_;
}

void CreateSslVpnServerRequest::setClientIpPool(const std::string& clientIpPool)
{
	clientIpPool_ = clientIpPool;
	setCoreParameter("ClientIpPool", clientIpPool);
}

std::string CreateSslVpnServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSslVpnServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateSslVpnServerRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSslVpnServerRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

bool CreateSslVpnServerRequest::getCompress()const
{
	return compress_;
}

void CreateSslVpnServerRequest::setCompress(bool compress)
{
	compress_ = compress;
	setCoreParameter("Compress", compress ? "true" : "false");
}

std::string CreateSslVpnServerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSslVpnServerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateSslVpnServerRequest::getVpnGatewayId()const
{
	return vpnGatewayId_;
}

void CreateSslVpnServerRequest::setVpnGatewayId(const std::string& vpnGatewayId)
{
	vpnGatewayId_ = vpnGatewayId;
	setCoreParameter("VpnGatewayId", vpnGatewayId);
}

long CreateSslVpnServerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSslVpnServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateSslVpnServerRequest::getLocalSubnet()const
{
	return localSubnet_;
}

void CreateSslVpnServerRequest::setLocalSubnet(const std::string& localSubnet)
{
	localSubnet_ = localSubnet;
	setCoreParameter("LocalSubnet", localSubnet);
}

std::string CreateSslVpnServerRequest::getRegionId()const
{
	return regionId_;
}

void CreateSslVpnServerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

int CreateSslVpnServerRequest::getPort()const
{
	return port_;
}

void CreateSslVpnServerRequest::setPort(int port)
{
	port_ = port;
	setCoreParameter("Port", std::to_string(port));
}

std::string CreateSslVpnServerRequest::getProto()const
{
	return proto_;
}

void CreateSslVpnServerRequest::setProto(const std::string& proto)
{
	proto_ = proto;
	setCoreParameter("Proto", proto);
}

std::string CreateSslVpnServerRequest::getName()const
{
	return name_;
}

void CreateSslVpnServerRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

