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

#include <alibabacloud/polardb/model/CreateGDNAddressRequest.h>

using AlibabaCloud::Polardb::Model::CreateGDNAddressRequest;

CreateGDNAddressRequest::CreateGDNAddressRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateGDNAddress")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGDNAddressRequest::~CreateGDNAddressRequest()
{}

long CreateGDNAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateGDNAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateGDNAddressRequest::getConnectionStringPrefix()const
{
	return connectionStringPrefix_;
}

void CreateGDNAddressRequest::setConnectionStringPrefix(const std::string& connectionStringPrefix)
{
	connectionStringPrefix_ = connectionStringPrefix;
	setParameter("ConnectionStringPrefix", connectionStringPrefix);
}

std::string CreateGDNAddressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGDNAddressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateGDNAddressRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateGDNAddressRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateGDNAddressRequest::getGDNId()const
{
	return gDNId_;
}

void CreateGDNAddressRequest::setGDNId(const std::string& gDNId)
{
	gDNId_ = gDNId;
	setParameter("GDNId", gDNId);
}

std::string CreateGDNAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateGDNAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateGDNAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateGDNAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateGDNAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateGDNAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateGDNAddressRequest::getNetType()const
{
	return netType_;
}

void CreateGDNAddressRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setParameter("NetType", netType);
}

