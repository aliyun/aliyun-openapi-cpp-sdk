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

#include <alibabacloud/vpc/model/CreateSslVpnClientCertRequest.h>

using AlibabaCloud::Vpc::Model::CreateSslVpnClientCertRequest;

CreateSslVpnClientCertRequest::CreateSslVpnClientCertRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "CreateSslVpnClientCert")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSslVpnClientCertRequest::~CreateSslVpnClientCertRequest()
{}

long CreateSslVpnClientCertRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSslVpnClientCertRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateSslVpnClientCertRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSslVpnClientCertRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateSslVpnClientCertRequest::getSslVpnServerId()const
{
	return sslVpnServerId_;
}

void CreateSslVpnClientCertRequest::setSslVpnServerId(const std::string& sslVpnServerId)
{
	sslVpnServerId_ = sslVpnServerId;
	setParameter("SslVpnServerId", sslVpnServerId);
}

std::string CreateSslVpnClientCertRequest::getRegionId()const
{
	return regionId_;
}

void CreateSslVpnClientCertRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateSslVpnClientCertRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSslVpnClientCertRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateSslVpnClientCertRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSslVpnClientCertRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateSslVpnClientCertRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSslVpnClientCertRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateSslVpnClientCertRequest::getName()const
{
	return name_;
}

void CreateSslVpnClientCertRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

