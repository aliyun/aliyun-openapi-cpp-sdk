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

#include <alibabacloud/slb/model/AddBackendServersRequest.h>

using AlibabaCloud::Slb::Model::AddBackendServersRequest;

AddBackendServersRequest::AddBackendServersRequest() :
	RpcServiceRequest("slb", "2014-05-15", "AddBackendServers")
{
	setMethod(HttpRequest::Method::Post);
}

AddBackendServersRequest::~AddBackendServersRequest()
{}

std::string AddBackendServersRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void AddBackendServersRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setCoreParameter("Access_key_id", access_key_id);
}

long AddBackendServersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddBackendServersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setCoreParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddBackendServersRequest::getBackendServers()const
{
	return backendServers_;
}

void AddBackendServersRequest::setBackendServers(const std::string& backendServers)
{
	backendServers_ = backendServers;
	setCoreParameter("BackendServers", backendServers);
}

std::string AddBackendServersRequest::getRegionId()const
{
	return regionId_;
}

void AddBackendServersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setCoreParameter("RegionId", regionId);
}

std::string AddBackendServersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddBackendServersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setCoreParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddBackendServersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddBackendServersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setCoreParameter("OwnerAccount", ownerAccount);
}

long AddBackendServersRequest::getOwnerId()const
{
	return ownerId_;
}

void AddBackendServersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setCoreParameter("OwnerId", std::to_string(ownerId));
}

std::string AddBackendServersRequest::getTags()const
{
	return tags_;
}

void AddBackendServersRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setCoreParameter("Tags", tags);
}

std::string AddBackendServersRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void AddBackendServersRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setCoreParameter("LoadBalancerId", loadBalancerId);
}

