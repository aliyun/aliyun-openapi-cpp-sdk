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

#include <alibabacloud/slb/model/AddVServerGroupBackendServersRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

AddVServerGroupBackendServersRequest::AddVServerGroupBackendServersRequest() :
	SlbRequest("AddVServerGroupBackendServers")
{}

AddVServerGroupBackendServersRequest::~AddVServerGroupBackendServersRequest()
{}

std::string AddVServerGroupBackendServersRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void AddVServerGroupBackendServersRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

std::string AddVServerGroupBackendServersRequest::getVServerGroupId()const
{
	return vServerGroupId_;
}

void AddVServerGroupBackendServersRequest::setVServerGroupId(const std::string& vServerGroupId)
{
	vServerGroupId_ = vServerGroupId;
	setParameter("VServerGroupId", vServerGroupId);
}

long AddVServerGroupBackendServersRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void AddVServerGroupBackendServersRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string AddVServerGroupBackendServersRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void AddVServerGroupBackendServersRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string AddVServerGroupBackendServersRequest::getRegionId()const
{
	return regionId_;
}

void AddVServerGroupBackendServersRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string AddVServerGroupBackendServersRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void AddVServerGroupBackendServersRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long AddVServerGroupBackendServersRequest::getOwnerId()const
{
	return ownerId_;
}

void AddVServerGroupBackendServersRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string AddVServerGroupBackendServersRequest::getBackendServers()const
{
	return backendServers_;
}

void AddVServerGroupBackendServersRequest::setBackendServers(const std::string& backendServers)
{
	backendServers_ = backendServers;
	setParameter("BackendServers", backendServers);
}

std::string AddVServerGroupBackendServersRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void AddVServerGroupBackendServersRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string AddVServerGroupBackendServersRequest::getTags()const
{
	return tags_;
}

void AddVServerGroupBackendServersRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

