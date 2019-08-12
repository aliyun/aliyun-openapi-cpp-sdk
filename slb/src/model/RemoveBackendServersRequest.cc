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

#include <alibabacloud/slb/model/RemoveBackendServersRequest.h>

using AlibabaCloud::Slb::Model::RemoveBackendServersRequest;

RemoveBackendServersRequest::RemoveBackendServersRequest() :
	RpcServiceRequest("slb", "2014-05-15", "RemoveBackendServers")
{}

RemoveBackendServersRequest::~RemoveBackendServersRequest()
{}

std::string RemoveBackendServersRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void RemoveBackendServersRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", std::to_string(access_key_id));
}

long RemoveBackendServersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void RemoveBackendServersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", resourceOwnerId);
}

std::string RemoveBackendServersRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void RemoveBackendServersRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", std::to_string(loadBalancerId));
}

std::string RemoveBackendServersRequest::getRegionId()const
{
	return regionId_;
}

void RemoveBackendServersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", std::to_string(regionId));
}

std::string RemoveBackendServersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void RemoveBackendServersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", std::to_string(resourceOwnerAccount));
}

std::string RemoveBackendServersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void RemoveBackendServersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", std::to_string(ownerAccount));
}

long RemoveBackendServersRequest::getOwnerId()const
{
	return ownerId_;
}

void RemoveBackendServersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", ownerId);
}

std::string RemoveBackendServersRequest::getBackendServers()const
{
	return backendServers_;
}

void RemoveBackendServersRequest::setBackendServers(const std::string& backendServers)
{
	backendServers_ = backendServers;
	setCoreParameter("BackendServers", std::to_string(backendServers));
}

std::string RemoveBackendServersRequest::getTags()const
{
	return tags_;
}

void RemoveBackendServersRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", std::to_string(tags));
}

