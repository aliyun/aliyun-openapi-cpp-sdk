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

#include <alibabacloud/ecs/model/ResizeDiskRequest.h>

using namespace AlibabaCloud::Ecs;
using namespace AlibabaCloud::Ecs::Model;

ResizeDiskRequest::ResizeDiskRequest() :
	EcsRequest("ResizeDisk")
{}

ResizeDiskRequest::~ResizeDiskRequest()
{}

long ResizeDiskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ResizeDiskRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ResizeDiskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ResizeDiskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ResizeDiskRequest::getClientToken()const
{
	return clientToken_;
}

void ResizeDiskRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string ResizeDiskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ResizeDiskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

int ResizeDiskRequest::getNewSize()const
{
	return newSize_;
}

void ResizeDiskRequest::setNewSize(int newSize)
{
	newSize_ = newSize;
	setParameter("NewSize", std::to_string(newSize));
}

std::string ResizeDiskRequest::getDiskId()const
{
	return diskId_;
}

void ResizeDiskRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

long ResizeDiskRequest::getOwnerId()const
{
	return ownerId_;
}

void ResizeDiskRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

