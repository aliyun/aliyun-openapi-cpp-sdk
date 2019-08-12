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

using AlibabaCloud::Ecs::Model::ResizeDiskRequest;

ResizeDiskRequest::ResizeDiskRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ResizeDisk")
{}

ResizeDiskRequest::~ResizeDiskRequest()
{}

std::string ResizeDiskRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void ResizeDiskRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", sourceRegionId);
}

bool ResizeDiskRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ResizeDiskRequest::setResourceOwnerId(bool resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId ? "true" : "false");
}

std::string ResizeDiskRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ResizeDiskRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ResizeDiskRequest::getClientToken()const
{
	return clientToken_;
}

void ResizeDiskRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setCoreParameter("ClientToken", clientToken);
}

std::string ResizeDiskRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ResizeDiskRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

int ResizeDiskRequest::getNewSize()const
{
	return newSize_;
}

void ResizeDiskRequest::setNewSize(int newSize)
{
	newSize_ = newSize;
	setCoreParameter("NewSize", std::to_string(newSize));
}

std::string ResizeDiskRequest::getDiskId()const
{
	return diskId_;
}

void ResizeDiskRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setCoreParameter("DiskId", diskId);
}

bool ResizeDiskRequest::getOwnerId()const
{
	return ownerId_;
}

void ResizeDiskRequest::setOwnerId(bool ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId ? "true" : "false");
}

std::string ResizeDiskRequest::getType()const
{
	return type_;
}

void ResizeDiskRequest::setType(const std::string& type)
{
	type_ = type;
	setCoreParameter("Type", type);
}

