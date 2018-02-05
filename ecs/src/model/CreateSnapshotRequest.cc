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

#include <alibabacloud/ecs/model/CreateSnapshotRequest.h>

using AlibabaCloud::Ecs::Model::CreateSnapshotRequest;

CreateSnapshotRequest::CreateSnapshotRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateSnapshot")
{}

CreateSnapshotRequest::~CreateSnapshotRequest()
{}

std::string CreateSnapshotRequest::getTag4Value()const
{
	return tag4Value_;
}

void CreateSnapshotRequest::setTag4Value(const std::string& tag4Value)
{
	tag4Value_ = tag4Value;
	setParameter("Tag4Value", tag4Value);
}

long CreateSnapshotRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSnapshotRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateSnapshotRequest::getTag2Key()const
{
	return tag2Key_;
}

void CreateSnapshotRequest::setTag2Key(const std::string& tag2Key)
{
	tag2Key_ = tag2Key;
	setParameter("Tag2Key", tag2Key);
}

std::string CreateSnapshotRequest::getTag5Key()const
{
	return tag5Key_;
}

void CreateSnapshotRequest::setTag5Key(const std::string& tag5Key)
{
	tag5Key_ = tag5Key;
	setParameter("Tag5Key", tag5Key);
}

std::string CreateSnapshotRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSnapshotRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateSnapshotRequest::getClientToken()const
{
	return clientToken_;
}

void CreateSnapshotRequest::setClientToken(const std::string& clientToken)
{
	clientToken_ = clientToken;
	setParameter("ClientToken", clientToken);
}

std::string CreateSnapshotRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSnapshotRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateSnapshotRequest::getDescription()const
{
	return description_;
}

void CreateSnapshotRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

std::string CreateSnapshotRequest::getSnapshotName()const
{
	return snapshotName_;
}

void CreateSnapshotRequest::setSnapshotName(const std::string& snapshotName)
{
	snapshotName_ = snapshotName;
	setParameter("SnapshotName", snapshotName);
}

std::string CreateSnapshotRequest::getTag3Key()const
{
	return tag3Key_;
}

void CreateSnapshotRequest::setTag3Key(const std::string& tag3Key)
{
	tag3Key_ = tag3Key;
	setParameter("Tag3Key", tag3Key);
}

long CreateSnapshotRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSnapshotRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateSnapshotRequest::getTag5Value()const
{
	return tag5Value_;
}

void CreateSnapshotRequest::setTag5Value(const std::string& tag5Value)
{
	tag5Value_ = tag5Value;
	setParameter("Tag5Value", tag5Value);
}

std::string CreateSnapshotRequest::getTag1Key()const
{
	return tag1Key_;
}

void CreateSnapshotRequest::setTag1Key(const std::string& tag1Key)
{
	tag1Key_ = tag1Key;
	setParameter("Tag1Key", tag1Key);
}

std::string CreateSnapshotRequest::getTag1Value()const
{
	return tag1Value_;
}

void CreateSnapshotRequest::setTag1Value(const std::string& tag1Value)
{
	tag1Value_ = tag1Value;
	setParameter("Tag1Value", tag1Value);
}

std::string CreateSnapshotRequest::getTag2Value()const
{
	return tag2Value_;
}

void CreateSnapshotRequest::setTag2Value(const std::string& tag2Value)
{
	tag2Value_ = tag2Value;
	setParameter("Tag2Value", tag2Value);
}

std::string CreateSnapshotRequest::getTag4Key()const
{
	return tag4Key_;
}

void CreateSnapshotRequest::setTag4Key(const std::string& tag4Key)
{
	tag4Key_ = tag4Key;
	setParameter("Tag4Key", tag4Key);
}

std::string CreateSnapshotRequest::getDiskId()const
{
	return diskId_;
}

void CreateSnapshotRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
}

std::string CreateSnapshotRequest::getTag3Value()const
{
	return tag3Value_;
}

void CreateSnapshotRequest::setTag3Value(const std::string& tag3Value)
{
	tag3Value_ = tag3Value;
	setParameter("Tag3Value", tag3Value);
}

