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

#include <alibabacloud/vpc/model/CreateBgpGroupRequest.h>

using AlibabaCloud::Vpc::Model::CreateBgpGroupRequest;

CreateBgpGroupRequest::CreateBgpGroupRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateBgpGroup")
{}

CreateBgpGroupRequest::~CreateBgpGroupRequest()
{}

std::string CreateBgpGroupRequest::getAuthKey()const
{
	return authKey_;
}

void CreateBgpGroupRequest::setAuthKey(const std::string& authKey)
{
	authKey_ = authKey;
	setCoreParameter("AuthKey", authKey);
}

long CreateBgpGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBgpGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateBgpGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateBgpGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateBgpGroupRequest::getClientToken()const
{
	return clientToken_;
}

void CreateBgpGroupRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string CreateBgpGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateBgpGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateBgpGroupRequest::getDescription()const
{
	return description_;
}

void CreateBgpGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setCoreParameter("Description", description);
}

long CreateBgpGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateBgpGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

long CreateBgpGroupRequest::getPeerAsn()const
{
	return peerAsn_;
}

void CreateBgpGroupRequest::setPeerAsn(long peerAsn)
{
	peerAsn_ = peerAsn;
	setCoreParameter("PeerAsn", peerAsn);
}

bool CreateBgpGroupRequest::getIsFakeAsn()const
{
	return isFakeAsn_;
}

void CreateBgpGroupRequest::setIsFakeAsn(bool isFakeAsn)
{
	isFakeAsn_ = isFakeAsn;
	setCoreParameter("IsFakeAsn", isFakeAsn);
}

std::string CreateBgpGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateBgpGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateBgpGroupRequest::getRouterId()const
{
	return routerId_;
}

void CreateBgpGroupRequest::setRouterId(const std::string& routerId)
{
	routerId_ = routerId;
	setCoreParameter("RouterId", routerId);
}

std::string CreateBgpGroupRequest::getName()const
{
	return name_;
}

void CreateBgpGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setCoreParameter("Name", name);
}

