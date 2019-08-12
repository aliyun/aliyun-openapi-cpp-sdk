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

#include <alibabacloud/vpc/model/DeleteRouterInterfaceRequest.h>

using AlibabaCloud::Vpc::Model::DeleteRouterInterfaceRequest;

DeleteRouterInterfaceRequest::DeleteRouterInterfaceRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteRouterInterface")
{}

DeleteRouterInterfaceRequest::~DeleteRouterInterfaceRequest()
{}

long DeleteRouterInterfaceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteRouterInterfaceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteRouterInterfaceRequest::getRegionId()const
{
	return regionId_;
}

void DeleteRouterInterfaceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteRouterInterfaceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteRouterInterfaceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteRouterInterfaceRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteRouterInterfaceRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteRouterInterfaceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteRouterInterfaceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string DeleteRouterInterfaceRequest::getRouterInterfaceId()const
{
	return routerInterfaceId_;
}

void DeleteRouterInterfaceRequest::setRouterInterfaceId(const std::string& routerInterfaceId)
{
	routerInterfaceId_ = routerInterfaceId;
	setCoreParameter("RouterInterfaceId", routerInterfaceId);
}

long DeleteRouterInterfaceRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteRouterInterfaceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

