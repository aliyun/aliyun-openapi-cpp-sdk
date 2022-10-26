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

#include <alibabacloud/polardb/model/ModifyGDNAddressRequest.h>

using AlibabaCloud::Polardb::Model::ModifyGDNAddressRequest;

ModifyGDNAddressRequest::ModifyGDNAddressRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyGDNAddress")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyGDNAddressRequest::~ModifyGDNAddressRequest()
{}

long ModifyGDNAddressRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyGDNAddressRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyGDNAddressRequest::getConnectionStringPrefix()const
{
	return connectionStringPrefix_;
}

void ModifyGDNAddressRequest::setConnectionStringPrefix(const std::string& connectionStringPrefix)
{
	connectionStringPrefix_ = connectionStringPrefix;
	setParameter("ConnectionStringPrefix", connectionStringPrefix);
}

std::string ModifyGDNAddressRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyGDNAddressRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifyGDNAddressRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyGDNAddressRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifyGDNAddressRequest::getGDNId()const
{
	return gDNId_;
}

void ModifyGDNAddressRequest::setGDNId(const std::string& gDNId)
{
	gDNId_ = gDNId;
	setParameter("GDNId", gDNId);
}

std::string ModifyGDNAddressRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyGDNAddressRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyGDNAddressRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyGDNAddressRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyGDNAddressRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyGDNAddressRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyGDNAddressRequest::getNetType()const
{
	return netType_;
}

void ModifyGDNAddressRequest::setNetType(const std::string& netType)
{
	netType_ = netType;
	setParameter("NetType", netType);
}

