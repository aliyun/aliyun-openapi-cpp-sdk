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

#include <alibabacloud/slb/model/SetBackendServersRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

SetBackendServersRequest::SetBackendServersRequest() :
	SlbRequest("SetBackendServers")
{}

SetBackendServersRequest::~SetBackendServersRequest()
{}

std::string SetBackendServersRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetBackendServersRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long SetBackendServersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetBackendServersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetBackendServersRequest::getLoadBalancerId()const
{
	return loadBalancerId_;
}

void SetBackendServersRequest::setLoadBalancerId(const std::string& loadBalancerId)
{
	loadBalancerId_ = loadBalancerId;
	setParameter("LoadBalancerId", loadBalancerId);
}

std::string SetBackendServersRequest::getRegionId()const
{
	return regionId_;
}

void SetBackendServersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SetBackendServersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetBackendServersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetBackendServersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetBackendServersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SetBackendServersRequest::getOwnerId()const
{
	return ownerId_;
}

void SetBackendServersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetBackendServersRequest::getBackendServers()const
{
	return backendServers_;
}

void SetBackendServersRequest::setBackendServers(const std::string& backendServers)
{
	backendServers_ = backendServers;
	setParameter("BackendServers", backendServers);
}

std::string SetBackendServersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void SetBackendServersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string SetBackendServersRequest::getTags()const
{
	return tags_;
}

void SetBackendServersRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

