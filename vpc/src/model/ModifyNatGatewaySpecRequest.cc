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

#include <alibabacloud/vpc/model/ModifyNatGatewaySpecRequest.h>

using AlibabaCloud::Vpc::Model::ModifyNatGatewaySpecRequest;

ModifyNatGatewaySpecRequest::ModifyNatGatewaySpecRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyNatGatewaySpec")
{}

ModifyNatGatewaySpecRequest::~ModifyNatGatewaySpecRequest()
{}

long ModifyNatGatewaySpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyNatGatewaySpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

bool ModifyNatGatewaySpecRequest::getAutoPay()const
{
	return autoPay_;
}

void ModifyNatGatewaySpecRequest::setAutoPay(bool autoPay)
{
	autoPay_ = autoPay;
	setCoreParameter("AutoPay", autoPay ? "true" : "false");
}

std::string ModifyNatGatewaySpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyNatGatewaySpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyNatGatewaySpecRequest::getRegionId()const
{
	return regionId_;
}

void ModifyNatGatewaySpecRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyNatGatewaySpecRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyNatGatewaySpecRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string ModifyNatGatewaySpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyNatGatewaySpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyNatGatewaySpecRequest::getNatGatewayId()const
{
	return natGatewayId_;
}

void ModifyNatGatewaySpecRequest::setNatGatewayId(const std::string& natGatewayId)
{
	natGatewayId_ = natGatewayId;
	setCoreParameter("NatGatewayId", std::to_string(natGatewayId));
}

long ModifyNatGatewaySpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyNatGatewaySpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyNatGatewaySpecRequest::getSpec()const
{
	return spec_;
}

void ModifyNatGatewaySpecRequest::setSpec(const std::string& spec)
{
	spec_ = spec;
	setCoreParameter("Spec", std::to_string(spec));
}

