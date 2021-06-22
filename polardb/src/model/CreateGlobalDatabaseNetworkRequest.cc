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

#include <alibabacloud/polardb/model/CreateGlobalDatabaseNetworkRequest.h>

using AlibabaCloud::Polardb::Model::CreateGlobalDatabaseNetworkRequest;

CreateGlobalDatabaseNetworkRequest::CreateGlobalDatabaseNetworkRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CreateGlobalDatabaseNetwork")
{
	setMethod(HttpRequest::Method::Post);
}

CreateGlobalDatabaseNetworkRequest::~CreateGlobalDatabaseNetworkRequest()
{}

long CreateGlobalDatabaseNetworkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateGlobalDatabaseNetworkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateGlobalDatabaseNetworkRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateGlobalDatabaseNetworkRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateGlobalDatabaseNetworkRequest::getSecurityToken()const
{
	return securityToken_;
}

void CreateGlobalDatabaseNetworkRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string CreateGlobalDatabaseNetworkRequest::getGDNDescription()const
{
	return gDNDescription_;
}

void CreateGlobalDatabaseNetworkRequest::setGDNDescription(const std::string& gDNDescription)
{
	gDNDescription_ = gDNDescription;
	setParameter("GDNDescription", gDNDescription);
}

std::string CreateGlobalDatabaseNetworkRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateGlobalDatabaseNetworkRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateGlobalDatabaseNetworkRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void CreateGlobalDatabaseNetworkRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string CreateGlobalDatabaseNetworkRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateGlobalDatabaseNetworkRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateGlobalDatabaseNetworkRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateGlobalDatabaseNetworkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

