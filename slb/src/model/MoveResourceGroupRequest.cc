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

#include <alibabacloud/slb/model/MoveResourceGroupRequest.h>

using AlibabaCloud::Slb::Model::MoveResourceGroupRequest;

MoveResourceGroupRequest::MoveResourceGroupRequest() :
	RpcServiceRequest("slb", "2014-05-15", "MoveResourceGroup")
{}

MoveResourceGroupRequest::~MoveResourceGroupRequest()
{}

std::string MoveResourceGroupRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void MoveResourceGroupRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long MoveResourceGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void MoveResourceGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string MoveResourceGroupRequest::getResourceId()const
{
	return resourceId_;
}

void MoveResourceGroupRequest::setResourceId(const std::string& resourceId)
{
	resourceId_ = resourceId;
	setParameter("ResourceId", resourceId);
}

std::string MoveResourceGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void MoveResourceGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string MoveResourceGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void MoveResourceGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long MoveResourceGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void MoveResourceGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string MoveResourceGroupRequest::getResourceType()const
{
	return resourceType_;
}

void MoveResourceGroupRequest::setResourceType(const std::string& resourceType)
{
	resourceType_ = resourceType;
	setParameter("ResourceType", resourceType);
}

std::string MoveResourceGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void MoveResourceGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string MoveResourceGroupRequest::getTags()const
{
	return tags_;
}

void MoveResourceGroupRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string MoveResourceGroupRequest::getResourceGroupId()const
{
	return resourceGroupId_;
}

void MoveResourceGroupRequest::setResourceGroupId(const std::string& resourceGroupId)
{
	resourceGroupId_ = resourceGroupId;
	setParameter("ResourceGroupId", resourceGroupId);
}

std::string MoveResourceGroupRequest::getNewResourceGroupId()const
{
	return newResourceGroupId_;
}

void MoveResourceGroupRequest::setNewResourceGroupId(const std::string& newResourceGroupId)
{
	newResourceGroupId_ = newResourceGroupId;
	setParameter("NewResourceGroupId", newResourceGroupId);
}

std::string MoveResourceGroupRequest::getRegionId()const
{
	return regionId_;
}

void MoveResourceGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

