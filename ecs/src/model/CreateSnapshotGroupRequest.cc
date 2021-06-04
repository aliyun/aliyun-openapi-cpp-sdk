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

#include <alibabacloud/ecs/model/CreateSnapshotGroupRequest.h>

using AlibabaCloud::Ecs::Model::CreateSnapshotGroupRequest;

CreateSnapshotGroupRequest::CreateSnapshotGroupRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "CreateSnapshotGroup")
{
	setMethod(HttpRequest::Method::Post);
}

CreateSnapshotGroupRequest::~CreateSnapshotGroupRequest()
{}

long CreateSnapshotGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateSnapshotGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

bool CreateSnapshotGroupRequest::getInstantAccess()const
{
	return instantAccess_;
}

void CreateSnapshotGroupRequest::setInstantAccess(bool instantAccess)
{
	instantAccess_ = instantAccess;
	setParameter("InstantAccess", instantAccess ? "true" : "false");
}

std::vector<std::string> CreateSnapshotGroupRequest::getExcludeDiskId()const
{
	return excludeDiskId_;
}

void CreateSnapshotGroupRequest::setExcludeDiskId(const std::vector<std::string>& excludeDiskId)
{
	excludeDiskId_ = excludeDiskId;
	for(int dep1 = 0; dep1!= excludeDiskId.size(); dep1++) {
		setParameter("ExcludeDiskId."+ std::to_string(dep1), excludeDiskId.at(dep1));
	}
}

std::string CreateSnapshotGroupRequest::getDescription()const
{
	return description_;
}

void CreateSnapshotGroupRequest::setDescription(const std::string& description)
{
	description_ = description;
	setParameter("Description", description);
}

int CreateSnapshotGroupRequest::getInstantAccessRetentionDays()const
{
	return instantAccessRetentionDays_;
}

void CreateSnapshotGroupRequest::setInstantAccessRetentionDays(int instantAccessRetentionDays)
{
	instantAccessRetentionDays_ = instantAccessRetentionDays;
	setParameter("InstantAccessRetentionDays", std::to_string(instantAccessRetentionDays));
}

std::string CreateSnapshotGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateSnapshotGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateSnapshotGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateSnapshotGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateSnapshotGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateSnapshotGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long CreateSnapshotGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateSnapshotGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateSnapshotGroupRequest::getInstanceId()const
{
	return instanceId_;
}

void CreateSnapshotGroupRequest::setInstanceId(const std::string& instanceId)
{
	instanceId_ = instanceId;
	setParameter("InstanceId", instanceId);
}

std::string CreateSnapshotGroupRequest::getName()const
{
	return name_;
}

void CreateSnapshotGroupRequest::setName(const std::string& name)
{
	name_ = name;
	setParameter("Name", name);
}

