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

#include <alibabacloud/polardb/model/UnlockDBClusterDeletionRequest.h>

using AlibabaCloud::Polardb::Model::UnlockDBClusterDeletionRequest;

UnlockDBClusterDeletionRequest::UnlockDBClusterDeletionRequest() :
	RpcServiceRequest("polardb", "2017-08-01", "UnlockDBClusterDeletion")
{}

UnlockDBClusterDeletionRequest::~UnlockDBClusterDeletionRequest()
{}

long UnlockDBClusterDeletionRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void UnlockDBClusterDeletionRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string UnlockDBClusterDeletionRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void UnlockDBClusterDeletionRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string UnlockDBClusterDeletionRequest::getDBClusterId()const
{
	return dBClusterId_;
}

void UnlockDBClusterDeletionRequest::setDBClusterId(const std::string& dBClusterId)
{
	dBClusterId_ = dBClusterId;
	setCoreParameter("DBClusterId", dBClusterId);
}

std::string UnlockDBClusterDeletionRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void UnlockDBClusterDeletionRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long UnlockDBClusterDeletionRequest::getOwnerId()const
{
	return ownerId_;
}

void UnlockDBClusterDeletionRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string UnlockDBClusterDeletionRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void UnlockDBClusterDeletionRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

