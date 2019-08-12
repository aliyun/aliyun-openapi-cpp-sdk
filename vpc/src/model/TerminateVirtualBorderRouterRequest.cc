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

#include <alibabacloud/vpc/model/TerminateVirtualBorderRouterRequest.h>

using AlibabaCloud::Vpc::Model::TerminateVirtualBorderRouterRequest;

TerminateVirtualBorderRouterRequest::TerminateVirtualBorderRouterRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "TerminateVirtualBorderRouter")
{}

TerminateVirtualBorderRouterRequest::~TerminateVirtualBorderRouterRequest()
{}

long TerminateVirtualBorderRouterRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void TerminateVirtualBorderRouterRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string TerminateVirtualBorderRouterRequest::getRegionId()const
{
	return regionId_;
}

void TerminateVirtualBorderRouterRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string TerminateVirtualBorderRouterRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void TerminateVirtualBorderRouterRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string TerminateVirtualBorderRouterRequest::getClientToken()const
{
	return clientToken_;
}

void TerminateVirtualBorderRouterRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string TerminateVirtualBorderRouterRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void TerminateVirtualBorderRouterRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string TerminateVirtualBorderRouterRequest::getVbrId()const
{
	return vbrId_;
}

void TerminateVirtualBorderRouterRequest::setVbrId(const std::string& vbrId)
{
	vbrId_ = vbrId;
	setCoreParameter("VbrId", vbrId);
}

long TerminateVirtualBorderRouterRequest::getOwnerId()const
{
	return ownerId_;
}

void TerminateVirtualBorderRouterRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

