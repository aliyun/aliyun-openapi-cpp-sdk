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

#include <alibabacloud/slb/model/CreateMasterSlaveServerGroupRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

CreateMasterSlaveServerGroupRequest::CreateMasterSlaveServerGroupRequest() :
	SlbRequest("CreateMasterSlaveServerGroup")
{}

CreateMasterSlaveServerGroupRequest::~CreateMasterSlaveServerGroupRequest()
{}

std::string CreateMasterSlaveServerGroupRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void CreateMasterSlaveServerGroupRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long CreateMasterSlaveServerGroupRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void CreateMasterSlaveServerGroupRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string CreateMasterSlaveServerGroupRequest::getMasterSlaveBackendServers()const
{
	return masterSlaveBackendServers_;
}

void CreateMasterSlaveServerGroupRequest::setMasterSlaveBackendServers(const std::string& masterSlaveBackendServers)
{
	masterSlaveBackendServers_ = masterSlaveBackendServers;
	setParameter("MasterSlaveBackendServers", masterSlaveBackendServers);
}

std::string CreateMasterSlaveServerGroupRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void CreateMasterSlaveServerGroupRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string CreateMasterSlaveServerGroupRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void CreateMasterSlaveServerGroupRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string CreateMasterSlaveServerGroupRequest::getRegionId()const
{
	return regionId_;
}

void CreateMasterSlaveServerGroupRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string CreateMasterSlaveServerGroupRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void CreateMasterSlaveServerGroupRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

std::string CreateMasterSlaveServerGroupRequest::getMasterSlaveServerGroupName()const
{
	return masterSlaveServerGroupName_;
}

void CreateMasterSlaveServerGroupRequest::setMasterSlaveServerGroupName(const std::string& masterSlaveServerGroupName)
{
	masterSlaveServerGroupName_ = masterSlaveServerGroupName;
	setParameter("MasterSlaveServerGroupName", masterSlaveServerGroupName);
}

long CreateMasterSlaveServerGroupRequest::getOwnerId()const
{
	return ownerId_;
}

void CreateMasterSlaveServerGroupRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string CreateMasterSlaveServerGroupRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void CreateMasterSlaveServerGroupRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string CreateMasterSlaveServerGroupRequest::getTags()const
{
	return tags_;
}

void CreateMasterSlaveServerGroupRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

