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

#include <alibabacloud/vpc/model/DeleteBgpGroupRequest.h>

using AlibabaCloud::Vpc::Model::DeleteBgpGroupRequest;

DeleteBgpGroupRequest::DeleteBgpGroupRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteBgpGroup")
{}

DeleteBgpGroupRequest::~DeleteBgpGroupRequest()
{}

long DeleteBgpGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteBgpGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteBgpGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteBgpGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteBgpGroupRequest::getRegionId()const
{
	return regionId_;
}

void DeleteBgpGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteBgpGroupRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteBgpGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteBgpGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteBgpGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteBgpGroupRequest::getBgpGroupId()const
{
	return bgpGroupId_;
}

void DeleteBgpGroupRequest::setBgpGroupId(const std::string& bgpGroupId)
{
	bgpGroupId_ = bgpGroupId;
	setCoreParameter("BgpGroupId", bgpGroupId);
}

long DeleteBgpGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteBgpGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

