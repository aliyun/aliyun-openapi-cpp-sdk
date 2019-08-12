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

#include <alibabacloud/polardb/model/AbortDBClusterMigrationRequest.h>

using AlibabaCloud::Polardb::Model::AbortDBClusterMigrationRequest;

AbortDBClusterMigrationRequest::AbortDBClusterMigrationRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "AbortDBClusterMigration")
{}

AbortDBClusterMigrationRequest::~AbortDBClusterMigrationRequest()
{}

long AbortDBClusterMigrationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AbortDBClusterMigrationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AbortDBClusterMigrationRequest::getSecurityToken()const
{
	return securityToken_;
}

void AbortDBClusterMigrationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string AbortDBClusterMigrationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AbortDBClusterMigrationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AbortDBClusterMigrationRequest::getRegionId()const
{
	return regionId_;
}

void AbortDBClusterMigrationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string AbortDBClusterMigrationRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void AbortDBClusterMigrationRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", std::to_string(dBClusterId));
}

std::string AbortDBClusterMigrationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AbortDBClusterMigrationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long AbortDBClusterMigrationRequest::getOwnerId()const
{
	return ownerId_;
}

void AbortDBClusterMigrationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string AbortDBClusterMigrationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AbortDBClusterMigrationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

