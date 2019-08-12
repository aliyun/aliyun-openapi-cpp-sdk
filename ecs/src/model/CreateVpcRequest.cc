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

#include <alibabacloud/ecs/model/CreateVpcRequest.h>

using AlibabaCloud::Ecs::Model::CreateVpcRequest;

CreateVpcRequest::CreateVpcRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateVpc")
{}

CreateVpcRequest::~CreateVpcRequest()
{}

std::string CreateVpcRequest::getVpcName()const
{
	return vpcName_;
}

void CreateVpcRequest::setVpcName(const std::string& vpcName)
{
	vpcName_ = vpcName;
	setCoreParameter("VpcName", std::to_string(vpcName));
}

long CreateVpcRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateVpcRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateVpcRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateVpcRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateVpcRequest::getRegionId()const
{
	return regionId_;
}

void CreateVpcRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateVpcRequest::getClientToken()const
{
	return clientToken_;
}

void CreateVpcRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string CreateVpcRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateVpcRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string CreateVpcRequest::getCidrBlock()const
{
	return cidrBlock_;
}

void CreateVpcRequest::setCidrBlock(const std::string& cidrBlock)
{
	cidrBlock_ = cidrBlock;
	setCoreParameter("CidrBlock", std::to_string(cidrBlock));
}

std::string CreateVpcRequest::getDescription()const
{
	return description_;
}

void CreateVpcRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", std::to_string(description));
}

std::string CreateVpcRequest::getUserCidr()const
{
	return userCidr_;
}

void CreateVpcRequest::setUserCidr(const std::string& userCidr)
{
	userCidr_ = userCidr;
	setCoreParameter("UserCidr", std::to_string(userCidr));
}

long CreateVpcRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateVpcRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

