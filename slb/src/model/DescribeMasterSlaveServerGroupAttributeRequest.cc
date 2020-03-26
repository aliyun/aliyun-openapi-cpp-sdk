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

#include <alibabacloud/slb/model/DescribeMasterSlaveServerGroupAttributeRequest.h>

using AlibabaCloud::Slb::Model::DescribeMasterSlaveServerGroupAttributeRequest;

DescribeMasterSlaveServerGroupAttributeRequest::DescribeMasterSlaveServerGroupAttributeRequest() :
	RpcServiceRequest("slb", "2014-05-15", "DescribeMasterSlaveServerGroupAttribute")
{
	setMethod(HttpRequest::Method::Post);
}

DescribeMasterSlaveServerGroupAttributeRequest::~DescribeMasterSlaveServerGroupAttributeRequest()
{}

std::string DescribeMasterSlaveServerGroupAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeMasterSlaveServerGroupAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DescribeMasterSlaveServerGroupAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMasterSlaveServerGroupAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeMasterSlaveServerGroupAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeMasterSlaveServerGroupAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeMasterSlaveServerGroupAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeMasterSlaveServerGroupAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeMasterSlaveServerGroupAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeMasterSlaveServerGroupAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeMasterSlaveServerGroupAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeMasterSlaveServerGroupAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeMasterSlaveServerGroupAttributeRequest::getTags()const
{
	return tags_;
}

void DescribeMasterSlaveServerGroupAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

std::string DescribeMasterSlaveServerGroupAttributeRequest::getMasterSlaveServerGroupId()const
{
	return masterSlaveServerGroupId_;
}

void DescribeMasterSlaveServerGroupAttributeRequest::setMasterSlaveServerGroupId(const std::string& masterSlaveServerGroupId)
{
	masterSlaveServerGroupId_ = masterSlaveServerGroupId;
	setParameter("MasterSlaveServerGroupId", masterSlaveServerGroupId);
}

