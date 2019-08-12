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

#include <alibabacloud/ecs/model/DeleteDiskRequest.h>

using AlibabaCloud::Ecs::Model::DeleteDiskRequest;

DeleteDiskRequest::DeleteDiskRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "DeleteDisk")
{}

DeleteDiskRequest::~DeleteDiskRequest()
{}

std::string DeleteDiskRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void DeleteDiskRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

long DeleteDiskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DeleteDiskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string DeleteDiskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DeleteDiskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string DeleteDiskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DeleteDiskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

std::string DeleteDiskRequest::getDiskId()const
{
	return diskId_;
}

void DeleteDiskRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setCoreParameter("DiskId", std::to_string(diskId));
}

long DeleteDiskRequest::getOwnerId()const
{
	return ownerId_;
}

void DeleteDiskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

