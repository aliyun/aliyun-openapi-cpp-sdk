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

#include <alibabacloud/slb/model/ModifyVServerGroupBackendServersRequest.h>

using AlibabaCloud::Slb::Model::ModifyVServerGroupBackendServersRequest;

ModifyVServerGroupBackendServersRequest::ModifyVServerGroupBackendServersRequest() :
	RpcServiceRequest("slb", "2014-05-15", "ModifyVServerGroupBackendServers")
{}

ModifyVServerGroupBackendServersRequest::~ModifyVServerGroupBackendServersRequest()
{}

std::string ModifyVServerGroupBackendServersRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void ModifyVServerGroupBackendServersRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

std::string ModifyVServerGroupBackendServersRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void ModifyVServerGroupBackendServersRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setCoreParameter("VServerGroupId", vServerGroupId);
}

long ModifyVServerGroupBackendServersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void ModifyVServerGroupBackendServersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string ModifyVServerGroupBackendServersRequest::getOldBackendServers()const
{
	return oldBackendServers_;
}

void ModifyVServerGroupBackendServersRequest::setOldBackendServers(const std::string& oldBackendServers)
{
	oldBackendServers_ = oldBackendServers;
	setCoreParameter("OldBackendServers", oldBackendServers);
}

std::string ModifyVServerGroupBackendServersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void ModifyVServerGroupBackendServersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string ModifyVServerGroupBackendServersRequest::getRegionId()const
{
	return regionId_;
}

void ModifyVServerGroupBackendServersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string ModifyVServerGroupBackendServersRequest::getNewBackendServers()const
{
	return newBackendServers_;
}

void ModifyVServerGroupBackendServersRequest::setNewBackendServers(const std::string& newBackendServers)
{
	newBackendServers_ = newBackendServers;
	setCoreParameter("NewBackendServers", newBackendServers);
}

std::string ModifyVServerGroupBackendServersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void ModifyVServerGroupBackendServersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long ModifyVServerGroupBackendServersRequest::getOwnerId()const
{
	return ownerId_;
}

void ModifyVServerGroupBackendServersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string ModifyVServerGroupBackendServersRequest::getTags()const
{
	return tags_;
}

void ModifyVServerGroupBackendServersRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

