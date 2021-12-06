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

#include <alibabacloud/ecs/model/CreateVSwitchRequest.h>

using AlibabaCloud::Ecs::Model::CreateVSwitchRequest;

CreateVSwitchRequest::CreateVSwitchRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateVSwitch")
{
	setMethod(HttpRequest::Method::Post);
}

CreateVSwitchRequest::~CreateVSwitchRequest()
{}

long CreateVSwitchRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateVSwitchRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateVSwitchRequest::getClientToken()const
{
	return clientToken_;
}

void CreateVSwitchRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateVSwitchRequest::getDescription()const
{
	return description_;
}

void CreateVSwitchRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateVSwitchRequest::getRegionId()const
{
	return regionId_;
}

void CreateVSwitchRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateVSwitchRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateVSwitchRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateVSwitchRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateVSwitchRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateVSwitchRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateVSwitchRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateVSwitchRequest::getVpcId()const
{
	return vpcId_;
}

void CreateVSwitchRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setParameter("VpcId", vpcId);
}

std::string CreateVSwitchRequest::getVSwitchName()const
{
	return vSwitchName_;
}

void CreateVSwitchRequest::setVSwitchName(const std::string& vSwitchName)
{
	vSwitchName_ = vSwitchName;
	setParameter("VSwitchName", vSwitchName);
}

std::string CreateVSwitchRequest::getCidrBlock()const
{
	return cidrBlock_;
}

void CreateVSwitchRequest::setCidrBlock(const std::string& cidrBlock)
{
	cidrBlock_ = cidrBlock;
	setParameter("CidrBlock", cidrBlock);
}

std::string CreateVSwitchRequest::getZoneId()const
{
	return zoneId_;
}

void CreateVSwitchRequest::setZoneId(const std::string& zoneId)
{
	zoneId_ = zoneId;
	setParameter("ZoneId", zoneId);
}

