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

#include <alibabacloud/vpc/model/ModifyIpv6GatewaySpecRequest.h>

using AlibabaCloud::Vpc::Model::ModifyIpv6GatewaySpecRequest;

ModifyIpv6GatewaySpecRequest::ModifyIpv6GatewaySpecRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyIpv6GatewaySpec")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyIpv6GatewaySpecRequest::~ModifyIpv6GatewaySpecRequest()
{}

long ModifyIpv6GatewaySpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyIpv6GatewaySpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyIpv6GatewaySpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyIpv6GatewaySpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyIpv6GatewaySpecRequest::getSpec()const
{
	return spec_;
}

void ModifyIpv6GatewaySpecRequest::setSpec(const std::string& spec)
{
	spec_ = spec;
	setCoreParameter("Spec", spec);
}

std::string ModifyIpv6GatewaySpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyIpv6GatewaySpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyIpv6GatewaySpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyIpv6GatewaySpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyIpv6GatewaySpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyIpv6GatewaySpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyIpv6GatewaySpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyIpv6GatewaySpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyIpv6GatewaySpecRequest::getIpv6GatewayId()const
{
	return ipv6GatewayId_;
}

void ModifyIpv6GatewaySpecRequest::setIpv6GatewayId(const std::string& ipv6GatewayId)
{
	ipv6GatewayId_ = ipv6GatewayId;
	setCoreParameter("Ipv6GatewayId", ipv6GatewayId);
}

