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

#include <alibabacloud/smartag/model/ModifySmartAccessGatewayRequest.h>

using AlibabaCloud::Smartag::Model::ModifySmartAccessGatewayRequest;

ModifySmartAccessGatewayRequest::ModifySmartAccessGatewayRequest() :
	RpcServiceRequest("smartag", "2018-03-13", "ModifySmartAccessGateway")
{}

ModifySmartAccessGatewayRequest::~ModifySmartAccessGatewayRequest()
{}

std::vector<ModifySmartAccessGatewayRequest::SnatEntries> ModifySmartAccessGatewayRequest::getSnatEntries()const
{
	return snatEntries_;
}

void ModifySmartAccessGatewayRequest::setSnatEntries(const std::vector<SnatEntries>& snatEntries)
{
	snatEntries_ = snatEntries;
	int i = 0;
	for(int i = 0; i!= snatEntries.size(); i++)	{
		auto obj = snatEntries.at(i);
		std::string str ="SnatEntries."+ std::to_string(i);
		setCoreParameter(str + ".CidrBlock", std::to_string(obj.cidrBlock));
		setCoreParameter(str + ".SnatIp", std::to_string(obj.snatIp));
	}
}

long ModifySmartAccessGatewayRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySmartAccessGatewayRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifySmartAccessGatewayRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySmartAccessGatewayRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifySmartAccessGatewayRequest::getCity()const
{
	return city_;
}

void ModifySmartAccessGatewayRequest::setCity(const std::string& city)
{
	city_ = city;
	setCoreParameter("City", std::to_string(city));
}

std::string ModifySmartAccessGatewayRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySmartAccessGatewayRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifySmartAccessGatewayRequest::getDescription()const
{
	return description_;
}

void ModifySmartAccessGatewayRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long ModifySmartAccessGatewayRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySmartAccessGatewayRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int ModifySmartAccessGatewayRequest::getSecurityLockThreshold()const
{
	return securityLockThreshold_;
}

void ModifySmartAccessGatewayRequest::setSecurityLockThreshold(int securityLockThreshold)
{
	securityLockThreshold_ = securityLockThreshold;
	setCoreParameter("SecurityLockThreshold", securityLockThreshold);
}

std::string ModifySmartAccessGatewayRequest::getRoutingStrategy()const
{
	return routingStrategy_;
}

void ModifySmartAccessGatewayRequest::setRoutingStrategy(const std::string& routingStrategy)
{
	routingStrategy_ = routingStrategy;
	setCoreParameter("RoutingStrategy", std::to_string(routingStrategy));
}

std::string ModifySmartAccessGatewayRequest::getRegionId()const
{
	return regionId_;
}

void ModifySmartAccessGatewayRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifySmartAccessGatewayRequest::getName()const
{
	return name_;
}

void ModifySmartAccessGatewayRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", std::to_string(name));
}

std::string ModifySmartAccessGatewayRequest::getCidrBlock()const
{
	return cidrBlock_;
}

void ModifySmartAccessGatewayRequest::setCidrBlock(const std::string& cidrBlock)
{
	cidrBlock_ = cidrBlock;
	setCoreParameter("CidrBlock", std::to_string(cidrBlock));
}

std::string ModifySmartAccessGatewayRequest::getSmartAGId()const
{
	return smartAGId_;
}

void ModifySmartAccessGatewayRequest::setSmartAGId(const std::string& smartAGId)
{
	smartAGId_ = smartAGId;
	setCoreParameter("SmartAGId", std::to_string(smartAGId));
}

