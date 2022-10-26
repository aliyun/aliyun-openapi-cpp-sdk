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

#include <alibabacloud/polardb/model/SwitchOverGlobalDatabaseNetworkRequest.h>

using AlibabaCloud::Polardb::Model::SwitchOverGlobalDatabaseNetworkRequest;

SwitchOverGlobalDatabaseNetworkRequest::SwitchOverGlobalDatabaseNetworkRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "SwitchOverGlobalDatabaseNetwork")
{
	setMethod(HttpRequest::Method::Post);
}

SwitchOverGlobalDatabaseNetworkRequest::~SwitchOverGlobalDatabaseNetworkRequest()
{}

long SwitchOverGlobalDatabaseNetworkRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SwitchOverGlobalDatabaseNetworkRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SwitchOverGlobalDatabaseNetworkRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SwitchOverGlobalDatabaseNetworkRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SwitchOverGlobalDatabaseNetworkRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void SwitchOverGlobalDatabaseNetworkRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string SwitchOverGlobalDatabaseNetworkRequest::getSecurityToken()const
{
	return securityToken_;
}

void SwitchOverGlobalDatabaseNetworkRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string SwitchOverGlobalDatabaseNetworkRequest::getRegionId()const
{
	return regionId_;
}

void SwitchOverGlobalDatabaseNetworkRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SwitchOverGlobalDatabaseNetworkRequest::getGDNId()const
{
	return gDNId_;
}

void SwitchOverGlobalDatabaseNetworkRequest::setGDNId(const std::string& gDNId)
{
	gDNId_ = gDNId;
	setParameter("GDNId", gDNId);
}

std::string SwitchOverGlobalDatabaseNetworkRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SwitchOverGlobalDatabaseNetworkRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SwitchOverGlobalDatabaseNetworkRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void SwitchOverGlobalDatabaseNetworkRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setParameter("DBClusterId", dBClusterId);
}

std::string SwitchOverGlobalDatabaseNetworkRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SwitchOverGlobalDatabaseNetworkRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SwitchOverGlobalDatabaseNetworkRequest::getOwnerId()const
{
	return ownerId_;
}

void SwitchOverGlobalDatabaseNetworkRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

