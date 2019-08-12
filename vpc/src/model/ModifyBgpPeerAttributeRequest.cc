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

#include <alibabacloud/vpc/model/ModifyBgpPeerAttributeRequest.h>

using AlibabaCloud::Vpc::Model::ModifyBgpPeerAttributeRequest;

ModifyBgpPeerAttributeRequest::ModifyBgpPeerAttributeRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "ModifyBgpPeerAttribute")
{}

ModifyBgpPeerAttributeRequest::~ModifyBgpPeerAttributeRequest()
{}

long ModifyBgpPeerAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyBgpPeerAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool ModifyBgpPeerAttributeRequest::getEnableBfd()const
{
	return enableBfd_;
}

void ModifyBgpPeerAttributeRequest::setEnableBfd(bool enableBfd)
{
	enableBfd_ = enableBfd;
	setCoreParameter("EnableBfd", enableBfd ? "true" : "false");
}

std::string ModifyBgpPeerAttributeRequest::getRegionId()const
{
	return regionId_;
}

void ModifyBgpPeerAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyBgpPeerAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyBgpPeerAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyBgpPeerAttributeRequest::getClientToken()const
{
	return clientToken_;
}

void ModifyBgpPeerAttributeRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ModifyBgpPeerAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyBgpPeerAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string ModifyBgpPeerAttributeRequest::getBgpGroupId()const
{
	return bgpGroupId_;
}

void ModifyBgpPeerAttributeRequest::setBgpGroupId(const std::string& bgpGroupId)
{
	bgpGroupId_ = bgpGroupId;
	setCoreParameter("BgpGroupId", bgpGroupId);
}

std::string ModifyBgpPeerAttributeRequest::getBgpPeerId()const
{
	return bgpPeerId_;
}

void ModifyBgpPeerAttributeRequest::setBgpPeerId(const std::string& bgpPeerId)
{
	bgpPeerId_ = bgpPeerId;
	setCoreParameter("BgpPeerId", bgpPeerId);
}

long ModifyBgpPeerAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyBgpPeerAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyBgpPeerAttributeRequest::getPeerIpAddress()const
{
	return peerIpAddress_;
}

void ModifyBgpPeerAttributeRequest::setPeerIpAddress(const std::string& peerIpAddress)
{
	peerIpAddress_ = peerIpAddress;
	setCoreParameter("PeerIpAddress", peerIpAddress);
}

