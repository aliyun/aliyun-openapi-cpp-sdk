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

#include <alibabacloud/vpc/model/CreateCustomerGatewayRequest.h>

using AlibabaCloud::Vpc::Model::CreateCustomerGatewayRequest;

CreateCustomerGatewayRequest::CreateCustomerGatewayRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateCustomerGateway")
{}

CreateCustomerGatewayRequest::~CreateCustomerGatewayRequest()
{}

std::string CreateCustomerGatewayRequest::getIpAddress()const
{
	return ipAddress_;
}

void CreateCustomerGatewayRequest::setIpAddress(const std::string& ipAddress)
{
	ipAddress_ = ipAddress;
	setCoreParameter("IpAddress", ipAddress);
}

long CreateCustomerGatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateCustomerGatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateCustomerGatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateCustomerGatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateCustomerGatewayRequest::getRegionId()const
{
	return regionId_;
}

void CreateCustomerGatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateCustomerGatewayRequest::getClientToken()const
{
	return clientToken_;
}

void CreateCustomerGatewayRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateCustomerGatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateCustomerGatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateCustomerGatewayRequest::getName()const
{
	return name_;
}

void CreateCustomerGatewayRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

std::string CreateCustomerGatewayRequest::getDescription()const
{
	return description_;
}

void CreateCustomerGatewayRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long CreateCustomerGatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateCustomerGatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

