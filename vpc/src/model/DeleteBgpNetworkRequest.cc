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

#include <alibabacloud/vpc/model/DeleteBgpNetworkRequest.h>

using AlibabaCloud::Vpc::Model::DeleteBgpNetworkRequest;

DeleteBgpNetworkRequest::DeleteBgpNetworkRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteBgpNetwork")
{}

DeleteBgpNetworkRequest::~DeleteBgpNetworkRequest()
{}

long DeleteBgpNetworkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteBgpNetworkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteBgpNetworkRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteBgpNetworkRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteBgpNetworkRequest::getRegionId()const
{
	return regionId_;
}

void DeleteBgpNetworkRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteBgpNetworkRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteBgpNetworkRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteBgpNetworkRequest::getRouterId()const
{
	return routerId_;
}

void DeleteBgpNetworkRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setCoreParameter("RouterId", routerId);
}

std::string DeleteBgpNetworkRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteBgpNetworkRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteBgpNetworkRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteBgpNetworkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string DeleteBgpNetworkRequest::getDstCidrBlock()const
{
	return dstCidrBlock_;
}

void DeleteBgpNetworkRequest::setDstCidrBlock(const std::string& dstCidrBlock)
{
	dstCidrBlock_ = dstCidrBlock;
	setCoreParameter("DstCidrBlock", dstCidrBlock);
}

