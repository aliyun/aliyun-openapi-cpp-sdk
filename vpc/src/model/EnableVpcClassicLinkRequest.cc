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

#include <alibabacloud/vpc/model/EnableVpcClassicLinkRequest.h>

using AlibabaCloud::Vpc::Model::EnableVpcClassicLinkRequest;

EnableVpcClassicLinkRequest::EnableVpcClassicLinkRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "EnableVpcClassicLink")
{}

EnableVpcClassicLinkRequest::~EnableVpcClassicLinkRequest()
{}

long EnableVpcClassicLinkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void EnableVpcClassicLinkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string EnableVpcClassicLinkRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void EnableVpcClassicLinkRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string EnableVpcClassicLinkRequest::getRegionId()const
{
	return regionId_;
}

void EnableVpcClassicLinkRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string EnableVpcClassicLinkRequest::getClientToken()const
{
	return clientToken_;
}

void EnableVpcClassicLinkRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", std::to_string(clientToken));
}

std::string EnableVpcClassicLinkRequest::getVpcId()const
{
	return vpcId_;
}

void EnableVpcClassicLinkRequest::setVpcId(const std::string& vpcId)
{
	vpcId_ = vpcId;
	setCoreParameter("VpcId", std::to_string(vpcId));
}

std::string EnableVpcClassicLinkRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void EnableVpcClassicLinkRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long EnableVpcClassicLinkRequest::getOwnerId()const
{
	return ownerId_;
}

void EnableVpcClassicLinkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

