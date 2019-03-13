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

std::string CreateSnapshotRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void CreateSnapshotRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setParameter("SourceRegionId", sourceRegionId);
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

std::string CreateSnapshotRequest::getDiskId()const
{
	return diskId_;
}

void CreateSnapshotRequest::setDiskId(const std::string& diskId)
{
	diskId_ = diskId;
	setParameter("DiskId", diskId);
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

std::vector<CreateSnapshotRequest::Tag> CreateSnapshotRequest::getTag()const
{
	return tag_;
}

void CreateSnapshotRequest::setTag(const std::vector<Tag>& tag)
{
	tag_ = tag;
	int i = 0;
	for(int i = 0; i!= tag.size(); i++)	{
		auto obj = tag.at(i);
		std::string str ="Tag."+ std::to_string(i);
		setParameter(str + ".Value", obj.value);
		setParameter(str + ".Key", obj.key);
	}
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

