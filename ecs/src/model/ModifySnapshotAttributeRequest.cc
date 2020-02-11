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

#include <alibabacloud/ecs/model/ModifySnapshotAttributeRequest.h>

using AlibabaCloud::Ecs::Model::ModifySnapshotAttributeRequest;

ModifySnapshotAttributeRequest::ModifySnapshotAttributeRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "ModifySnapshotAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

ModifySnapshotAttributeRequest::~ModifySnapshotAttributeRequest()
{}

long ModifySnapshotAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifySnapshotAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifySnapshotAttributeRequest::getSnapshotId()const
{
	return snapshotId_;
}

void ModifySnapshotAttributeRequest::setSnapshotId(const std::string& snapshotId)
{
	snapshotId_ = snapshotId;
	setParameter("SnapshotId", snapshotId);
}

std::string ModifySnapshotAttributeRequest::getDescription()const
{
	return description_;
}

void ModifySnapshotAttributeRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string ModifySnapshotAttributeRequest::getSnapshotName()const
{
	return snapshotName_;
}

void ModifySnapshotAttributeRequest::setSnapshotName(const std::string& snapshotName)
{
	snapshotName_ = snapshotName;
	setParameter("SnapshotName", snapshotName);
}

std::string ModifySnapshotAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifySnapshotAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifySnapshotAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifySnapshotAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long ModifySnapshotAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifySnapshotAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

