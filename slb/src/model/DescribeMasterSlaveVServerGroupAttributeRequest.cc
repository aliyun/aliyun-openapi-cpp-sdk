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

#include <alibabacloud/slb/model/DescribeMasterSlaveVServerGroupAttributeRequest.h>

using namespace AlibabaCloud::Slb;
using namespace AlibabaCloud::Slb::Model;

DescribeMasterSlaveVServerGroupAttributeRequest::DescribeMasterSlaveVServerGroupAttributeRequest() :
	SlbRequest("DescribeMasterSlaveVServerGroupAttribute")
{}

DescribeMasterSlaveVServerGroupAttributeRequest::~DescribeMasterSlaveVServerGroupAttributeRequest()
{}

std::string DescribeMasterSlaveVServerGroupAttributeRequest::getAccess_key_id()const
{
	return access_key_id_;
}

void DescribeMasterSlaveVServerGroupAttributeRequest::setAccess_key_id(const std::string& access_key_id)
{
	access_key_id_ = access_key_id;
	setParameter("Access_key_id", access_key_id);
}

long DescribeMasterSlaveVServerGroupAttributeRequest::getResourceOwnerId()const
{
	return resourceOwnerId_;
}

void DescribeMasterSlaveVServerGroupAttributeRequest::setResourceOwnerId(long resourceOwnerId)
{
	resourceOwnerId_ = resourceOwnerId;
	setParameter("ResourceOwnerId", std::to_string(resourceOwnerId));
}

std::string DescribeMasterSlaveVServerGroupAttributeRequest::getMasterSlaveVServerGroupId()const
{
	return masterSlaveVServerGroupId_;
}

void DescribeMasterSlaveVServerGroupAttributeRequest::setMasterSlaveVServerGroupId(const std::string& masterSlaveVServerGroupId)
{
	masterSlaveVServerGroupId_ = masterSlaveVServerGroupId;
	setParameter("MasterSlaveVServerGroupId", masterSlaveVServerGroupId);
}

std::string DescribeMasterSlaveVServerGroupAttributeRequest::getResourceOwnerAccount()const
{
	return resourceOwnerAccount_;
}

void DescribeMasterSlaveVServerGroupAttributeRequest::setResourceOwnerAccount(const std::string& resourceOwnerAccount)
{
	resourceOwnerAccount_ = resourceOwnerAccount;
	setParameter("ResourceOwnerAccount", resourceOwnerAccount);
}

std::string DescribeMasterSlaveVServerGroupAttributeRequest::getRegionId()const
{
	return regionId_;
}

void DescribeMasterSlaveVServerGroupAttributeRequest::setRegionId(const std::string& regionId)
{
	regionId_ = regionId;
	setParameter("RegionId", regionId);
}

std::string DescribeMasterSlaveVServerGroupAttributeRequest::getOwnerAccount()const
{
	return ownerAccount_;
}

void DescribeMasterSlaveVServerGroupAttributeRequest::setOwnerAccount(const std::string& ownerAccount)
{
	ownerAccount_ = ownerAccount;
	setParameter("OwnerAccount", ownerAccount);
}

long DescribeMasterSlaveVServerGroupAttributeRequest::getOwnerId()const
{
	return ownerId_;
}

void DescribeMasterSlaveVServerGroupAttributeRequest::setOwnerId(long ownerId)
{
	ownerId_ = ownerId;
	setParameter("OwnerId", std::to_string(ownerId));
}

std::string DescribeMasterSlaveVServerGroupAttributeRequest::getAccessKeyId()const
{
	return accessKeyId_;
}

void DescribeMasterSlaveVServerGroupAttributeRequest::setAccessKeyId(const std::string& accessKeyId)
{
	accessKeyId_ = accessKeyId;
	setParameter("AccessKeyId", accessKeyId);
}

std::string DescribeMasterSlaveVServerGroupAttributeRequest::getTags()const
{
	return tags_;
}

void DescribeMasterSlaveVServerGroupAttributeRequest::setTags(const std::string& tags)
{
	tags_ = tags;
	setParameter("Tags", tags);
}

