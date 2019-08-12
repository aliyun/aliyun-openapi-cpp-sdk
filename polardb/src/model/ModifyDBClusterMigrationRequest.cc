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

#include <alibabacloud/polardb/model/ModifyDBClusterMigrationRequest.h>

using AlibabaCloud::Polardb::Model::ModifyDBClusterMigrationRequest;

ModifyDBClusterMigrationRequest::ModifyDBClusterMigrationRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "ModifyDBClusterMigration")
{}

ModifyDBClusterMigrationRequest::~ModifyDBClusterMigrationRequest()
{}

long ModifyDBClusterMigrationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDBClusterMigrationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string ModifyDBClusterMigrationRequest::getSecurityToken()const
{
	return securityToken_;
}

void ModifyDBClusterMigrationRequest::setSecurityToken(const std::string& securityToken)
{
	securityToken_ = securityToken;
	setCoreParameter("SecurityToken", std::to_string(securityToken));
}

std::string ModifyDBClusterMigrationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDBClusterMigrationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string ModifyDBClusterMigrationRequest::getRegionId()const
{
	return regionId_;
}

void ModifyDBClusterMigrationRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string ModifyDBClusterMigrationRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void ModifyDBClusterMigrationRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", std::to_string(dBClusterId));
}

std::string ModifyDBClusterMigrationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDBClusterMigrationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string ModifyDBClusterMigrationRequest::getSourceRDSDBInstanceId()const
{
	return sourceRDSDBInstanceId_;
}

void ModifyDBClusterMigrationRequest::setSourceRDSDBInstanceId(const std::string& sourceRDSDBInstanceId)
{
	sourceRDSDBInstanceId_ = sourceRDSDBInstanceId;
	setCoreParameter("SourceRDSDBInstanceId", std::to_string(sourceRDSDBInstanceId));
}

std::string ModifyDBClusterMigrationRequest::getNewMasterInstanceId()const
{
	return newMasterInstanceId_;
}

void ModifyDBClusterMigrationRequest::setNewMasterInstanceId(const std::string& newMasterInstanceId)
{
	newMasterInstanceId_ = newMasterInstanceId;
	setCoreParameter("NewMasterInstanceId", std::to_string(newMasterInstanceId));
}

long ModifyDBClusterMigrationRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDBClusterMigrationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string ModifyDBClusterMigrationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void ModifyDBClusterMigrationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

