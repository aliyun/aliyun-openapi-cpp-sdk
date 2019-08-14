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

#include <alibabacloud/ecs/model/RecoverVirtualBorderRouterRequest.h>

using AlibabaCloud::Ecs::Model::RecoverVirtualBorderRouterRequest;

RecoverVirtualBorderRouterRequest::RecoverVirtualBorderRouterRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "RecoverVirtualBorderRouter")
{}

RecoverVirtualBorderRouterRequest::~RecoverVirtualBorderRouterRequest()
{}

long RecoverVirtualBorderRouterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RecoverVirtualBorderRouterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RecoverVirtualBorderRouterRequest::getRegionId()const
{
	return regionId_;
}

void RecoverVirtualBorderRouterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RecoverVirtualBorderRouterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RecoverVirtualBorderRouterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RecoverVirtualBorderRouterRequest::getClientToken()const
{
	return clientToken_;
}

void RecoverVirtualBorderRouterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string RecoverVirtualBorderRouterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RecoverVirtualBorderRouterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string RecoverVirtualBorderRouterRequest::getUserCidr()const
{
	return userCidr_;
}

void RecoverVirtualBorderRouterRequest::setUserCidr(const std::string& userCidr)
{
	userCidr_ = userCidr;
	setCoreParameter("UserCidr", userCidr);
}

std::string RecoverVirtualBorderRouterRequest::getVbrId()const
{
	return vbrId_;
}

void RecoverVirtualBorderRouterRequest::setVbrId(const std::string& vbrId)
{
	vbrId_ = vbrId;
	setCoreParameter("VbrId", vbrId);
}

long RecoverVirtualBorderRouterRequest::getOwnerId()const
{
	return ownerId_;
}

void RecoverVirtualBorderRouterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

