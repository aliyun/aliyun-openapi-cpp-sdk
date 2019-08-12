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

#include <alibabacloud/vpc/model/AddBgpNetworkRequest.h>

using AlibabaCloud::Vpc::Model::AddBgpNetworkRequest;

AddBgpNetworkRequest::AddBgpNetworkRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "AddBgpNetwork")
{}

AddBgpNetworkRequest::~AddBgpNetworkRequest()
{}

long AddBgpNetworkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddBgpNetworkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AddBgpNetworkRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddBgpNetworkRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddBgpNetworkRequest::getRegionId()const
{
	return regionId_;
}

void AddBgpNetworkRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AddBgpNetworkRequest::getClientToken()const
{
	return clientToken_;
}

void AddBgpNetworkRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string AddBgpNetworkRequest::getRouterId()const
{
	return routerId_;
}

void AddBgpNetworkRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setCoreParameter("RouterId", routerId);
}

std::string AddBgpNetworkRequest::getVpcId()const
{
	return vpcId_;
}

void AddBgpNetworkRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", vpcId);
}

std::string AddBgpNetworkRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddBgpNetworkRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long AddBgpNetworkRequest::getOwnerId()const
{
	return ownerId_;
}

void AddBgpNetworkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AddBgpNetworkRequest::getDstCidrBlock()const
{
	return dstCidrBlock_;
}

void AddBgpNetworkRequest::setDstCidrBlock(const std::string& dstCidrBlock)
{
	dstCidrBlock_ = dstCidrBlock;
	setCoreParameter("DstCidrBlock", dstCidrBlock);
}

