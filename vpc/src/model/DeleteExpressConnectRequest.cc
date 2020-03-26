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

#include <alibabacloud/vpc/model/DeleteExpressConnectRequest.h>

using AlibabaCloud::Vpc::Model::DeleteExpressConnectRequest;

DeleteExpressConnectRequest::DeleteExpressConnectRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteExpressConnect")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteExpressConnectRequest::~DeleteExpressConnectRequest()
{}

long DeleteExpressConnectRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteExpressConnectRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteExpressConnectRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteExpressConnectRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteExpressConnectRequest::getRegionId()const
{
	return regionId_;
}

void DeleteExpressConnectRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteExpressConnectRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteExpressConnectRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteExpressConnectRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteExpressConnectRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string DeleteExpressConnectRequest::getRouterInterfaceId()const
{
	return routerInterfaceId_;
}

void DeleteExpressConnectRequest::setRouterInterfaceId(const std::string& routerInterfaceId)
{
	routerInterfaceId_ = routerInterfaceId;
	setParameter("RouterInterfaceId", routerInterfaceId);
}

long DeleteExpressConnectRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteExpressConnectRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

bool DeleteExpressConnectRequest::getForce()const
{
	return force_;
}

void DeleteExpressConnectRequest::setForce(bool force)
{
	force_ = force;
	setParameter("Force", force ? "true" : "false");
}

