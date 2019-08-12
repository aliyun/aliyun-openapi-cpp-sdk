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

#include <alibabacloud/vpc/model/ModifyVSwitchAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyVSwitchAttributeRequest;

ModifyVSwitchAttributeRequest::ModifyVSwitchAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyVSwitchAttribute")
{}

ModifyVSwitchAttributeRequest::~ModifyVSwitchAttributeRequest()
{}

std::string ModifyVSwitchAttributeRequest::getVSwitchId()const
{
	return vSwitchId_;
}

void ModifyVSwitchAttributeRequest::setVSwitchId(const std::string& vSwitchId)
{
	vSwitchId_ = vSwitchId;
	setCoreParameter("VSwitchId", std::to_string(vSwitchId));
}

long ModifyVSwitchAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyVSwitchAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyVSwitchAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyVSwitchAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyVSwitchAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyVSwitchAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyVSwitchAttributeRequest::getVSwitchName()const
{
	return vSwitchName_;
}

void ModifyVSwitchAttributeRequest::setVSwitchName(const std::string& vSwitchName)
{
	vSwitchName_ = vSwitchName;
	setCoreParameter("VSwitchName", std::to_string(vSwitchName));
}

std::string ModifyVSwitchAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyVSwitchAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyVSwitchAttributeRequest::getDescription()const
{
	return description_;
}

void ModifyVSwitchAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

long ModifyVSwitchAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyVSwitchAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

int ModifyVSwitchAttributeRequest::getIpv6CidrBlock()const
{
	return ipv6CidrBlock_;
}

void ModifyVSwitchAttributeRequest::setIpv6CidrBlock(int ipv6CidrBlock)
{
	ipv6CidrBlock_ = ipv6CidrBlock;
	setCoreParameter("Ipv6CidrBlock", ipv6CidrBlock);
}

