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

#include <alibabacloud/ecs/model/ExportSnapshotRequest.h>

using AlibabaCloud::Ecs::Model::ExportSnapshotRequest;

ExportSnapshotRequest::ExportSnapshotRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ExportSnapshot")
{
	setMethod(HttpRequest::Method::Post);
}

ExportSnapshotRequest::~ExportSnapshotRequest()
{}

long ExportSnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ExportSnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ExportSnapshotRequest::getSnapshotId()const
{
	return snapshotId_;
}

void ExportSnapshotRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setCoreParameter("SnapshotId", snapshotId);
}

std::string ExportSnapshotRequest::getRegionId()const
{
	return regionId_;
}

void ExportSnapshotRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ExportSnapshotRequest::getOssBucket()const
{
	return ossBucket_;
}

void ExportSnapshotRequest::setOssBucket(const std::string& ossBucket)
{
	ossBucket_ = ossBucket;
	setCoreParameter("OssBucket", ossBucket);
}

std::string ExportSnapshotRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ExportSnapshotRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ExportSnapshotRequest::getRoleName()const
{
	return roleName_;
}

void ExportSnapshotRequest::setRoleName(const std::string& roleName)
{
	roleName_ = roleName;
	setCoreParameter("RoleName", roleName);
}

long ExportSnapshotRequest::getOwnerId()const
{
	return ownerId_;
}

void ExportSnapshotRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

