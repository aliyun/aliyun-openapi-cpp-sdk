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

#include <alibabacloud/vpc/model/DeleteSslVpnClientCertRequest.h>

using AlibabaCloud::Vpc::Model::DeleteSslVpnClientCertRequest;

DeleteSslVpnClientCertRequest::DeleteSslVpnClientCertRequest() :
	RpcServiceRequest("vpc", "2016-04-28", "DeleteSslVpnClientCert")
{}

DeleteSslVpnClientCertRequest::~DeleteSslVpnClientCertRequest()
{}

long DeleteSslVpnClientCertRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteSslVpnClientCertRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DeleteSslVpnClientCertRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteSslVpnClientCertRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DeleteSslVpnClientCertRequest::getRegionId()const
{
	return regionId_;
}

void DeleteSslVpnClientCertRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string DeleteSslVpnClientCertRequest::getClientToken()const
{
	return clientToken_;
}

void DeleteSslVpnClientCertRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string DeleteSslVpnClientCertRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteSslVpnClientCertRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long DeleteSslVpnClientCertRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteSslVpnClientCertRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string DeleteSslVpnClientCertRequest::getSslVpnClientCertId()const
{
	return sslVpnClientCertId_;
}

void DeleteSslVpnClientCertRequest::setSslVpnClientCertId(const std::string& sslVpnClientCertId)
{
	sslVpnClientCertId_ = sslVpnClientCertId;
	setCoreParameter("SslVpnClientCertId", sslVpnClientCertId);
}

