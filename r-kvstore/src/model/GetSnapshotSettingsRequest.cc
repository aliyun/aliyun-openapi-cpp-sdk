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

#include <alibabacloud/r-kvstore/model/GetSnapshotSettingsRequest.h>

using AlibabaCloud::R_kvstore::Model::GetSnapshotSettingsRequest;

GetSnapshotSettingsRequest::GetSnapshotSettingsRequest() :
	RpcServiceRequest("r-kvstore", "2015-01-01", "GetSnapshotSettings")
{}

GetSnapshotSettingsRequest::~GetSnapshotSettingsRequest()
{}

long GetSnapshotSettingsRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void GetSnapshotSettingsRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string GetSnapshotSettingsRequest::getInstanceId()const
{
	return instanceId_;
}

void GetSnapshotSettingsRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setCoreParameter("InstanceId", instanceId);
}

std::string GetSnapshotSettingsRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void GetSnapshotSettingsRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string GetSnapshotSettingsRequest::getRegionId()const
{
	return regionId_;
}

void GetSnapshotSettingsRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string GetSnapshotSettingsRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void GetSnapshotSettingsRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long GetSnapshotSettingsRequest::getOwnerId()const
{
	return ownerId_;
}

void GetSnapshotSettingsRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string GetSnapshotSettingsRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void GetSnapshotSettingsRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

