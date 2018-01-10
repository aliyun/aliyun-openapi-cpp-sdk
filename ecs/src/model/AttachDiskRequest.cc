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

#include <alibabacloud/ecs/model/AttachDiskRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

AttachDiskRequest::AttachDiskRequest() :
	EcsRequest("AttachDisk")
{}

AttachDiskRequest::~AttachDiskRequest()
{}

long AttachDiskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AttachDiskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AttachDiskRequest::getInstanceId()const
{
	return instanceId_;
}

void AttachDiskRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string AttachDiskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AttachDiskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AttachDiskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AttachDiskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string AttachDiskRequest::getDiskId()const
{
	return diskId_;
}

void AttachDiskRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

long AttachDiskRequest::getOwnerId()const
{
	return ownerId_;
}

void AttachDiskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AttachDiskRequest::getDevice()const
{
	return device_;
}

void AttachDiskRequest::setDevice(const std::string& device)
{
	device_ = device;
	setParameter("Device", device);
}

bool AttachDiskRequest::getDeleteWithInstance()const
{
	return deleteWithInstance_;
}

void AttachDiskRequest::setDeleteWithInstance(bool deleteWithInstance)
{
	deleteWithInstance_ = deleteWithInstance;
	setParameter("DeleteWithInstance", std::to_string(deleteWithInstance));
}

