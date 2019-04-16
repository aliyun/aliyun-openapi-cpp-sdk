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

#include <alibabacloud/r-kvstore/model/RestoreSnapshotRequest.h>

using AlibabaCloud::R_kvstore::Model::RestoreSnapshotRequest;

RestoreSnapshotRequest::RestoreSnapshotRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "RestoreSnapshot")
{}

RestoreSnapshotRequest::~RestoreSnapshotRequest()
{}

long RestoreSnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RestoreSnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string RestoreSnapshotRequest::getInstanceId()const
{
	return instanceId_;
}

void RestoreSnapshotRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string RestoreSnapshotRequest::getSnapshotId()const
{
	return snapshotId_;
}

void RestoreSnapshotRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setCoreParameter("SnapshotId", snapshotId);
}

std::string RestoreSnapshotRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RestoreSnapshotRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string RestoreSnapshotRequest::getRegionId()const
{
	return regionId_;
}

void RestoreSnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string RestoreSnapshotRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RestoreSnapshotRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long RestoreSnapshotRequest::getOwnerId()const
{
	return ownerId_;
}

void RestoreSnapshotRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string RestoreSnapshotRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void RestoreSnapshotRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

