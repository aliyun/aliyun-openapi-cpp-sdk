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

#include <alibabacloud/polardb/model/CloseDBClusterMigrationRequest.h>

using AlibabaCloud::Polardb::Model::CloseDBClusterMigrationRequest;

CloseDBClusterMigrationRequest::CloseDBClusterMigrationRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "CloseDBClusterMigration")
{}

CloseDBClusterMigrationRequest::~CloseDBClusterMigrationRequest()
{}

long CloseDBClusterMigrationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CloseDBClusterMigrationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CloseDBClusterMigrationRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CloseDBClusterMigrationRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CloseDBClusterMigrationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CloseDBClusterMigrationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CloseDBClusterMigrationRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void CloseDBClusterMigrationRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string CloseDBClusterMigrationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CloseDBClusterMigrationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CloseDBClusterMigrationRequest::getOwnerId()const
{
	return ownerId_;
}

void CloseDBClusterMigrationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

bool CloseDBClusterMigrationRequest::getContinueEnableBinlog()const
{
	return continueEnableBinlog_;
}

void CloseDBClusterMigrationRequest::setContinueEnableBinlog(bool continueEnableBinlog)
{
	continueEnableBinlog_ = continueEnableBinlog;
	setCoreParameter("ContinueEnableBinlog", continueEnableBinlog ? "true" : "false");
}

