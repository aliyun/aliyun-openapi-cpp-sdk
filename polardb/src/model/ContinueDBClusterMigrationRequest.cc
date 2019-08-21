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

#include <alibabacloud/polardb/model/ContinueDBClusterMigrationRequest.h>

using AlibabaCloud::Polardb::Model::ContinueDBClusterMigrationRequest;

ContinueDBClusterMigrationRequest::ContinueDBClusterMigrationRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ContinueDBClusterMigration")
{}

ContinueDBClusterMigrationRequest::~ContinueDBClusterMigrationRequest()
{}

long ContinueDBClusterMigrationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ContinueDBClusterMigrationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ContinueDBClusterMigrationRequest::getSecurityToken()const
{
	return securityToken_;
}

void ContinueDBClusterMigrationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", securityToken);
}

std::string ContinueDBClusterMigrationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ContinueDBClusterMigrationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ContinueDBClusterMigrationRequest::getRegionId()const
{
	return regionId_;
}

void ContinueDBClusterMigrationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ContinueDBClusterMigrationRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ContinueDBClusterMigrationRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string ContinueDBClusterMigrationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ContinueDBClusterMigrationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ContinueDBClusterMigrationRequest::getOwnerId()const
{
	return ownerId_;
}

void ContinueDBClusterMigrationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ContinueDBClusterMigrationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ContinueDBClusterMigrationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

