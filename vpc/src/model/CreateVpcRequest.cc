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

#include <alibabacloud/vpc/model/CreateVpcRequest.h>

using AlibabaCloud::Vpc::Model::CreateVpcRequest;

CreateVpcRequest::CreateVpcRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateVpc")
{
	setMethod(HttpRequest::Method::Post);
}

CreateVpcRequest::~CreateVpcRequest()
{}

long CreateVpcRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateVpcRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateVpcRequest::getClientToken()const
{
	return clientToken_;
}

void CreateVpcRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

bool CreateVpcRequest::getEnableIpv6()const
{
	return enableIpv6_;
}

void CreateVpcRequest::setEnableIpv6(bool enableIpv6)
{
	enableIpv6_ = enableIpv6;
	setParameter("EnableIpv6", enableIpv6 ? "true" : "false");
}

std::string CreateVpcRequest::getDescription()const
{
	return description_;
}

void CreateVpcRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateVpcRequest::getVpcName()const
{
	return vpcName_;
}

void CreateVpcRequest::setVpcName(const std::string& vpcName)
{
	vpcName_ = vpcName;
	setParameter("VpcName", vpcName);
}

std::string CreateVpcRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void CreateVpcRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string CreateVpcRequest::getRegionId()const
{
	return regionId_;
}

void CreateVpcRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateVpcRequest::getUserCidr()const
{
	return userCidr_;
}

void CreateVpcRequest::setUserCidr(const std::string& userCidr)
{
	userCidr_ = userCidr;
	setParameter("UserCidr", userCidr);
}

bool CreateVpcRequest::getDryRun()const
{
	return dryRun_;
}

void CreateVpcRequest::setDryRun(bool dryRun)
{
	dryRun_ = dryRun;
	setParameter("DryRun", dryRun ? "true" : "false");
}

std::string CreateVpcRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateVpcRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateVpcRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateVpcRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateVpcRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateVpcRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateVpcRequest::getIpv6CidrBlock()const
{
	return ipv6CidrBlock_;
}

void CreateVpcRequest::setIpv6CidrBlock(const std::string& ipv6CidrBlock)
{
	ipv6CidrBlock_ = ipv6CidrBlock;
	setParameter("Ipv6CidrBlock", ipv6CidrBlock);
}

std::string CreateVpcRequest::getCidrBlock()const
{
	return cidrBlock_;
}

void CreateVpcRequest::setCidrBlock(const std::string& cidrBlock)
{
	cidrBlock_ = cidrBlock;
	setParameter("CidrBlock", cidrBlock);
}

