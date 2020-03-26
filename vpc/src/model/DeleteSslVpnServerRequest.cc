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

#include <alibabacloud/vpc/model/DeleteSslVpnServerRequest.h>

using AlibabaCloud::Vpc::Model::DeleteSslVpnServerRequest;

DeleteSslVpnServerRequest::DeleteSslVpnServerRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteSslVpnServer")
{
	setMethod(HttpRequest::Method::Post);
}

DeleteSslVpnServerRequest::~DeleteSslVpnServerRequest()
{}

long DeleteSslVpnServerRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteSslVpnServerRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteSslVpnServerRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteSslVpnServerRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string DeleteSslVpnServerRequest::getSslVpnServerId()const
{
	return sslVpnServerId_;
}

void DeleteSslVpnServerRequest::setSslVpnServerId(const std::string& sslVpnServerId)
{
	sslVpnServerId_ = sslVpnServerId;
	setParameter("SslVpnServerId", sslVpnServerId);
}

std::string DeleteSslVpnServerRequest::getRegionId()const
{
	return regionId_;
}

void DeleteSslVpnServerRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DeleteSslVpnServerRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteSslVpnServerRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteSslVpnServerRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteSslVpnServerRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DeleteSslVpnServerRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteSslVpnServerRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

