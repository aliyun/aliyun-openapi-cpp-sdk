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

#include <alibabacloud/ecs/model/AttachInstanceRamRoleRequest.h>

using AlibabaCloud::Ecs::Model::AttachInstanceRamRoleRequest;

AttachInstanceRamRoleRequest::AttachInstanceRamRoleRequest() :
	RpcServiceRequest("ecs", "2014-05-26", "AttachInstanceRamRole")
{}

AttachInstanceRamRoleRequest::~AttachInstanceRamRoleRequest()
{}

std::string AttachInstanceRamRoleRequest::getSourceRegionId()const
{
	return sourceRegionId_;
}

void AttachInstanceRamRoleRequest::setSourceRegionId(const std::string& sourceRegionId)
{
	sourceRegionId_ = sourceRegionId;
	setCoreParameter("SourceRegionId", std::to_string(sourceRegionId));
}

long AttachInstanceRamRoleRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AttachInstanceRamRoleRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string AttachInstanceRamRoleRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AttachInstanceRamRoleRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string AttachInstanceRamRoleRequest::getRegionId()const
{
	return regionId_;
}

void AttachInstanceRamRoleRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string AttachInstanceRamRoleRequest::getInstanceIds()const
{
	return instanceIds_;
}

void AttachInstanceRamRoleRequest::setInstanceIds(const std::string& instanceIds)
{
	instanceIds_ = instanceIds;
	setCoreParameter("InstanceIds", std::to_string(instanceIds));
}

std::string AttachInstanceRamRoleRequest::getRamRoleName()const
{
	return ramRoleName_;
}

void AttachInstanceRamRoleRequest::setRamRoleName(const std::string& ramRoleName)
{
	ramRoleName_ = ramRoleName;
	setCoreParameter("RamRoleName", std::to_string(ramRoleName));
}

long AttachInstanceRamRoleRequest::getOwnerId()const
{
	return ownerId_;
}

void AttachInstanceRamRoleRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

