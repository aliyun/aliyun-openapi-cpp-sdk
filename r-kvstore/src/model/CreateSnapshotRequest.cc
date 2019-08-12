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

#include <alibabacloud/r-kvstore/model/CreateSnapshotRequest.h>

using AlibabaCloud::R_kvstore::Model::CreateSnapshotRequest;

CreateSnapshotRequest::CreateSnapshotRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "CreateSnapshot")
{}

CreateSnapshotRequest::~CreateSnapshotRequest()
{}

long CreateSnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateSnapshotRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateSnapshotRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string CreateSnapshotRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSnapshotRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateSnapshotRequest::getRegionId()const
{
	return regionId_;
}

void CreateSnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateSnapshotRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSnapshotRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateSnapshotRequest::getSnapshotName()const
{
	return snapshotName_;
}

void CreateSnapshotRequest::setSnapshotName(const std::string& snapshotName)
{
	snapshotName_ = snapshotName;
	setCoreParameter("SnapshotName", snapshotName);
}

long CreateSnapshotRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSnapshotRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateSnapshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateSnapshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

