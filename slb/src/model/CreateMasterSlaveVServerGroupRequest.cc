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

#include <alibabacloud/slb/model/CreateMasterSlaveVServerGroupRequest.h>

using AlibabaCloud::Slb::Model::CreateMasterSlaveVServerGroupRequest;

CreateMasterSlaveVServerGroupRequest::CreateMasterSlaveVServerGroupRequest() :
	RpcServiceRequest("slb", "2014-05-15", "CreateMasterSlaveVServerGroup")
{}

CreateMasterSlaveVServerGroupRequest::~CreateMasterSlaveVServerGroupRequest()
{}

std::string CreateMasterSlaveVServerGroupRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateMasterSlaveVServerGroupRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long CreateMasterSlaveVServerGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateMasterSlaveVServerGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateMasterSlaveVServerGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateMasterSlaveVServerGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setCoreParameter("AccessKeyId", accessKeyId);
}

std::string CreateMasterSlaveVServerGroupRequest::getMasterSlaveBackendServers()const
{
	return masterSlaveBackendServers_;
}

void CreateMasterSlaveVServerGroupRequest::setMasterSlaveBackendServers(const std::string& masterSlaveBackendServers)
{
	masterSlaveBackendServers_ = masterSlaveBackendServers;
	setCoreParameter("MasterSlaveBackendServers", masterSlaveBackendServers);
}

std::string CreateMasterSlaveVServerGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateMasterSlaveVServerGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string CreateMasterSlaveVServerGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateMasterSlaveVServerGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateMasterSlaveVServerGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateMasterSlaveVServerGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

std::string CreateMasterSlaveVServerGroupRequest::getMasterSlaveVServerGroupName()const
{
	return masterSlaveVServerGroupName_;
}

void CreateMasterSlaveVServerGroupRequest::setMasterSlaveVServerGroupName(const std::string& masterSlaveVServerGroupName)
{
	masterSlaveVServerGroupName_ = masterSlaveVServerGroupName;
	setCoreParameter("MasterSlaveVServerGroupName", masterSlaveVServerGroupName);
}

long CreateMasterSlaveVServerGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateMasterSlaveVServerGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateMasterSlaveVServerGroupRequest::getTags()const
{
	return tags_;
}

void CreateMasterSlaveVServerGroupRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string CreateMasterSlaveVServerGroupRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void CreateMasterSlaveVServerGroupRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", loadBalancerId);
}

