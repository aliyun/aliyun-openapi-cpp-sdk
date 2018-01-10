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

#include <alibabacloud/ecs/model/CheckDiskEnableAutoSnapshotValidationRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

CheckDiskEnableAutoSnapshotValidationRequest::CheckDiskEnableAutoSnapshotValidationRequest() :
	EcsRequest("CheckDiskEnableAutoSnapshotValidation")
{}

CheckDiskEnableAutoSnapshotValidationRequest::~CheckDiskEnableAutoSnapshotValidationRequest()
{}

long CheckDiskEnableAutoSnapshotValidationRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CheckDiskEnableAutoSnapshotValidationRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CheckDiskEnableAutoSnapshotValidationRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CheckDiskEnableAutoSnapshotValidationRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CheckDiskEnableAutoSnapshotValidationRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CheckDiskEnableAutoSnapshotValidationRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CheckDiskEnableAutoSnapshotValidationRequest::getDiskIds()const
{
	return diskIds_;
}

void CheckDiskEnableAutoSnapshotValidationRequest::setDiskIds(const std::string& diskIds)
{
	diskIds_ = diskIds;
	setParameter("DiskIds", diskIds);
}

long CheckDiskEnableAutoSnapshotValidationRequest::getOwnerId()const
{
	return ownerId_;
}

void CheckDiskEnableAutoSnapshotValidationRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

