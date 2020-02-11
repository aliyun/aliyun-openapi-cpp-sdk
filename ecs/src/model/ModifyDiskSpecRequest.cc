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

#include <alibabacloud/ecs/model/ModifyDiskSpecRequest.h>

using AlibabaCloud::Ecs::Model::ModifyDiskSpecRequest;

ModifyDiskSpecRequest::ModifyDiskSpecRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifyDiskSpec")
{
	setMethod(HttpRequest::Method::Post);
}

ModifyDiskSpecRequest::~ModifyDiskSpecRequest()
{}

long ModifyDiskSpecRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyDiskSpecRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyDiskSpecRequest::getDiskId()const
{
	return diskId_;
}

void ModifyDiskSpecRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

std::string ModifyDiskSpecRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyDiskSpecRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyDiskSpecRequest::getPerformanceLevel()const
{
	return performanceLevel_;
}

void ModifyDiskSpecRequest::setPerformanceLevel(const std::string& performanceLevel)
{
	performanceLevel_ = performanceLevel;
	setParameter("PerformanceLevel", performanceLevel);
}

std::string ModifyDiskSpecRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyDiskSpecRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifyDiskSpecRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyDiskSpecRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

