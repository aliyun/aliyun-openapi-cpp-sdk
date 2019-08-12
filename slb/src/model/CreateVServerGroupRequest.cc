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

#include <alibabacloud/slb/model/CreateVServerGroupRequest.h>

using AlibabaCloud::Slb::Model::CreateVServerGroupRequest;

CreateVServerGroupRequest::CreateVServerGroupRequest() :
	RpcServiceRequest("slb", "2014-05-15", "CreateVServerGroup")
{}

CreateVServerGroupRequest::~CreateVServerGroupRequest()
{}

std::string CreateVServerGroupRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateVServerGroupRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long CreateVServerGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateVServerGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string CreateVServerGroupRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void CreateVServerGroupRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", loadBalancerId);
}

std::string CreateVServerGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateVServerGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateVServerGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateVServerGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateVServerGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateVServerGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long CreateVServerGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateVServerGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string CreateVServerGroupRequest::getBackendServers()const
{
	return backendServers_;
}

void CreateVServerGroupRequest::setBackendServers(const std::string& backendServers)
{
	backendServers_ = backendServers;
	setCoreParameter("BackendServers", backendServers);
}

std::string CreateVServerGroupRequest::getTags()const
{
	return tags_;
}

void CreateVServerGroupRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string CreateVServerGroupRequest::getVServerGroupName()const
{
	return vServerGroupName_;
}

void CreateVServerGroupRequest::setVServerGroupName(const std::string& vServerGroupName)
{
	vServerGroupName_ = vServerGroupName;
	setCoreParameter("VServerGroupName", vServerGroupName);
}

