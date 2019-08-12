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

#include <alibabacloud/r-kvstore/model/CreateTempInstanceRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateTempInstanceRequest;

CreateTempInstanceRequest::CreateTempInstanceRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateTempInstance")
{}

CreateTempInstanceRequest::~CreateTempInstanceRequest()
{}

long CreateTempInstanceRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateTempInstanceRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateTempInstanceRequest::getSnapshotId()const
{
	return snapshotId_;
}

void CreateTempInstanceRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setCoreParameter("SnapshotId", std::to_string(snapshotId));
}

std::string CreateTempInstanceRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateTempInstanceRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", std::to_string(instanceId));
}

std::string CreateTempInstanceRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateTempInstanceRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string CreateTempInstanceRequest::getRegionId()const
{
	return regionId_;
}

void CreateTempInstanceRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string CreateTempInstanceRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateTempInstanceRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long CreateTempInstanceRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateTempInstanceRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateTempInstanceRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateTempInstanceRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", std::to_string(accessKeyId));
}

