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

#include <alibabacloud/polardb/model/ModifySQLExplorerRetentionRequest.h>

using AlibabaCloud::Polardb::Model::ModifySQLExplorerRetentionRequest;

ModifySQLExplorerRetentionRequest::ModifySQLExplorerRetentionRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifySQLExplorerRetention")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySQLExplorerRetentionRequest::~ModifySQLExplorerRetentionRequest()
{}

long ModifySQLExplorerRetentionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySQLExplorerRetentionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySQLExplorerRetentionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifySQLExplorerRetentionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string ModifySQLExplorerRetentionRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifySQLExplorerRetentionRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setParameter("SecurityToken", securityToken);
}

std::string ModifySQLExplorerRetentionRequest::getRegionId()const
{
	return regionId_;
}

void ModifySQLExplorerRetentionRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string ModifySQLExplorerRetentionRequest::getDBInstanceId()const
{
	return dBInstanceId_;
}

void ModifySQLExplorerRetentionRequest::setDBInstanceId(const std::string& dBInstanceId)
{
	dBInstanceId_ = dBInstanceId;
	setParameter("DBInstanceId", dBInstanceId);
}

std::string ModifySQLExplorerRetentionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySQLExplorerRetentionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySQLExplorerRetentionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySQLExplorerRetentionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string ModifySQLExplorerRetentionRequest::getConfigValue()const
{
	return configValue_;
}

void ModifySQLExplorerRetentionRequest::setConfigValue(const std::string& configValue)
{
	configValue_ = configValue;
	setParameter("ConfigValue", configValue);
}

long ModifySQLExplorerRetentionRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySQLExplorerRetentionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

