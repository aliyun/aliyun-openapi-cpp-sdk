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

#include <alibabacloud/vpc/model/CreateBgpPeerRequest.h>

using AlibabaCloud::Vpc::Model::CreateBgpPeerRequest;

CreateBgpPeerRequest::CreateBgpPeerRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateBgpPeer")
{
	setMethod(HttpRequest::Method::Post);
}

CreateBgpPeerRequest::~CreateBgpPeerRequest()
{}

long CreateBgpPeerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateBgpPeerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateBgpPeerRequest::getClientToken()const
{
	return clientToken_;
}

void CreateBgpPeerRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateBgpPeerRequest::getBgpGroupId()const
{
	return bgpGroupId_;
}

void CreateBgpPeerRequest::setBgpGroupId(const std::string& bgpGroupId)
{
	bgpGroupId_ = bgpGroupId;
	setParameter("BgpGroupId", bgpGroupId);
}

std::string CreateBgpPeerRequest::getPeerIpAddress()const
{
	return peerIpAddress_;
}

void CreateBgpPeerRequest::setPeerIpAddress(const std::string& peerIpAddress)
{
	peerIpAddress_ = peerIpAddress;
	setParameter("PeerIpAddress", peerIpAddress);
}

std::string CreateBgpPeerRequest::getRegionId()const
{
	return regionId_;
}

void CreateBgpPeerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

bool CreateBgpPeerRequest::getEnableBfd()const
{
	return enableBfd_;
}

void CreateBgpPeerRequest::setEnableBfd(bool enableBfd)
{
	enableBfd_ = enableBfd;
	setParameter("EnableBfd", enableBfd ? "true" : "false");
}

std::string CreateBgpPeerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateBgpPeerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateBgpPeerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateBgpPeerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateBgpPeerRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateBgpPeerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

