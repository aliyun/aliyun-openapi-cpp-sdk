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

#include <alibabacloud/slb/model/SetVServerGroupAttributeRequest.h>

using AlibabaCloud::Slb::Model::SetVServerGroupAttributeRequest;

SetVServerGroupAttributeRequest::SetVServerGroupAttributeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "SetVServerGroupAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

SetVServerGroupAttributeRequest::~SetVServerGroupAttributeRequest()
{}

std::string SetVServerGroupAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void SetVServerGroupAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long SetVServerGroupAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void SetVServerGroupAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string SetVServerGroupAttributeRequest::getBackendServers()const
{
	return backendServers_;
}

void SetVServerGroupAttributeRequest::setBackendServers(const std::string& backendServers)
{
	backendServers_ = backendServers;
	setParameter("BackendServers", backendServers);
}

std::string SetVServerGroupAttributeRequest::getRegionId()const
{
	return regionId_;
}

void SetVServerGroupAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string SetVServerGroupAttributeRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void SetVServerGroupAttributeRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setParameter("VServerGroupId", vServerGroupId);
}

std::string SetVServerGroupAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void SetVServerGroupAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string SetVServerGroupAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void SetVServerGroupAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long SetVServerGroupAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void SetVServerGroupAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string SetVServerGroupAttributeRequest::getTags()const
{
	return tags_;
}

void SetVServerGroupAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string SetVServerGroupAttributeRequest::getVServerGroupName()const
{
	return vServerGroupName_;
}

void SetVServerGroupAttributeRequest::setVServerGroupName(const std::string& vServerGroupName)
{
	vServerGroupName_ = vServerGroupName;
	setParameter("VServerGroupName", vServerGroupName);
}

